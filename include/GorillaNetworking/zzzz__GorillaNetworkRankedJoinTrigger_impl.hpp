#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaNetworkRankedJoinTrigger.hpp"
#include "GorillaNetworking/zzzz__GorillaNetworkJoinTrigger_impl.hpp"
#include "GorillaNetworking/zzzz__GorillaNetworkRankedJoinTrigger_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkRankedJoinTrigger.GetFullDesiredGameModeString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::GorillaNetworkRankedJoinTrigger::*)()>(&::GorillaNetworking::GorillaNetworkRankedJoinTrigger::GetFullDesiredGameModeString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c8bff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::GorillaNetworkRankedJoinTrigger*>(),
                    {::i2c::class_of<::GorillaNetworking::GorillaNetworkRankedJoinTrigger*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkRankedJoinTrigger.OnBoxTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaNetworkRankedJoinTrigger::*)()>(&::GorillaNetworking::GorillaNetworkRankedJoinTrigger::OnBoxTriggered)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c8c084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::GorillaNetworkRankedJoinTrigger*>(),
                    {::i2c::class_of<::GorillaNetworking::GorillaNetworkRankedJoinTrigger*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkRankedJoinTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaNetworkRankedJoinTrigger::*)()>(&::GorillaNetworking::GorillaNetworkRankedJoinTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8c23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkRankedJoinTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GorillaNetworking::GorillaNetworkRankedJoinTrigger::GetFullDesiredGameModeString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaNetworking::GorillaNetworkRankedJoinTrigger*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaNetworkRankedJoinTrigger::OnBoxTriggered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaNetworking::GorillaNetworkRankedJoinTrigger*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaNetworkRankedJoinTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkRankedJoinTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::GorillaNetworkRankedJoinTrigger* GorillaNetworking::GorillaNetworkRankedJoinTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GorillaNetworkRankedJoinTrigger*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GorillaNetworkRankedJoinTrigger::GorillaNetworkRankedJoinTrigger()   {
}
