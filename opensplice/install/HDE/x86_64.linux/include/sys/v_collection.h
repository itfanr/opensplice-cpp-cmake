/*
 *                         OpenSplice DDS
 *
 *   This software and documentation are Copyright 2006 to  PrismTech
 *   Limited, its affiliated companies and licensors. All rights reserved.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 */
#ifndef V_COLLECTION_H
#define V_COLLECTION_H

/** \file kernel/include/v_collection.h
 *  \brief This file defines the interface of the collection class.
 *
 * This class implements a collection of queries.
 *
 * Note RP: it seems having only a destructor this class is either
 * superfuous or some fuctionality is missing and probably implemeted
 * elsewhere.
 *
 */

#if defined (__cplusplus)
extern "C" {
#endif

#include "v_kernel.h"
#include "os_if.h"

#ifdef OSPL_BUILD_CORE
#define OS_API OS_API_EXPORT
#else
#define OS_API OS_API_IMPORT
#endif
/* !!!!!!!!NOTE From here no more includes are allowed!!!!!!! */

/**
 * \brief The <code>v_collection</code> cast method.
 *
 * This method casts an object to a <code>v_collection</code> object.
 * Before the cast is performed, if compiled with the NDEBUG flag not set,
 * the type of the object is checked to be <code>v_collection</code> or
 * one of its subclasses.
 */
#define v_collection(c) (C_CAST(c,v_collection))

OS_API void
v_collectionFree (
    v_collection _this);

#undef OS_API

#if defined (__cplusplus)
}
#endif

#endif /* V_COLLECTION_H */
