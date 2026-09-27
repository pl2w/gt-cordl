#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipGetUserInventoryCallback.hpp"
#include "GlobalNamespace/zzzz__GetUserInventoryCompleteClientDelegateWrapper_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipGetUserInventoryCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipGetUserInventoryCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipGetUserInventoryCallback::*)()>(&::GlobalNamespace::MothershipGetUserInventoryCallback::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x53bfa34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipGetUserInventoryCallback*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipGetUserInventoryCallback.OnCompleteCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipGetUserInventoryCallback::*)(::GlobalNamespace::MothershipResponse*, bool, ::GlobalNamespace::MothershipError*, ::System::IntPtr)>(&::GlobalNamespace::MothershipGetUserInventoryCallback::OnCompleteCallback)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x53bfa94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipGetUserInventoryCallback*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipGetUserInventoryCallback*>(), 6}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MothershipGetUserInventoryCallback::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipGetUserInventoryCallback*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipGetUserInventoryCallback::OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipGetUserInventoryCallback*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, wasSuccess, error, userData);
}
inline ::GlobalNamespace::MothershipGetUserInventoryCallback* GlobalNamespace::MothershipGetUserInventoryCallback::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipGetUserInventoryCallback*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipGetUserInventoryCallback::MothershipGetUserInventoryCallback()   {
}
