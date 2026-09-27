#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/ExperimentState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExperimentState)
// Forward declare root types
namespace PlayFab::ExperimentationModels {
struct ExperimentState;
}
// Write type traits
MARK_VAL_T(::PlayFab::ExperimentationModels::ExperimentState);
DEFINE_IL2CPP_CLASS(::PlayFab::ExperimentationModels::ExperimentState, "PlayFab.ExperimentationModels", "ExperimentState");
// Dependencies 
namespace PlayFab::ExperimentationModels {
// Is value type: true
// CS Name: PlayFab.ExperimentationModels.ExperimentState
struct CORDL_TYPE ExperimentState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ExperimentState_Unwrapped
enum struct __ExperimentState_Unwrapped : int32_t {
__E_New = static_cast<int32_t>(0x0),
__E_Started = static_cast<int32_t>(0x1),
__E_Stopped = static_cast<int32_t>(0x2),
__E_Deleted = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ExperimentState_Unwrapped () const noexcept {
return static_cast<__ExperimentState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ExperimentState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ExperimentState(int32_t  value__) noexcept;

/// @brief Field Deleted value: I32(3)
static ::PlayFab::ExperimentationModels::ExperimentState const Deleted;

/// @brief Field New value: I32(0)
static ::PlayFab::ExperimentationModels::ExperimentState const New;

/// @brief Field Started value: I32(1)
static ::PlayFab::ExperimentationModels::ExperimentState const Started;

/// @brief Field Stopped value: I32(2)
static ::PlayFab::ExperimentationModels::ExperimentState const Stopped;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19821};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ExperimentationModels::ExperimentState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ExperimentationModels::ExperimentState) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::ExperimentationModels
