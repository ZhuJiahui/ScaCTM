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
 * eff_small_map.h
 *
 *  Created on: 15-Jul-2010
 *      
 */

#ifndef EFF_SMALL_MAP_H_
#define EFF_SMALL_MAP_H_

#include "TopicCounts.h"

class simple_map {
private:
    topicCounts** buckets;
    int _N;

public:
    simple_map(int N = 0x7F);
    virtual ~simple_map();

    inline int hash(topic_t key) {
        return key & _N;
    }

    cnt_t get(topic_t key);
    void put(topic_t key, cnt_t val);

    std::string print();

    void clear();
};

#endif /* EFF_SMALL_MAP_H_ */
