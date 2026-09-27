#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/PositionRotationQueryParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/LagCompensation/zzzz__QueryParams_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PositionRotationQueryParams)
namespace Fusion::LagCompensation {
struct QueryParams;
}
namespace Fusion {
class Hitbox;
}
// Forward declare root types
namespace Fusion::LagCompensation {
struct PositionRotationQueryParams;
}
// Write type traits
MARK_VAL_T(::Fusion::LagCompensation::PositionRotationQueryParams);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::PositionRotationQueryParams, "Fusion.LagCompensation", "PositionRotationQueryParams");
// Dependencies Fusion.LagCompensation.QueryParams
namespace Fusion::LagCompensation {
// Is value type: true
// CS Name: Fusion.LagCompensation.PositionRotationQueryParams
struct CORDL_TYPE PositionRotationQueryParams {
public:
// Declarations
/// @brief Method .ctor, addr 0x601be84, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::Fusion::LagCompensation::QueryParams  queryParams, ::Fusion::Hitbox*  hitbox) ;

// Ctor Parameters []
// @brief default ctor
constexpr PositionRotationQueryParams() ;

// Ctor Parameters [CppParam { name: "QueryParams", ty: "::Fusion::LagCompensation::QueryParams", modifiers: "", def_value: None, comment: None }, CppParam { name: "Hitbox", ty: "::UnityW<::Fusion::Hitbox>", modifiers: "", def_value: None, comment: None }]
constexpr PositionRotationQueryParams(::Fusion::LagCompensation::QueryParams  QueryParams, ::UnityW<::Fusion::Hitbox>  Hitbox) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19419};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field QueryParams, offset: 0x0, size: 0x48, def value: None
 ::Fusion::LagCompensation::QueryParams  QueryParams;

/// @brief Size padding 0x40 - 0x50 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// @brief Field Hitbox, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Fusion::Hitbox>  Hitbox;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::PositionRotationQueryParams, QueryParams) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::PositionRotationQueryParams, Hitbox) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::PositionRotationQueryParams) == 0x40, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
