#pragma once
// IWYU pragma private; include "GorillaNetworking/CustomMapNetworkJoinTrigger.hpp"
#include "GorillaNetworking/zzzz__GorillaNetworkJoinTrigger_impl.hpp"
#include "GorillaNetworking/zzzz__CustomMapNetworkJoinTrigger_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::CustomMapNetworkJoinTrigger.GetFullDesiredGameModeString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::CustomMapNetworkJoinTrigger::*)()>(&::GorillaNetworking::CustomMapNetworkJoinTrigger::GetFullDesiredGameModeString)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5c8817c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::CustomMapNetworkJoinTrigger*>(),
                    {::i2c::class_of<::GorillaNetworking::CustomMapNetworkJoinTrigger*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CustomMapNetworkJoinTrigger.GetRoomSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::GorillaNetworking::CustomMapNetworkJoinTrigger::*)(bool)>(&::GorillaNetworking::CustomMapNetworkJoinTrigger::GetRoomSize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c883ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::CustomMapNetworkJoinTrigger*>(),
                    {::i2c::class_of<::GorillaNetworking::CustomMapNetworkJoinTrigger*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CustomMapNetworkJoinTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CustomMapNetworkJoinTrigger::*)()>(&::GorillaNetworking::CustomMapNetworkJoinTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c883fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CustomMapNetworkJoinTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GorillaNetworking::CustomMapNetworkJoinTrigger::GetFullDesiredGameModeString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaNetworking::CustomMapNetworkJoinTrigger*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline uint8_t GorillaNetworking::CustomMapNetworkJoinTrigger::GetRoomSize(bool  subscribed)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaNetworking::CustomMapNetworkJoinTrigger*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, subscribed);
}
inline void GorillaNetworking::CustomMapNetworkJoinTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CustomMapNetworkJoinTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::CustomMapNetworkJoinTrigger* GorillaNetworking::CustomMapNetworkJoinTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CustomMapNetworkJoinTrigger*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CustomMapNetworkJoinTrigger::CustomMapNetworkJoinTrigger()   {
}
