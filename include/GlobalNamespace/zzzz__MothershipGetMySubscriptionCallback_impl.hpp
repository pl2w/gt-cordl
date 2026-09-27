#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipGetMySubscriptionCallback.hpp"
#include "GlobalNamespace/zzzz__ClientGetMySubscriptionCompleteDelegateWrapper_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipGetMySubscriptionCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipGetMySubscriptionCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipGetMySubscriptionCallback::*)()>(&::GlobalNamespace::MothershipGetMySubscriptionCallback::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x53bead4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipGetMySubscriptionCallback*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipGetMySubscriptionCallback.OnCompleteCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipGetMySubscriptionCallback::*)(::GlobalNamespace::MothershipResponse*, bool, ::GlobalNamespace::MothershipError*, ::System::IntPtr)>(&::GlobalNamespace::MothershipGetMySubscriptionCallback::OnCompleteCallback)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x53beb34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipGetMySubscriptionCallback*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipGetMySubscriptionCallback*>(), 6}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MothershipGetMySubscriptionCallback::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipGetMySubscriptionCallback*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipGetMySubscriptionCallback::OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipGetMySubscriptionCallback*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, wasSuccess, error, userData);
}
inline ::GlobalNamespace::MothershipGetMySubscriptionCallback* GlobalNamespace::MothershipGetMySubscriptionCallback::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipGetMySubscriptionCallback*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipGetMySubscriptionCallback::MothershipGetMySubscriptionCallback()   {
}
