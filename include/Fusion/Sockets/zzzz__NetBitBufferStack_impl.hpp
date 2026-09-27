#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetBitBufferStack.hpp"
#include "Fusion/Sockets/zzzz__NetBitBufferStack_def.hpp"
#include "Fusion/Sockets/zzzz__NetBitBuffer_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferStack.TryPop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetBitBufferStack::*)(::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::Sockets::NetBitBufferStack::TryPop)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6029538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferStack>(),
                        {"TryPop", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferStack.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetBitBufferStack (*)(int32_t)>(&::Fusion::Sockets::NetBitBufferStack::Create)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x602958c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferStack>(),
                        {"Create", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferStack.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Fusion::Sockets::NetBitBufferStack>)>(&::Fusion::Sockets::NetBitBufferStack::Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x60295ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferStack>(),
                        {"Dispose", {}, {::i2c::type_of<::by_ref<::Fusion::Sockets::NetBitBufferStack>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferStack.PushFromHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBufferStack::*)(::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::Sockets::NetBitBufferStack::PushFromHead)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6029640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferStack>(),
                        {"PushFromHead", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::Sockets::NetBitBufferStack::TryPop(::Fusion::Sockets::NetBitBuffer*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferStack>(),
                        {"TryPop", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline ::Fusion::Sockets::NetBitBufferStack Fusion::Sockets::NetBitBufferStack::Create(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferStack>(),
                        {"Create", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetBitBufferStack>(nullptr, ___internal_method, capacity);
}
inline void Fusion::Sockets::NetBitBufferStack::Dispose(::by_ref<::Fusion::Sockets::NetBitBufferStack>  stack)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferStack>(),
                        {"Dispose", {}, {::i2c::type_of<::by_ref<::Fusion::Sockets::NetBitBufferStack>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stack);
}
inline void Fusion::Sockets::NetBitBufferStack::PushFromHead(::Fusion::Sockets::NetBitBuffer*  head)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferStack>(),
                        {"PushFromHead", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, head);
}
// Ctor Parameters [CppParam { name: "_capacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Stack", ty: "::Fusion::Sockets::NetBitBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetBitBufferStack::NetBitBufferStack(int32_t  _capacity, ::Fusion::Sockets::NetBitBuffer*  Stack, int32_t  Count) noexcept  {
this->_capacity = _capacity;
this->Stack = Stack;
this->Count = Count;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetBitBufferStack::NetBitBufferStack()   {
}
