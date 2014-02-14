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
 * Pipeline_Builder.h
 *
 *  Created on: 03-Jan-2011
 *      
 */

#ifndef PIPELINE_BUILDER_H_
#define PIPELINE_BUILDER_H_

#include "TopicLearner/Model_Refiner.h"

//!An interface that all pipeline objects must implement
/**
 * A pipeline is a sequence of computation steps
 * that can be performed on some data passing through
 * it. Its similar to an assembly pipeline.
 */
class Pipeline {
public:
    virtual void init() = 0;
    virtual void add_reader() = 0;
    virtual void add_sampler() = 0;
    virtual void add_updater() = 0;
    virtual void add_etasampler() = 0;
    virtual void add_accumulator() = 0;
    virtual void add_gausssampler() = 0;
    virtual void add_optimizer() = 0;
    virtual void add_eval() = 0;
    virtual void add_writer() = 0;
    virtual void add_tester() = 0;
    virtual void clear() = 0;
    virtual void destroy() = 0;
    virtual void dump(int lag) = 0;
    virtual void run() = 0;
    virtual Model_Refiner& get_refiner() = 0;
    virtual double get_eval() = 0;
};

#endif /* PIPELINE_BUILDER_H_ */
