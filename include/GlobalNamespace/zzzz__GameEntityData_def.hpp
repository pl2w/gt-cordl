#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameEntityData)
// Forward declare root types
namespace GlobalNamespace {
struct GameEntityData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameEntityData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntityData, "", "GameEntityData");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameEntityData
struct CORDL_TYPE GameEntityData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameEntityData() ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "angVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "grabbedByActorNumber", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GameEntityData(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, int32_t  grabbedByActorNumber) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1746};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field rotation, offset: 0xc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  rotation;

/// @brief Field velocity, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  velocity;

/// @brief Field angVelocity, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  angVelocity;

/// @brief Field grabbedByActorNumber, offset: 0x34, size: 0x4, def value: None
 int32_t  grabbedByActorNumber;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameEntityData, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityData, rotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityData, velocity) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityData, angVelocity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityData, grabbedByActorNumber) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameEntityData) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
