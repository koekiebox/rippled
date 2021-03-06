//------------------------------------------------------------------------------
/*
    This file is part of rippled: https://github.com/ripple/rippled
    Copyright (c) 2012, 2013 Ripple Labs Inc.

    Permission to use, copy, modify, and/or distribute this software for any
    purpose  with  or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.

    THE  SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH  REGARD  TO  THIS  SOFTWARE  INCLUDING  ALL  IMPLIED  WARRANTIES  OF
    MERCHANTABILITY  AND  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY  SPECIAL ,  DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER  RESULTING  FROM  LOSS  OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION  OF  CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/
//==============================================================================

#ifndef RIPPLE_OVERLAY_TUNING_H_INCLUDED
#define RIPPLE_OVERLAY_TUNING_H_INCLUDED

namespace ripple {

namespace Tuning
{

enum
{
    /** Size of buffer used to read from the socket. */
    readBufferBytes     = 4096,

    /** How long a server can remain insane before we
        disconnected it (if outbound) */
    maxInsaneTime       =   60,

    /** How long a server can remain unknown before we
        disconnect it (if outbound) */
    maxUnknownTime      =  300,

    /** How many ledgers off a server can be and we will
        still consider it sane */
    saneLedgerLimit     =   24,

    /** How many ledgers off a server has to be before we
        consider it insane */
    insaneLedgerLimit   =  128,

    /** How often we check connections (seconds) */
    checkSeconds        =   10,
};

} // Tuning

} // ripple

#endif
