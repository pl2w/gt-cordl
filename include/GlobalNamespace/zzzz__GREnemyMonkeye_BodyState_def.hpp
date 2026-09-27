#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyMonkeye_BodyState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GREnemyMonkeye_BodyState)
// Forward declare root types
namespace GlobalNamespace {
struct GREnemyMonkeye_BodyState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GREnemyMonkeye_BodyState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemyMonkeye_BodyState, "", "GREnemyMonkeye/BodyState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GREnemyMonkeye/BodyState
struct CORDL_TYPE GREnemyMonkeye_BodyState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GREnemyMonkeye_BodyState_Unwrapped
enum struct __GREnemyMonkeye_BodyState_Unwrapped : int32_t {
__E_Destroyed = static_cast<int32_t>(0x0),
__E_Bones = static_cast<int32_t>(0x1),
__E_Shell = static_cast<int32_t>(0x2),
__E_Count = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GREnemyMonkeye_BodyState_Unwrapped () const noexcept {
return static_cast<__GREnemyMonkeye_BodyState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GREnemyMonkeye_BodyState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GREnemyMonkeye_BodyState(int32_t  value__) noexcept;

/// @brief Field Bones value: I32(1)
static ::GlobalNamespace::GREnemyMonkeye_BodyState const Bones;

/// @brief Field Count value: I32(3)
static ::GlobalNamespace::GREnemyMonkeye_BodyState const Count;

/// @brief Field Destroyed value: I32(0)
static ::GlobalNamespace::GREnemyMonkeye_BodyState const Destroyed;

/// @brief Field Shell value: I32(2)
static ::GlobalNamespace::GREnemyMonkeye_BodyState const Shell;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1953};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemyMonkeye_BodyState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemyMonkeye_BodyState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
