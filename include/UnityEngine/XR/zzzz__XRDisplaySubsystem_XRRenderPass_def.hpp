#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRDisplaySubsystem_XRRenderPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRDisplaySubsystem_XRRenderPass)
namespace GlobalNamespace {
struct XRDisplaySubsystem_XRRenderParameter;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
struct XRDisplaySubsystem_XRRenderPass;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRDisplaySubsystem_XRRenderPass);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRDisplaySubsystem_XRRenderPass, "UnityEngine.XR", "XRDisplaySubsystem/XRRenderPass");
// [NativeHeader("Modules/XR/Subsystems/Display/XRDisplaySubsystem.bindings.h")]
// [NativeHeader("Runtime/Graphics/CommandBuffer/RenderingCommandBuffer.h")]
// [NativeHeader("Runtime/Graphics/RenderTextureDesc.h")]
// Dependencies System.IntPtr, UnityEngine.RenderTextureDescriptor, UnityEngine.Rendering.RenderTargetIdentifier
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
struct CORDL_TYPE XRDisplaySubsystem_XRRenderPass {
public:
// Declarations
/// [NativeConditional("ENABLE_XR")]
/// [NativeMethod(Name = "XRRenderPassScriptApi::GetRenderParameter", IsFreeFunction = true, HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetRenderParameter, addr 0xb937da0, size 0xa4, virtual false, abstract: false, final false
inline void GetRenderParameter(::UnityEngine::Camera*  camera, int32_t  renderParameterIndex, ::by_ref<::GlobalNamespace::XRDisplaySubsystem_XRRenderParameter>  renderParameter) ;

/// [NativeMethod(Name = "XRRenderPassScriptApi::GetRenderParameterCount", IsFreeFunction = true, HasExplicitThis = true)]
/// [NativeConditional("ENABLE_XR")]
/// @brief Method GetRenderParameterCount, addr 0xb937ea0, size 0x3c, virtual false, abstract: false, final false
inline int32_t GetRenderParameterCount() ;

/// @brief Method GetRenderParameter_Injected, addr 0xb937e44, size 0x5c, virtual false, abstract: false, final false
static inline void GetRenderParameter_Injected(::by_ref<::GlobalNamespace::XRDisplaySubsystem_XRRenderPass>  _unity_self, ::System::IntPtr  camera, int32_t  renderParameterIndex, ::by_ref<::GlobalNamespace::XRDisplaySubsystem_XRRenderParameter>  renderParameter) ;

// Ctor Parameters []
// @brief default ctor
constexpr XRDisplaySubsystem_XRRenderPass() ;

// Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "renderPassIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "renderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: None, comment: None }, CppParam { name: "renderTargetDesc", ty: "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: None, comment: None }, CppParam { name: "renderTargetScaledWidth", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "renderTargetScaledHeight", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasMotionVectorPass", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "motionVectorRenderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: None, comment: None }, CppParam { name: "motionVectorRenderTargetDesc", ty: "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: None, comment: None }, CppParam { name: "shouldFillOutDepth", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "spaceWarpRightHandedNDC", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "cullingPassIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "foveatedRenderingInfo", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr XRDisplaySubsystem_XRRenderPass(::System::IntPtr  displaySubsystemInstance, int32_t  renderPassIndex, ::UnityEngine::Rendering::RenderTargetIdentifier  renderTarget, ::UnityEngine::RenderTextureDescriptor  renderTargetDesc, int32_t  renderTargetScaledWidth, int32_t  renderTargetScaledHeight, bool  hasMotionVectorPass, ::UnityEngine::Rendering::RenderTargetIdentifier  motionVectorRenderTarget, ::UnityEngine::RenderTextureDescriptor  motionVectorRenderTargetDesc, bool  shouldFillOutDepth, bool  spaceWarpRightHandedNDC, int32_t  cullingPassIndex, ::System::IntPtr  foveatedRenderingInfo) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31627};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xe8};

/// @brief Field displaySubsystemInstance, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  displaySubsystemInstance;

/// @brief Field renderPassIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  renderPassIndex;

/// @brief Field renderTarget, offset: 0x10, size: 0x28, def value: None
 ::UnityEngine::Rendering::RenderTargetIdentifier  renderTarget;

/// @brief Field renderTargetDesc, offset: 0x38, size: 0x34, def value: None
 ::UnityEngine::RenderTextureDescriptor  renderTargetDesc;

/// @brief Field renderTargetScaledWidth, offset: 0x6c, size: 0x4, def value: None
 int32_t  renderTargetScaledWidth;

/// @brief Field renderTargetScaledHeight, offset: 0x70, size: 0x4, def value: None
 int32_t  renderTargetScaledHeight;

/// @brief Field hasMotionVectorPass, offset: 0x74, size: 0x1, def value: None
 bool  hasMotionVectorPass;

/// @brief Field motionVectorRenderTarget, offset: 0x78, size: 0x28, def value: None
 ::UnityEngine::Rendering::RenderTargetIdentifier  motionVectorRenderTarget;

/// @brief Field motionVectorRenderTargetDesc, offset: 0xa0, size: 0x34, def value: None
 ::UnityEngine::RenderTextureDescriptor  motionVectorRenderTargetDesc;

/// @brief Field shouldFillOutDepth, offset: 0xd4, size: 0x1, def value: None
 bool  shouldFillOutDepth;

/// @brief Field spaceWarpRightHandedNDC, offset: 0xd5, size: 0x1, def value: None
 bool  spaceWarpRightHandedNDC;

/// @brief Field cullingPassIndex, offset: 0xd8, size: 0x4, def value: None
 int32_t  cullingPassIndex;

/// @brief Field foveatedRenderingInfo, offset: 0xe0, size: 0x8, def value: None
 ::System::IntPtr  foveatedRenderingInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRRenderPass, displaySubsystemInstance) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRRenderPass, renderPassIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRRenderPass, renderTarget) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRRenderPass, renderTargetDesc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRRenderPass, renderTargetScaledWidth) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRRenderPass, renderTargetScaledHeight) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRRenderPass, hasMotionVectorPass) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRRenderPass, motionVectorRenderTarget) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRRenderPass, motionVectorRenderTargetDesc) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRRenderPass, shouldFillOutDepth) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRRenderPass, spaceWarpRightHandedNDC) == 0xd5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRRenderPass, cullingPassIndex) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRRenderPass, foveatedRenderingInfo) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRDisplaySubsystem_XRRenderPass) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace
