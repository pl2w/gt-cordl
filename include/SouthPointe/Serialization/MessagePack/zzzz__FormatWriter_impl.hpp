#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/FormatWriter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__FormatWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(::System::IO::Stream*)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9d0755c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.WriteFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(uint8_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::WriteFormat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d075dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteFormat", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.WriteNil
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)()>(&::SouthPointe::Serialization::MessagePack::FormatWriter::WriteNil)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9d075fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteNil", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(bool)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::Write)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9d07620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(uint8_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::Write)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9d0764c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(uint16_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::Write)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9d076ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(uint32_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::Write)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9d077b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(uint64_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::Write)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9d078b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(int8_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::Write)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9d07a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(int16_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::Write)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d07b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(int32_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::Write)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9d07c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(int64_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::Write)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d07d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(float_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::Write)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d07efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(double_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::Write)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d07fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(::StringW)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::Write)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9d080bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(::ArrayW<uint8_t>)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::Write)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9d08244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.WriteArrayHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(int32_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::WriteArrayHeader)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9d0834c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteArrayHeader", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.WriteBinHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(int32_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::WriteBinHeader)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9d083f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteBinHeader", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.WriteMapHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(int32_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::WriteMapHeader)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9d084b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteMapHeader", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.WriteExtHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(uint32_t, int8_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::WriteExtHeader)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9d08558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteExtHeader", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.WritePositiveFixInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(uint8_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::WritePositiveFixInt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d076ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WritePositiveFixInt", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.WriteUInt8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(uint8_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::WriteUInt8)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d076cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteUInt8", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.WriteUInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(uint16_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::WriteUInt16)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d07750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteUInt16", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.WriteUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(uint32_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::WriteUInt32)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9d07818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteUInt32", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.WriteUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(uint64_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::WriteUInt64)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9d07918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteUInt64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.WriteNegativeFixInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(int8_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::WriteNegativeFixInt)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9d07ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteNegativeFixInt", {}, {::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.WriteInt8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(int8_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::WriteInt8)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d07b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteInt8", {}, {::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.WriteInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(int16_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::WriteInt16)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d07bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteInt16", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.WriteInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(int32_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::WriteInt32)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9d07cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteInt32", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.WriteInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(int64_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::WriteInt64)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9d07dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteInt64", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatWriter.WriteRawByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatWriter::*)(uint8_t)>(&::SouthPointe::Serialization::MessagePack::FormatWriter::WriteRawByte)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d086c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteRawByte", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& SouthPointe::Serialization::MessagePack::FormatWriter::__cordl_internal_get_stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stream;
}
constexpr ::System::IO::Stream* const& SouthPointe::Serialization::MessagePack::FormatWriter::__cordl_internal_get_stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stream;
}
constexpr void SouthPointe::Serialization::MessagePack::FormatWriter::__cordl_internal_set_stream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stream = value;
}
constexpr ::ArrayW<uint8_t>& SouthPointe::Serialization::MessagePack::FormatWriter::__cordl_internal_get_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr ::ArrayW<uint8_t> const& SouthPointe::Serialization::MessagePack::FormatWriter::__cordl_internal_get_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr void SouthPointe::Serialization::MessagePack::FormatWriter::__cordl_internal_set_buffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffer = value;
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::_ctor(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::WriteFormat(uint8_t  formatValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteFormat", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formatValue);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::WriteNil()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteNil", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::Write(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::Write(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::Write(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::Write(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::Write(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::Write(int8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::Write(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::Write(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::Write(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::Write(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::Write(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::Write(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::Write(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"Write", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::WriteArrayHeader(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteArrayHeader", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, length);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::WriteBinHeader(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteBinHeader", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, length);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::WriteMapHeader(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteMapHeader", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, length);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::WriteExtHeader(uint32_t  length, int8_t  extType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteExtHeader", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, length, extType);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::WritePositiveFixInt(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WritePositiveFixInt", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::WriteUInt8(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteUInt8", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::WriteUInt16(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteUInt16", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::WriteUInt32(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteUInt32", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::WriteUInt64(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteUInt64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::WriteNegativeFixInt(int8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteNegativeFixInt", {}, {::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::WriteInt8(int8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteInt8", {}, {::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::WriteInt16(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteInt16", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::WriteInt32(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteInt32", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::WriteInt64(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteInt64", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void SouthPointe::Serialization::MessagePack::FormatWriter::WriteRawByte(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>(),
                        {"WriteRawByte", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::SouthPointe::Serialization::MessagePack::FormatWriter* SouthPointe::Serialization::MessagePack::FormatWriter::New_ctor(::System::IO::Stream*  stream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::SouthPointe::Serialization::MessagePack::FormatWriter*>(stream));
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::FormatWriter::FormatWriter()   {
}
