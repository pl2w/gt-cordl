#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetBitBufferNull.hpp"
#include "Fusion/Sockets/zzzz__NetBitBufferNull_def.hpp"
#include "Fusion/Sockets/zzzz__INetBitWriteStream_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferNull.get_OffsetBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetBitBufferNull::*)()>(&::Fusion::Sockets::NetBitBufferNull::get_OffsetBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6029190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferNull>(),
                        {"get_OffsetBits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferNull.set_OffsetBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBufferNull::*)(int32_t)>(&::Fusion::Sockets::NetBitBufferNull::set_OffsetBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6029198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferNull>(),
                        {"set_OffsetBits", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferNull.PadToByteBoundary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBufferNull::*)()>(&::Fusion::Sockets::NetBitBufferNull::PadToByteBoundary)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x60291a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferNull>(),
                        {"PadToByteBoundary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferNull.WriteByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBufferNull::*)(uint8_t, int32_t)>(&::Fusion::Sockets::NetBitBufferNull::WriteByte)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60291cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferNull>(),
                        {"WriteByte", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferNull.WriteInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBufferNull::*)(int32_t, int32_t)>(&::Fusion::Sockets::NetBitBufferNull::WriteInt32)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60291dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferNull>(),
                        {"WriteInt32", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferNull.WriteInt32VarLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBufferNull::*)(int32_t)>(&::Fusion::Sockets::NetBitBufferNull::WriteInt32VarLength)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x60291ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferNull>(),
                        {"WriteInt32VarLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferNull.WriteInt32VarLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBufferNull::*)(int32_t, int32_t)>(&::Fusion::Sockets::NetBitBufferNull::WriteInt32VarLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6029244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferNull>(),
                        {"WriteInt32VarLength", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferNull.WriteUInt32VarLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBufferNull::*)(uint32_t, int32_t)>(&::Fusion::Sockets::NetBitBufferNull::WriteUInt32VarLength)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6029248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferNull>(),
                        {"WriteUInt32VarLength", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferNull.WriteUInt64VarLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBufferNull::*)(uint64_t, int32_t)>(&::Fusion::Sockets::NetBitBufferNull::WriteUInt64VarLength)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6029358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferNull>(),
                        {"WriteUInt64VarLength", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferNull.WriteUInt32VarLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBufferNull::*)(uint32_t)>(&::Fusion::Sockets::NetBitBufferNull::WriteUInt32VarLength)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6029218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferNull>(),
                        {"WriteUInt32VarLength", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferNull.WriteBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetBitBufferNull::*)(bool)>(&::Fusion::Sockets::NetBitBufferNull::WriteBoolean)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6029480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferNull>(),
                        {"WriteBoolean", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferNull.WriteBytesAligned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBufferNull::*)(::System::Span_1<uint8_t>)>(&::Fusion::Sockets::NetBitBufferNull::WriteBytesAligned)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6029498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferNull>(),
                        {"WriteBytesAligned", {}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Fusion::Sockets::NetBitBufferNull::get_OffsetBits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferNull>(),
                        {"get_OffsetBits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Fusion::Sockets::NetBitBufferNull::set_OffsetBits(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferNull>(),
                        {"set_OffsetBits", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Fusion::Sockets::NetBitBufferNull::PadToByteBoundary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferNull>(),
                        {"PadToByteBoundary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Fusion::Sockets::NetBitBufferNull::WriteByte(uint8_t  value, int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferNull>(),
                        {"WriteByte", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, bits);
}
inline void Fusion::Sockets::NetBitBufferNull::WriteInt32(int32_t  value, int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferNull>(),
                        {"WriteInt32", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, bits);
}
inline void Fusion::Sockets::NetBitBufferNull::WriteInt32VarLength(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferNull>(),
                        {"WriteInt32VarLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Fusion::Sockets::NetBitBufferNull::WriteInt32VarLength(int32_t  value, int32_t  blockSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferNull>(),
                        {"WriteInt32VarLength", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, blockSize);
}
inline void Fusion::Sockets::NetBitBufferNull::WriteUInt32VarLength(uint32_t  value, int32_t  blockSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferNull>(),
                        {"WriteUInt32VarLength", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, blockSize);
}
inline void Fusion::Sockets::NetBitBufferNull::WriteUInt64VarLength(uint64_t  value, int32_t  blockSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferNull>(),
                        {"WriteUInt64VarLength", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, blockSize);
}
inline void Fusion::Sockets::NetBitBufferNull::WriteUInt32VarLength(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferNull>(),
                        {"WriteUInt32VarLength", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Fusion::Sockets::NetBitBufferNull::WriteBoolean(bool  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferNull>(),
                        {"WriteBoolean", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, b);
}
inline void Fusion::Sockets::NetBitBufferNull::WriteBytesAligned(::System::Span_1<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferNull>(),
                        {"WriteBytesAligned", {}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer);
}
/// @brief Convert operator to "::Fusion::Sockets::INetBitWriteStream"
constexpr  Fusion::Sockets::NetBitBufferNull::operator ::Fusion::Sockets::INetBitWriteStream*()  {
return static_cast<::Fusion::Sockets::INetBitWriteStream*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::Sockets::INetBitWriteStream"
constexpr ::Fusion::Sockets::INetBitWriteStream* Fusion::Sockets::NetBitBufferNull::i___Fusion__Sockets__INetBitWriteStream()  {
return static_cast<::Fusion::Sockets::INetBitWriteStream*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_offsetBits", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetBitBufferNull::NetBitBufferNull(int32_t  _offsetBits) noexcept  {
this->_offsetBits = _offsetBits;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetBitBufferNull::NetBitBufferNull()   {
}
