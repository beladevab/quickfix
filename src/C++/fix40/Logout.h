#ifndef FIX40_LOGOUT_H
#define FIX40_LOGOUT_H

#include "Message.h"

namespace FIX40
{

  class Logout : public Message
  {
  public:
    Logout() : Message(MsgType()) {}
    Logout(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("5"); }

    FIELD_SET(*this, FIX::Text);
  };

}

#endif