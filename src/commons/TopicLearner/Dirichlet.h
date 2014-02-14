/*******************************************************************************
    Copyright (c) 2011 Yahoo! Inc. All rights reserved.

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License. See accompanying LICENSE file.

    The Initial Developer of the Original Code is Shravan Narayanamurthy.
******************************************************************************/
/*
 * Dirichlet.h
 * The log_gamma digamma functions declarations
 *  Created on: 13 May, 2009
 *      
 */

#ifndef DIRICHLET_H_
#define DIRICHLET_H_

#include "constants.h"

using namespace boost;

double log_gamma(double z);
double digamma(double z);

#endif /* DIRICHLET_H_ */
