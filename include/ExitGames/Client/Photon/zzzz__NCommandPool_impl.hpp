#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/NCommandPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__NCommandPool_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EnetPeer_def.hpp"
#include "ExitGames/Client/Photon/zzzz__NCommand_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StreamBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommandPool.Acquire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::NCommand* (::ExitGames::Client::Photon::NCommandPool::*)(::ExitGames::Client::Photon::EnetPeer*, ::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::ExitGames::Client::Photon::NCommandPool::Acquire)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa6c182c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommandPool*>(),
                        {"Acquire", {}, {::i2c::type_of<::ExitGames::Client::Photon::EnetPeer*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommandPool.Acquire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::NCommand* (::ExitGames::Client::Photon::NCommandPool::*)(::ExitGames::Client::Photon::EnetPeer*, uint8_t, ::ExitGames::Client::Photon::StreamBuffer*, uint8_t)>(&::ExitGames::Client::Photon::NCommandPool::Acquire)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xa6ba408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommandPool*>(),
                        {"Acquire", {}, {::i2c::type_of<::ExitGames::Client::Photon::EnetPeer*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommandPool.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::NCommandPool::*)(::ExitGames::Client::Photon::NCommand*)>(&::ExitGames::Client::Photon::NCommandPool::Release)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa6c54a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommandPool*>(),
                        {"Release", {}, {::i2c::type_of<::ExitGames::Client::Photon::NCommand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NCommandPool._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::NCommandPool::*)()>(&::ExitGames::Client::Photon::NCommandPool::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa6b9658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommandPool*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::NCommand*>*& ExitGames::Client::Photon::NCommandPool::__cordl_internal_get_pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pool;
}
constexpr ::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::NCommand*>* const& ExitGames::Client::Photon::NCommandPool::__cordl_internal_get_pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pool;
}
constexpr void ExitGames::Client::Photon::NCommandPool::__cordl_internal_set_pool(::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::NCommand*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pool = value;
}
inline ::ExitGames::Client::Photon::NCommand* ExitGames::Client::Photon::NCommandPool::Acquire(::ExitGames::Client::Photon::EnetPeer*  peer, ::ArrayW<uint8_t>  inBuff, ::by_ref<int32_t>  readingOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommandPool*>(),
                        {"Acquire", {}, {::i2c::type_of<::ExitGames::Client::Photon::EnetPeer*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::NCommand*>(this, ___internal_method, peer, inBuff, readingOffset);
}
inline ::ExitGames::Client::Photon::NCommand* ExitGames::Client::Photon::NCommandPool::Acquire(::ExitGames::Client::Photon::EnetPeer*  peer, uint8_t  commandType, ::ExitGames::Client::Photon::StreamBuffer*  payload, uint8_t  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommandPool*>(),
                        {"Acquire", {}, {::i2c::type_of<::ExitGames::Client::Photon::EnetPeer*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ExitGames::Client::Photon::StreamBuffer*>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::NCommand*>(this, ___internal_method, peer, commandType, payload, channel);
}
inline void ExitGames::Client::Photon::NCommandPool::Release(::ExitGames::Client::Photon::NCommand*  nCommand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommandPool*>(),
                        {"Release", {}, {::i2c::type_of<::ExitGames::Client::Photon::NCommand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nCommand);
}
inline void ExitGames::Client::Photon::NCommandPool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::NCommandPool*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::NCommandPool* ExitGames::Client::Photon::NCommandPool::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::NCommandPool*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::NCommandPool::NCommandPool()   {
}
