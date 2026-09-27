#pragma once
// IWYU pragma private; include "GlobalNamespace/ClackerCosmetic_PerArmData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ClackerCosmetic_PerArmData)
namespace GlobalNamespace {
class ClackerCosmetic;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct ClackerCosmetic_PerArmData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ClackerCosmetic_PerArmData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ClackerCosmetic_PerArmData, "", "ClackerCosmetic/PerArmData");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: ClackerCosmetic/PerArmData
struct CORDL_TYPE ClackerCosmetic_PerArmData {
public:
// Declarations
/// @brief Method SetPosition, addr 0x5648474, size 0x16c, virtual false, abstract: false, final false
inline void SetPosition(::UnityEngine::Vector3  newPosition) ;

/// @brief Method UpdateArm, addr 0x5648014, size 0x460, virtual false, abstract: false, final false
inline void UpdateArm() ;

// Ctor Parameters []
// @brief default ctor
constexpr ClackerCosmetic_PerArmData() ;

// Ctor Parameters [CppParam { name: "parent", ty: "::UnityW<::GlobalNamespace::ClackerCosmetic>", modifiers: "", def_value: None, comment: None }, CppParam { name: "transform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastWorldPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr ClackerCosmetic_PerArmData(::UnityW<::GlobalNamespace::ClackerCosmetic>  parent, ::UnityW<::UnityEngine::Transform>  transform, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  lastWorldPosition) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{693};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field parent, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ClackerCosmetic>  parent;

/// @brief Field transform, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  transform;

/// @brief Field velocity, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  velocity;

/// @brief Field lastWorldPosition, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  lastWorldPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ClackerCosmetic_PerArmData, parent) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClackerCosmetic_PerArmData, transform) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClackerCosmetic_PerArmData, velocity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClackerCosmetic_PerArmData, lastWorldPosition) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ClackerCosmetic_PerArmData) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
