#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "System/Buffers/Text/FormattingHelpers.hpp"
#include "System/Buffers/Text/FormattingHelpers_HexCasing.hpp"
#include "System/Buffers/Text/Number.hpp"
#include "System/Buffers/Text/NumberBuffer.hpp"
#include "System/Buffers/Text/ParserHelpers.hpp"
#include "System/Buffers/Text/Utf8Constants.hpp"
#include "System/Buffers/Text/Utf8Formatter.hpp"
#include "System/Buffers/Text/Utf8Formatter_DecomposedGuid.hpp"
#include "System/Buffers/Text/Utf8Parser.hpp"
#include "System/Buffers/Text/Utf8Parser_ComponentParseResult.hpp"
#include "System/Buffers/Text/Utf8Parser_ParseNumberOptions.hpp"
#include "System/Buffers/Text/Utf8Parser_TimeSpanSplitter.hpp"
#ifdef __cpp_modules
                    export module Text;
                    #endif
                
