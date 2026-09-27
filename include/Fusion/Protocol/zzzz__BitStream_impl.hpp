#pragma once
// IWYU pragma private; include "Fusion/Protocol/BitStream.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Protocol/zzzz__BitStream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::Fusion::Protocol::BitStream.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Protocol::BitStream::*)()>(&::Fusion::Protocol::BitStream::get_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6020618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(int32_t)>(&::Fusion::Protocol::BitStream::set_Position)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6020620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"set_Position", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.get_BytesRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Protocol::BitStream::*)()>(&::Fusion::Protocol::BitStream::get_BytesRequired)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6020698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"get_BytesRequired", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.get_Overflowing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Protocol::BitStream::*)()>(&::Fusion::Protocol::BitStream::get_Overflowing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60206f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"get_Overflowing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.get_Writing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Protocol::BitStream::*)()>(&::Fusion::Protocol::BitStream::get_Writing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6020704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"get_Writing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.set_Writing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(bool)>(&::Fusion::Protocol::BitStream::set_Writing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602070c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"set_Writing", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.get_Reading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Protocol::BitStream::*)()>(&::Fusion::Protocol::BitStream::get_Reading)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6020714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"get_Reading", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.set_Reading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(bool)>(&::Fusion::Protocol::BitStream::set_Reading)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6020724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"set_Reading", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Fusion::Protocol::BitStream::*)()>(&::Fusion::Protocol::BitStream::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6020730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)()>(&::Fusion::Protocol::BitStream::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6020738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(::ArrayW<uint8_t>)>(&::Fusion::Protocol::BitStream::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x602078c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(::ArrayW<uint8_t>, int32_t)>(&::Fusion::Protocol::BitStream::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x60207d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.SetBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(::ArrayW<uint8_t>, int32_t)>(&::Fusion::Protocol::BitStream::SetBuffer)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x602081c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"SetBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.Expand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)()>(&::Fusion::Protocol::BitStream::Expand)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6020850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"Expand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Protocol::BitStream::*)(int32_t)>(&::Fusion::Protocol::BitStream::CanRead)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60208f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"CanRead", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)()>(&::Fusion::Protocol::BitStream::Reset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x602090c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(int32_t)>(&::Fusion::Protocol::BitStream::Reset)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6020924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"Reset", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.WriteBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Protocol::BitStream::*)(bool)>(&::Fusion::Protocol::BitStream::WriteBool)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6020980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteBool", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.ReadBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Protocol::BitStream::*)()>(&::Fusion::Protocol::BitStream::ReadBool)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6020a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadBool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.WriteByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(uint8_t, int32_t)>(&::Fusion::Protocol::BitStream::WriteByte)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6020b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteByte", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.ReadByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Fusion::Protocol::BitStream::*)(int32_t)>(&::Fusion::Protocol::BitStream::ReadByte)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6020b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadByte", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.WriteByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(uint8_t)>(&::Fusion::Protocol::BitStream::WriteByte)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6020b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteByte", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.ReadByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Fusion::Protocol::BitStream::*)()>(&::Fusion::Protocol::BitStream::ReadByte)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6020b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadByte", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.WriteUShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(uint16_t, int32_t)>(&::Fusion::Protocol::BitStream::WriteUShort)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6020b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteUShort", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.ReadUShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Fusion::Protocol::BitStream::*)(int32_t)>(&::Fusion::Protocol::BitStream::ReadUShort)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6020c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadUShort", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.WriteUShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(uint16_t)>(&::Fusion::Protocol::BitStream::WriteUShort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6020c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteUShort", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.ReadUShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Fusion::Protocol::BitStream::*)()>(&::Fusion::Protocol::BitStream::ReadUShort)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6020c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadUShort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.WriteUInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(uint32_t, int32_t)>(&::Fusion::Protocol::BitStream::WriteUInt)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6020ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteUInt", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.ReadUInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Fusion::Protocol::BitStream::*)(int32_t)>(&::Fusion::Protocol::BitStream::ReadUInt)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6020e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadUInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.WriteInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(int32_t, int32_t)>(&::Fusion::Protocol::BitStream::WriteInt)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6020f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteInt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.ReadInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Protocol::BitStream::*)(int32_t)>(&::Fusion::Protocol::BitStream::ReadInt)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6020f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.WriteULong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(uint64_t, int32_t)>(&::Fusion::Protocol::BitStream::WriteULong)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6020f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteULong", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.ReadULong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Fusion::Protocol::BitStream::*)(int32_t)>(&::Fusion::Protocol::BitStream::ReadULong)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6020fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadULong", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.WriteULong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(uint64_t)>(&::Fusion::Protocol::BitStream::WriteULong)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6021000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteULong", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.ReadULong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Fusion::Protocol::BitStream::*)()>(&::Fusion::Protocol::BitStream::ReadULong)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6021030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadULong", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.WriteByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(::ArrayW<uint8_t>)>(&::Fusion::Protocol::BitStream::WriteByteArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6021064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteByteArray", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.WriteByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Fusion::Protocol::BitStream::WriteByteArray)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x602107c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteByteArray", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.ReadByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(::ArrayW<uint8_t>)>(&::Fusion::Protocol::BitStream::ReadByteArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60211e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadByteArray", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.ReadByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Fusion::Protocol::BitStream::ReadByteArray)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6021200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadByteArray", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.WriteByteArrayLengthPrefixed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(::ArrayW<uint8_t>, int32_t)>(&::Fusion::Protocol::BitStream::WriteByteArrayLengthPrefixed)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6021304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteByteArrayLengthPrefixed", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.ReadByteArrayLengthPrefixed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Fusion::Protocol::BitStream::*)()>(&::Fusion::Protocol::BitStream::ReadByteArrayLengthPrefixed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6021458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadByteArrayLengthPrefixed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.WriteString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(::StringW, ::System::Text::Encoding*)>(&::Fusion::Protocol::BitStream::WriteString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6021508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.ReadString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Protocol::BitStream::*)(::System::Text::Encoding*)>(&::Fusion::Protocol::BitStream::ReadString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6021584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadString", {}, {::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.InternalWriteByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(uint8_t, int32_t)>(&::Fusion::Protocol::BitStream::InternalWriteByte)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60209c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"InternalWriteByte", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.WriteByteAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, int32_t, uint8_t)>(&::Fusion::Protocol::BitStream::WriteByteAt)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6021678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteByteAt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.InternalReadByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Fusion::Protocol::BitStream::*)(int32_t)>(&::Fusion::Protocol::BitStream::InternalReadByte)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6020a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"InternalReadByte", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(::by_ref<::StringW>)>(&::Fusion::Protocol::BitStream::Serialize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6021754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(::by_ref<uint64_t>)>(&::Fusion::Protocol::BitStream::Serialize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x60217bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(::by_ref<uint8_t>)>(&::Fusion::Protocol::BitStream::Serialize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x602182c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(::by_ref<uint32_t>)>(&::Fusion::Protocol::BitStream::Serialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6021884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(::by_ref<uint32_t>, int32_t)>(&::Fusion::Protocol::BitStream::Serialize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x602188c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(::by_ref<int32_t>)>(&::Fusion::Protocol::BitStream::Serialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60218bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(::by_ref<int32_t>, int32_t)>(&::Fusion::Protocol::BitStream::Serialize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x60218c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(::by_ref<::ArrayW<uint8_t>>)>(&::Fusion::Protocol::BitStream::Serialize)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x60218f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::BitStream.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::BitStream::*)(::by_ref<::ArrayW<uint8_t>>, ::by_ref<int32_t>)>(&::Fusion::Protocol::BitStream::Serialize)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x60219d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Protocol::BitStream::__cordl_internal_get__ptr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ptr;
}
constexpr int32_t const& Fusion::Protocol::BitStream::__cordl_internal_get__ptr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ptr;
}
constexpr void Fusion::Protocol::BitStream::__cordl_internal_set__ptr(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ptr = value;
}
constexpr int32_t& Fusion::Protocol::BitStream::__cordl_internal_get__size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
constexpr int32_t const& Fusion::Protocol::BitStream::__cordl_internal_get__size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
constexpr void Fusion::Protocol::BitStream::__cordl_internal_set__size(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____size = value;
}
constexpr ::ArrayW<uint8_t>& Fusion::Protocol::BitStream::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr ::ArrayW<uint8_t> const& Fusion::Protocol::BitStream::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr void Fusion::Protocol::BitStream::__cordl_internal_set__data(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____data = value;
}
constexpr bool& Fusion::Protocol::BitStream::__cordl_internal_get__write()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____write;
}
constexpr bool const& Fusion::Protocol::BitStream::__cordl_internal_get__write() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____write;
}
constexpr void Fusion::Protocol::BitStream::__cordl_internal_set__write(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____write = value;
}
inline int32_t Fusion::Protocol::BitStream::get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Protocol::BitStream::set_Position(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"set_Position", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Protocol::BitStream::get_BytesRequired()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"get_BytesRequired", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Fusion::Protocol::BitStream::get_Overflowing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"get_Overflowing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Protocol::BitStream::get_Writing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"get_Writing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Protocol::BitStream::set_Writing(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"set_Writing", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Protocol::BitStream::get_Reading()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"get_Reading", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Protocol::BitStream::set_Reading(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"set_Reading", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> Fusion::Protocol::BitStream::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Fusion::Protocol::BitStream::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Protocol::BitStream::_ctor(::ArrayW<uint8_t>  arr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arr);
}
inline void Fusion::Protocol::BitStream::_ctor(::ArrayW<uint8_t>  arr, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arr, size);
}
inline void Fusion::Protocol::BitStream::SetBuffer(::ArrayW<uint8_t>  arr, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"SetBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arr, size);
}
inline void Fusion::Protocol::BitStream::Expand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"Expand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::Protocol::BitStream::CanRead(int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"CanRead", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bits);
}
inline void Fusion::Protocol::BitStream::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Protocol::BitStream::Reset(int32_t  byteSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"Reset", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, byteSize);
}
inline bool Fusion::Protocol::BitStream::WriteBool(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteBool", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool Fusion::Protocol::BitStream::ReadBool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadBool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Protocol::BitStream::WriteByte(uint8_t  value, int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteByte", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, bits);
}
inline uint8_t Fusion::Protocol::BitStream::ReadByte(int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadByte", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, bits);
}
inline void Fusion::Protocol::BitStream::WriteByte(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteByte", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint8_t Fusion::Protocol::BitStream::ReadByte()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadByte", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void Fusion::Protocol::BitStream::WriteUShort(uint16_t  value, int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteUShort", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, bits);
}
inline uint16_t Fusion::Protocol::BitStream::ReadUShort(int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadUShort", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method, bits);
}
inline void Fusion::Protocol::BitStream::WriteUShort(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteUShort", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint16_t Fusion::Protocol::BitStream::ReadUShort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadUShort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void Fusion::Protocol::BitStream::WriteUInt(uint32_t  value, int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteUInt", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, bits);
}
inline uint32_t Fusion::Protocol::BitStream::ReadUInt(int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadUInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, bits);
}
inline void Fusion::Protocol::BitStream::WriteInt(int32_t  value, int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteInt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, bits);
}
inline int32_t Fusion::Protocol::BitStream::ReadInt(int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bits);
}
inline void Fusion::Protocol::BitStream::WriteULong(uint64_t  value, int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteULong", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, bits);
}
inline uint64_t Fusion::Protocol::BitStream::ReadULong(int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadULong", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, bits);
}
inline void Fusion::Protocol::BitStream::WriteULong(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteULong", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint64_t Fusion::Protocol::BitStream::ReadULong()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadULong", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void Fusion::Protocol::BitStream::WriteByteArray(::ArrayW<uint8_t>  from)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteByteArray", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from);
}
inline void Fusion::Protocol::BitStream::WriteByteArray(::ArrayW<uint8_t>  from, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteByteArray", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, offset, count);
}
inline void Fusion::Protocol::BitStream::ReadByteArray(::ArrayW<uint8_t>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadByteArray", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, to);
}
inline void Fusion::Protocol::BitStream::ReadByteArray(::ArrayW<uint8_t>  to, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadByteArray", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, to, offset, count);
}
inline void Fusion::Protocol::BitStream::WriteByteArrayLengthPrefixed(::ArrayW<uint8_t>  array, int32_t  maxLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteByteArrayLengthPrefixed", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, maxLength);
}
inline ::ArrayW<uint8_t> Fusion::Protocol::BitStream::ReadByteArrayLengthPrefixed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadByteArrayLengthPrefixed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Fusion::Protocol::BitStream::WriteString(::StringW  value, ::System::Text::Encoding*  encoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, encoding);
}
inline ::StringW Fusion::Protocol::BitStream::ReadString(::System::Text::Encoding*  encoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"ReadString", {}, {::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, encoding);
}
inline void Fusion::Protocol::BitStream::InternalWriteByte(uint8_t  value, int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"InternalWriteByte", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, bits);
}
inline void Fusion::Protocol::BitStream::WriteByteAt(::ArrayW<uint8_t>  data, int32_t  ptr, int32_t  bits, uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"WriteByteAt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, ptr, bits, value);
}
inline uint8_t Fusion::Protocol::BitStream::InternalReadByte(int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"InternalReadByte", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, bits);
}
inline void Fusion::Protocol::BitStream::Serialize(::by_ref<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Protocol::BitStream::Serialize(::by_ref<uint64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Protocol::BitStream::Serialize(::by_ref<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Protocol::BitStream::Serialize(::by_ref<uint32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Protocol::BitStream::Serialize(::by_ref<uint32_t>  value, int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, bits);
}
inline void Fusion::Protocol::BitStream::Serialize(::by_ref<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Protocol::BitStream::Serialize(::by_ref<int32_t>  value, int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, bits);
}
inline void Fusion::Protocol::BitStream::Serialize(::by_ref<::ArrayW<uint8_t>>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Protocol::BitStream::Serialize(::by_ref<::ArrayW<uint8_t>>  array, ::by_ref<int32_t>  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::BitStream*>(),
                        {"Serialize", {}, {::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, length);
}
inline ::Fusion::Protocol::BitStream* Fusion::Protocol::BitStream::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Protocol::BitStream*>());
}
inline ::Fusion::Protocol::BitStream* Fusion::Protocol::BitStream::New_ctor(::ArrayW<uint8_t>  arr)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Protocol::BitStream*>(arr));
}
inline ::Fusion::Protocol::BitStream* Fusion::Protocol::BitStream::New_ctor(::ArrayW<uint8_t>  arr, int32_t  size)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Protocol::BitStream*>(arr, size));
}
// Ctor Parameters []
constexpr ::Fusion::Protocol::BitStream::BitStream()   {
}
