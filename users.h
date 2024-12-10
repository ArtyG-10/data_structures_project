#ifndef USERS_H
#define USERS_H

#include <string>
#include <unordered_map>
#include "md5.h"

using std::string;

class Users {
    struct User{
        string username;
        string password_hash;
        string firstname, lastname;
        User(string username_, string password_) {
            username = username_;
            set_password_hash(password_);
        };
        inline
        void set_password_hash(string password_) {
            password_hash = md5(password_);
        };
        inline
        string get_password_hash() {
            return password_hash;
        }
    };
    std::unordered_map<string, string> users_hashtable;

public:

    bool check_username_unique(string username) {
        if (users_hashtable.count(username) > 0) return false;
        else return true;
    }

    void add_user(string username, string password) {
        if (check_username_unique(username)) {
            users_hashtable.insert({username, md5(password)});
        }
    }

    void get_all_users(){
        std::cout << "all_users\n";
        for (auto& it: users_hashtable) {
            std::cout << it.first;
        }
    }
    //std::unordered_map<std::string,string>::const_iterator
     bool check_credentials(string username_, string password_){
        auto got = users_hashtable.find(username_);
        if(got != users_hashtable.end()){
            if(got->second == md5(password_))return true;
            else return false;
        } else return false;
    }
};

#endif // USERS_H
