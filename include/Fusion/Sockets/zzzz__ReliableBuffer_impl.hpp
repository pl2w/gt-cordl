#pragma once
// IWYU pragma private; include "Fusion/Sockets/ReliableBuffer.hpp"
#include "Fusion/Sockets/zzzz__NetSequencer_impl.hpp"
#include "Fusion/Sockets/zzzz__ReliableList_impl.hpp"
#include "Fusion/Sockets/zzzz__ReliableBuffer_def.hpp"
#include "Fusion/Sockets/zzzz__NetBitBuffer_def.hpp"
#include "Fusion/Sockets/zzzz__ReliableId_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::ReliableBuffer.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::ReliableBuffer (*)()>(&::Fusion::Sockets::ReliableBuffer::Create)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6033644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableBuffer>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::ReliableBuffer.NextSendSequence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Fusion::Sockets::ReliableBuffer::*)()>(&::Fusion::Sockets::ReliableBuffer::NextSendSequence)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6033668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableBuffer>(),
                        {"NextSendSequence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::ReliableBuffer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::ReliableBuffer::*)()>(&::Fusion::Sockets::ReliableBuffer::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6033680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableBuffer>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::ReliableBuffer.LateReceive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::ReliableBuffer::*)(::by_ref<void*>, ::by_ref<::Fusion::Sockets::ReliableId>, ::by_ref<uint8_t*>)>(&::Fusion::Sockets::ReliableBuffer::LateReceive)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6033724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableBuffer>(),
                        {"LateReceive", {}, {::i2c::type_of<::by_ref<void*>>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::ReliableId>>(), ::i2c::type_of<::by_ref<uint8_t*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::ReliableBuffer.LateFree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::ReliableBuffer::*)(::by_ref<void*>)>(&::Fusion::Sockets::ReliableBuffer::LateFree)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6033880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableBuffer>(),
                        {"LateFree", {}, {::i2c::type_of<::by_ref<void*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::ReliableBuffer.Receive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::ReliableBuffer::*)(::Fusion::Sockets::NetBitBuffer*, ::by_ref<::Fusion::Sockets::ReliableId>)>(&::Fusion::Sockets::ReliableBuffer::Receive)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x603388c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableBuffer>(),
                        {"Receive", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::ReliableId>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Fusion::Sockets::ReliableBuffer Fusion::Sockets::ReliableBuffer::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableBuffer>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::ReliableBuffer>(nullptr, ___internal_method);
}
inline uint64_t Fusion::Sockets::ReliableBuffer::NextSendSequence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableBuffer>(),
                        {"NextSendSequence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void Fusion::Sockets::ReliableBuffer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableBuffer>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Fusion::Sockets::ReliableBuffer::LateReceive(::by_ref<void*>  root, ::by_ref<::Fusion::Sockets::ReliableId>  id, ::by_ref<uint8_t*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableBuffer>(),
                        {"LateReceive", {}, {::i2c::type_of<::by_ref<void*>>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::ReliableId>>(), ::i2c::type_of<::by_ref<uint8_t*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, root, id, data);
}
inline void Fusion::Sockets::ReliableBuffer::LateFree(::by_ref<void*>  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableBuffer>(),
                        {"LateFree", {}, {::i2c::type_of<::by_ref<void*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, root);
}
inline bool Fusion::Sockets::ReliableBuffer::Receive(::Fusion::Sockets::NetBitBuffer*  buffer, ::by_ref<::Fusion::Sockets::ReliableId>  rid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::ReliableBuffer>(),
                        {"Receive", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>(), ::i2c::type_of<::by_ref<::Fusion::Sockets::ReliableId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, buffer, rid);
}
// Ctor Parameters [CppParam { name: "_sequencer", ty: "::Fusion::Sockets::NetSequencer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_receiveList", ty: "::Fusion::Sockets::ReliableList", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_receiveSequence", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::ReliableBuffer::ReliableBuffer(::Fusion::Sockets::NetSequencer  _sequencer, ::Fusion::Sockets::ReliableList  _receiveList, uint64_t  _receiveSequence) noexcept  {
this->_sequencer = _sequencer;
this->_receiveList = _receiveList;
this->_receiveSequence = _receiveSequence;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::ReliableBuffer::ReliableBuffer()   {
}
