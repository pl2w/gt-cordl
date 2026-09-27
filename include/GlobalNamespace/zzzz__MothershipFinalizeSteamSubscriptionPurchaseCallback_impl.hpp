#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipFinalizeSteamSubscriptionPurchaseCallback.hpp"
#include "GlobalNamespace/zzzz__ClientFinalizeSteamSubscriptionPurchaseCompleteDelegateWrapper_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipFinalizeSteamSubscriptionPurchaseCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback::*)()>(&::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x53bf098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback.OnCompleteCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback::*)(::GlobalNamespace::MothershipResponse*, bool, ::GlobalNamespace::MothershipError*, ::System::IntPtr)>(&::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback::OnCompleteCallback)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x53bf0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback*>(), 6}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback::OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, wasSuccess, error, userData);
}
inline ::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback* GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback::MothershipFinalizeSteamSubscriptionPurchaseCallback()   {
}
