#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_LayerSubmit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_RectiPair_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_LayerSubmit)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_LayerSubmit;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_LayerSubmit);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_LayerSubmit, "", "OVRPlugin/LayerSubmit");
// Dependencies OVRPlugin::Posef, OVRPlugin::RectiPair
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/LayerSubmit
struct CORDL_TYPE OVRPlugin_LayerSubmit {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_LayerSubmit() ;

// Ctor Parameters [CppParam { name: "LayerId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "TextureStage", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ViewportRect", ty: "::GlobalNamespace::OVRPlugin_RectiPair", modifiers: "", def_value: None, comment: None }, CppParam { name: "Pose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "LayerSubmitFlags", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_LayerSubmit(int32_t  LayerId, int32_t  TextureStage, ::GlobalNamespace::OVRPlugin_RectiPair  ViewportRect, ::GlobalNamespace::OVRPlugin_Posef  Pose, int32_t  LayerSubmitFlags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12128};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field LayerId, offset: 0x0, size: 0x4, def value: None
 int32_t  LayerId;

/// @brief Field TextureStage, offset: 0x4, size: 0x4, def value: None
 int32_t  TextureStage;

/// @brief Field ViewportRect, offset: 0x8, size: 0x20, def value: None
 ::GlobalNamespace::OVRPlugin_RectiPair  ViewportRect;

/// @brief Field Pose, offset: 0x28, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  Pose;

/// @brief Field LayerSubmitFlags, offset: 0x44, size: 0x4, def value: None
 int32_t  LayerSubmitFlags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_LayerSubmit, LayerId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_LayerSubmit, TextureStage) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_LayerSubmit, ViewportRect) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_LayerSubmit, Pose) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_LayerSubmit, LayerSubmitFlags) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_LayerSubmit) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
