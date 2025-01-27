#################################################################################
#   Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.          #
#                                                                               #
#   Licensed under the Apache License, Version 2.0 (the "License").             #
#   You may not use this file except in compliance with the License.            #
#   You may obtain a copy of the License at                                     #
#                                                                               #
#       http://www.apache.org/licenses/LICENSE-2.0                              #
#                                                                               #
#   Unless required by applicable law or agreed to in writing, software         #
#   distributed under the License is distributed on an "AS IS" BASIS,           #
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.    #
#   See the License for the specific language governing permissions and         #
#   limitations under the License.                                              #
#################################################################################

'''This module houses the constants for the reset package'''
from enum import Enum


class RaceType(Enum):
    '''Enum containing the keys for race type
    '''
    TIME_TRIAL = "TIME_TRIAL"
    OBJECT_AVOIDANCE = "OBJECT_AVOIDANCE"
    HEAD_TO_BOT = "HEAD_TO_BOT"
    HEAD_TO_MODEL = "HEAD_TO_MODEL"
    F1 = "F1"


class AgentPhase(Enum):
    '''Enum containing the keys for agent phase
    '''
    PAUSE = "pause"
    MANUAL_PAUSE = "manual_pause"
    RUN = "run"
    PARK = "park"
    PREPARE = "prepare"


class AgentCtrlStatus(Enum):
    '''Enum containing the keys for agent control status
    '''
    POS_DICT = "pos_dict"
    STEPS = "steps"
    CURRENT_PROGRESS = "current_progress"
    PREV_PROGRESS = "prev_progress"
    PREV_PNT_DIST = "prev_pnt_dist"
    AGENT_PHASE = "agent_phase"
    START_NDIST = "start_ndist"
    X = "x"
    Y = "y"

    @classmethod
    def validate_dict(cls, input_dict):
        '''Will raise an exception if input dict does not contain all the keys in the enum'''
        for key in cls:
            _ = input_dict[key.value]


class RaceCtrlStatus(Enum):
    '''Enum containing the keys for race control status
    '''
    RACE_CURR_TIME = "race_curr_time"
    RACE_START_TIME = "race_start_time"
    
    @classmethod
    def validate_dict(cls, input_dict):
        '''Will raise an exception if input dict does not contain all the keys in the enum'''
        for key in cls:
            _ = input_dict[key.value]


class AgentInfo(Enum):
    '''Enum containing the keys for the agent info status
    '''
    LAP_COUNT = "lap_count"
    CURRENT_PROGRESS = "current_progress"
    CRASHED_OBJECT_NAME = "crashed_object_name"
    START_NDIST = "start_ndist"

    @classmethod
    def validate_dict(cls, input_dict):
        '''Will raise an exception if input dict does not contain all the keys in the enum'''
        for key in cls:
            _ = input_dict[key.value]


ZERO_SPEED_AGENT_PHASES = [AgentPhase.PAUSE.value, AgentPhase.MANUAL_PAUSE.value,
                           AgentPhase.PARK.value, AgentPhase.PREPARE.value]
