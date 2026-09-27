#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetBitBufferBlock.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Fusion/Sockets/zzzz__NetBitBufferBlock_def.hpp"
#include "Fusion/Sockets/zzzz__NetBitBuffer_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferBlock.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Fusion::Sockets::NetBitBufferBlock*>)>(&::Fusion::Sockets::NetBitBufferBlock::Dispose)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6028f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferBlock>(),
                        {"Dispose", {}, {::i2c::type_of<::by_ref<::Fusion::Sockets::NetBitBufferBlock*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferBlock.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetBitBufferBlock* (*)(int32_t)>(&::Fusion::Sockets::NetBitBufferBlock::Create)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6028ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferBlock>(),
                        {"Create", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferBlock.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetBitBufferBlock::*)(::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::Sockets::NetBitBufferBlock::Release)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6027610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferBlock>(),
                        {"Release", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferBlock.TryAcquire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetBitBuffer* (::Fusion::Sockets::NetBitBufferBlock::*)()>(&::Fusion::Sockets::NetBitBufferBlock::TryAcquire)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6029048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferBlock>(),
                        {"TryAcquire", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetBitBufferBlock.TryAcquire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetBitBufferBlock::*)(::by_ref<::Fusion::Sockets::NetBitBuffer*>)>(&::Fusion::Sockets::NetBitBufferBlock::TryAcquire)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6029060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferBlock>(),
                        {"TryAcquire", {}, {::i2c::type_of<::by_ref<::Fusion::Sockets::NetBitBuffer*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Sockets::NetBitBufferBlock::Dispose(::by_ref<::Fusion::Sockets::NetBitBufferBlock*>  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferBlock>(),
                        {"Dispose", {}, {::i2c::type_of<::by_ref<::Fusion::Sockets::NetBitBufferBlock*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, block);
}
inline ::Fusion::Sockets::NetBitBufferBlock* Fusion::Sockets::NetBitBufferBlock::Create(int32_t  packetSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferBlock>(),
                        {"Create", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetBitBufferBlock*>(nullptr, ___internal_method, packetSize);
}
inline void Fusion::Sockets::NetBitBufferBlock::Release(::Fusion::Sockets::NetBitBuffer*  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferBlock>(),
                        {"Release", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr);
}
inline ::Fusion::Sockets::NetBitBuffer* Fusion::Sockets::NetBitBufferBlock::TryAcquire()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferBlock>(),
                        {"TryAcquire", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetBitBuffer*>(*this, ___internal_method);
}
inline bool Fusion::Sockets::NetBitBufferBlock::TryAcquire(::by_ref<::Fusion::Sockets::NetBitBuffer*>  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetBitBufferBlock>(),
                        {"TryAcquire", {}, {::i2c::type_of<::by_ref<::Fusion::Sockets::NetBitBuffer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, ptr);
}
// Ctor Parameters [CppParam { name: "_packetSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_freeHead", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_self", ty: "::Fusion::Sockets::NetBitBufferBlock*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_allocatedHead", ty: "::Fusion::Sockets::NetBitBuffer*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetBitBufferBlock::NetBitBufferBlock(int32_t  _packetSize, ::System::IntPtr  _freeHead, ::Fusion::Sockets::NetBitBufferBlock*  _self, ::Fusion::Sockets::NetBitBuffer*  _allocatedHead) noexcept  {
this->_packetSize = _packetSize;
this->_freeHead = _freeHead;
this->_self = _self;
this->_allocatedHead = _allocatedHead;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetBitBufferBlock::NetBitBufferBlock()   {
}
