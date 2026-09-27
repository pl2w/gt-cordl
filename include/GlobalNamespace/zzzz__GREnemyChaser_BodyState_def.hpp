#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyChaser_BodyState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GREnemyChaser_BodyState)
// Forward declare root types
namespace GlobalNamespace {
struct GREnemyChaser_BodyState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GREnemyChaser_BodyState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemyChaser_BodyState, "", "GREnemyChaser/BodyState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GREnemyChaser/BodyState
struct CORDL_TYPE GREnemyChaser_BodyState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GREnemyChaser_BodyState_Unwrapped
enum struct __GREnemyChaser_BodyState_Unwrapped : int32_t {
__E_Destroyed = static_cast<int32_t>(0x0),
__E_Bones = static_cast<int32_t>(0x1),
__E_Shell = static_cast<int32_t>(0x2),
__E_Count = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GREnemyChaser_BodyState_Unwrapped () const noexcept {
return static_cast<__GREnemyChaser_BodyState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GREnemyChaser_BodyState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GREnemyChaser_BodyState(int32_t  value__) noexcept;

/// @brief Field Bones value: I32(1)
static ::GlobalNamespace::GREnemyChaser_BodyState const Bones;

/// @brief Field Count value: I32(3)
static ::GlobalNamespace::GREnemyChaser_BodyState const Count;

/// @brief Field Destroyed value: I32(0)
static ::GlobalNamespace::GREnemyChaser_BodyState const Destroyed;

/// @brief Field Shell value: I32(2)
static ::GlobalNamespace::GREnemyChaser_BodyState const Shell;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1948};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemyChaser_BodyState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemyChaser_BodyState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
