#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/HitboxHit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HitboxHit)
namespace Fusion {
class Hitbox;
}
// Forward declare root types
namespace Fusion::LagCompensation {
struct HitboxHit;
}
// Write type traits
MARK_VAL_T(::Fusion::LagCompensation::HitboxHit);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::HitboxHit, "Fusion.LagCompensation", "HitboxHit");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace Fusion::LagCompensation {
// Is value type: true
// CS Name: Fusion.LagCompensation.HitboxHit
struct CORDL_TYPE HitboxHit {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HitboxHit() ;

// Ctor Parameters [CppParam { name: "Point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Distance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Hitbox", ty: "::UnityW<::Fusion::Hitbox>", modifiers: "", def_value: None, comment: None }, CppParam { name: "DebugPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "DebugRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "DebugTick", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Alpha", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr HitboxHit(::UnityEngine::Vector3  Point, ::UnityEngine::Vector3  Normal, float_t  Distance, ::UnityW<::Fusion::Hitbox>  Hitbox, ::UnityEngine::Vector3  DebugPosition, ::UnityEngine::Quaternion  DebugRotation, int32_t  DebugTick, float_t  Alpha) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19410};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field Point, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  Point;

/// @brief Field Normal, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  Normal;

/// @brief Field Distance, offset: 0x18, size: 0x4, def value: None
 float_t  Distance;

/// @brief Field Hitbox, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Fusion::Hitbox>  Hitbox;

/// @brief Field DebugPosition, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  DebugPosition;

/// @brief Field DebugRotation, offset: 0x34, size: 0x10, def value: None
 ::UnityEngine::Quaternion  DebugRotation;

/// @brief Field DebugTick, offset: 0x44, size: 0x4, def value: None
 int32_t  DebugTick;

/// @brief Field Alpha, offset: 0x48, size: 0x4, def value: None
 float_t  Alpha;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::HitboxHit, Point) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxHit, Normal) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxHit, Distance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxHit, Hitbox) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxHit, DebugPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxHit, DebugRotation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxHit, DebugTick) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxHit, Alpha) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::HitboxHit) == 0x50, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
