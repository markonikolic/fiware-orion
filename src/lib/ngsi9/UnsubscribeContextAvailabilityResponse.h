#ifndef UNSUBSCRIBE_CONTEXT_AVAILABILITY_RESPONSE_H
#define UNSUBSCRIBE_CONTEXT_AVAILABILITY_RESPONSE_H

/*
*
* Copyright 2013 Telefonica Investigacion y Desarrollo, S.A.U
*
* This file is part of Orion Context Broker.
*
* Orion Context Broker is free software: you can redistribute it and/or
* modify it under the terms of the GNU Affero General Public License as
* published by the Free Software Foundation, either version 3 of the
* License, or (at your option) any later version.
*
* Orion Context Broker is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Affero
* General Public License for more details.
*
* You should have received a copy of the GNU Affero General Public License
* along with Orion Context Broker. If not, see http://www.gnu.org/licenses/.
*
* For those usages not covered by this license please contact with
* fermin at tid dot es
*
* Author: Ken Zangelin
*/
#include <string>

#include "ngsi/SubscriptionId.h"
#include "ngsi/StatusCode.h"
#include "common/Format.h"



/* ****************************************************************************
*
* UnsubscribeContextAvailabilityResponse - 
*/
typedef struct UnsubscribeContextAvailabilityResponse
{
  SubscriptionId subscriptionId;    // Mandatory
  StatusCode     statusCode;        // Mandatory

  UnsubscribeContextAvailabilityResponse();
  UnsubscribeContextAvailabilityResponse(ErrorCode& errorCode);
  UnsubscribeContextAvailabilityResponse(SubscriptionId _subscriptionId);
  ~UnsubscribeContextAvailabilityResponse();

  std::string render(RequestType requestType, Format format, std::string indent);
} UnsubscribeContextAvailabilityResponse;

#endif