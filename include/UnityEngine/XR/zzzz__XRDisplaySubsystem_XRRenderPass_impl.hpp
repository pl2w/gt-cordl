#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRDisplaySubsystem_XRRenderPass.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystem_XRRenderPass_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystem_XRRenderParameter_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XRDisplaySubsystem_XRRenderPass.GetRenderParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XRDisplaySubsystem_XRRenderPass::*)(::UnityEngine::Camera*, int32_t, ::by_ref<::GlobalNamespace::XRDisplaySubsystem_XRRenderParameter>)>(&::GlobalNamespace::XRDisplaySubsystem_XRRenderPass::GetRenderParameter)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb937da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRDisplaySubsystem_XRRenderPass>(),
                        {"GetRenderParameter", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::XRDisplaySubsystem_XRRenderParameter>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XRDisplaySubsystem_XRRenderPass.GetRenderParameterCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::XRDisplaySubsystem_XRRenderPass::*)()>(&::GlobalNamespace::XRDisplaySubsystem_XRRenderPass::GetRenderParameterCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb937ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRDisplaySubsystem_XRRenderPass>(),
                        {"GetRenderParameterCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XRDisplaySubsystem_XRRenderPass.GetRenderParameter_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::XRDisplaySubsystem_XRRenderPass>, ::System::IntPtr, int32_t, ::by_ref<::GlobalNamespace::XRDisplaySubsystem_XRRenderParameter>)>(&::GlobalNamespace::XRDisplaySubsystem_XRRenderPass::GetRenderParameter_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb937e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRDisplaySubsystem_XRRenderPass>(),
                        {"GetRenderParameter_Injected", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::XRDisplaySubsystem_XRRenderPass>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::XRDisplaySubsystem_XRRenderParameter>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XRDisplaySubsystem_XRRenderPass::GetRenderParameter(::UnityEngine::Camera*  camera, int32_t  renderParameterIndex, ::by_ref<::GlobalNamespace::XRDisplaySubsystem_XRRenderParameter>  renderParameter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRDisplaySubsystem_XRRenderPass>(),
                        {"GetRenderParameter", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::XRDisplaySubsystem_XRRenderParameter>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, camera, renderParameterIndex, renderParameter);
}
inline int32_t GlobalNamespace::XRDisplaySubsystem_XRRenderPass::GetRenderParameterCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRDisplaySubsystem_XRRenderPass>(),
                        {"GetRenderParameterCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::XRDisplaySubsystem_XRRenderPass::GetRenderParameter_Injected(::by_ref<::GlobalNamespace::XRDisplaySubsystem_XRRenderPass>  _unity_self, ::System::IntPtr  camera, int32_t  renderParameterIndex, ::by_ref<::GlobalNamespace::XRDisplaySubsystem_XRRenderParameter>  renderParameter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRDisplaySubsystem_XRRenderPass>(),
                        {"GetRenderParameter_Injected", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::XRDisplaySubsystem_XRRenderPass>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::XRDisplaySubsystem_XRRenderParameter>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, camera, renderParameterIndex, renderParameter);
}
// Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "renderPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "renderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "renderTargetDesc", ty: "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "renderTargetScaledWidth", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "renderTargetScaledHeight", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasMotionVectorPass", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "motionVectorRenderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "motionVectorRenderTargetDesc", ty: "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shouldFillOutDepth", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "spaceWarpRightHandedNDC", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cullingPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "foveatedRenderingInfo", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XRDisplaySubsystem_XRRenderPass::XRDisplaySubsystem_XRRenderPass(::System::IntPtr  displaySubsystemInstance, int32_t  renderPassIndex, ::UnityEngine::Rendering::RenderTargetIdentifier  renderTarget, ::UnityEngine::RenderTextureDescriptor  renderTargetDesc, int32_t  renderTargetScaledWidth, int32_t  renderTargetScaledHeight, bool  hasMotionVectorPass, ::UnityEngine::Rendering::RenderTargetIdentifier  motionVectorRenderTarget, ::UnityEngine::RenderTextureDescriptor  motionVectorRenderTargetDesc, bool  shouldFillOutDepth, bool  spaceWarpRightHandedNDC, int32_t  cullingPassIndex, ::System::IntPtr  foveatedRenderingInfo) noexcept  {
this->displaySubsystemInstance = displaySubsystemInstance;
this->renderPassIndex = renderPassIndex;
this->renderTarget = renderTarget;
this->renderTargetDesc = renderTargetDesc;
this->renderTargetScaledWidth = renderTargetScaledWidth;
this->renderTargetScaledHeight = renderTargetScaledHeight;
this->hasMotionVectorPass = hasMotionVectorPass;
this->motionVectorRenderTarget = motionVectorRenderTarget;
this->motionVectorRenderTargetDesc = motionVectorRenderTargetDesc;
this->shouldFillOutDepth = shouldFillOutDepth;
this->spaceWarpRightHandedNDC = spaceWarpRightHandedNDC;
this->cullingPassIndex = cullingPassIndex;
this->foveatedRenderingInfo = foveatedRenderingInfo;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRDisplaySubsystem_XRRenderPass::XRDisplaySubsystem_XRRenderPass()   {
}
