#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/RaycastQueryParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/LagCompensation/zzzz__QueryParams_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RaycastQueryParams)
namespace Fusion::LagCompensation {
struct QueryParams;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Fusion::LagCompensation {
struct RaycastQueryParams;
}
// Write type traits
MARK_VAL_T(::Fusion::LagCompensation::RaycastQueryParams);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::RaycastQueryParams, "Fusion.LagCompensation", "RaycastQueryParams");
// Dependencies Fusion.LagCompensation.QueryParams, UnityEngine.Vector3
namespace Fusion::LagCompensation {
// Is value type: true
// CS Name: Fusion.LagCompensation.RaycastQueryParams
struct CORDL_TYPE RaycastQueryParams {
public:
// Declarations
/// @brief Method .ctor, addr 0x601e3d8, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::Fusion::LagCompensation::QueryParams  queryParams, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  length, int32_t  staticHitsCapacity) ;

// Ctor Parameters []
// @brief default ctor
constexpr RaycastQueryParams() ;

// Ctor Parameters [CppParam { name: "QueryParams", ty: "::Fusion::LagCompensation::QueryParams", modifiers: "", def_value: None, comment: None }, CppParam { name: "Origin", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Direction", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Length", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "StaticHitsCapacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RaycastQueryParams(::Fusion::LagCompensation::QueryParams  QueryParams, ::UnityEngine::Vector3  Origin, ::UnityEngine::Vector3  Direction, float_t  Length, int32_t  StaticHitsCapacity) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19426};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field QueryParams, offset: 0x0, size: 0x48, def value: None
 ::Fusion::LagCompensation::QueryParams  QueryParams;

/// @brief Field Origin, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  Origin;

/// @brief Field Direction, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  Direction;

/// @brief Size padding 0x58 - 0x68 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// @brief Field Length, offset: 0x60, size: 0x4, def value: None
 float_t  Length;

/// @brief Field StaticHitsCapacity, offset: 0x64, size: 0x4, def value: None
 int32_t  StaticHitsCapacity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::RaycastQueryParams, QueryParams) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::RaycastQueryParams, Origin) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::RaycastQueryParams, Direction) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::RaycastQueryParams, Length) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::RaycastQueryParams, StaticHitsCapacity) == 0x64, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::RaycastQueryParams) == 0x58, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
