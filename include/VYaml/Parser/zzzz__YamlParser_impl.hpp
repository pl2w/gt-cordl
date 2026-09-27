#pragma once
// IWYU pragma private; include "VYaml/Parser/YamlParser.hpp"
#include "VYaml/Parser/zzzz__ParseEventType_impl.hpp"
#include "VYaml/Parser/zzzz__ParseState_impl.hpp"
#include "VYaml/Parser/zzzz__Utf8YamlTokenizer_impl.hpp"
#include "VYaml/Parser/zzzz__YamlParser_def.hpp"
#include "System/Buffers/zzzz__ReadOnlySequence_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "VYaml/Internal/zzzz__ExpandBuffer_1_def.hpp"
#include "VYaml/Parser/zzzz__Anchor_def.hpp"
#include "VYaml/Parser/zzzz__Marker_def.hpp"
#include "VYaml/Parser/zzzz__ParseEventType_def.hpp"
#include "VYaml/Parser/zzzz__ParseState_def.hpp"
#include "VYaml/Parser/zzzz__Scalar_def.hpp"
#include "VYaml/Parser/zzzz__Tag_def.hpp"
#include "VYaml/Parser/zzzz__TokenType_def.hpp"
#include "VYaml/Parser/zzzz__Utf8YamlTokenizer_def.hpp"
//  Writing Method size for method: ::VYaml::Parser::YamlParser.FromBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Parser::YamlParser (*)(::System::Memory_1<uint8_t>)>(&::VYaml::Parser::YamlParser::FromBytes)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb963f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"FromBytes", {}, {::i2c::type_of<::System::Memory_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.FromSequence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Parser::YamlParser (*)(::by_ref<::System::Buffers::ReadOnlySequence_1<uint8_t>>)>(&::VYaml::Parser::YamlParser::FromSequence)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb9641ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"FromSequence", {}, {::i2c::type_of<::by_ref<::System::Buffers::ReadOnlySequence_1<uint8_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.get_CurrentEventType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Parser::ParseEventType (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::get_CurrentEventType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb964230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"get_CurrentEventType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.set_CurrentEventType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)(::VYaml::Parser::ParseEventType)>(&::VYaml::Parser::YamlParser::set_CurrentEventType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb964238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"set_CurrentEventType", {}, {::i2c::type_of<::VYaml::Parser::ParseEventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.get_UnityStrippedMark
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::get_UnityStrippedMark)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb964240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"get_UnityStrippedMark", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.set_UnityStrippedMark
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)(bool)>(&::VYaml::Parser::YamlParser::set_UnityStrippedMark)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb964248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"set_UnityStrippedMark", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.get_CurrentMark
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Parser::Marker (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::get_CurrentMark)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb964250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"get_CurrentMark", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.get_End
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::get_End)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb9539d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"get_End", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.get_CurrentTokenType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Parser::TokenType (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::get_CurrentTokenType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb964260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"get_CurrentTokenType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)(::System::Buffers::ReadOnlySequence_1<uint8_t>)>(&::VYaml::Parser::YamlParser::_ctor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xb964038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {".ctor", {}, {::i2c::type_of<::System::Buffers::ReadOnlySequence_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)(::by_ref<::VYaml::Parser::Utf8YamlTokenizer>)>(&::VYaml::Parser::YamlParser::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb964268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::Utf8YamlTokenizer>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::Read)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xb94ea64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"Read", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ReadWithVerify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)(::VYaml::Parser::ParseEventType)>(&::VYaml::Parser::YamlParser::ReadWithVerify)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb96527c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ReadWithVerify", {}, {::i2c::type_of<::VYaml::Parser::ParseEventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.SkipAfter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)(::VYaml::Parser::ParseEventType)>(&::VYaml::Parser::YamlParser::SkipAfter)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb96532c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"SkipAfter", {}, {::i2c::type_of<::VYaml::Parser::ParseEventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.SkipCurrentNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::SkipCurrentNode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb96537c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"SkipCurrentNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ParseStreamStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::ParseStreamStart)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb964358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseStreamStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ParseDocumentStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)(bool)>(&::VYaml::Parser::YamlParser::ParseDocumentStart)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb9643a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseDocumentStart", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ParseExplicitDocumentStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::ParseExplicitDocumentStart)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb96546c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseExplicitDocumentStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ParseDocumentContent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::ParseDocumentContent)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb964468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseDocumentContent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ParseDocumentEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::ParseDocumentEnd)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb9644b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseDocumentEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ParseNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)(bool, bool)>(&::VYaml::Parser::YamlParser::ParseNode)> {
  constexpr static std::size_t size = 0x664;
  constexpr static std::size_t addrs = 0xb9644e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseNode", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ParseBlockMappingKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)(bool)>(&::VYaml::Parser::YamlParser::ParseBlockMappingKey)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb964b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseBlockMappingKey", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ParseBlockMappingValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::ParseBlockMappingValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb964c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseBlockMappingValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ParseBlockSequenceEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)(bool)>(&::VYaml::Parser::YamlParser::ParseBlockSequenceEntry)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb964cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseBlockSequenceEntry", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ParseFlowSequenceEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)(bool)>(&::VYaml::Parser::YamlParser::ParseFlowSequenceEntry)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb964e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseFlowSequenceEntry", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ParseFlowMappingKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)(bool)>(&::VYaml::Parser::YamlParser::ParseFlowMappingKey)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb964f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseFlowMappingKey", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ParseFlowMappingValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)(bool)>(&::VYaml::Parser::YamlParser::ParseFlowMappingValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb96508c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseFlowMappingValue", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ParseIndentlessSequenceEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::ParseIndentlessSequenceEntry)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb9650fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseIndentlessSequenceEntry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ParseFlowSequenceEntryMappingKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::ParseFlowSequenceEntryMappingKey)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb965194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseFlowSequenceEntryMappingKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ParseFlowSequenceEntryMappingValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::ParseFlowSequenceEntryMappingValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb965208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseFlowSequenceEntryMappingValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ParseFlowSequenceEntryMappingEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::ParseFlowSequenceEntryMappingEnd)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb965588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseFlowSequenceEntryMappingEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.PopState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::PopState)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb96559c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"PopState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.PushState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)(::VYaml::Parser::ParseState)>(&::VYaml::Parser::YamlParser::PushState)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb96565c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"PushState", {}, {::i2c::type_of<::VYaml::Parser::ParseState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.EmptyScalar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::EmptyScalar)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb96574c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"EmptyScalar", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ProcessDirectives
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::ProcessDirectives)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb9654e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ProcessDirectives", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.RegisterAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::VYaml::Parser::YamlParser::*)(::StringW)>(&::VYaml::Parser::YamlParser::RegisterAnchor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb965518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"RegisterAnchor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ThrowIfCurrentTokenUnless
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Parser::YamlParser::*)(::VYaml::Parser::TokenType)>(&::VYaml::Parser::YamlParser::ThrowIfCurrentTokenUnless)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb96575c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ThrowIfCurrentTokenUnless", {}, {::i2c::type_of<::VYaml::Parser::TokenType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.IsNullScalar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::IsNullScalar)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb96580c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"IsNullScalar", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.GetScalarAsString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::GetScalarAsString)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb965834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"GetScalarAsString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.GetScalarAsUtf8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<uint8_t> (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::GetScalarAsUtf8)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb96584c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"GetScalarAsUtf8", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.TryGetScalarAsSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)(::by_ref<::System::ReadOnlySpan_1<uint8_t>>)>(&::VYaml::Parser::YamlParser::TryGetScalarAsSpan)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb965994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryGetScalarAsSpan", {}, {::i2c::type_of<::by_ref<::System::ReadOnlySpan_1<uint8_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.GetScalarAsBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::GetScalarAsBool)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb965a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"GetScalarAsBool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.GetScalarAsInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::GetScalarAsInt32)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb965b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"GetScalarAsInt32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.GetScalarAsInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::GetScalarAsInt64)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb965c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"GetScalarAsInt64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.GetScalarAsUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::GetScalarAsUInt32)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb965cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"GetScalarAsUInt32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.GetScalarAsUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::GetScalarAsUInt64)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb965d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"GetScalarAsUInt64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.GetScalarAsFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::GetScalarAsFloat)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb965e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"GetScalarAsFloat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.GetScalarAsDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::GetScalarAsDouble)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb965f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"GetScalarAsDouble", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ReadScalarAsString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::ReadScalarAsString)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb965fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ReadScalarAsString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ReadScalarAsBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::ReadScalarAsBool)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb966038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ReadScalarAsBool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ReadScalarAsInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::ReadScalarAsInt32)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb966070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ReadScalarAsInt32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ReadScalarAsInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::ReadScalarAsInt64)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb9660a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ReadScalarAsInt64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ReadScalarAsUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::ReadScalarAsUInt32)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb9660e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ReadScalarAsUInt32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ReadScalarAsUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::ReadScalarAsUInt64)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb966118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ReadScalarAsUInt64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ReadScalarAsFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::ReadScalarAsFloat)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb966150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ReadScalarAsFloat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.ReadScalarAsDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::VYaml::Parser::YamlParser::*)()>(&::VYaml::Parser::YamlParser::ReadScalarAsDouble)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb966188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ReadScalarAsDouble", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.TryReadScalarAsString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)(::by_ref<::StringW>)>(&::VYaml::Parser::YamlParser::TryReadScalarAsString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb9661c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryReadScalarAsString", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.TryReadScalarAsBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)(::by_ref<bool>)>(&::VYaml::Parser::YamlParser::TryReadScalarAsBool)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb966240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryReadScalarAsBool", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.TryReadScalarAsInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)(::by_ref<int32_t>)>(&::VYaml::Parser::YamlParser::TryReadScalarAsInt32)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb966284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryReadScalarAsInt32", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.TryReadScalarAsInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)(::by_ref<int64_t>)>(&::VYaml::Parser::YamlParser::TryReadScalarAsInt64)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb9662c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryReadScalarAsInt64", {}, {::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.TryReadScalarAsUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)(::by_ref<uint32_t>)>(&::VYaml::Parser::YamlParser::TryReadScalarAsUInt32)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb96630c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryReadScalarAsUInt32", {}, {::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.TryReadScalarAsUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)(::by_ref<uint64_t>)>(&::VYaml::Parser::YamlParser::TryReadScalarAsUInt64)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb966350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryReadScalarAsUInt64", {}, {::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.TryReadScalarAsFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)(::by_ref<float_t>)>(&::VYaml::Parser::YamlParser::TryReadScalarAsFloat)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb966394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryReadScalarAsFloat", {}, {::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.TryReadScalarAsDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)(::by_ref<double_t>)>(&::VYaml::Parser::YamlParser::TryReadScalarAsDouble)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb9663d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryReadScalarAsDouble", {}, {::i2c::type_of<::by_ref<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.TryGetScalarAsString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)(::by_ref<::StringW>)>(&::VYaml::Parser::YamlParser::TryGetScalarAsString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb96641c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryGetScalarAsString", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.TryGetScalarAsBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)(::by_ref<bool>)>(&::VYaml::Parser::YamlParser::TryGetScalarAsBool)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb96647c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryGetScalarAsBool", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.TryGetScalarAsInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)(::by_ref<int32_t>)>(&::VYaml::Parser::YamlParser::TryGetScalarAsInt32)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb966490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryGetScalarAsInt32", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.TryGetScalarAsUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)(::by_ref<uint32_t>)>(&::VYaml::Parser::YamlParser::TryGetScalarAsUInt32)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb9664a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryGetScalarAsUInt32", {}, {::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.TryGetScalarAsInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)(::by_ref<int64_t>)>(&::VYaml::Parser::YamlParser::TryGetScalarAsInt64)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb9664b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryGetScalarAsInt64", {}, {::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.TryGetScalarAsUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)(::by_ref<uint64_t>)>(&::VYaml::Parser::YamlParser::TryGetScalarAsUInt64)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb9664cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryGetScalarAsUInt64", {}, {::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.TryGetScalarAsFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)(::by_ref<float_t>)>(&::VYaml::Parser::YamlParser::TryGetScalarAsFloat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb9664e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryGetScalarAsFloat", {}, {::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.TryGetScalarAsDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)(::by_ref<double_t>)>(&::VYaml::Parser::YamlParser::TryGetScalarAsDouble)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb9664f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryGetScalarAsDouble", {}, {::i2c::type_of<::by_ref<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.TryGetCurrentTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)(::by_ref<::VYaml::Parser::Tag*>)>(&::VYaml::Parser::YamlParser::TryGetCurrentTag)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb966508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryGetCurrentTag", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::Tag*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Parser::YamlParser.TryGetCurrentAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Parser::YamlParser::*)(::by_ref<::VYaml::Parser::Anchor*>)>(&::VYaml::Parser::YamlParser::TryGetCurrentAnchor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb966540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryGetCurrentAnchor", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::Anchor*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Parser::YamlParser::setStaticF_anchorsBufferStatic(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, "anchorsBufferStatic", ::VYaml::Parser::YamlParser>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* VYaml::Parser::YamlParser::getStaticF_anchorsBufferStatic()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, "anchorsBufferStatic", ::VYaml::Parser::YamlParser>();
}
inline void VYaml::Parser::YamlParser::setStaticF_stateStackBufferStatic(::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::ParseState>*  value)  {
::cordl_internals::setStaticField<::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::ParseState>*, "stateStackBufferStatic", ::VYaml::Parser::YamlParser>(std::forward<::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::ParseState>*>(value));
}
inline ::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::ParseState>* VYaml::Parser::YamlParser::getStaticF_stateStackBufferStatic()  {
return ::cordl_internals::getStaticField<::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::ParseState>*, "stateStackBufferStatic", ::VYaml::Parser::YamlParser>();
}
inline ::VYaml::Parser::YamlParser VYaml::Parser::YamlParser::FromBytes(::System::Memory_1<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"FromBytes", {}, {::i2c::type_of<::System::Memory_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Parser::YamlParser>(nullptr, ___internal_method, bytes);
}
inline ::VYaml::Parser::YamlParser VYaml::Parser::YamlParser::FromSequence(/* [IsReadOnly] */ ::by_ref<::System::Buffers::ReadOnlySequence_1<uint8_t>>  sequence)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"FromSequence", {}, {::i2c::type_of<::by_ref<::System::Buffers::ReadOnlySequence_1<uint8_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Parser::YamlParser>(nullptr, ___internal_method, sequence);
}
inline ::VYaml::Parser::ParseEventType VYaml::Parser::YamlParser::get_CurrentEventType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"get_CurrentEventType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Parser::ParseEventType>(*this, ___internal_method);
}
inline void VYaml::Parser::YamlParser::set_CurrentEventType(::VYaml::Parser::ParseEventType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"set_CurrentEventType", {}, {::i2c::type_of<::VYaml::Parser::ParseEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool VYaml::Parser::YamlParser::get_UnityStrippedMark()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"get_UnityStrippedMark", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void VYaml::Parser::YamlParser::set_UnityStrippedMark(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"set_UnityStrippedMark", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::VYaml::Parser::Marker VYaml::Parser::YamlParser::get_CurrentMark()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"get_CurrentMark", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Parser::Marker>(*this, ___internal_method);
}
inline bool VYaml::Parser::YamlParser::get_End()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"get_End", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::VYaml::Parser::TokenType VYaml::Parser::YamlParser::get_CurrentTokenType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"get_CurrentTokenType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Parser::TokenType>(*this, ___internal_method);
}
inline void VYaml::Parser::YamlParser::_ctor(::System::Buffers::ReadOnlySequence_1<uint8_t>  sequence)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {".ctor", {}, {::i2c::type_of<::System::Buffers::ReadOnlySequence_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sequence);
}
inline void VYaml::Parser::YamlParser::_ctor(::by_ref<::VYaml::Parser::Utf8YamlTokenizer>  tokenizer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::Utf8YamlTokenizer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tokenizer);
}
inline bool VYaml::Parser::YamlParser::Read()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"Read", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void VYaml::Parser::YamlParser::ReadWithVerify(::VYaml::Parser::ParseEventType  eventType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ReadWithVerify", {}, {::i2c::type_of<::VYaml::Parser::ParseEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventType);
}
inline void VYaml::Parser::YamlParser::SkipAfter(::VYaml::Parser::ParseEventType  eventType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"SkipAfter", {}, {::i2c::type_of<::VYaml::Parser::ParseEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventType);
}
inline void VYaml::Parser::YamlParser::SkipCurrentNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"SkipCurrentNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::YamlParser::ParseStreamStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseStreamStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::YamlParser::ParseDocumentStart(bool  implicitStarted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseDocumentStart", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, implicitStarted);
}
inline void VYaml::Parser::YamlParser::ParseExplicitDocumentStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseExplicitDocumentStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::YamlParser::ParseDocumentContent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseDocumentContent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::YamlParser::ParseDocumentEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseDocumentEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::YamlParser::ParseNode(bool  block, bool  indentlessSequence)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseNode", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, block, indentlessSequence);
}
inline void VYaml::Parser::YamlParser::ParseBlockMappingKey(bool  first)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseBlockMappingKey", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, first);
}
inline void VYaml::Parser::YamlParser::ParseBlockMappingValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseBlockMappingValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::YamlParser::ParseBlockSequenceEntry(bool  first)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseBlockSequenceEntry", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, first);
}
inline void VYaml::Parser::YamlParser::ParseFlowSequenceEntry(bool  first)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseFlowSequenceEntry", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, first);
}
inline void VYaml::Parser::YamlParser::ParseFlowMappingKey(bool  first)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseFlowMappingKey", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, first);
}
inline void VYaml::Parser::YamlParser::ParseFlowMappingValue(bool  empty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseFlowMappingValue", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, empty);
}
inline void VYaml::Parser::YamlParser::ParseIndentlessSequenceEntry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseIndentlessSequenceEntry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::YamlParser::ParseFlowSequenceEntryMappingKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseFlowSequenceEntryMappingKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::YamlParser::ParseFlowSequenceEntryMappingValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseFlowSequenceEntryMappingValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::YamlParser::ParseFlowSequenceEntryMappingEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ParseFlowSequenceEntryMappingEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::YamlParser::PopState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"PopState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::YamlParser::PushState(::VYaml::Parser::ParseState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"PushState", {}, {::i2c::type_of<::VYaml::Parser::ParseState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, state);
}
inline void VYaml::Parser::YamlParser::EmptyScalar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"EmptyScalar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Parser::YamlParser::ProcessDirectives()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ProcessDirectives", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline int32_t VYaml::Parser::YamlParser::RegisterAnchor(::StringW  anchorName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"RegisterAnchor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, anchorName);
}
inline void VYaml::Parser::YamlParser::ThrowIfCurrentTokenUnless(::VYaml::Parser::TokenType  expectedTokenType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ThrowIfCurrentTokenUnless", {}, {::i2c::type_of<::VYaml::Parser::TokenType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, expectedTokenType);
}
inline bool VYaml::Parser::YamlParser::IsNullScalar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"IsNullScalar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW VYaml::Parser::YamlParser::GetScalarAsString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"GetScalarAsString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::ReadOnlySpan_1<uint8_t> VYaml::Parser::YamlParser::GetScalarAsUtf8()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"GetScalarAsUtf8", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<uint8_t>>(*this, ___internal_method);
}
inline bool VYaml::Parser::YamlParser::TryGetScalarAsSpan(::by_ref<::System::ReadOnlySpan_1<uint8_t>>  span)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryGetScalarAsSpan", {}, {::i2c::type_of<::by_ref<::System::ReadOnlySpan_1<uint8_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, span);
}
inline bool VYaml::Parser::YamlParser::GetScalarAsBool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"GetScalarAsBool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t VYaml::Parser::YamlParser::GetScalarAsInt32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"GetScalarAsInt32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int64_t VYaml::Parser::YamlParser::GetScalarAsInt64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"GetScalarAsInt64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline uint32_t VYaml::Parser::YamlParser::GetScalarAsUInt32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"GetScalarAsUInt32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint64_t VYaml::Parser::YamlParser::GetScalarAsUInt64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"GetScalarAsUInt64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline float_t VYaml::Parser::YamlParser::GetScalarAsFloat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"GetScalarAsFloat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline double_t VYaml::Parser::YamlParser::GetScalarAsDouble()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"GetScalarAsDouble", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline ::StringW VYaml::Parser::YamlParser::ReadScalarAsString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ReadScalarAsString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool VYaml::Parser::YamlParser::ReadScalarAsBool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ReadScalarAsBool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t VYaml::Parser::YamlParser::ReadScalarAsInt32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ReadScalarAsInt32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int64_t VYaml::Parser::YamlParser::ReadScalarAsInt64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ReadScalarAsInt64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline uint32_t VYaml::Parser::YamlParser::ReadScalarAsUInt32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ReadScalarAsUInt32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint64_t VYaml::Parser::YamlParser::ReadScalarAsUInt64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ReadScalarAsUInt64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline float_t VYaml::Parser::YamlParser::ReadScalarAsFloat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ReadScalarAsFloat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline double_t VYaml::Parser::YamlParser::ReadScalarAsDouble()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"ReadScalarAsDouble", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline bool VYaml::Parser::YamlParser::TryReadScalarAsString(::by_ref<::StringW>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryReadScalarAsString", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline bool VYaml::Parser::YamlParser::TryReadScalarAsBool(::by_ref<bool>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryReadScalarAsBool", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline bool VYaml::Parser::YamlParser::TryReadScalarAsInt32(::by_ref<int32_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryReadScalarAsInt32", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline bool VYaml::Parser::YamlParser::TryReadScalarAsInt64(::by_ref<int64_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryReadScalarAsInt64", {}, {::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline bool VYaml::Parser::YamlParser::TryReadScalarAsUInt32(::by_ref<uint32_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryReadScalarAsUInt32", {}, {::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline bool VYaml::Parser::YamlParser::TryReadScalarAsUInt64(::by_ref<uint64_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryReadScalarAsUInt64", {}, {::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline bool VYaml::Parser::YamlParser::TryReadScalarAsFloat(::by_ref<float_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryReadScalarAsFloat", {}, {::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline bool VYaml::Parser::YamlParser::TryReadScalarAsDouble(::by_ref<double_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryReadScalarAsDouble", {}, {::i2c::type_of<::by_ref<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline bool VYaml::Parser::YamlParser::TryGetScalarAsString(::by_ref<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryGetScalarAsString", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool VYaml::Parser::YamlParser::TryGetScalarAsBool(::by_ref<bool>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryGetScalarAsBool", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool VYaml::Parser::YamlParser::TryGetScalarAsInt32(::by_ref<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryGetScalarAsInt32", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool VYaml::Parser::YamlParser::TryGetScalarAsUInt32(::by_ref<uint32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryGetScalarAsUInt32", {}, {::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool VYaml::Parser::YamlParser::TryGetScalarAsInt64(::by_ref<int64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryGetScalarAsInt64", {}, {::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool VYaml::Parser::YamlParser::TryGetScalarAsUInt64(::by_ref<uint64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryGetScalarAsUInt64", {}, {::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool VYaml::Parser::YamlParser::TryGetScalarAsFloat(::by_ref<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryGetScalarAsFloat", {}, {::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool VYaml::Parser::YamlParser::TryGetScalarAsDouble(::by_ref<double_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryGetScalarAsDouble", {}, {::i2c::type_of<::by_ref<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool VYaml::Parser::YamlParser::TryGetCurrentTag(::by_ref<::VYaml::Parser::Tag*>  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryGetCurrentTag", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::Tag*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, tag);
}
inline bool VYaml::Parser::YamlParser::TryGetCurrentAnchor(::by_ref<::VYaml::Parser::Anchor*>  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Parser::YamlParser>(),
                        {"TryGetCurrentAnchor", {}, {::i2c::type_of<::by_ref<::VYaml::Parser::Anchor*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, anchor);
}
// Ctor Parameters [CppParam { name: "_CurrentEventType_k__BackingField", ty: "::VYaml::Parser::ParseEventType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_UnityStrippedMark_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tokenizer", ty: "::VYaml::Parser::Utf8YamlTokenizer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "currentState", ty: "::VYaml::Parser::ParseState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "currentScalar", ty: "::VYaml::Parser::Scalar*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "currentTag", ty: "::VYaml::Parser::Tag*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "currentAnchor", ty: "::VYaml::Parser::Anchor*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastAnchorId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "anchors", ty: "::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stateStack", ty: "::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::ParseState>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::VYaml::Parser::YamlParser::YamlParser(::VYaml::Parser::ParseEventType  _CurrentEventType_k__BackingField, bool  _UnityStrippedMark_k__BackingField, ::VYaml::Parser::Utf8YamlTokenizer  tokenizer, ::VYaml::Parser::ParseState  currentState, ::VYaml::Parser::Scalar*  currentScalar, ::VYaml::Parser::Tag*  currentTag, ::VYaml::Parser::Anchor*  currentAnchor, int32_t  lastAnchorId, ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  anchors, ::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::ParseState>*  stateStack) noexcept  {
this->_CurrentEventType_k__BackingField = _CurrentEventType_k__BackingField;
this->_UnityStrippedMark_k__BackingField = _UnityStrippedMark_k__BackingField;
this->tokenizer = tokenizer;
this->currentState = currentState;
this->currentScalar = currentScalar;
this->currentTag = currentTag;
this->currentAnchor = currentAnchor;
this->lastAnchorId = lastAnchorId;
this->anchors = anchors;
this->stateStack = stateStack;
}
// Ctor Parameters []
constexpr ::VYaml::Parser::YamlParser::YamlParser()   {
}
