#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/AABB.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AABB)
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Fusion::LagCompensation {
struct AABB;
}
// Write type traits
MARK_VAL_T(::Fusion::LagCompensation::AABB);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::AABB, "Fusion.LagCompensation", "AABB");
// [IsReadOnly]
// Dependencies UnityEngine.Vector3
namespace Fusion::LagCompensation {
// Is value type: true
// CS Name: Fusion.LagCompensation.AABB
struct CORDL_TYPE AABB {
public:
// Declarations
/// @brief Method .ctor, addr 0x601bd88, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Bounds  bounds) ;

/// @brief Method .ctor, addr 0x601bdec, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  extents) ;

/// @brief Method .ctor, addr 0x601be20, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  pointA, ::UnityEngine::Vector3  pointB) ;

// Ctor Parameters []
// @brief default ctor
constexpr AABB() ;

// Ctor Parameters [CppParam { name: "Center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Extents", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Min", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Max", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr AABB(::UnityEngine::Vector3  Center, ::UnityEngine::Vector3  Extents, ::UnityEngine::Vector3  Min, ::UnityEngine::Vector3  Max) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19418};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field Center, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  Center;

/// @brief Field Extents, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  Extents;

/// @brief Field Min, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  Min;

/// @brief Field Max, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  Max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::AABB, Center) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::AABB, Extents) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::AABB, Min) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::AABB, Max) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::AABB) == 0x30, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
