#pragma once
// IWYU pragma private; include "VYaml/Emitter/Utf8YamlEmitter.hpp"
#include "VYaml/Emitter/zzzz__Utf8YamlEmitter_def.hpp"
#include "System/Buffers/zzzz__IBufferWriter_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "VYaml/Emitter/zzzz__EmitState_def.hpp"
#include "VYaml/Emitter/zzzz__MappingStyle_def.hpp"
#include "VYaml/Emitter/zzzz__ScalarStyle_def.hpp"
#include "VYaml/Emitter/zzzz__SequenceStyle_def.hpp"
#include "VYaml/Emitter/zzzz__YamlEmitOptions_def.hpp"
#include "VYaml/Internal/zzzz__ExpandBuffer_1_def.hpp"
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.get_CurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Emitter::EmitState (::VYaml::Emitter::Utf8YamlEmitter::*)()>(&::VYaml::Emitter::Utf8YamlEmitter::get_CurrentState)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb96c798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"get_CurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.get_PreviousState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Emitter::EmitState (::VYaml::Emitter::Utf8YamlEmitter::*)()>(&::VYaml::Emitter::Utf8YamlEmitter::get_PreviousState)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb96c810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"get_PreviousState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.get_IsFirstElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Emitter::Utf8YamlEmitter::*)()>(&::VYaml::Emitter::Utf8YamlEmitter::get_IsFirstElement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb96c888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"get_IsFirstElement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(::System::Buffers::IBufferWriter_1<uint8_t>*, ::VYaml::Emitter::YamlEmitOptions*)>(&::VYaml::Emitter::Utf8YamlEmitter::_ctor)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0xb96c898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {".ctor", {}, {::i2c::type_of<::System::Buffers::IBufferWriter_1<uint8_t>*>(), ::i2c::type_of<::VYaml::Emitter::YamlEmitOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.GetWriter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Buffers::IBufferWriter_1<uint8_t>* (::VYaml::Emitter::Utf8YamlEmitter::*)()>(&::VYaml::Emitter::Utf8YamlEmitter::GetWriter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb96cc0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"GetWriter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.BeginSequence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(::VYaml::Emitter::SequenceStyle)>(&::VYaml::Emitter::Utf8YamlEmitter::BeginSequence)> {
  constexpr static std::size_t size = 0x73c;
  constexpr static std::size_t addrs = 0xb96cc14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"BeginSequence", {}, {::i2c::type_of<::VYaml::Emitter::SequenceStyle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.EndSequence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)()>(&::VYaml::Emitter::Utf8YamlEmitter::EndSequence)> {
  constexpr static std::size_t size = 0x688;
  constexpr static std::size_t addrs = 0xb96d5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"EndSequence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.BeginMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(::VYaml::Emitter::MappingStyle)>(&::VYaml::Emitter::Utf8YamlEmitter::BeginMapping)> {
  constexpr static std::size_t size = 0x798;
  constexpr static std::size_t addrs = 0xb96dc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"BeginMapping", {}, {::i2c::type_of<::VYaml::Emitter::MappingStyle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.EndMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)()>(&::VYaml::Emitter::Utf8YamlEmitter::EndMapping)> {
  constexpr static std::size_t size = 0x7d4;
  constexpr static std::size_t addrs = 0xb96e408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"EndMapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.WriteRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(::System::ReadOnlySpan_1<uint8_t>, bool, bool)>(&::VYaml::Emitter::Utf8YamlEmitter::WriteRaw)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xb96ebdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteRaw", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.WriteRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::ReadOnlySpan_1<uint8_t>, bool, bool)>(&::VYaml::Emitter::Utf8YamlEmitter::WriteRaw)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0xb96ee4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteRaw", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.Tag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(::StringW)>(&::VYaml::Emitter::Utf8YamlEmitter::Tag)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb96f114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"Tag", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.WriteScalar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::VYaml::Emitter::Utf8YamlEmitter::WriteScalar)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0xb96f208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteScalar", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.WriteNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)()>(&::VYaml::Emitter::Utf8YamlEmitter::WriteNull)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb96f480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteNull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.WriteBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(bool)>(&::VYaml::Emitter::Utf8YamlEmitter::WriteBool)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb96f53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteBool", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.WriteInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(int32_t)>(&::VYaml::Emitter::Utf8YamlEmitter::WriteInt32)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0xb96f61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteInt32", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.WriteUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(uint32_t)>(&::VYaml::Emitter::Utf8YamlEmitter::WriteUInt32)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0xb96f91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteUInt32", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.WriteInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(int64_t)>(&::VYaml::Emitter::Utf8YamlEmitter::WriteInt64)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0xb96fc1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteInt64", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.WriteUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(uint64_t)>(&::VYaml::Emitter::Utf8YamlEmitter::WriteUInt64)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0xb96ff1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteUInt64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.WriteFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(float_t)>(&::VYaml::Emitter::Utf8YamlEmitter::WriteFloat)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0xb97021c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteFloat", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.WriteDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(double_t)>(&::VYaml::Emitter::Utf8YamlEmitter::WriteDouble)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0xb970524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteDouble", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.WriteString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(::StringW, ::VYaml::Emitter::ScalarStyle)>(&::VYaml::Emitter::Utf8YamlEmitter::WriteString)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xb97082c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::VYaml::Emitter::ScalarStyle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.WritePlainScalar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(::StringW)>(&::VYaml::Emitter::Utf8YamlEmitter::WritePlainScalar)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0xb970a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WritePlainScalar", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.WriteLiteralScalar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(::StringW)>(&::VYaml::Emitter::Utf8YamlEmitter::WriteLiteralScalar)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0xb9711a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteLiteralScalar", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.WriteQuotedScalar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(::StringW, bool)>(&::VYaml::Emitter::Utf8YamlEmitter::WriteQuotedScalar)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0xb970d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteQuotedScalar", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.WriteRaw1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(uint8_t)>(&::VYaml::Emitter::Utf8YamlEmitter::WriteRaw1)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb9716d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteRaw1", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.WriteBlockSequenceEntryHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)()>(&::VYaml::Emitter::Utf8YamlEmitter::WriteBlockSequenceEntryHeader)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xb9717f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteBlockSequenceEntryHeader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.WriteBlockSequenceEntryHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::VYaml::Emitter::Utf8YamlEmitter::WriteBlockSequenceEntryHeader)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0xb971984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteBlockSequenceEntryHeader", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.WriteIndent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(::System::Span_1<uint8_t>, ::by_ref<int32_t>, int32_t)>(&::VYaml::Emitter::Utf8YamlEmitter::WriteIndent)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xb971bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteIndent", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.CalculateMaxScalarBufferLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::VYaml::Emitter::Utf8YamlEmitter::*)(int32_t)>(&::VYaml::Emitter::Utf8YamlEmitter::CalculateMaxScalarBufferLength)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb971e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"CalculateMaxScalarBufferLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.BeginScalar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::VYaml::Emitter::Utf8YamlEmitter::BeginScalar)> {
  constexpr static std::size_t size = 0x6cc;
  constexpr static std::size_t addrs = 0xb971ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"BeginScalar", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.EndScalar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::VYaml::Emitter::Utf8YamlEmitter::EndScalar)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0xb97256c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"EndScalar", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.ReplaceCurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(::VYaml::Emitter::EmitState)>(&::VYaml::Emitter::Utf8YamlEmitter::ReplaceCurrentState)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb972a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"ReplaceCurrentState", {}, {::i2c::type_of<::VYaml::Emitter::EmitState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.PushState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)(::VYaml::Emitter::EmitState)>(&::VYaml::Emitter::Utf8YamlEmitter::PushState)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xb972ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"PushState", {}, {::i2c::type_of<::VYaml::Emitter::EmitState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.PopState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)()>(&::VYaml::Emitter::Utf8YamlEmitter::PopState)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb972c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"PopState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.IncreaseIndent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)()>(&::VYaml::Emitter::Utf8YamlEmitter::IncreaseIndent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb972d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"IncreaseIndent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.DecreaseIndent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Emitter::Utf8YamlEmitter::*)()>(&::VYaml::Emitter::Utf8YamlEmitter::DecreaseIndent)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb972d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"DecreaseIndent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.TryWriteTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VYaml::Emitter::Utf8YamlEmitter::*)(::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::VYaml::Emitter::Utf8YamlEmitter::TryWriteTag)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xb96d434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"TryWriteTag", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Emitter::Utf8YamlEmitter.GetTagLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::VYaml::Emitter::Utf8YamlEmitter::*)()>(&::VYaml::Emitter::Utf8YamlEmitter::GetTagLength)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb96d350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"GetTagLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Emitter::Utf8YamlEmitter::setStaticF_whiteSpaces(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "whiteSpaces", ::VYaml::Emitter::Utf8YamlEmitter>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> VYaml::Emitter::Utf8YamlEmitter::getStaticF_whiteSpaces()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "whiteSpaces", ::VYaml::Emitter::Utf8YamlEmitter>();
}
inline void VYaml::Emitter::Utf8YamlEmitter::setStaticF_BlockSequenceEntryHeader(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "BlockSequenceEntryHeader", ::VYaml::Emitter::Utf8YamlEmitter>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> VYaml::Emitter::Utf8YamlEmitter::getStaticF_BlockSequenceEntryHeader()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "BlockSequenceEntryHeader", ::VYaml::Emitter::Utf8YamlEmitter>();
}
inline void VYaml::Emitter::Utf8YamlEmitter::setStaticF_FlowSequenceEmpty(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "FlowSequenceEmpty", ::VYaml::Emitter::Utf8YamlEmitter>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> VYaml::Emitter::Utf8YamlEmitter::getStaticF_FlowSequenceEmpty()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "FlowSequenceEmpty", ::VYaml::Emitter::Utf8YamlEmitter>();
}
inline void VYaml::Emitter::Utf8YamlEmitter::setStaticF_FlowSequenceSeparator(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "FlowSequenceSeparator", ::VYaml::Emitter::Utf8YamlEmitter>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> VYaml::Emitter::Utf8YamlEmitter::getStaticF_FlowSequenceSeparator()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "FlowSequenceSeparator", ::VYaml::Emitter::Utf8YamlEmitter>();
}
inline void VYaml::Emitter::Utf8YamlEmitter::setStaticF_MappingKeyFooter(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "MappingKeyFooter", ::VYaml::Emitter::Utf8YamlEmitter>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> VYaml::Emitter::Utf8YamlEmitter::getStaticF_MappingKeyFooter()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "MappingKeyFooter", ::VYaml::Emitter::Utf8YamlEmitter>();
}
inline void VYaml::Emitter::Utf8YamlEmitter::setStaticF_FlowMappingHeader(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "FlowMappingHeader", ::VYaml::Emitter::Utf8YamlEmitter>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> VYaml::Emitter::Utf8YamlEmitter::getStaticF_FlowMappingHeader()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "FlowMappingHeader", ::VYaml::Emitter::Utf8YamlEmitter>();
}
inline void VYaml::Emitter::Utf8YamlEmitter::setStaticF_FlowMappingFooter(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "FlowMappingFooter", ::VYaml::Emitter::Utf8YamlEmitter>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> VYaml::Emitter::Utf8YamlEmitter::getStaticF_FlowMappingFooter()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "FlowMappingFooter", ::VYaml::Emitter::Utf8YamlEmitter>();
}
inline void VYaml::Emitter::Utf8YamlEmitter::setStaticF_FlowMappingEmpty(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "FlowMappingEmpty", ::VYaml::Emitter::Utf8YamlEmitter>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> VYaml::Emitter::Utf8YamlEmitter::getStaticF_FlowMappingEmpty()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "FlowMappingEmpty", ::VYaml::Emitter::Utf8YamlEmitter>();
}
inline void VYaml::Emitter::Utf8YamlEmitter::setStaticF_stringBufferStatic(::VYaml::Internal::ExpandBuffer_1<char16_t>*  value)  {
::cordl_internals::setStaticField<::VYaml::Internal::ExpandBuffer_1<char16_t>*, "stringBufferStatic", ::VYaml::Emitter::Utf8YamlEmitter>(std::forward<::VYaml::Internal::ExpandBuffer_1<char16_t>*>(value));
}
inline ::VYaml::Internal::ExpandBuffer_1<char16_t>* VYaml::Emitter::Utf8YamlEmitter::getStaticF_stringBufferStatic()  {
return ::cordl_internals::getStaticField<::VYaml::Internal::ExpandBuffer_1<char16_t>*, "stringBufferStatic", ::VYaml::Emitter::Utf8YamlEmitter>();
}
inline void VYaml::Emitter::Utf8YamlEmitter::setStaticF_stateBufferStatic(::VYaml::Internal::ExpandBuffer_1<::VYaml::Emitter::EmitState>*  value)  {
::cordl_internals::setStaticField<::VYaml::Internal::ExpandBuffer_1<::VYaml::Emitter::EmitState>*, "stateBufferStatic", ::VYaml::Emitter::Utf8YamlEmitter>(std::forward<::VYaml::Internal::ExpandBuffer_1<::VYaml::Emitter::EmitState>*>(value));
}
inline ::VYaml::Internal::ExpandBuffer_1<::VYaml::Emitter::EmitState>* VYaml::Emitter::Utf8YamlEmitter::getStaticF_stateBufferStatic()  {
return ::cordl_internals::getStaticField<::VYaml::Internal::ExpandBuffer_1<::VYaml::Emitter::EmitState>*, "stateBufferStatic", ::VYaml::Emitter::Utf8YamlEmitter>();
}
inline void VYaml::Emitter::Utf8YamlEmitter::setStaticF_elementCountBufferSTatic(::VYaml::Internal::ExpandBuffer_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::VYaml::Internal::ExpandBuffer_1<int32_t>*, "elementCountBufferSTatic", ::VYaml::Emitter::Utf8YamlEmitter>(std::forward<::VYaml::Internal::ExpandBuffer_1<int32_t>*>(value));
}
inline ::VYaml::Internal::ExpandBuffer_1<int32_t>* VYaml::Emitter::Utf8YamlEmitter::getStaticF_elementCountBufferSTatic()  {
return ::cordl_internals::getStaticField<::VYaml::Internal::ExpandBuffer_1<int32_t>*, "elementCountBufferSTatic", ::VYaml::Emitter::Utf8YamlEmitter>();
}
inline void VYaml::Emitter::Utf8YamlEmitter::setStaticF_tagBufferStatic(::VYaml::Internal::ExpandBuffer_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::VYaml::Internal::ExpandBuffer_1<::StringW>*, "tagBufferStatic", ::VYaml::Emitter::Utf8YamlEmitter>(std::forward<::VYaml::Internal::ExpandBuffer_1<::StringW>*>(value));
}
inline ::VYaml::Internal::ExpandBuffer_1<::StringW>* VYaml::Emitter::Utf8YamlEmitter::getStaticF_tagBufferStatic()  {
return ::cordl_internals::getStaticField<::VYaml::Internal::ExpandBuffer_1<::StringW>*, "tagBufferStatic", ::VYaml::Emitter::Utf8YamlEmitter>();
}
inline ::VYaml::Emitter::EmitState VYaml::Emitter::Utf8YamlEmitter::get_CurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"get_CurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Emitter::EmitState>(*this, ___internal_method);
}
inline ::VYaml::Emitter::EmitState VYaml::Emitter::Utf8YamlEmitter::get_PreviousState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"get_PreviousState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Emitter::EmitState>(*this, ___internal_method);
}
inline bool VYaml::Emitter::Utf8YamlEmitter::get_IsFirstElement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"get_IsFirstElement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void VYaml::Emitter::Utf8YamlEmitter::_ctor(::System::Buffers::IBufferWriter_1<uint8_t>*  writer, /* [Nullable(2)] */ ::VYaml::Emitter::YamlEmitOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {".ctor", {}, {::i2c::type_of<::System::Buffers::IBufferWriter_1<uint8_t>*>(), ::i2c::type_of<::VYaml::Emitter::YamlEmitOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer, options);
}
inline ::System::Buffers::IBufferWriter_1<uint8_t>* VYaml::Emitter::Utf8YamlEmitter::GetWriter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"GetWriter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::IBufferWriter_1<uint8_t>*>(*this, ___internal_method);
}
inline void VYaml::Emitter::Utf8YamlEmitter::BeginSequence(::VYaml::Emitter::SequenceStyle  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"BeginSequence", {}, {::i2c::type_of<::VYaml::Emitter::SequenceStyle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, style);
}
inline void VYaml::Emitter::Utf8YamlEmitter::EndSequence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"EndSequence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Emitter::Utf8YamlEmitter::BeginMapping(::VYaml::Emitter::MappingStyle  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"BeginMapping", {}, {::i2c::type_of<::VYaml::Emitter::MappingStyle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, style);
}
inline void VYaml::Emitter::Utf8YamlEmitter::EndMapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"EndMapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Emitter::Utf8YamlEmitter::WriteRaw(::System::ReadOnlySpan_1<uint8_t>  value, bool  indent, bool  lineBreak)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteRaw", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, indent, lineBreak);
}
inline void VYaml::Emitter::Utf8YamlEmitter::WriteRaw(::System::ReadOnlySpan_1<uint8_t>  value1, ::System::ReadOnlySpan_1<uint8_t>  value2, bool  indent, bool  lineBreak)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteRaw", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value1, value2, indent, lineBreak);
}
inline void VYaml::Emitter::Utf8YamlEmitter::Tag(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"Tag", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void VYaml::Emitter::Utf8YamlEmitter::WriteScalar(::System::ReadOnlySpan_1<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteScalar", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void VYaml::Emitter::Utf8YamlEmitter::WriteNull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteNull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Emitter::Utf8YamlEmitter::WriteBool(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteBool", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void VYaml::Emitter::Utf8YamlEmitter::WriteInt32(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteInt32", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void VYaml::Emitter::Utf8YamlEmitter::WriteUInt32(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteUInt32", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void VYaml::Emitter::Utf8YamlEmitter::WriteInt64(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteInt64", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void VYaml::Emitter::Utf8YamlEmitter::WriteUInt64(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteUInt64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void VYaml::Emitter::Utf8YamlEmitter::WriteFloat(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteFloat", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void VYaml::Emitter::Utf8YamlEmitter::WriteDouble(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteDouble", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void VYaml::Emitter::Utf8YamlEmitter::WriteString(::StringW  value, ::VYaml::Emitter::ScalarStyle  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::VYaml::Emitter::ScalarStyle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, style);
}
inline void VYaml::Emitter::Utf8YamlEmitter::WritePlainScalar(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WritePlainScalar", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void VYaml::Emitter::Utf8YamlEmitter::WriteLiteralScalar(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteLiteralScalar", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void VYaml::Emitter::Utf8YamlEmitter::WriteQuotedScalar(::StringW  value, bool  doubleQuote)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteQuotedScalar", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, doubleQuote);
}
inline void VYaml::Emitter::Utf8YamlEmitter::WriteRaw1(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteRaw1", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void VYaml::Emitter::Utf8YamlEmitter::WriteBlockSequenceEntryHeader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteBlockSequenceEntryHeader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Emitter::Utf8YamlEmitter::WriteBlockSequenceEntryHeader(::System::Span_1<uint8_t>  output, ::by_ref<int32_t>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteBlockSequenceEntryHeader", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, output, offset);
}
inline void VYaml::Emitter::Utf8YamlEmitter::WriteIndent(::System::Span_1<uint8_t>  output, ::by_ref<int32_t>  offset, int32_t  forceWidth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"WriteIndent", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, output, offset, forceWidth);
}
inline int32_t VYaml::Emitter::Utf8YamlEmitter::CalculateMaxScalarBufferLength(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"CalculateMaxScalarBufferLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, length);
}
inline void VYaml::Emitter::Utf8YamlEmitter::BeginScalar(::System::Span_1<uint8_t>  output, ::by_ref<int32_t>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"BeginScalar", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, output, offset);
}
inline void VYaml::Emitter::Utf8YamlEmitter::EndScalar(::System::Span_1<uint8_t>  output, ::by_ref<int32_t>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"EndScalar", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, output, offset);
}
inline void VYaml::Emitter::Utf8YamlEmitter::ReplaceCurrentState(::VYaml::Emitter::EmitState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"ReplaceCurrentState", {}, {::i2c::type_of<::VYaml::Emitter::EmitState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newState);
}
inline void VYaml::Emitter::Utf8YamlEmitter::PushState(::VYaml::Emitter::EmitState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"PushState", {}, {::i2c::type_of<::VYaml::Emitter::EmitState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, state);
}
inline void VYaml::Emitter::Utf8YamlEmitter::PopState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"PopState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Emitter::Utf8YamlEmitter::IncreaseIndent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"IncreaseIndent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void VYaml::Emitter::Utf8YamlEmitter::DecreaseIndent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"DecreaseIndent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool VYaml::Emitter::Utf8YamlEmitter::TryWriteTag(::System::Span_1<uint8_t>  output, ::by_ref<int32_t>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"TryWriteTag", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, output, offset);
}
inline int32_t VYaml::Emitter::Utf8YamlEmitter::GetTagLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Emitter::Utf8YamlEmitter>(),
                        {"GetTagLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "writer", ty: "::System::Buffers::IBufferWriter_1<uint8_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "options", ty: "::VYaml::Emitter::YamlEmitOptions*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stringBuffer", ty: "::VYaml::Internal::ExpandBuffer_1<char16_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stateStack", ty: "::VYaml::Internal::ExpandBuffer_1<::VYaml::Emitter::EmitState>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "elementCountStack", ty: "::VYaml::Internal::ExpandBuffer_1<int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tagStack", ty: "::VYaml::Internal::ExpandBuffer_1<::StringW>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "currentIndentLevel", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "currentElementCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::VYaml::Emitter::Utf8YamlEmitter::Utf8YamlEmitter(::System::Buffers::IBufferWriter_1<uint8_t>*  writer, ::VYaml::Emitter::YamlEmitOptions*  options, ::VYaml::Internal::ExpandBuffer_1<char16_t>*  stringBuffer, ::VYaml::Internal::ExpandBuffer_1<::VYaml::Emitter::EmitState>*  stateStack, ::VYaml::Internal::ExpandBuffer_1<int32_t>*  elementCountStack, ::VYaml::Internal::ExpandBuffer_1<::StringW>*  tagStack, int32_t  currentIndentLevel, int32_t  currentElementCount) noexcept  {
this->writer = writer;
this->options = options;
this->stringBuffer = stringBuffer;
this->stateStack = stateStack;
this->elementCountStack = elementCountStack;
this->tagStack = tagStack;
this->currentIndentLevel = currentIndentLevel;
this->currentElementCount = currentElementCount;
}
// Ctor Parameters []
constexpr ::VYaml::Emitter::Utf8YamlEmitter::Utf8YamlEmitter()   {
}
