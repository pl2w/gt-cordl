#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaNetworkLeaveRoomTrigger.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_impl.hpp"
#include "GorillaNetworking/zzzz__GorillaNetworkLeaveRoomTrigger_def.hpp"
#include "GorillaNetworking/zzzz__GorillaNetworkLeaveRoomTrigger__DisconnectAfterDelay_d__2_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkLeaveRoomTrigger.OnBoxTriggered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaNetworkLeaveRoomTrigger::*)()>(&::GorillaNetworking::GorillaNetworkLeaveRoomTrigger::OnBoxTriggered)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5c8ba80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::GorillaNetworkLeaveRoomTrigger*>(),
                    {::i2c::class_of<::GorillaNetworking::GorillaNetworkLeaveRoomTrigger*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkLeaveRoomTrigger.DisconnectAfterDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaNetworkLeaveRoomTrigger::*)(float_t)>(&::GorillaNetworking::GorillaNetworkLeaveRoomTrigger::DisconnectAfterDelay)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c8bc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkLeaveRoomTrigger*>(),
                        {"DisconnectAfterDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaNetworkLeaveRoomTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaNetworkLeaveRoomTrigger::*)()>(&::GorillaNetworking::GorillaNetworkLeaveRoomTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8bcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkLeaveRoomTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaNetworking::GorillaNetworkLeaveRoomTrigger::__cordl_internal_get_excludePrivateRooms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___excludePrivateRooms;
}
constexpr bool const& GorillaNetworking::GorillaNetworkLeaveRoomTrigger::__cordl_internal_get_excludePrivateRooms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___excludePrivateRooms;
}
constexpr void GorillaNetworking::GorillaNetworkLeaveRoomTrigger::__cordl_internal_set_excludePrivateRooms(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___excludePrivateRooms = value;
}
inline void GorillaNetworking::GorillaNetworkLeaveRoomTrigger::OnBoxTriggered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaNetworking::GorillaNetworkLeaveRoomTrigger*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaNetworkLeaveRoomTrigger::DisconnectAfterDelay(float_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkLeaveRoomTrigger*>(),
                        {"DisconnectAfterDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seconds);
}
inline void GorillaNetworking::GorillaNetworkLeaveRoomTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaNetworkLeaveRoomTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::GorillaNetworkLeaveRoomTrigger* GorillaNetworking::GorillaNetworkLeaveRoomTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GorillaNetworkLeaveRoomTrigger*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GorillaNetworkLeaveRoomTrigger::GorillaNetworkLeaveRoomTrigger()   {
}
