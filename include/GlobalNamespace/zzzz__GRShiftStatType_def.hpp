#pragma once
// IWYU pragma private; include "GlobalNamespace/GRShiftStatType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRShiftStatType)
// Forward declare root types
namespace GlobalNamespace {
struct GRShiftStatType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRShiftStatType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRShiftStatType, "", "GRShiftStatType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRShiftStatType
struct CORDL_TYPE GRShiftStatType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRShiftStatType_Unwrapped
enum struct __GRShiftStatType_Unwrapped : int32_t {
__E_EnemyDeaths = static_cast<int32_t>(0x0),
__E_PlayerDeaths = static_cast<int32_t>(0x1),
__E_CoresCollected = static_cast<int32_t>(0x2),
__E_SentientCoresCollected = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRShiftStatType_Unwrapped () const noexcept {
return static_cast<__GRShiftStatType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRShiftStatType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRShiftStatType(int32_t  value__) noexcept;

/// @brief Field CoresCollected value: I32(2)
static ::GlobalNamespace::GRShiftStatType const CoresCollected;

/// @brief Field EnemyDeaths value: I32(0)
static ::GlobalNamespace::GRShiftStatType const EnemyDeaths;

/// @brief Field PlayerDeaths value: I32(1)
static ::GlobalNamespace::GRShiftStatType const PlayerDeaths;

/// @brief Field SentientCoresCollected value: I32(3)
static ::GlobalNamespace::GRShiftStatType const SentientCoresCollected;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2038};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRShiftStatType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRShiftStatType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
