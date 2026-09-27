#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/FormatReader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__FormatReader_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__Format_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::SouthPointe::Serialization::MessagePack::FormatReader::*)()>(&::SouthPointe::Serialization::MessagePack::FormatReader::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d05dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatReader::*)(::System::IO::Stream*)>(&::SouthPointe::Serialization::MessagePack::FormatReader::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9d0636c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::SouthPointe::Serialization::MessagePack::Format (::SouthPointe::Serialization::MessagePack::FormatReader::*)()>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadFormat)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9d063ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadPositiveFixInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::SouthPointe::Serialization::MessagePack::FormatReader::*)(::SouthPointe::Serialization::MessagePack::Format)>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadPositiveFixInt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d0645c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadPositiveFixInt", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadUInt8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::SouthPointe::Serialization::MessagePack::FormatReader::*)()>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadUInt8)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d06464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadUInt8", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadUInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::SouthPointe::Serialization::MessagePack::FormatReader::*)()>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadUInt16)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9d0648c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadUInt16", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::SouthPointe::Serialization::MessagePack::FormatReader::*)()>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadUInt32)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9d06524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadUInt32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::SouthPointe::Serialization::MessagePack::FormatReader::*)()>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadUInt64)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9d065e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadUInt64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadNegativeFixInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (::SouthPointe::Serialization::MessagePack::FormatReader::*)(::SouthPointe::Serialization::MessagePack::Format)>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadNegativeFixInt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d066dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadNegativeFixInt", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadInt8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (::SouthPointe::Serialization::MessagePack::FormatReader::*)()>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadInt8)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d066e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadInt8", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::SouthPointe::Serialization::MessagePack::FormatReader::*)()>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadInt16)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9d0670c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadInt16", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::SouthPointe::Serialization::MessagePack::FormatReader::*)()>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadInt32)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9d067a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadInt32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::SouthPointe::Serialization::MessagePack::FormatReader::*)()>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadInt64)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9d06860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadInt64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadFloat32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::SouthPointe::Serialization::MessagePack::FormatReader::*)()>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadFloat32)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9d0695c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadFloat32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadFloat64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::SouthPointe::Serialization::MessagePack::FormatReader::*)()>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadFloat64)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9d06a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadFloat64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadFixStr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::SouthPointe::Serialization::MessagePack::FormatReader::*)(::SouthPointe::Serialization::MessagePack::Format)>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadFixStr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d06aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadFixStr", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadStr8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::SouthPointe::Serialization::MessagePack::FormatReader::*)()>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadStr8)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d06b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadStr8", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadStr16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::SouthPointe::Serialization::MessagePack::FormatReader::*)()>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadStr16)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d06b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadStr16", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadStr32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::SouthPointe::Serialization::MessagePack::FormatReader::*)()>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadStr32)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9d06b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadStr32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadBin8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::SouthPointe::Serialization::MessagePack::FormatReader::*)()>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadBin8)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d06be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadBin8", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadBin16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::SouthPointe::Serialization::MessagePack::FormatReader::*)()>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadBin16)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d06cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadBin16", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadBin32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::SouthPointe::Serialization::MessagePack::FormatReader::*)()>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadBin32)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9d06ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadBin32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadArrayLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::SouthPointe::Serialization::MessagePack::FormatReader::*)(::SouthPointe::Serialization::MessagePack::Format)>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadArrayLength)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9d06d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadArrayLength", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadMapLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::SouthPointe::Serialization::MessagePack::FormatReader::*)(::SouthPointe::Serialization::MessagePack::Format)>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadMapLength)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9d06e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadMapLength", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadExtLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::SouthPointe::Serialization::MessagePack::FormatReader::*)(::SouthPointe::Serialization::MessagePack::Format)>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadExtLength)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9d06f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadExtLength", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadExtType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (::SouthPointe::Serialization::MessagePack::FormatReader::*)(::SouthPointe::Serialization::MessagePack::Format)>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadExtType)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9d06ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadExtType", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.Skip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatReader::*)()>(&::SouthPointe::Serialization::MessagePack::FormatReader::Skip)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x9d070f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"Skip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.FastForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::FormatReader::*)(int64_t)>(&::SouthPointe::Serialization::MessagePack::FormatReader::FastForward)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9d0741c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"FastForward", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadStringOfLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::SouthPointe::Serialization::MessagePack::FormatReader::*)(int32_t)>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadStringOfLength)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9d06aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadStringOfLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::FormatReader.ReadBytesOfLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::SouthPointe::Serialization::MessagePack::FormatReader::*)(int32_t)>(&::SouthPointe::Serialization::MessagePack::FormatReader::ReadBytesOfLength)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9d06c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadBytesOfLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& SouthPointe::Serialization::MessagePack::FormatReader::__cordl_internal_get_stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stream;
}
constexpr ::System::IO::Stream* const& SouthPointe::Serialization::MessagePack::FormatReader::__cordl_internal_get_stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stream;
}
constexpr void SouthPointe::Serialization::MessagePack::FormatReader::__cordl_internal_set_stream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stream = value;
}
constexpr ::ArrayW<uint8_t>& SouthPointe::Serialization::MessagePack::FormatReader::__cordl_internal_get_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr ::ArrayW<uint8_t> const& SouthPointe::Serialization::MessagePack::FormatReader::__cordl_internal_get_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr void SouthPointe::Serialization::MessagePack::FormatReader::__cordl_internal_set_buffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffer = value;
}
inline int64_t SouthPointe::Serialization::MessagePack::FormatReader::get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void SouthPointe::Serialization::MessagePack::FormatReader::_ctor(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline ::SouthPointe::Serialization::MessagePack::Format SouthPointe::Serialization::MessagePack::FormatReader::ReadFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::SouthPointe::Serialization::MessagePack::Format>(this, ___internal_method);
}
inline uint8_t SouthPointe::Serialization::MessagePack::FormatReader::ReadPositiveFixInt(::SouthPointe::Serialization::MessagePack::Format  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadPositiveFixInt", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, format);
}
inline uint8_t SouthPointe::Serialization::MessagePack::FormatReader::ReadUInt8()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadUInt8", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline uint16_t SouthPointe::Serialization::MessagePack::FormatReader::ReadUInt16()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadUInt16", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline uint32_t SouthPointe::Serialization::MessagePack::FormatReader::ReadUInt32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadUInt32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline uint64_t SouthPointe::Serialization::MessagePack::FormatReader::ReadUInt64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadUInt64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline int8_t SouthPointe::Serialization::MessagePack::FormatReader::ReadNegativeFixInt(::SouthPointe::Serialization::MessagePack::Format  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadNegativeFixInt", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(this, ___internal_method, format);
}
inline int8_t SouthPointe::Serialization::MessagePack::FormatReader::ReadInt8()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadInt8", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(this, ___internal_method);
}
inline int16_t SouthPointe::Serialization::MessagePack::FormatReader::ReadInt16()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadInt16", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method);
}
inline int32_t SouthPointe::Serialization::MessagePack::FormatReader::ReadInt32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadInt32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t SouthPointe::Serialization::MessagePack::FormatReader::ReadInt64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadInt64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline float_t SouthPointe::Serialization::MessagePack::FormatReader::ReadFloat32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadFloat32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline double_t SouthPointe::Serialization::MessagePack::FormatReader::ReadFloat64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadFloat64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::StringW SouthPointe::Serialization::MessagePack::FormatReader::ReadFixStr(::SouthPointe::Serialization::MessagePack::Format  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadFixStr", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, format);
}
inline ::StringW SouthPointe::Serialization::MessagePack::FormatReader::ReadStr8()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadStr8", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW SouthPointe::Serialization::MessagePack::FormatReader::ReadStr16()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadStr16", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW SouthPointe::Serialization::MessagePack::FormatReader::ReadStr32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadStr32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> SouthPointe::Serialization::MessagePack::FormatReader::ReadBin8()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadBin8", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> SouthPointe::Serialization::MessagePack::FormatReader::ReadBin16()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadBin16", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> SouthPointe::Serialization::MessagePack::FormatReader::ReadBin32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadBin32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t SouthPointe::Serialization::MessagePack::FormatReader::ReadArrayLength(::SouthPointe::Serialization::MessagePack::Format  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadArrayLength", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, format);
}
inline int32_t SouthPointe::Serialization::MessagePack::FormatReader::ReadMapLength(::SouthPointe::Serialization::MessagePack::Format  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadMapLength", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, format);
}
inline uint32_t SouthPointe::Serialization::MessagePack::FormatReader::ReadExtLength(::SouthPointe::Serialization::MessagePack::Format  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadExtLength", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, format);
}
inline int8_t SouthPointe::Serialization::MessagePack::FormatReader::ReadExtType(::SouthPointe::Serialization::MessagePack::Format  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadExtType", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(this, ___internal_method, format);
}
inline void SouthPointe::Serialization::MessagePack::FormatReader::Skip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"Skip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void SouthPointe::Serialization::MessagePack::FormatReader::FastForward(int64_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"FastForward", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset);
}
inline ::StringW SouthPointe::Serialization::MessagePack::FormatReader::ReadStringOfLength(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadStringOfLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, length);
}
inline ::ArrayW<uint8_t> SouthPointe::Serialization::MessagePack::FormatReader::ReadBytesOfLength(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::FormatReader*>(),
                        {"ReadBytesOfLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, length);
}
inline ::SouthPointe::Serialization::MessagePack::FormatReader* SouthPointe::Serialization::MessagePack::FormatReader::New_ctor(::System::IO::Stream*  stream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::SouthPointe::Serialization::MessagePack::FormatReader*>(stream));
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::FormatReader::FormatReader()   {
}
