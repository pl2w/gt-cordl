#pragma once
// IWYU pragma private; include "GlobalNamespace/GameBallPlayerLocal_InputDataMotion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GameBallPlayerLocal_InputDataMotion)
// Forward declare root types
namespace GlobalNamespace {
struct GameBallPlayerLocal_InputDataMotion;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameBallPlayerLocal_InputDataMotion);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameBallPlayerLocal_InputDataMotion, "", "GameBallPlayerLocal/InputDataMotion");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameBallPlayerLocal/InputDataMotion
struct CORDL_TYPE GameBallPlayerLocal_InputDataMotion {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameBallPlayerLocal_InputDataMotion() ;

// Ctor Parameters [CppParam { name: "time", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "angVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr GameBallPlayerLocal_InputDataMotion(double_t  time, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1542};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field time, offset: 0x0, size: 0x8, def value: None
 double_t  time;

/// @brief Field position, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field rotation, offset: 0x14, size: 0x10, def value: None
 ::UnityEngine::Quaternion  rotation;

/// @brief Field velocity, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  velocity;

/// @brief Field angVelocity, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  angVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameBallPlayerLocal_InputDataMotion, time) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBallPlayerLocal_InputDataMotion, position) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBallPlayerLocal_InputDataMotion, rotation) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBallPlayerLocal_InputDataMotion, velocity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBallPlayerLocal_InputDataMotion, angVelocity) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameBallPlayerLocal_InputDataMotion) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
