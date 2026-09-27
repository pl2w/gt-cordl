#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetBitBufferSerializer.hpp"
#include "Fusion/Sockets/zzzz__NetBitBufferSerializer_def.hpp"
#include "Fusion/Sockets/zzzz__NetBitBuffer_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferSerializer.get_Writing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetBitBufferSerializer::*)()>(&::Fusion::Sockets::NetBitBufferSerializer::get_Writing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6029504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferSerializer>(),
                        {"get_Writing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferSerializer.get_Buffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetBitBuffer* (::Fusion::Sockets::NetBitBufferSerializer::*)()>(&::Fusion::Sockets::NetBitBufferSerializer::get_Buffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602950c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferSerializer>(),
                        {"get_Buffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferSerializer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBufferSerializer::*)(::Fusion::Sockets::NetBitBuffer*, bool)>(&::Fusion::Sockets::NetBitBufferSerializer::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6029514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferSerializer>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferSerializer.Writer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetBitBufferSerializer (*)(::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::Sockets::NetBitBufferSerializer::Writer)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6029520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferSerializer>(),
                        {"Writer", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferSerializer.Reader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetBitBufferSerializer (*)(::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::Sockets::NetBitBufferSerializer::Reader)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x602952c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferSerializer>(),
                        {"Reader", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::Sockets::NetBitBufferSerializer::get_Writing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferSerializer>(),
                        {"get_Writing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::Fusion::Sockets::NetBitBuffer* Fusion::Sockets::NetBitBufferSerializer::get_Buffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferSerializer>(),
                        {"get_Buffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetBitBuffer*>(*this, ___internal_method);
}
inline void Fusion::Sockets::NetBitBufferSerializer::_ctor(::Fusion::Sockets::NetBitBuffer*  buffer, bool  write)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferSerializer>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer, write);
}
inline ::Fusion::Sockets::NetBitBufferSerializer Fusion::Sockets::NetBitBufferSerializer::Writer(::Fusion::Sockets::NetBitBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferSerializer>(),
                        {"Writer", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetBitBufferSerializer>(nullptr, ___internal_method, buffer);
}
inline ::Fusion::Sockets::NetBitBufferSerializer Fusion::Sockets::NetBitBufferSerializer::Reader(::Fusion::Sockets::NetBitBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferSerializer>(),
                        {"Reader", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetBitBufferSerializer>(nullptr, ___internal_method, buffer);
}
// Ctor Parameters [CppParam { name: "_write", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_buffer", ty: "::Fusion::Sockets::NetBitBuffer*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetBitBufferSerializer::NetBitBufferSerializer(bool  _write, ::Fusion::Sockets::NetBitBuffer*  _buffer) noexcept  {
this->_write = _write;
this->_buffer = _buffer;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetBitBufferSerializer::NetBitBufferSerializer()   {
}
