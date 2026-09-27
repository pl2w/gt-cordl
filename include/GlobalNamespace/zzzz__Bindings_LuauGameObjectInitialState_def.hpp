#pragma once
// IWYU pragma private; include "GlobalNamespace/Bindings_LuauGameObjectInitialState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Bindings_LuauGameObjectInitialState)
// Forward declare root types
namespace GlobalNamespace {
struct Bindings_LuauGameObjectInitialState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Bindings_LuauGameObjectInitialState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bindings_LuauGameObjectInitialState, "", "Bindings/LuauGameObjectInitialState");
// [BurstCompile]
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Bindings/LuauGameObjectInitialState
struct CORDL_TYPE Bindings_LuauGameObjectInitialState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Bindings_LuauGameObjectInitialState() ;

// Ctor Parameters [CppParam { name: "Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "Scale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Visible", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Collidable", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Created", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr Bindings_LuauGameObjectInitialState(::UnityEngine::Vector3  Position, ::UnityEngine::Quaternion  Rotation, ::UnityEngine::Vector3  Scale, bool  Visible, bool  Collidable, bool  Created) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3105};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// @brief Field Position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  Position;

/// @brief Field Rotation, offset: 0xc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  Rotation;

/// @brief Field Scale, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  Scale;

/// @brief Field Visible, offset: 0x28, size: 0x1, def value: None
 bool  Visible;

/// @brief Field Collidable, offset: 0x29, size: 0x1, def value: None
 bool  Collidable;

/// @brief Field Created, offset: 0x2a, size: 0x1, def value: None
 bool  Created;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Bindings_LuauGameObjectInitialState, Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauGameObjectInitialState, Rotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauGameObjectInitialState, Scale) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauGameObjectInitialState, Visible) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauGameObjectInitialState, Collidable) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauGameObjectInitialState, Created) == 0x2a, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Bindings_LuauGameObjectInitialState) == 0x2c, "Size mismatch!");

} // namespace end def GlobalNamespace
