#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/BoxOverlapQueryParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/LagCompensation/zzzz__QueryParams_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoxOverlapQueryParams)
namespace Fusion::LagCompensation {
struct QueryParams;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Fusion::LagCompensation {
struct BoxOverlapQueryParams;
}
// Write type traits
MARK_VAL_T(::Fusion::LagCompensation::BoxOverlapQueryParams);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::BoxOverlapQueryParams, "Fusion.LagCompensation", "BoxOverlapQueryParams");
// Dependencies Fusion.LagCompensation.QueryParams, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Fusion::LagCompensation {
// Is value type: true
// CS Name: Fusion.LagCompensation.BoxOverlapQueryParams
struct CORDL_TYPE BoxOverlapQueryParams {
public:
// Declarations
/// @brief Method .ctor, addr 0x601ceec, size 0x98, virtual false, abstract: false, final false
inline void _ctor(::Fusion::LagCompensation::QueryParams  queryParams, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  extents, ::UnityEngine::Quaternion  rotation, int32_t  staticHitsCapacity) ;

// Ctor Parameters []
// @brief default ctor
constexpr BoxOverlapQueryParams() ;

// Ctor Parameters [CppParam { name: "QueryParams", ty: "::Fusion::LagCompensation::QueryParams", modifiers: "", def_value: None, comment: None }, CppParam { name: "Center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Extents", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "StaticHitsCapacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BoxOverlapQueryParams(::Fusion::LagCompensation::QueryParams  QueryParams, ::UnityEngine::Vector3  Center, ::UnityEngine::Vector3  Extents, ::UnityEngine::Quaternion  Rotation, int32_t  StaticHitsCapacity) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19421};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field QueryParams, offset: 0x0, size: 0x48, def value: None
 ::Fusion::LagCompensation::QueryParams  QueryParams;

/// @brief Field Center, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  Center;

/// @brief Field Extents, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  Extents;

/// @brief Field Rotation, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Quaternion  Rotation;

/// @brief Size padding 0x68 - 0x78 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// @brief Field StaticHitsCapacity, offset: 0x70, size: 0x4, def value: None
 int32_t  StaticHitsCapacity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::BoxOverlapQueryParams, QueryParams) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BoxOverlapQueryParams, Center) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BoxOverlapQueryParams, Extents) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BoxOverlapQueryParams, Rotation) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BoxOverlapQueryParams, StaticHitsCapacity) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::BoxOverlapQueryParams) == 0x68, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
