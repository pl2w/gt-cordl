#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/Vector3Bool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Vector3Bool)
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
struct Vector3Bool;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::Rigging::Vector3Bool);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::Vector3Bool, "UnityEngine.Animations.Rigging", "Vector3Bool");
// Dependencies 
namespace UnityEngine::Animations::Rigging {
// Is value type: true
// CS Name: UnityEngine.Animations.Rigging.Vector3Bool
struct CORDL_TYPE Vector3Bool {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Vector3Bool() ;

// Ctor Parameters [CppParam { name: "x", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "z", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr Vector3Bool(bool  x, bool  y, bool  z) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32325};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3};

/// @brief Field x, offset: 0x0, size: 0x1, def value: None
 bool  x;

/// @brief Field y, offset: 0x1, size: 0x1, def value: None
 bool  y;

/// @brief Field z, offset: 0x2, size: 0x1, def value: None
 bool  z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::Rigging::Vector3Bool, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::Vector3Bool, y) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Animations::Rigging::Vector3Bool, z) == 0x2, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::Rigging::Vector3Bool) == 0x3, "Size mismatch!");

} // namespace end def UnityEngine::Animations::Rigging
