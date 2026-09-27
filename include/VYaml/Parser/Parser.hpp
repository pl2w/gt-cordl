#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "VYaml/Parser/Anchor.hpp"
#include "VYaml/Parser/ITokenContent.hpp"
#include "VYaml/Parser/Marker.hpp"
#include "VYaml/Parser/ParseEventType.hpp"
#include "VYaml/Parser/ParseState.hpp"
#include "VYaml/Parser/Scalar.hpp"
#include "VYaml/Parser/ScalarPool.hpp"
#include "VYaml/Parser/SimpleKeyState.hpp"
#include "VYaml/Parser/Tag.hpp"
#include "VYaml/Parser/Token.hpp"
#include "VYaml/Parser/TokenType.hpp"
#include "VYaml/Parser/Utf8YamlTokenizer.hpp"
#include "VYaml/Parser/VersionDirective.hpp"
#include "VYaml/Parser/YamlParser.hpp"
#include "VYaml/Parser/YamlParserException.hpp"
#include "VYaml/Parser/YamlTokenizerException.hpp"
#ifdef __cpp_modules
                    export module Parser;
                    #endif
                
