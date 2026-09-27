#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRDisplaySubsystem_XRMirrorViewBlitDesc.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystem_XRMirrorViewBlitDesc_def.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystem_XRBlitParams_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XRDisplaySubsystem_XRMirrorViewBlitDesc.GetBlitParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XRDisplaySubsystem_XRMirrorViewBlitDesc::*)(int32_t, ::by_ref<::GlobalNamespace::XRDisplaySubsystem_XRBlitParams>)>(&::GlobalNamespace::XRDisplaySubsystem_XRMirrorViewBlitDesc::GetBlitParameter)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb937edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRDisplaySubsystem_XRMirrorViewBlitDesc>(),
                        {"GetBlitParameter", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::XRDisplaySubsystem_XRBlitParams>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XRDisplaySubsystem_XRMirrorViewBlitDesc::GetBlitParameter(int32_t  blitParameterIndex, ::by_ref<::GlobalNamespace::XRDisplaySubsystem_XRBlitParams>  blitParameter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRDisplaySubsystem_XRMirrorViewBlitDesc>(),
                        {"GetBlitParameter", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::XRDisplaySubsystem_XRBlitParams>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, blitParameterIndex, blitParameter);
}
// Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nativeBlitAvailable", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nativeBlitInvalidStates", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "blitParamsCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XRDisplaySubsystem_XRMirrorViewBlitDesc::XRDisplaySubsystem_XRMirrorViewBlitDesc(::System::IntPtr  displaySubsystemInstance, bool  nativeBlitAvailable, bool  nativeBlitInvalidStates, int32_t  blitParamsCount) noexcept  {
this->displaySubsystemInstance = displaySubsystemInstance;
this->nativeBlitAvailable = nativeBlitAvailable;
this->nativeBlitInvalidStates = nativeBlitInvalidStates;
this->blitParamsCount = blitParamsCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRDisplaySubsystem_XRMirrorViewBlitDesc::XRDisplaySubsystem_XRMirrorViewBlitDesc()   {
}
