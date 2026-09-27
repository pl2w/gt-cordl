#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlay_LayerTexture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVROverlay_LayerTexture)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVROverlay_LayerTexture;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVROverlay_LayerTexture);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVROverlay_LayerTexture, "", "OVROverlay/LayerTexture");
// Dependencies System.IntPtr, UnityEngine.Texture
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVROverlay/LayerTexture
struct CORDL_TYPE OVROverlay_LayerTexture {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVROverlay_LayerTexture() ;

// Ctor Parameters [CppParam { name: "appTexture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "appTexturePtr", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "swapChain", ty: "::ArrayW<::UnityW<::UnityEngine::Texture>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "swapChainPtr", ty: "::ArrayW<::System::IntPtr>", modifiers: "", def_value: None, comment: None }]
constexpr OVROverlay_LayerTexture(::UnityW<::UnityEngine::Texture>  appTexture, ::System::IntPtr  appTexturePtr, ::ArrayW<::UnityW<::UnityEngine::Texture>>  swapChain, ::ArrayW<::System::IntPtr>  swapChainPtr) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12006};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field appTexture, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  appTexture;

/// @brief Field appTexturePtr, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  appTexturePtr;

/// @brief Field swapChain, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Texture>>  swapChain;

/// @brief Field swapChainPtr, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::System::IntPtr>  swapChainPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVROverlay_LayerTexture, appTexture) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay_LayerTexture, appTexturePtr) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay_LayerTexture, swapChain) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVROverlay_LayerTexture, swapChainPtr) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVROverlay_LayerTexture) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
