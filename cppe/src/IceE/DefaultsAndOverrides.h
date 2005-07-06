// **********************************************************************
//
// Copyright (c) 2003-2005 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

#ifndef ICEE_DEFAULTS_AND_OVERRIDES_H
#define ICEE_DEFAULTS_AND_OVERRIDES_H

#include <IceE/DefaultsAndOverridesF.h>
#include <IceE/PropertiesF.h>
#include <IceE/Shared.h>

namespace IceInternal
{

class DefaultsAndOverrides : public ::Ice::Shared
{
public:

    DefaultsAndOverrides(const ::Ice::PropertiesPtr&);

    std::string defaultHost;
#ifndef ICEE_NO_ROUTER
    std::string defaultRouter;
#endif
#ifndef ICEE_NO_LOCATOR
    std::string defaultLocator;
#endif

    bool overrideTimeout;
    Ice::Int overrideTimeoutValue;
    bool overrideConnectTimeout;
    Ice::Int overrideConnectTimeoutValue;
};

}

#endif
