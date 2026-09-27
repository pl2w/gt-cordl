#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/SphereOverlapQueryParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/LagCompensation/zzzz__QueryParams_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SphereOverlapQueryParams)
namespace Fusion::LagCompensation {
struct QueryParams;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Fusion::LagCompensation {
struct SphereOverlapQueryParams;
}
// Write type traits
MARK_VAL_T(::Fusion::LagCompensation::SphereOverlapQueryParams);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::SphereOverlapQueryParams, "Fusion.LagCompensation", "SphereOverlapQueryParams");
// Dependencies Fusion.LagCompensation.QueryParams, UnityEngine.Vector3
namespace Fusion::LagCompensation {
// Is value type: true
// CS Name: Fusion.LagCompensation.SphereOverlapQueryParams
struct CORDL_TYPE SphereOverlapQueryParams {
public:
// Declarations
/// @brief Method .ctor, addr 0x601efac, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::Fusion::LagCompensation::QueryParams  queryParams, ::UnityEngine::Vector3  center, float_t  radius, int32_t  staticHitsCapacity) ;

// Ctor Parameters []
// @brief default ctor
constexpr SphereOverlapQueryParams() ;

// Ctor Parameters [CppParam { name: "QueryParams", ty: "::Fusion::LagCompensation::QueryParams", modifiers: "", def_value: None, comment: None }, CppParam { name: "Center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Radius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "StaticHitsCapacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SphereOverlapQueryParams(::Fusion::LagCompensation::QueryParams  QueryParams, ::UnityEngine::Vector3  Center, float_t  Radius, int32_t  StaticHitsCapacity) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19428};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field QueryParams, offset: 0x0, size: 0x48, def value: None
 ::Fusion::LagCompensation::QueryParams  QueryParams;

/// @brief Field Center, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  Center;

/// @brief Size padding 0x50 - 0x60 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// @brief Field Radius, offset: 0x54, size: 0x4, def value: None
 float_t  Radius;

/// @brief Field StaticHitsCapacity, offset: 0x58, size: 0x4, def value: None
 int32_t  StaticHitsCapacity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::SphereOverlapQueryParams, QueryParams) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::SphereOverlapQueryParams, Center) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::SphereOverlapQueryParams, Radius) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::SphereOverlapQueryParams, StaticHitsCapacity) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::SphereOverlapQueryParams) == 0x50, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
