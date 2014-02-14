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
 * Unigram_Model_Builder.h
 *
 *  Created on: 06-Jan-2011
 *      
 */

#ifndef UNIGRAMMODELTRAININGBUILDER_H_
#define UNIGRAMMODELTRAININGBUILDER_H_

#include "TopicLearner/Model_Builder.h"
#include "Unigram_Model.h"
#include "WordIndexDictionary.h"
#include "TopicLearner/Checkpointer.h"

class Unigram_Model_Training_Builder: public Model_Builder {
public:
    Unigram_Model_Training_Builder();
    virtual ~Unigram_Model_Training_Builder();
    virtual Model_Refiner& create_model_refiner();
    virtual Pipeline& create_pipeline(Model_Refiner&);
    virtual Execution_Strategy& create_execution_strategy(Pipeline&);

    void create_output();
    Model& get_model();

protected:
    void init_dict();
    WordIndexDictionary& get_dict();
    void initialize_topics(string, string, int);

protected:
    Unigram_Model* _model;
    WordIndexDictionary* _dict;
    Model_Refiner* _refiner;
    Pipeline* _pipeline;
    Checkpointer* _checkpointer;
    Execution_Strategy* _strategy;
};

#endif /* UNIGRAMMODELTRAININGBUILDER_H_ */
