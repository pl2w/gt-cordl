#pragma once
// IWYU pragma private; include "GlobalNamespace/GameGrab.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GameGrab)
// Forward declare root types
namespace GlobalNamespace {
struct GameGrab;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameGrab);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameGrab, "", "GameGrab");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameGrab
struct CORDL_TYPE GameGrab {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameGrab() ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
constexpr GameGrab(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1760};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field rotation, offset: 0xc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  rotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameGrab, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameGrab, rotation) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameGrab) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
