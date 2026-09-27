#pragma once
// IWYU pragma private; include "GorillaTag/StaticLodManager_GroupInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(StaticLodManager_GroupInfo)
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
struct StaticLodManager_GroupInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StaticLodManager_GroupInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StaticLodManager_GroupInfo, "GorillaTag", "StaticLodManager/GroupInfo");
// Dependencies UnityEngine.Bounds, UnityEngine.Collider, UnityEngine.Renderer, UnityEngine.UI.Graphic, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.StaticLodManager/GroupInfo
struct CORDL_TYPE StaticLodManager_GroupInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr StaticLodManager_GroupInfo() ;

// Ctor Parameters [CppParam { name: "isLoaded", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "componentEnabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "radiusSq", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bounds", ty: "::UnityEngine::Bounds", modifiers: "", def_value: None, comment: None }, CppParam { name: "uiEnabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "uiEnableDistanceSq", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "uiGraphics", ty: "::ArrayW<::UnityW<::UnityEngine::UI::Graphic>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "renderers", ty: "::ArrayW<::UnityW<::UnityEngine::Renderer>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "collidersEnabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "collisionEnableDistanceSq", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "interactableColliders", ty: "::ArrayW<::UnityW<::UnityEngine::Collider>>", modifiers: "", def_value: None, comment: None }]
constexpr StaticLodManager_GroupInfo(bool  isLoaded, bool  componentEnabled, ::UnityEngine::Vector3  center, float_t  radiusSq, ::UnityEngine::Bounds  bounds, bool  uiEnabled, float_t  uiEnableDistanceSq, ::ArrayW<::UnityW<::UnityEngine::UI::Graphic>>  uiGraphics, ::ArrayW<::UnityW<::UnityEngine::Renderer>>  renderers, bool  collidersEnabled, float_t  collisionEnableDistanceSq, ::ArrayW<::UnityW<::UnityEngine::Collider>>  interactableColliders) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4617};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field isLoaded, offset: 0x0, size: 0x1, def value: None
 bool  isLoaded;

/// @brief Field componentEnabled, offset: 0x1, size: 0x1, def value: None
 bool  componentEnabled;

/// @brief Field center, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  center;

/// @brief Field radiusSq, offset: 0x10, size: 0x4, def value: None
 float_t  radiusSq;

/// @brief Field bounds, offset: 0x14, size: 0x18, def value: None
 ::UnityEngine::Bounds  bounds;

/// @brief Field uiEnabled, offset: 0x2c, size: 0x1, def value: None
 bool  uiEnabled;

/// @brief Field uiEnableDistanceSq, offset: 0x30, size: 0x4, def value: None
 float_t  uiEnableDistanceSq;

/// @brief Field uiGraphics, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::UI::Graphic>>  uiGraphics;

/// @brief Field renderers, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  renderers;

/// @brief Field collidersEnabled, offset: 0x48, size: 0x1, def value: None
 bool  collidersEnabled;

/// @brief Field collisionEnableDistanceSq, offset: 0x4c, size: 0x4, def value: None
 float_t  collisionEnableDistanceSq;

/// @brief Field interactableColliders, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  interactableColliders;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StaticLodManager_GroupInfo, isLoaded) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticLodManager_GroupInfo, componentEnabled) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticLodManager_GroupInfo, center) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticLodManager_GroupInfo, radiusSq) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticLodManager_GroupInfo, bounds) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticLodManager_GroupInfo, uiEnabled) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticLodManager_GroupInfo, uiEnableDistanceSq) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticLodManager_GroupInfo, uiGraphics) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticLodManager_GroupInfo, renderers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticLodManager_GroupInfo, collidersEnabled) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticLodManager_GroupInfo, collisionEnableDistanceSq) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticLodManager_GroupInfo, interactableColliders) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StaticLodManager_GroupInfo) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
