#pragma once
// IWYU pragma private; include "GlobalNamespace/Bindings_LuauGameObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Bindings_LuauGameObject)
// Forward declare root types
namespace GlobalNamespace {
struct Bindings_LuauGameObject;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Bindings_LuauGameObject);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bindings_LuauGameObject, "", "Bindings/LuauGameObject");
// [BurstCompile]
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Bindings/LuauGameObject
struct CORDL_TYPE Bindings_LuauGameObject {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Bindings_LuauGameObject() ;

// Ctor Parameters [CppParam { name: "Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "Scale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr Bindings_LuauGameObject(::UnityEngine::Vector3  Position, ::UnityEngine::Quaternion  Rotation, ::UnityEngine::Vector3  Scale) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3104};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  Position;

/// @brief Field Rotation, offset: 0xc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  Rotation;

/// @brief Field Scale, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  Scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Bindings_LuauGameObject, Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauGameObject, Rotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_LuauGameObject, Scale) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Bindings_LuauGameObject) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
