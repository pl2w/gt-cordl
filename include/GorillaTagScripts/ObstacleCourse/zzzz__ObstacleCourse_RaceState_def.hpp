#pragma once
// IWYU pragma private; include "GorillaTagScripts/ObstacleCourse/ObstacleCourse_RaceState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObstacleCourse_RaceState)
// Forward declare root types
namespace GlobalNamespace {
struct ObstacleCourse_RaceState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ObstacleCourse_RaceState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ObstacleCourse_RaceState, "GorillaTagScripts.ObstacleCourse", "ObstacleCourse/RaceState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.ObstacleCourse.ObstacleCourse/RaceState
struct CORDL_TYPE ObstacleCourse_RaceState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ObstacleCourse_RaceState_Unwrapped
enum struct __ObstacleCourse_RaceState_Unwrapped : int32_t {
__E_Started = static_cast<int32_t>(0x0),
__E_Waiting = static_cast<int32_t>(0x1),
__E_Finished = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ObstacleCourse_RaceState_Unwrapped () const noexcept {
return static_cast<__ObstacleCourse_RaceState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ObstacleCourse_RaceState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ObstacleCourse_RaceState(int32_t  value__) noexcept;

/// @brief Field Finished value: I32(2)
static ::GlobalNamespace::ObstacleCourse_RaceState const Finished;

/// @brief Field Started value: I32(0)
static ::GlobalNamespace::ObstacleCourse_RaceState const Started;

/// @brief Field Waiting value: I32(1)
static ::GlobalNamespace::ObstacleCourse_RaceState const Waiting;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4111};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObstacleCourse_RaceState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ObstacleCourse_RaceState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
