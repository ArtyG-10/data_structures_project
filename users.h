#ifndef USERS_H
#define USERS_H

#include <string>
#include <iostream>
#include <unordered_map>
#include <stack>
#include "md5.h"

class Users {
    struct User{
        std::string username;
        std::string password_hash;
        std::string firstname, lastname;
        std::stack<std::string> messages;
        User(std::string username_, std::string password_) {
            username = username_;
            set_password_hash(password_);
        };
        inline
        void set_password_hash(std::string password_) {
            password_hash = md5(password_);
        };
        inline
        std::string get_password_hash() {
            return password_hash;
        }
        inline void new_message(std::string str){
            messages.push(str);
        }
        std::string read_message(){
            if(!messages.empty()){
                std::string str = messages.top();
                messages.pop();
                return str;
            }
            else return "No Messages";
        }
    };

public:
    std::unordered_map<std::string, User> users_hashtable;


    bool check_username_unique(std::string username) {
        if (users_hashtable.count(username) > 0) return false;
        else return true;
    }

    bool add_user(std::string username, std::string password) {
        if (check_username_unique(username)) {
            User user(username,password);
            users_hashtable.insert({username, user});
            return true;
        } else{
            return false;
        }
    }

    void show_all_users(){
        std::cout << "all_users:\n";
        for (auto& it: users_hashtable) {
            std::cout << it.first << std::endl;
        }
    }
     bool check_credentials(std::string username_, std::string password_){
        auto got = users_hashtable.find(username_);
        if(got != users_hashtable.end()){
            if(got->second.get_password_hash() == md5(password_))return true;
            else return false;
        } else return false;
    }
     void send_message(std::string username1, std::string username2, std::string message){
         auto user1 = users_hashtable.find(username1);
         if(user1 != users_hashtable.end()){
             auto user2 = users_hashtable.find(username2);
             if(user2 != users_hashtable.end()){
                 std::string str = username1;
                 str.append(" says: ");
                 str.append(message);
                 user2->second.new_message(str);
             }
         }
     }
};

#endif // USERS_H
