// **********************************************************************
//
// Copyright (c) 2003-2005 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

#ifndef ICEE_LOCAL_OBJECT_F_H
#define ICEE_LOCAL_OBJECT_F_H

#include <IceE/Handle.h>

namespace Ice
{

class LocalObject;

}

namespace IceInternal
{

ICEE_API void incRef(::Ice::LocalObject*);
ICEE_API void decRef(::Ice::LocalObject*);

}

namespace Ice
{

typedef IceInternal::Handle< LocalObject > LocalObjectPtr;

}

#endif
