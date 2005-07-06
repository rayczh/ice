// **********************************************************************
//
// Copyright (c) 2003-2005 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

#ifndef ICEE_PROPERTIES_F_H
#define ICEE_PROPERTIES_F_H

#include <IceE/Handle.h>

namespace Ice
{

class Properties;

}

namespace IceInternal
{

ICEE_API void incRef(::Ice::Properties*);
ICEE_API void decRef(::Ice::Properties*);

}

namespace Ice
{

typedef ::IceInternal::Handle< ::Ice::Properties> PropertiesPtr;

}


#endif
