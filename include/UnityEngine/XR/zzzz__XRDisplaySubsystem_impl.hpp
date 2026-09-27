#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRDisplaySubsystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystem_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::XRDisplaySubsystem_BindingsMarshaller.ConvertToNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(Il2CppObject*)>(&::UnityEngine::XR::XRDisplaySubsystem_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb937f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::XRDisplaySubsystem_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<Il2CppObject*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::XR::XRDisplaySubsystem_BindingsMarshaller::ConvertToNative(Il2CppObject*  xrDisplaySubsystem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::XRDisplaySubsystem_BindingsMarshaller*>(),
                        {"ConvertToNative", {}, {::i2c::type_of<Il2CppObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, xrDisplaySubsystem);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRDisplaySubsystem_BindingsMarshaller::XRDisplaySubsystem_BindingsMarshaller()   {
}
