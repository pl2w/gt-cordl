#pragma once
// IWYU pragma private; include "GlobalNamespace/MoonController_SceneData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MoonController_Placement_def.hpp"
#include "GlobalNamespace/zzzz__MoonController_Scenes_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MoonController_SceneData)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct MoonController_SceneData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MoonController_SceneData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MoonController_SceneData, "", "MoonController/SceneData");
// Dependencies MoonController::Placement, MoonController::Scenes
namespace GlobalNamespace {
// Is value type: true
// CS Name: MoonController/SceneData
struct CORDL_TYPE MoonController_SceneData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MoonController_SceneData() ;

// Ctor Parameters [CppParam { name: "scene", ty: "::GlobalNamespace::MoonController_Scenes", modifiers: "", def_value: None, comment: None }, CppParam { name: "referencePoint", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "overridePlacement", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "PlacementOverride", ty: "::GlobalNamespace::MoonController_Placement", modifiers: "", def_value: None, comment: None }]
constexpr MoonController_SceneData(::GlobalNamespace::MoonController_Scenes  scene, ::UnityW<::UnityEngine::Transform>  referencePoint, bool  overridePlacement, ::GlobalNamespace::MoonController_Placement  PlacementOverride) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{562};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field scene, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::MoonController_Scenes  scene;

/// @brief Field referencePoint, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  referencePoint;

/// @brief Field overridePlacement, offset: 0x10, size: 0x1, def value: None
 bool  overridePlacement;

/// @brief Field PlacementOverride, offset: 0x14, size: 0x1c, def value: None
 ::GlobalNamespace::MoonController_Placement  PlacementOverride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MoonController_SceneData, scene) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController_SceneData, referencePoint) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController_SceneData, overridePlacement) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MoonController_SceneData, PlacementOverride) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MoonController_SceneData) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
