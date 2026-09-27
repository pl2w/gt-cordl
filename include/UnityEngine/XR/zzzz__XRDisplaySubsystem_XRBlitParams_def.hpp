#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRDisplaySubsystem_XRBlitParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__ColorGamut_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRDisplaySubsystem_XRBlitParams)
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
struct XRDisplaySubsystem_XRBlitParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRDisplaySubsystem_XRBlitParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRDisplaySubsystem_XRBlitParams, "UnityEngine.XR", "XRDisplaySubsystem/XRBlitParams");
// [NativeHeader("Runtime/Graphics/RenderTexture.h")]
// [NativeHeader("Modules/XR/Subsystems/Display/XRDisplaySubsystem.bindings.h")]
// Dependencies System.IntPtr, UnityEngine.ColorGamut, UnityEngine.Rect
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.XRDisplaySubsystem/XRBlitParams
struct CORDL_TYPE XRDisplaySubsystem_XRBlitParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr XRDisplaySubsystem_XRBlitParams() ;

// Ctor Parameters [CppParam { name: "srcTex", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "srcTexArraySlice", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "srcRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "destRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "foveatedRenderingInfo", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "srcHdrEncoded", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "srcHdrColorGamut", ty: "::UnityEngine::ColorGamut", modifiers: "", def_value: None, comment: None }, CppParam { name: "srcHdrMaxLuminance", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRDisplaySubsystem_XRBlitParams(::UnityW<::UnityEngine::RenderTexture>  srcTex, int32_t  srcTexArraySlice, ::UnityEngine::Rect  srcRect, ::UnityEngine::Rect  destRect, ::System::IntPtr  foveatedRenderingInfo, bool  srcHdrEncoded, ::UnityEngine::ColorGamut  srcHdrColorGamut, int32_t  srcHdrMaxLuminance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31628};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field srcTex, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  srcTex;

/// @brief Field srcTexArraySlice, offset: 0x8, size: 0x4, def value: None
 int32_t  srcTexArraySlice;

/// @brief Field srcRect, offset: 0xc, size: 0x10, def value: None
 ::UnityEngine::Rect  srcRect;

/// @brief Field destRect, offset: 0x1c, size: 0x10, def value: None
 ::UnityEngine::Rect  destRect;

/// @brief Field foveatedRenderingInfo, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  foveatedRenderingInfo;

/// @brief Field srcHdrEncoded, offset: 0x38, size: 0x1, def value: None
 bool  srcHdrEncoded;

/// @brief Field srcHdrColorGamut, offset: 0x3c, size: 0x4, def value: None
 ::UnityEngine::ColorGamut  srcHdrColorGamut;

/// @brief Field srcHdrMaxLuminance, offset: 0x40, size: 0x4, def value: None
 int32_t  srcHdrMaxLuminance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRBlitParams, srcTex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRBlitParams, srcTexArraySlice) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRBlitParams, srcRect) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRBlitParams, destRect) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRBlitParams, foveatedRenderingInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRBlitParams, srcHdrEncoded) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRBlitParams, srcHdrColorGamut) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRBlitParams, srcHdrMaxLuminance) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRDisplaySubsystem_XRBlitParams) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
