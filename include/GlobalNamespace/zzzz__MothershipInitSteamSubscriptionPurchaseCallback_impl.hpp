#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipInitSteamSubscriptionPurchaseCallback.hpp"
#include "GlobalNamespace/zzzz__ClientInitSteamSubscriptionPurchaseCompleteDelegateWrapper_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipInitSteamSubscriptionPurchaseCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback::*)()>(&::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x53beeac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback.OnCompleteCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback::*)(::GlobalNamespace::MothershipResponse*, bool, ::GlobalNamespace::MothershipError*, ::System::IntPtr)>(&::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback::OnCompleteCallback)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x53bef0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback*>(), 6}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback::OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, wasSuccess, error, userData);
}
inline ::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback* GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback::MothershipInitSteamSubscriptionPurchaseCallback()   {
}
