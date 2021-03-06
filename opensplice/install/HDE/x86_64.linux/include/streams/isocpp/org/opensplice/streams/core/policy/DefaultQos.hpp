#ifndef ORG_OPENSPLICE_STREAMS_CORE_POLICY_DEFAULTQOS_HPP_
#define ORG_OPENSPLICE_STREAMS_CORE_POLICY_DEFAULTQOS_HPP_
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

/**
 * @file
 */

#include <dds/topic/qos/TopicQos.hpp>
#include <dds/sub/qos/DataReaderQos.hpp>
#include <dds/pub/qos/DataWriterQos.hpp>
#include <dds/core/policy/CorePolicy.hpp>

namespace org
{
namespace opensplice
{
namespace streams
{
namespace core
{
namespace policy
{

OSPL_ISOCPP_IMPL_API dds::topic::qos::TopicQos default_topic_qos();

OSPL_ISOCPP_IMPL_API dds::sub::qos::DataReaderQos default_datareader_qos();

OSPL_ISOCPP_IMPL_API dds::pub::qos::DataWriterQos default_datawriter_qos();

}
}
}
}
}

#endif /* ORG_OPENSPLICE_STREAMS_CORE_POLICY_DEFAULTQOS_HPP_ */
