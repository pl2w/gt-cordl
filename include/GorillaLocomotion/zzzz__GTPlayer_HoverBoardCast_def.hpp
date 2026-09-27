#pragma once
// IWYU pragma private; include "GorillaLocomotion/GTPlayer_HoverBoardCast.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GTPlayer_HoverBoardCast)
// Forward declare root types
namespace GlobalNamespace {
struct GTPlayer_HoverBoardCast;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTPlayer_HoverBoardCast);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTPlayer_HoverBoardCast, "GorillaLocomotion", "GTPlayer/HoverBoardCast");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaLocomotion.GTPlayer/HoverBoardCast
struct CORDL_TYPE GTPlayer_HoverBoardCast {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GTPlayer_HoverBoardCast() ;

// Ctor Parameters [CppParam { name: "localOrigin", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "localDirection", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "sphereRadius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "intersectToVelocityCap", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isSolid", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "didHit", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "pointHit", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "normalHit", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr GTPlayer_HoverBoardCast(::UnityEngine::Vector3  localOrigin, ::UnityEngine::Vector3  localDirection, float_t  sphereRadius, float_t  distance, float_t  intersectToVelocityCap, bool  isSolid, bool  didHit, ::UnityEngine::Vector3  pointHit, ::UnityEngine::Vector3  normalHit) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4502};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field localOrigin, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  localOrigin;

/// @brief Field localDirection, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  localDirection;

/// @brief Field sphereRadius, offset: 0x18, size: 0x4, def value: None
 float_t  sphereRadius;

/// @brief Field distance, offset: 0x1c, size: 0x4, def value: None
 float_t  distance;

/// @brief Field intersectToVelocityCap, offset: 0x20, size: 0x4, def value: None
 float_t  intersectToVelocityCap;

/// @brief Field isSolid, offset: 0x24, size: 0x1, def value: None
 bool  isSolid;

/// @brief Field didHit, offset: 0x25, size: 0x1, def value: None
 bool  didHit;

/// @brief Field pointHit, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  pointHit;

/// @brief Field normalHit, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  normalHit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTPlayer_HoverBoardCast, localOrigin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HoverBoardCast, localDirection) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HoverBoardCast, sphereRadius) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HoverBoardCast, distance) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HoverBoardCast, intersectToVelocityCap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HoverBoardCast, isSolid) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HoverBoardCast, didHit) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HoverBoardCast, pointHit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HoverBoardCast, normalHit) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTPlayer_HoverBoardCast) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
