#pragma once
// IWYU pragma private; include "VYaml/Parser/Utf8YamlTokenizer.hpp"
#include "System/Buffers/zzzz__SequenceReader_1_impl.hpp"
#include "VYaml/Parser/zzzz__ITokenContent_impl.hpp"
#include "VYaml/Parser/zzzz__Marker_impl.hpp"
#include "VYaml/Parser/zzzz__Token_impl.hpp"
#include "VYaml/Parser/zzzz__Utf8YamlTokenizer_def.hpp"
#include "System/Buffers/zzzz__ReadOnlySequence_1_def.hpp"
#include "VYaml/Internal/zzzz__ExpandBuffer_1_def.hpp"
#include "VYaml/Internal/zzzz__InsertionQueue_1_def.hpp"
#include "VYaml/Internal/zzzz__LineBreakState_def.hpp"
#include "VYaml/Parser/zzzz__Marker_def.hpp"
#include "VYaml/Parser/zzzz__Scalar_def.hpp"
#include "VYaml/Parser/zzzz__SimpleKeyState_def.hpp"
#include "VYaml/Parser/zzzz__TokenType_def.hpp"
#include "VYaml/Parser/zzzz__Token_def.hpp"
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.get_CurrentTokenType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Parser::TokenType (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::get_CurrentTokenType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb95c004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"get_CurrentTokenType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.get_CurrentMark
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Parser::Marker (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::get_CurrentMark)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb95c00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"get_CurrentMark", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)(::System::Buffers::ReadOnlySequence_1<uint8_t>)>(&::VYaml::Parser::Utf8YamlTokenizer::_ctor)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0xb95c01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {".ctor", {}, {::i2c::type_of<::System::Buffers::ReadOnlySequence_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::Read)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb95c2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"Read", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.TrySkipUnityStrippedSymbol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::TrySkipUnityStrippedSymbol)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb95c4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"TrySkipUnityStrippedSymbol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeMoreTokens
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeMoreTokens)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb95c408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeMoreTokens", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeNextToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeNextToken)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0xb95c718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeNextToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeStreamStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeStreamStart)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xb95cd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeStreamStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeStreamEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeStreamEnd)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xb95d238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeStreamEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeBom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeBom)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb9616ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeBom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeDirective
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeDirective)> {
  constexpr static std::size_t size = 0x63c;
  constexpr static std::size_t addrs = 0xb95d36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeDirective", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeDirectiveName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)(::VYaml::Parser::Scalar*)>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeDirectiveName)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xb9618a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeDirectiveName", {}, {::i2c::type_of<::VYaml::Parser::Scalar*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeVersionDirectiveValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeVersionDirectiveValue)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xb961af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeVersionDirectiveValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeVersionDirectiveNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeVersionDirectiveNumber)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xb962280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeVersionDirectiveNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeTagDirectiveValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeTagDirectiveValue)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0xb961d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeTagDirectiveValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeDocumentIndicator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)(::VYaml::Parser::TokenType)>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeDocumentIndicator)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb95dc0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeDocumentIndicator", {}, {::i2c::type_of<::VYaml::Parser::TokenType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeFlowCollectionStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)(::VYaml::Parser::TokenType)>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeFlowCollectionStart)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xb95dd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeFlowCollectionStart", {}, {::i2c::type_of<::VYaml::Parser::TokenType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeFlowCollectionEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)(::VYaml::Parser::TokenType)>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeFlowCollectionEnd)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb95de70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeFlowCollectionEnd", {}, {::i2c::type_of<::VYaml::Parser::TokenType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeFlowEntryStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeFlowEntryStart)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb95dfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeFlowEntryStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeBlockEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeBlockEntry)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xb95e0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeBlockEntry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeComplexKeyStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeComplexKeyStart)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xb95e2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeComplexKeyStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeValueStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeValueStart)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0xb95e470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeValueStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)(bool)>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeAnchor)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0xb95e75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeAnchor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeTag)> {
  constexpr static std::size_t size = 0x7a4;
  constexpr static std::size_t addrs = 0xb95eadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeTag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeTagHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)(bool, ::VYaml::Parser::Scalar*)>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeTagHandle)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0xb962450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeTagHandle", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::VYaml::Parser::Scalar*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeTagPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)(::VYaml::Parser::Scalar*)>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeTagPrefix)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xb962868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeTagPrefix", {}, {::i2c::type_of<::VYaml::Parser::Scalar*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.TryConsumeUriChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::Utf8YamlTokenizer::*)(::VYaml::Parser::Scalar*)>(&::VYaml::Parser::Utf8YamlTokenizer::TryConsumeUriChar)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xb962e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"TryConsumeUriChar", {}, {::i2c::type_of<::VYaml::Parser::Scalar*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.TryConsumeTagChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::Utf8YamlTokenizer::*)(::VYaml::Parser::Scalar*)>(&::VYaml::Parser::Utf8YamlTokenizer::TryConsumeTagChar)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xb9633c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"TryConsumeTagChar", {}, {::i2c::type_of<::VYaml::Parser::Scalar*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeUriEscapes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeUriEscapes)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0xb963068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeUriEscapes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeBlockScaler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)(bool)>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeBlockScaler)> {
  constexpr static std::size_t size = 0x9a8;
  constexpr static std::size_t addrs = 0xb95f280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeBlockScaler", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeBlockScalarBreaks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)(::by_ref<int32_t>, ::by_ref<::VYaml::Internal::ExpandBuffer_1<uint8_t>*>)>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeBlockScalarBreaks)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0xb96359c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeBlockScalarBreaks", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::VYaml::Internal::ExpandBuffer_1<uint8_t>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeFlowScaler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)(bool)>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeFlowScaler)> {
  constexpr static std::size_t size = 0x1128;
  constexpr static std::size_t addrs = 0xb95fc28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeFlowScaler", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumePlainScalar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumePlainScalar)> {
  constexpr static std::size_t size = 0x888;
  constexpr static std::size_t addrs = 0xb960d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumePlainScalar", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.SkipToNextToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::SkipToNextToken)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb95cf24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"SkipToNextToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.Advance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)(int32_t)>(&::VYaml::Parser::Utf8YamlTokenizer::Advance)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb963918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"Advance", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.ConsumeLineBreaks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Internal::LineBreakState (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::ConsumeLineBreaks)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb96219c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeLineBreaks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.StaleSimpleKeyCandidates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::StaleSimpleKeyCandidates)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb95c608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"StaleSimpleKeyCandidates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.SaveSimpleKeyCandidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::SaveSimpleKeyCandidate)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb962b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"SaveSimpleKeyCandidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.RemoveSimpleKeyCandidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::RemoveSimpleKeyCandidate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb9615d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"RemoveSimpleKeyCandidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.RollIndent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)(int32_t, ::by_ref<::VYaml::Parser::Token>, int32_t)>(&::VYaml::Parser::Utf8YamlTokenizer::RollIndent)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xb962c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"RollIndent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::VYaml::Parser::Token>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.UnrollIndent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)(int32_t)>(&::VYaml::Parser::Utf8YamlTokenizer::UnrollIndent)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xb95d070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"UnrollIndent", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.IncreaseFlowLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::IncreaseFlowLevel)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb963a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"IncreaseFlowLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.DecreaseFlowLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::Utf8YamlTokenizer::*)()>(&::VYaml::Parser::Utf8YamlTokenizer::DecreaseFlowLevel)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb963b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"DecreaseFlowLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.IsEmptyNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::Utf8YamlTokenizer::*)(int32_t)>(&::VYaml::Parser::Utf8YamlTokenizer::IsEmptyNext)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xb95d9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"IsEmptyNext", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::Utf8YamlTokenizer.TryPeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::Utf8YamlTokenizer::*)(int64_t, ::by_ref<uint8_t>)>(&::VYaml::Parser::Utf8YamlTokenizer::TryPeek)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xb963c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"TryPeek", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Parser::Utf8YamlTokenizer::setStaticF_tokensBufferStatic(::VYaml::Internal::InsertionQueue_1<::VYaml::Parser::Token>*  value)  {
::cordl_internals::setStaticField<::VYaml::Internal::InsertionQueue_1<::VYaml::Parser::Token>*, "tokensBufferStatic", ::VYaml::Parser::Utf8YamlTokenizer>(std::forward<::VYaml::Internal::InsertionQueue_1<::VYaml::Parser::Token>*>(value));
}
inline ::VYaml::Internal::InsertionQueue_1<::VYaml::Parser::Token>* VYaml::Parser::Utf8YamlTokenizer::getStaticF_tokensBufferStatic()  {
return ::cordl_internals::getStaticField<::VYaml::Internal::InsertionQueue_1<::VYaml::Parser::Token>*, "tokensBufferStatic", ::VYaml::Parser::Utf8YamlTokenizer>();
}
inline void VYaml::Parser::Utf8YamlTokenizer::setStaticF_simpleKeyBufferStatic(::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::SimpleKeyState>*  value)  {
::cordl_internals::setStaticField<::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::SimpleKeyState>*, "simpleKeyBufferStatic", ::VYaml::Parser::Utf8YamlTokenizer>(std::forward<::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::SimpleKeyState>*>(value));
}
inline ::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::SimpleKeyState>* VYaml::Parser::Utf8YamlTokenizer::getStaticF_simpleKeyBufferStatic()  {
return ::cordl_internals::getStaticField<::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::SimpleKeyState>*, "simpleKeyBufferStatic", ::VYaml::Parser::Utf8YamlTokenizer>();
}
inline void VYaml::Parser::Utf8YamlTokenizer::setStaticF_indentsBufferStatic(::VYaml::Internal::ExpandBuffer_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::VYaml::Internal::ExpandBuffer_1<int32_t>*, "indentsBufferStatic", ::VYaml::Parser::Utf8YamlTokenizer>(std::forward<::VYaml::Internal::ExpandBuffer_1<int32_t>*>(value));
}
inline ::VYaml::Internal::ExpandBuffer_1<int32_t>* VYaml::Parser::Utf8YamlTokenizer::getStaticF_indentsBufferStatic()  {
return ::cordl_internals::getStaticField<::VYaml::Internal::ExpandBuffer_1<int32_t>*, "indentsBufferStatic", ::VYaml::Parser::Utf8YamlTokenizer>();
}
inline void VYaml::Parser::Utf8YamlTokenizer::setStaticF_lineBreaksBufferStatic(::VYaml::Internal::ExpandBuffer_1<uint8_t>*  value)  {
::cordl_internals::setStaticField<::VYaml::Internal::ExpandBuffer_1<uint8_t>*, "lineBreaksBufferStatic", ::VYaml::Parser::Utf8YamlTokenizer>(std::forward<::VYaml::Internal::ExpandBuffer_1<uint8_t>*>(value));
}
inline ::VYaml::Internal::ExpandBuffer_1<uint8_t>* VYaml::Parser::Utf8YamlTokenizer::getStaticF_lineBreaksBufferStatic()  {
return ::cordl_internals::getStaticField<::VYaml::Internal::ExpandBuffer_1<uint8_t>*, "lineBreaksBufferStatic", ::VYaml::Parser::Utf8YamlTokenizer>();
}
inline ::VYaml::Parser::TokenType VYaml::Parser::Utf8YamlTokenizer::get_CurrentTokenType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"get_CurrentTokenType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Parser::TokenType>(*this, ___internal_method);
}
inline ::VYaml::Parser::Marker VYaml::Parser::Utf8YamlTokenizer::get_CurrentMark()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"get_CurrentMark", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Parser::Marker>(*this, ___internal_method);
}
inline void VYaml::Parser::Utf8YamlTokenizer::_ctor(::System::Buffers::ReadOnlySequence_1<uint8_t>  sequence)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {".ctor", {}, {::i2c::type_of<::System::Buffers::ReadOnlySequence_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sequence);
}
inline bool VYaml::Parser::Utf8YamlTokenizer::Read()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"Read", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::VYaml::Parser::ITokenContent*>)
inline T VYaml::Parser::Utf8YamlTokenizer::TakeCurrentTokenContent()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                    {"TakeCurrentTokenContent", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
inline bool VYaml::Parser::Utf8YamlTokenizer::TrySkipUnityStrippedSymbol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"TrySkipUnityStrippedSymbol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void VYaml::Parser::Utf8YamlTokenizer::ConsumeMoreTokens()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeMoreTokens", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::Utf8YamlTokenizer::ConsumeNextToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeNextToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::Utf8YamlTokenizer::ConsumeStreamStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeStreamStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::Utf8YamlTokenizer::ConsumeStreamEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeStreamEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::Utf8YamlTokenizer::ConsumeBom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeBom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::Utf8YamlTokenizer::ConsumeDirective()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeDirective", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::Utf8YamlTokenizer::ConsumeDirectiveName(::VYaml::Parser::Scalar*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeDirectiveName", {}, {::i2c::type_of<::VYaml::Parser::Scalar*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, result);
}
inline void VYaml::Parser::Utf8YamlTokenizer::ConsumeVersionDirectiveValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeVersionDirectiveValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline int32_t VYaml::Parser::Utf8YamlTokenizer::ConsumeVersionDirectiveNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeVersionDirectiveNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void VYaml::Parser::Utf8YamlTokenizer::ConsumeTagDirectiveValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeTagDirectiveValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::Utf8YamlTokenizer::ConsumeDocumentIndicator(::VYaml::Parser::TokenType  tokenType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeDocumentIndicator", {}, {::i2c::type_of<::VYaml::Parser::TokenType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tokenType);
}
inline void VYaml::Parser::Utf8YamlTokenizer::ConsumeFlowCollectionStart(::VYaml::Parser::TokenType  tokenType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeFlowCollectionStart", {}, {::i2c::type_of<::VYaml::Parser::TokenType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tokenType);
}
inline void VYaml::Parser::Utf8YamlTokenizer::ConsumeFlowCollectionEnd(::VYaml::Parser::TokenType  tokenType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeFlowCollectionEnd", {}, {::i2c::type_of<::VYaml::Parser::TokenType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tokenType);
}
inline void VYaml::Parser::Utf8YamlTokenizer::ConsumeFlowEntryStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeFlowEntryStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::Utf8YamlTokenizer::ConsumeBlockEntry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeBlockEntry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::Utf8YamlTokenizer::ConsumeComplexKeyStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeComplexKeyStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::Utf8YamlTokenizer::ConsumeValueStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeValueStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::Utf8YamlTokenizer::ConsumeAnchor(bool  alias)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeAnchor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, alias);
}
inline void VYaml::Parser::Utf8YamlTokenizer::ConsumeTag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeTag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::Utf8YamlTokenizer::ConsumeTagHandle(bool  directive, ::VYaml::Parser::Scalar*  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeTagHandle", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::VYaml::Parser::Scalar*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, directive, buf);
}
inline void VYaml::Parser::Utf8YamlTokenizer::ConsumeTagPrefix(::VYaml::Parser::Scalar*  prefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeTagPrefix", {}, {::i2c::type_of<::VYaml::Parser::Scalar*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, prefix);
}
inline bool VYaml::Parser::Utf8YamlTokenizer::TryConsumeUriChar(::VYaml::Parser::Scalar*  scalar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"TryConsumeUriChar", {}, {::i2c::type_of<::VYaml::Parser::Scalar*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, scalar);
}
inline bool VYaml::Parser::Utf8YamlTokenizer::TryConsumeTagChar(::VYaml::Parser::Scalar*  scalar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"TryConsumeTagChar", {}, {::i2c::type_of<::VYaml::Parser::Scalar*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, scalar);
}
inline int32_t VYaml::Parser::Utf8YamlTokenizer::ConsumeUriEscapes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeUriEscapes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void VYaml::Parser::Utf8YamlTokenizer::ConsumeBlockScaler(bool  literal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeBlockScaler", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, literal);
}
inline void VYaml::Parser::Utf8YamlTokenizer::ConsumeBlockScalarBreaks(::by_ref<int32_t>  blockIndent, ::by_ref<::VYaml::Internal::ExpandBuffer_1<uint8_t>*>  blockLineBreaks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeBlockScalarBreaks", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::VYaml::Internal::ExpandBuffer_1<uint8_t>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, blockIndent, blockLineBreaks);
}
inline void VYaml::Parser::Utf8YamlTokenizer::ConsumeFlowScaler(bool  singleQuote)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeFlowScaler", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, singleQuote);
}
inline void VYaml::Parser::Utf8YamlTokenizer::ConsumePlainScalar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumePlainScalar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::Utf8YamlTokenizer::SkipToNextToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"SkipToNextToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::Utf8YamlTokenizer::Advance(int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"Advance", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, offset);
}
inline ::VYaml::Internal::LineBreakState VYaml::Parser::Utf8YamlTokenizer::ConsumeLineBreaks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"ConsumeLineBreaks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Internal::LineBreakState>(*this, ___internal_method);
}
inline void VYaml::Parser::Utf8YamlTokenizer::StaleSimpleKeyCandidates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"StaleSimpleKeyCandidates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::Utf8YamlTokenizer::SaveSimpleKeyCandidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"SaveSimpleKeyCandidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::Utf8YamlTokenizer::RemoveSimpleKeyCandidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"RemoveSimpleKeyCandidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::Utf8YamlTokenizer::RollIndent(int32_t  colTo, /* [IsReadOnly] */ ::by_ref<::VYaml::Parser::Token>  nextToken, int32_t  insertNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"RollIndent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::VYaml::Parser::Token>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, colTo, nextToken, insertNumber);
}
inline void VYaml::Parser::Utf8YamlTokenizer::UnrollIndent(int32_t  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"UnrollIndent", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, col);
}
inline void VYaml::Parser::Utf8YamlTokenizer::IncreaseFlowLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"IncreaseFlowLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::Utf8YamlTokenizer::DecreaseFlowLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"DecreaseFlowLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool VYaml::Parser::Utf8YamlTokenizer::IsEmptyNext(int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"IsEmptyNext", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, offset);
}
inline bool VYaml::Parser::Utf8YamlTokenizer::TryPeek(int64_t  offset, ::by_ref<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::Utf8YamlTokenizer>(),
                        {"TryPeek", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, offset, value);
}
// Ctor Parameters [CppParam { name: "reader", ty: "::System::Buffers::SequenceReader_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mark", ty: "::VYaml::Parser::Marker", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "currentToken", ty: "::VYaml::Parser::Token", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "streamStartProduced", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "streamEndProduced", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "currentCode", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "indent", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "simpleKeyAllowed", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "adjacentValueAllowedAt", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "flowLevel", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tokensParsed", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tokenAvailable", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tokens", ty: "::VYaml::Internal::InsertionQueue_1<::VYaml::Parser::Token>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "simpleKeyCandidates", ty: "::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::SimpleKeyState>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "indents", ty: "::VYaml::Internal::ExpandBuffer_1<int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::VYaml::Parser::Utf8YamlTokenizer::Utf8YamlTokenizer(::System::Buffers::SequenceReader_1<uint8_t>  reader, ::VYaml::Parser::Marker  mark, ::VYaml::Parser::Token  currentToken, bool  streamStartProduced, bool  streamEndProduced, uint8_t  currentCode, int32_t  indent, bool  simpleKeyAllowed, int32_t  adjacentValueAllowedAt, int32_t  flowLevel, int32_t  tokensParsed, bool  tokenAvailable, ::VYaml::Internal::InsertionQueue_1<::VYaml::Parser::Token>*  tokens, ::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::SimpleKeyState>*  simpleKeyCandidates, ::VYaml::Internal::ExpandBuffer_1<int32_t>*  indents) noexcept  {
this->reader = reader;
this->mark = mark;
this->currentToken = currentToken;
this->streamStartProduced = streamStartProduced;
this->streamEndProduced = streamEndProduced;
this->currentCode = currentCode;
this->indent = indent;
this->simpleKeyAllowed = simpleKeyAllowed;
this->adjacentValueAllowedAt = adjacentValueAllowedAt;
this->flowLevel = flowLevel;
this->tokensParsed = tokensParsed;
this->tokenAvailable = tokenAvailable;
this->tokens = tokens;
this->simpleKeyCandidates = simpleKeyCandidates;
this->indents = indents;
}
// Ctor Parameters []
constexpr ::VYaml::Parser::Utf8YamlTokenizer::Utf8YamlTokenizer()   {
}
