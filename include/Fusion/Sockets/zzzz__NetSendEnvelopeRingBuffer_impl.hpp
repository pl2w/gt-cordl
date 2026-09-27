#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetSendEnvelopeRingBuffer.hpp"
#include "Fusion/Sockets/zzzz__NetSendEnvelopeRingBuffer_def.hpp"
#include "Fusion/Sockets/zzzz__NetSendEnvelope_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetSendEnvelopeRingBuffer.get_IsFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetSendEnvelopeRingBuffer::*)()>(&::Fusion::Sockets::NetSendEnvelopeRingBuffer::get_IsFull)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60333c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSendEnvelopeRingBuffer>(),
                        {"get_IsFull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSendEnvelopeRingBuffer.Push
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSendEnvelopeRingBuffer::*)(::Fusion::Sockets::NetSendEnvelope)>(&::Fusion::Sockets::NetSendEnvelopeRingBuffer::Push)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x60333d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSendEnvelopeRingBuffer>(),
                        {"Push", {}, {::i2c::type_of<::Fusion::Sockets::NetSendEnvelope>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSendEnvelopeRingBuffer.Peek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetSendEnvelope (::Fusion::Sockets::NetSendEnvelopeRingBuffer::*)()>(&::Fusion::Sockets::NetSendEnvelopeRingBuffer::Peek)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6033468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSendEnvelopeRingBuffer>(),
                        {"Peek", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSendEnvelopeRingBuffer.Pop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSendEnvelopeRingBuffer::*)()>(&::Fusion::Sockets::NetSendEnvelopeRingBuffer::Pop)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x60334bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSendEnvelopeRingBuffer>(),
                        {"Pop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSendEnvelopeRingBuffer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSendEnvelopeRingBuffer::*)()>(&::Fusion::Sockets::NetSendEnvelopeRingBuffer::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60334fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSendEnvelopeRingBuffer>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSendEnvelopeRingBuffer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSendEnvelopeRingBuffer::*)()>(&::Fusion::Sockets::NetSendEnvelopeRingBuffer::Dispose)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6033508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSendEnvelopeRingBuffer>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSendEnvelopeRingBuffer.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetSendEnvelopeRingBuffer (*)(int32_t)>(&::Fusion::Sockets::NetSendEnvelopeRingBuffer::Create)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6033550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSendEnvelopeRingBuffer>(),
                        {"Create", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::Sockets::NetSendEnvelopeRingBuffer::get_IsFull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSendEnvelopeRingBuffer>(),
                        {"get_IsFull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Fusion::Sockets::NetSendEnvelopeRingBuffer::Push(::Fusion::Sockets::NetSendEnvelope  envelope)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSendEnvelopeRingBuffer>(),
                        {"Push", {}, {::i2c::type_of<::Fusion::Sockets::NetSendEnvelope>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, envelope);
}
inline ::Fusion::Sockets::NetSendEnvelope Fusion::Sockets::NetSendEnvelopeRingBuffer::Peek()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSendEnvelopeRingBuffer>(),
                        {"Peek", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetSendEnvelope>(*this, ___internal_method);
}
inline void Fusion::Sockets::NetSendEnvelopeRingBuffer::Pop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSendEnvelopeRingBuffer>(),
                        {"Pop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Fusion::Sockets::NetSendEnvelopeRingBuffer::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSendEnvelopeRingBuffer>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Fusion::Sockets::NetSendEnvelopeRingBuffer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSendEnvelopeRingBuffer>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::Fusion::Sockets::NetSendEnvelopeRingBuffer Fusion::Sockets::NetSendEnvelopeRingBuffer::Create(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSendEnvelopeRingBuffer>(),
                        {"Create", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetSendEnvelopeRingBuffer>(nullptr, ___internal_method, capacity);
}
// Ctor Parameters [CppParam { name: "_items", ty: "::Fusion::Sockets::NetSendEnvelope*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_itemsCapacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Head", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tail", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetSendEnvelopeRingBuffer::NetSendEnvelopeRingBuffer(::Fusion::Sockets::NetSendEnvelope*  _items, int32_t  _itemsCapacity, int32_t  Head, int32_t  Tail, int32_t  Count) noexcept  {
this->_items = _items;
this->_itemsCapacity = _itemsCapacity;
this->Head = Head;
this->Tail = Tail;
this->Count = Count;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetSendEnvelopeRingBuffer::NetSendEnvelopeRingBuffer()   {
}
