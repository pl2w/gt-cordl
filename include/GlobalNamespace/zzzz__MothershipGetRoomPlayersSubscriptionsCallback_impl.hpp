#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipGetRoomPlayersSubscriptionsCallback.hpp"
#include "GlobalNamespace/zzzz__ClientGetBulkSubscriptionsCompleteDelegateWrapper_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipGetRoomPlayersSubscriptionsCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback::*)()>(&::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x53becc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback.OnCompleteCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback::*)(::GlobalNamespace::MothershipResponse*, bool, ::GlobalNamespace::MothershipError*, ::System::IntPtr)>(&::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback::OnCompleteCallback)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x53bed20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback*>(), 6}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback::OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, wasSuccess, error, userData);
}
inline ::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback* GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback::MothershipGetRoomPlayersSubscriptionsCallback()   {
}
