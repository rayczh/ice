// **********************************************************************
//
// Copyright (c) 2003-2014 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

package test.Ice.retry;

class SystemFailure extends Ice.SystemException
{
    public String
    ice_name()
    {
        return "SystemFailure";
    }
};