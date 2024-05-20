// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/**
 * @file PublisherAttributes.hpp
 */

#ifndef _FASTDDS_PUBLISHERATTRIBUTES_H_
#define _FASTDDS_PUBLISHERATTRIBUTES_H_

#include <fastdds/rtps/resources/ResourceManagement.h>

#include <fastdds/dds/publisher/qos/WriterQos.hpp>
#include <fastdds/rtps/attributes/ExternalLocators.hpp>
#include <fastdds/rtps/attributes/PropertyPolicy.h>
#include <fastdds/rtps/attributes/TopicAttributes.h>
#include <fastdds/rtps/attributes/WriterAttributes.h>
#include <fastdds/rtps/common/Locator.h>
#include <fastdds/rtps/common/Time_t.h>
#include <fastdds/rtps/flowcontrol/ThroughputControllerDescriptor.h>

namespace eprosima {
namespace fastdds {

/**
 * Class PublisherAttributes, used by the user to define the attributes of a Publisher.
 * @ingroup FASTRTPS_ATTRIBUTES_MODULE
 */
class PublisherAttributes
{
public:

    PublisherAttributes() = default;

    virtual ~PublisherAttributes() = default;

    bool operator ==(
            const PublisherAttributes& b) const
    {
        return (this->m_userDefinedID == b.m_userDefinedID) &&
               (this->m_entityID == b.m_entityID) &&
               (this->topic == b.topic) &&
               (this->qos == b.qos) &&
               (this->times == b.times) &&
               (this->unicastLocatorList == b.unicastLocatorList) &&
               (this->multicastLocatorList == b.multicastLocatorList) &&
               (this->remoteLocatorList == b.remoteLocatorList) &&
               (this->historyMemoryPolicy == b.historyMemoryPolicy) &&
               (this->properties == b.properties);
    }

    //! Topic Attributes for the Publisher
    fastrtps::TopicAttributes topic;

    //! QOS for the Publisher
    dds::WriterQos qos;

    //! Writer Attributes
    fastrtps::rtps::WriterTimes times;

    //! Unicast locator list
    fastrtps::rtps::LocatorList_t unicastLocatorList;

    //! Multicast locator list
    fastrtps::rtps::LocatorList_t multicastLocatorList;

    //! Remote locator list
    fastrtps::rtps::LocatorList_t remoteLocatorList;

    //! The collection of external locators to use for communication.
    rtps::ExternalLocators external_unicast_locators;

    //! Whether locators that don't match with the announced locators should be kept.
    bool ignore_non_matching_locators = false;

    //! Throughput controller
    fastrtps::rtps::ThroughputControllerDescriptor throughputController;

    //! Underlying History memory policy
    fastrtps::rtps::MemoryManagementPolicy_t historyMemoryPolicy =
            fastrtps::rtps::MemoryManagementPolicy_t::PREALLOCATED_WITH_REALLOC_MEMORY_MODE;

    //! Properties
    fastrtps::rtps::PropertyPolicy properties;

    //! Allocation limits on the matched subscribers collections
    fastrtps::ResourceLimitedContainerConfig matched_subscriber_allocation;

    /**
     * Get the user defined ID
     * @return User defined ID
     */
    inline int16_t getUserDefinedID() const
    {
        return m_userDefinedID;
    }

    /**
     * Get the entity defined ID
     * @return Entity ID
     */
    inline int16_t getEntityID() const
    {
        return m_entityID;
    }

    /**
     * Set the user defined ID
     * @param id User defined ID to be set
     */
    inline void setUserDefinedID(
            uint8_t id)
    {
        m_userDefinedID = id;
    }

    /**
     * Set the entity ID
     * @param id Entity ID to be set
     */
    inline void setEntityID(
            uint8_t id)
    {
        m_entityID = id;
    }

private:

    //! User Defined ID, used for StaticEndpointDiscovery, default value -1.
    int16_t m_userDefinedID = -1;
    //! Entity ID, if the user want to specify the EntityID of the enpoint, default value -1.
    int16_t m_entityID = -1;
};

} // namespace fastdds
} // namespace eprosima

#endif /* _FASTDDS_PUBLISHERATTRIBUTES_H_ */
