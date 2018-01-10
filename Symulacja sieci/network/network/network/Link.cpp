#include "stdafx.h"
#include "Link.h"


Link::Link(const Sender& S, const Receiver& R)
{
    nodeID=S.getID();
    destID=R.getID();
    srcType=S.getSenderType();
    destType=R.getReceiverType();
}


