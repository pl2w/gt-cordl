#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/AOEReceiver_AOEContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AOEReceiver_AOEContext)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct AOEReceiver_AOEContext;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AOEReceiver_AOEContext);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AOEReceiver_AOEContext, "GorillaTag.Cosmetics", "AOEReceiver/AOEContext");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.AOEReceiver/AOEContext
struct CORDL_TYPE AOEReceiver_AOEContext {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AOEReceiver_AOEContext() ;

// Ctor Parameters [CppParam { name: "origin", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "instigator", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "baseStrength", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "finalStrength", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "normalizedDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr AOEReceiver_AOEContext(::UnityEngine::Vector3  origin, float_t  radius, ::UnityW<::UnityEngine::GameObject>  instigator, float_t  baseStrength, float_t  finalStrength, float_t  distance, float_t  normalizedDistance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4843};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field origin, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  origin;

/// @brief Field radius, offset: 0xc, size: 0x4, def value: None
 float_t  radius;

/// @brief Field instigator, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  instigator;

/// @brief Field baseStrength, offset: 0x18, size: 0x4, def value: None
 float_t  baseStrength;

/// @brief Field finalStrength, offset: 0x1c, size: 0x4, def value: None
 float_t  finalStrength;

/// @brief Field distance, offset: 0x20, size: 0x4, def value: None
 float_t  distance;

/// @brief Field normalizedDistance, offset: 0x24, size: 0x4, def value: None
 float_t  normalizedDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AOEReceiver_AOEContext, origin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AOEReceiver_AOEContext, radius) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AOEReceiver_AOEContext, instigator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AOEReceiver_AOEContext, baseStrength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AOEReceiver_AOEContext, finalStrength) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AOEReceiver_AOEContext, distance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AOEReceiver_AOEContext, normalizedDistance) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AOEReceiver_AOEContext) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
