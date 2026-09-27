#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "K4os/Compression/LZ4/Engine/Algorithm.hpp"
#include "K4os/Compression/LZ4/Engine/LL.hpp"
#include "K4os/Compression/LZ4/Engine/LL32.hpp"
#include "K4os/Compression/LZ4/Engine/LL64.hpp"
#include "K4os/Compression/LZ4/Engine/LL_HCfavor_e.hpp"
#include "K4os/Compression/LZ4/Engine/LL_LZ4HC_match_t.hpp"
#include "K4os/Compression/LZ4/Engine/LL_LZ4HC_optimal_t.hpp"
#include "K4os/Compression/LZ4/Engine/LL_LZ4_streamHC_t.hpp"
#include "K4os/Compression/LZ4/Engine/LL_LZ4_streamHC_t__chainTable_e__FixedBuffer.hpp"
#include "K4os/Compression/LZ4/Engine/LL_LZ4_streamHC_t__hashTable_e__FixedBuffer.hpp"
#include "K4os/Compression/LZ4/Engine/LL_LZ4_stream_t.hpp"
#include "K4os/Compression/LZ4/Engine/LL_LZ4_stream_t__hashTable_e__FixedBuffer.hpp"
#include "K4os/Compression/LZ4/Engine/LL_cParams_t.hpp"
#include "K4os/Compression/LZ4/Engine/LL_dictCtx_directive.hpp"
#include "K4os/Compression/LZ4/Engine/LL_dictIssue_directive.hpp"
#include "K4os/Compression/LZ4/Engine/LL_dict_directive.hpp"
#include "K4os/Compression/LZ4/Engine/LL_earlyEnd_directive.hpp"
#include "K4os/Compression/LZ4/Engine/LL_endCondition_directive.hpp"
#include "K4os/Compression/LZ4/Engine/LL_limitedOutput_directive.hpp"
#include "K4os/Compression/LZ4/Engine/LL_lz4hc_strat_e.hpp"
#include "K4os/Compression/LZ4/Engine/LL_repeat_state_e.hpp"
#include "K4os/Compression/LZ4/Engine/LL_tableType_t.hpp"
#include "K4os/Compression/LZ4/Engine/LL_variable_length_error.hpp"
#include "K4os/Compression/LZ4/Engine/LLxx.hpp"
#ifdef __cpp_modules
                    export module Engine;
                    #endif
                
