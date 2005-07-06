// **********************************************************************
//
// Copyright (c) 2003-2005 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

#ifndef ICEE_OBJECT_ADAPTER_F_H
#define ICEE_OBJECT_ADAPTER_F_H

#include <IceE/Handle.h>

namespace Ice
{

class ObjectAdapter;
ICEE_API bool operator==(const ObjectAdapter&, const ObjectAdapter&);
ICEE_API bool operator!=(const ObjectAdapter&, const ObjectAdapter&);
ICEE_API bool operator<(const ObjectAdapter&, const ObjectAdapter&);

}

namespace IceInternal
{

ICEE_API void incRef(::Ice::ObjectAdapter*);
ICEE_API void decRef(::Ice::ObjectAdapter*);

}

namespace Ice
{

typedef ::IceInternal::Handle< ::Ice::ObjectAdapter> ObjectAdapterPtr;

}

#endif
