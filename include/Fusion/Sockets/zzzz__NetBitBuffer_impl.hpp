#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetBitBuffer.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_impl.hpp"
#include "Fusion/Sockets/zzzz__NetBitBuffer_def.hpp"
#include "Fusion/Sockets/zzzz__INetBitWriteStream_def.hpp"
#include "Fusion/Sockets/zzzz__NetBitBufferBlock_def.hpp"
#include "Fusion/Sockets/zzzz__NetBitBuffer_Offset_def.hpp"
#include "Fusion/Sockets/zzzz__NetPacketType_def.hpp"
#include "Fusion/zzzz__ILogDumpable_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.get_Group
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::Fusion::Sockets::NetBitBuffer::*)()>(&::Fusion::Sockets::NetBitBuffer::get_Group)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60271e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"get_Group", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.set_Group
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(int16_t)>(&::Fusion::Sockets::NetBitBuffer::set_Group)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60271ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"set_Group", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t* (::Fusion::Sockets::NetBitBuffer::*)()>(&::Fusion::Sockets::NetBitBuffer::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60271fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(uint64_t*)>(&::Fusion::Sockets::NetBitBuffer::set_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6027204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"set_Data", {}, {::i2c::type_of<uint64_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.get_LengthBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetBitBuffer::*)()>(&::Fusion::Sockets::NetBitBuffer::get_LengthBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602720c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"get_LengthBits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.get_LengthBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetBitBuffer::*)()>(&::Fusion::Sockets::NetBitBuffer::get_LengthBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6027214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"get_LengthBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.set_LengthBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(int32_t)>(&::Fusion::Sockets::NetBitBuffer::set_LengthBytes)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x602721c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"set_LengthBytes", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.get_OffsetBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetBitBuffer::*)()>(&::Fusion::Sockets::NetBitBuffer::get_OffsetBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6027250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"get_OffsetBits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.set_OffsetBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(int32_t)>(&::Fusion::Sockets::NetBitBuffer::set_OffsetBits)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6027258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"set_OffsetBits", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.get_Overflow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetBitBuffer::*)()>(&::Fusion::Sockets::NetBitBuffer::get_Overflow)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6027298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"get_Overflow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.get_OverflowOrLessThanOneByteRemaining
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetBitBuffer::*)()>(&::Fusion::Sockets::NetBitBuffer::get_OverflowOrLessThanOneByteRemaining)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60272a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"get_OverflowOrLessThanOneByteRemaining", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.get_DoneOrOverflow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetBitBuffer::*)()>(&::Fusion::Sockets::NetBitBuffer::get_DoneOrOverflow)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60272bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"get_DoneOrOverflow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.get_MoreToRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetBitBuffer::*)()>(&::Fusion::Sockets::NetBitBuffer::get_MoreToRead)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60272cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"get_MoreToRead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.get_PacketType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetPacketType (::Fusion::Sockets::NetBitBuffer::*)()>(&::Fusion::Sockets::NetBitBuffer::get_PacketType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60272dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"get_PacketType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.set_PacketType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(::Fusion::Sockets::NetPacketType)>(&::Fusion::Sockets::NetBitBuffer::set_PacketType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60272e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"set_PacketType", {}, {::i2c::type_of<::Fusion::Sockets::NetPacketType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.ReplaceDataFromBlockWithTemp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(int32_t)>(&::Fusion::Sockets::NetBitBuffer::ReplaceDataFromBlockWithTemp)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x60272f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReplaceDataFromBlockWithTemp", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.GetOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetBitBuffer_Offset (*)(::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::Sockets::NetBitBuffer::GetOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60273e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"GetOffset", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetBitBuffer* (*)(int32_t, int32_t)>(&::Fusion::Sockets::NetBitBuffer::Allocate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x60273fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"Allocate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.ReleaseRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Fusion::Sockets::NetBitBuffer*>)>(&::Fusion::Sockets::NetBitBuffer::ReleaseRef)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6027524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReleaseRef", {}, {::i2c::type_of<::by_ref<::Fusion::Sockets::NetBitBuffer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::Sockets::NetBitBuffer::Release)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x602753c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"Release", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.SetBufferLengthBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(uint64_t*, int32_t)>(&::Fusion::Sockets::NetBitBuffer::SetBufferLengthBytes)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x60274d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"SetBufferLengthBytes", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)()>(&::Fusion::Sockets::NetBitBuffer::Clear)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6027688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.WriteBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetBitBuffer::*)(bool)>(&::Fusion::Sockets::NetBitBuffer::WriteBoolean)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60276cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteBoolean", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.ReadBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetBitBuffer::*)()>(&::Fusion::Sockets::NetBitBuffer::ReadBoolean)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6027830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadBoolean", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.WriteByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(uint8_t, int32_t)>(&::Fusion::Sockets::NetBitBuffer::WriteByte)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6027928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteByte", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.ReadByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Fusion::Sockets::NetBitBuffer::*)(int32_t)>(&::Fusion::Sockets::NetBitBuffer::ReadByte)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6027964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadByte", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.WriteInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(int32_t, int32_t)>(&::Fusion::Sockets::NetBitBuffer::WriteInt32)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60279d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteInt32", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.ReadInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetBitBuffer::*)(int32_t)>(&::Fusion::Sockets::NetBitBuffer::ReadInt32)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6027a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadInt32", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.WriteUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(uint32_t, int32_t)>(&::Fusion::Sockets::NetBitBuffer::WriteUInt32)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6027a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteUInt32", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetBitBuffer::*)(int32_t)>(&::Fusion::Sockets::NetBitBuffer::CanRead)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6027ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"CanRead", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.get_IsOnEvenByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetBitBuffer::*)()>(&::Fusion::Sockets::NetBitBuffer::get_IsOnEvenByte)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6027ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"get_IsOnEvenByte", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.get_OffsetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetBitBuffer::*)()>(&::Fusion::Sockets::NetBitBuffer::get_OffsetBytes)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6027ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"get_OffsetBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.PadToByteBoundary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)()>(&::Fusion::Sockets::NetBitBuffer::PadToByteBoundary)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6027b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"PadToByteBoundary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.GetDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::Fusion::Sockets::NetBitBuffer::*)()>(&::Fusion::Sockets::NetBitBuffer::GetDataPointer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6027bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"GetDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.PadToByteBoundaryAndGetPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::Fusion::Sockets::NetBitBuffer::*)()>(&::Fusion::Sockets::NetBitBuffer::PadToByteBoundaryAndGetPtr)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6027c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"PadToByteBoundaryAndGetPtr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.CheckBitCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetBitBuffer::*)(int32_t)>(&::Fusion::Sockets::NetBitBuffer::CheckBitCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6027c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"CheckBitCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.SeekToByteBoundary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)()>(&::Fusion::Sockets::NetBitBuffer::SeekToByteBoundary)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6027c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"SeekToByteBoundary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.WriteBytesAligned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(void*, int32_t)>(&::Fusion::Sockets::NetBitBuffer::WriteBytesAligned)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x6027c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteBytesAligned", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.WriteBytesAligned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(::System::Span_1<uint8_t>)>(&::Fusion::Sockets::NetBitBuffer::WriteBytesAligned)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x6027f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteBytesAligned", {}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.ReadBytesAligned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(::System::Span_1<uint8_t>)>(&::Fusion::Sockets::NetBitBuffer::ReadBytesAligned)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x60281dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadBytesAligned", {}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.ReadBytesAligned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(void*, int32_t)>(&::Fusion::Sockets::NetBitBuffer::ReadBytesAligned)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6028298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadBytesAligned", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.WriteInt64VarLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(int64_t, int32_t)>(&::Fusion::Sockets::NetBitBuffer::WriteInt64VarLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x602830c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteInt64VarLength", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.WriteInt32VarLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(int32_t)>(&::Fusion::Sockets::NetBitBuffer::WriteInt32VarLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60284a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteInt32VarLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.WriteInt32VarLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(int32_t, int32_t)>(&::Fusion::Sockets::NetBitBuffer::WriteInt32VarLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6028504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteInt32VarLength", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.ReadInt32VarLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetBitBuffer::*)()>(&::Fusion::Sockets::NetBitBuffer::ReadInt32VarLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6028654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadInt32VarLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.ReadInt64VarLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Fusion::Sockets::NetBitBuffer::*)(int32_t)>(&::Fusion::Sockets::NetBitBuffer::ReadInt64VarLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x602870c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadInt64VarLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.ReadInt32VarLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetBitBuffer::*)(int32_t)>(&::Fusion::Sockets::NetBitBuffer::ReadInt32VarLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x602882c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadInt32VarLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.ReadUInt32VarLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Fusion::Sockets::NetBitBuffer::*)(int32_t)>(&::Fusion::Sockets::NetBitBuffer::ReadUInt32VarLength)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6028830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadUInt32VarLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.ReadUInt64VarLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Fusion::Sockets::NetBitBuffer::*)(int32_t)>(&::Fusion::Sockets::NetBitBuffer::ReadUInt64VarLength)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6028710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadUInt64VarLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.WriteUInt32VarLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(uint32_t, int32_t)>(&::Fusion::Sockets::NetBitBuffer::WriteUInt32VarLength)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6028508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteUInt32VarLength", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.WriteUInt64VarLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(uint64_t, int32_t)>(&::Fusion::Sockets::NetBitBuffer::WriteUInt64VarLength)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6028310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteUInt64VarLength", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.WriteUInt32VarLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(uint32_t)>(&::Fusion::Sockets::NetBitBuffer::WriteUInt32VarLength)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60284a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteUInt32VarLength", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.ReadUInt32VarLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Fusion::Sockets::NetBitBuffer::*)()>(&::Fusion::Sockets::NetBitBuffer::ReadUInt32VarLength)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6028658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadUInt32VarLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.ReadUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Fusion::Sockets::NetBitBuffer::*)(int32_t)>(&::Fusion::Sockets::NetBitBuffer::ReadUInt32)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6028ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadUInt32", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.WriteUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(uint64_t, int32_t)>(&::Fusion::Sockets::NetBitBuffer::WriteUInt64)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6028b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteUInt64", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.ReadUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Fusion::Sockets::NetBitBuffer::*)(int32_t)>(&::Fusion::Sockets::NetBitBuffer::ReadUInt64)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6028ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadUInt64", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.WriteUInt64AtOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(uint64_t, int32_t, int32_t)>(&::Fusion::Sockets::NetBitBuffer::WriteUInt64AtOffset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6028c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteUInt64AtOffset", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(uint64_t, int32_t)>(&::Fusion::Sockets::NetBitBuffer::Write)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x60276ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"Write", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.WriteSlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(uint64_t, int32_t)>(&::Fusion::Sockets::NetBitBuffer::WriteSlow)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6028c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteSlow", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Fusion::Sockets::NetBitBuffer::*)(int32_t)>(&::Fusion::Sockets::NetBitBuffer::Read)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x602784c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"Read", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.Peek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Fusion::Sockets::NetBitBuffer::*)(int32_t)>(&::Fusion::Sockets::NetBitBuffer::Peek)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6028944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"Peek", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.Advance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetBitBuffer::*)(int32_t, bool)>(&::Fusion::Sockets::NetBitBuffer::Advance)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6028d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"Advance", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBuffer.Fusion_ILogDumpable_Dump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBuffer::*)(::System::Text::StringBuilder*)>(&::Fusion::Sockets::NetBitBuffer::Fusion_ILogDumpable_Dump)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6028e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"Fusion.ILogDumpable.Dump", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
inline int16_t Fusion::Sockets::NetBitBuffer::get_Group()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"get_Group", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(*this, ___internal_method);
}
inline void Fusion::Sockets::NetBitBuffer::set_Group(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"set_Group", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint64_t* Fusion::Sockets::NetBitBuffer::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t*>(*this, ___internal_method);
}
inline void Fusion::Sockets::NetBitBuffer::set_Data(uint64_t*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"set_Data", {}, {::i2c::type_of<uint64_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Fusion::Sockets::NetBitBuffer::get_LengthBits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"get_LengthBits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Fusion::Sockets::NetBitBuffer::get_LengthBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"get_LengthBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Fusion::Sockets::NetBitBuffer::set_LengthBytes(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"set_LengthBytes", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Fusion::Sockets::NetBitBuffer::get_OffsetBits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"get_OffsetBits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Fusion::Sockets::NetBitBuffer::set_OffsetBits(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"set_OffsetBits", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Fusion::Sockets::NetBitBuffer::get_Overflow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"get_Overflow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::Sockets::NetBitBuffer::get_OverflowOrLessThanOneByteRemaining()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"get_OverflowOrLessThanOneByteRemaining", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::Sockets::NetBitBuffer::get_DoneOrOverflow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"get_DoneOrOverflow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::Sockets::NetBitBuffer::get_MoreToRead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"get_MoreToRead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::Fusion::Sockets::NetPacketType Fusion::Sockets::NetBitBuffer::get_PacketType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"get_PacketType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetPacketType>(*this, ___internal_method);
}
inline void Fusion::Sockets::NetBitBuffer::set_PacketType(::Fusion::Sockets::NetPacketType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"set_PacketType", {}, {::i2c::type_of<::Fusion::Sockets::NetPacketType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Fusion::Sockets::NetBitBuffer::ReplaceDataFromBlockWithTemp(int32_t  tempSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReplaceDataFromBlockWithTemp", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tempSize);
}
inline ::GlobalNamespace::NetBitBuffer_Offset Fusion::Sockets::NetBitBuffer::GetOffset(::Fusion::Sockets::NetBitBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"GetOffset", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetBitBuffer_Offset>(nullptr, ___internal_method, buffer);
}
inline ::Fusion::Sockets::NetBitBuffer* Fusion::Sockets::NetBitBuffer::Allocate(int32_t  group, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"Allocate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetBitBuffer*>(nullptr, ___internal_method, group, size);
}
inline void Fusion::Sockets::NetBitBuffer::ReleaseRef(::by_ref<::Fusion::Sockets::NetBitBuffer*>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReleaseRef", {}, {::i2c::type_of<::by_ref<::Fusion::Sockets::NetBitBuffer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer);
}
inline void Fusion::Sockets::NetBitBuffer::Release(::Fusion::Sockets::NetBitBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"Release", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer);
}
inline void Fusion::Sockets::NetBitBuffer::SetBufferLengthBytes(uint64_t*  buffer, int32_t  lenghtInBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"SetBufferLengthBytes", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer, lenghtInBytes);
}
inline void Fusion::Sockets::NetBitBuffer::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Fusion::Sockets::NetBitBuffer::WriteBoolean(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteBoolean", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool Fusion::Sockets::NetBitBuffer::ReadBoolean()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadBoolean", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Fusion::Sockets::NetBitBuffer::WriteByte(uint8_t  value, int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteByte", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, bits);
}
inline uint8_t Fusion::Sockets::NetBitBuffer::ReadByte(int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadByte", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method, bits);
}
inline void Fusion::Sockets::NetBitBuffer::WriteInt32(int32_t  value, int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteInt32", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, bits);
}
inline int32_t Fusion::Sockets::NetBitBuffer::ReadInt32(int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadInt32", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, bits);
}
inline void Fusion::Sockets::NetBitBuffer::WriteUInt32(uint32_t  value, int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteUInt32", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, bits);
}
inline bool Fusion::Sockets::NetBitBuffer::CanRead(int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"CanRead", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, bits);
}
inline bool Fusion::Sockets::NetBitBuffer::get_IsOnEvenByte()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"get_IsOnEvenByte", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t Fusion::Sockets::NetBitBuffer::get_OffsetBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"get_OffsetBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Fusion::Sockets::NetBitBuffer::PadToByteBoundary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"PadToByteBoundary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline uint8_t* Fusion::Sockets::NetBitBuffer::GetDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"GetDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method);
}
inline uint8_t* Fusion::Sockets::NetBitBuffer::PadToByteBoundaryAndGetPtr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"PadToByteBoundaryAndGetPtr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method);
}
inline bool Fusion::Sockets::NetBitBuffer::CheckBitCount(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"CheckBitCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, count);
}
inline void Fusion::Sockets::NetBitBuffer::SeekToByteBoundary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"SeekToByteBoundary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Fusion::Sockets::NetBitBuffer::WriteBytesAligned(void*  buffer, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteBytesAligned", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer, length);
}
inline void Fusion::Sockets::NetBitBuffer::WriteBytesAligned(::System::Span_1<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteBytesAligned", {}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer);
}
inline void Fusion::Sockets::NetBitBuffer::ReadBytesAligned(::System::Span_1<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadBytesAligned", {}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer);
}
inline void Fusion::Sockets::NetBitBuffer::ReadBytesAligned(void*  buffer, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadBytesAligned", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer, length);
}
inline void Fusion::Sockets::NetBitBuffer::WriteInt64VarLength(int64_t  value, int32_t  blockSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteInt64VarLength", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, blockSize);
}
inline void Fusion::Sockets::NetBitBuffer::WriteInt32VarLength(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteInt32VarLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Fusion::Sockets::NetBitBuffer::WriteInt32VarLength(int32_t  value, int32_t  blockSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteInt32VarLength", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, blockSize);
}
inline int32_t Fusion::Sockets::NetBitBuffer::ReadInt32VarLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadInt32VarLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int64_t Fusion::Sockets::NetBitBuffer::ReadInt64VarLength(int32_t  blockSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadInt64VarLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method, blockSize);
}
inline int32_t Fusion::Sockets::NetBitBuffer::ReadInt32VarLength(int32_t  blockSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadInt32VarLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, blockSize);
}
inline uint32_t Fusion::Sockets::NetBitBuffer::ReadUInt32VarLength(int32_t  blockSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadUInt32VarLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, blockSize);
}
inline uint64_t Fusion::Sockets::NetBitBuffer::ReadUInt64VarLength(int32_t  blockSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadUInt64VarLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, blockSize);
}
inline void Fusion::Sockets::NetBitBuffer::WriteUInt32VarLength(uint32_t  value, int32_t  blockSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteUInt32VarLength", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, blockSize);
}
inline void Fusion::Sockets::NetBitBuffer::WriteUInt64VarLength(uint64_t  value, int32_t  blockSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteUInt64VarLength", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, blockSize);
}
inline void Fusion::Sockets::NetBitBuffer::WriteUInt32VarLength(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteUInt32VarLength", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t Fusion::Sockets::NetBitBuffer::ReadUInt32VarLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadUInt32VarLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint32_t Fusion::Sockets::NetBitBuffer::ReadUInt32(int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadUInt32", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, bits);
}
inline void Fusion::Sockets::NetBitBuffer::WriteUInt64(uint64_t  value, int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteUInt64", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, bits);
}
inline uint64_t Fusion::Sockets::NetBitBuffer::ReadUInt64(int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"ReadUInt64", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, bits);
}
inline void Fusion::Sockets::NetBitBuffer::WriteUInt64AtOffset(uint64_t  value, int32_t  offset, int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteUInt64AtOffset", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, offset, bits);
}
inline void Fusion::Sockets::NetBitBuffer::Write(uint64_t  value, int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"Write", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, bits);
}
inline void Fusion::Sockets::NetBitBuffer::WriteSlow(uint64_t  value, int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"WriteSlow", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, bits);
}
inline uint64_t Fusion::Sockets::NetBitBuffer::Read(int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"Read", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, bits);
}
inline uint64_t Fusion::Sockets::NetBitBuffer::Peek(int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"Peek", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, bits);
}
inline int32_t Fusion::Sockets::NetBitBuffer::Advance(int32_t  bits, bool  writing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"Advance", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, bits, writing);
}
inline void Fusion::Sockets::NetBitBuffer::Fusion_ILogDumpable_Dump(::System::Text::StringBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBuffer>(),
                        {"Fusion.ILogDumpable.Dump", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, builder);
}
/// @brief Convert operator to "::Fusion::Sockets::INetBitWriteStream"
constexpr  Fusion::Sockets::NetBitBuffer::operator ::Fusion::Sockets::INetBitWriteStream*()  {
return static_cast<::Fusion::Sockets::INetBitWriteStream*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::Sockets::INetBitWriteStream"
constexpr ::Fusion::Sockets::INetBitWriteStream* Fusion::Sockets::NetBitBuffer::i___Fusion__Sockets__INetBitWriteStream()  {
return static_cast<::Fusion::Sockets::INetBitWriteStream*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Fusion::ILogDumpable"
constexpr  Fusion::Sockets::NetBitBuffer::operator ::Fusion::ILogDumpable*()  {
return static_cast<::Fusion::ILogDumpable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::ILogDumpable"
constexpr ::Fusion::ILogDumpable* Fusion::Sockets::NetBitBuffer::i___Fusion__ILogDumpable()  {
return static_cast<::Fusion::ILogDumpable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Address", ty: "::Fusion::Sockets::NetAddress", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Prev", ty: "::Fusion::Sockets::NetBitBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Next", ty: "::Fusion::Sockets::NetBitBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_block", ty: "::Fusion::Sockets::NetBitBufferBlock*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_allocNext", ty: "::Fusion::Sockets::NetBitBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_group", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_data", ty: "uint64_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_dataBlockOriginal", ty: "uint64_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_offsetBits", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_lengthBits", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_lengthBytes", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetBitBuffer::NetBitBuffer(::Fusion::Sockets::NetAddress  Address, ::Fusion::Sockets::NetBitBuffer*  Prev, ::Fusion::Sockets::NetBitBuffer*  Next, ::Fusion::Sockets::NetBitBufferBlock*  _block, ::Fusion::Sockets::NetBitBuffer*  _allocNext, int32_t  _group, uint64_t*  _data, uint64_t*  _dataBlockOriginal, int32_t  _offsetBits, int32_t  _lengthBits, int32_t  _lengthBytes) noexcept  {
this->Address = Address;
this->Prev = Prev;
this->Next = Next;
this->_block = _block;
this->_allocNext = _allocNext;
this->_group = _group;
this->_data = _data;
this->_dataBlockOriginal = _dataBlockOriginal;
this->_offsetBits = _offsetBits;
this->_lengthBits = _lengthBits;
this->_lengthBytes = _lengthBytes;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetBitBuffer::NetBitBuffer()   {
}
