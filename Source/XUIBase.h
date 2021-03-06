/*
    XUIBase.h
    Copyright (c) 2012-2013, Ricci Adams.  All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following condition is met:
        * Redistributions of source code must retain the above copyright
          notice, this list of conditions and the following disclaimer.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
    DISCLAIMED. IN NO EVENT SHALL RICCI ADAMS BE LIABLE FOR ANY
    DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
    (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
    LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
    ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
    (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
    SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifdef __cplusplus
#define XUIKIT_EXTERN extern "C" __attribute__((visibility ("default")))
#else
#define XUIKIT_EXTERN extern __attribute__((visibility ("default")))
#endif

#define XUIKIT_STATIC_INLINE static inline

#import <Foundation/Foundation.h>

BOOL XUIAliasMethod(  Class cls, char plusOrMinus, SEL originalSel, SEL aliasSel);
BOOL XUISwizzleMethod(Class cls, char plusOrMinus, SEL originalSel, SEL replacementSel);



