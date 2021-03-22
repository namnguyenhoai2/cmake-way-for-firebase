//
// Created by zgezt on 3/22/21.
//

#ifndef PROJ_ANDROID_FIREBASEMESSAGINGLISTENER_H
#define PROJ_ANDROID_FIREBASEMESSAGINGLISTENER_H

#include <firebase/app.h>
#include <firebase/analytics.h>
#include <firebase/messaging.h>

class FirebaseMessagingListener : public firebase::messaging::Listener {
public:
    void OnMessage(const firebase::messaging::Message& message);
    void OnTokenReceived(const char* token);
};


#endif //PROJ_ANDROID_FIREBASEMESSAGINGLISTENER_H
