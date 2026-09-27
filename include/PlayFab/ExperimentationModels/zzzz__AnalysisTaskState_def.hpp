#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/AnalysisTaskState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnalysisTaskState)
// Forward declare root types
namespace PlayFab::ExperimentationModels {
struct AnalysisTaskState;
}
// Write type traits
MARK_VAL_T(::PlayFab::ExperimentationModels::AnalysisTaskState);
DEFINE_IL2CPP_CLASS(::PlayFab::ExperimentationModels::AnalysisTaskState, "PlayFab.ExperimentationModels", "AnalysisTaskState");
// Dependencies 
namespace PlayFab::ExperimentationModels {
// Is value type: true
// CS Name: PlayFab.ExperimentationModels.AnalysisTaskState
struct CORDL_TYPE AnalysisTaskState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AnalysisTaskState_Unwrapped
enum struct __AnalysisTaskState_Unwrapped : int32_t {
__E_Waiting = static_cast<int32_t>(0x0),
__E_ReadyForSubmission = static_cast<int32_t>(0x1),
__E_SubmittingToPipeline = static_cast<int32_t>(0x2),
__E_Running = static_cast<int32_t>(0x3),
__E_Completed = static_cast<int32_t>(0x4),
__E_Failed = static_cast<int32_t>(0x5),
__E_Canceled = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AnalysisTaskState_Unwrapped () const noexcept {
return static_cast<__AnalysisTaskState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AnalysisTaskState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AnalysisTaskState(int32_t  value__) noexcept;

/// @brief Field Canceled value: I32(6)
static ::PlayFab::ExperimentationModels::AnalysisTaskState const Canceled;

/// @brief Field Completed value: I32(4)
static ::PlayFab::ExperimentationModels::AnalysisTaskState const Completed;

/// @brief Field Failed value: I32(5)
static ::PlayFab::ExperimentationModels::AnalysisTaskState const Failed;

/// @brief Field ReadyForSubmission value: I32(1)
static ::PlayFab::ExperimentationModels::AnalysisTaskState const ReadyForSubmission;

/// @brief Field Running value: I32(3)
static ::PlayFab::ExperimentationModels::AnalysisTaskState const Running;

/// @brief Field SubmittingToPipeline value: I32(2)
static ::PlayFab::ExperimentationModels::AnalysisTaskState const SubmittingToPipeline;

/// @brief Field Waiting value: I32(0)
static ::PlayFab::ExperimentationModels::AnalysisTaskState const Waiting;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19814};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ExperimentationModels::AnalysisTaskState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ExperimentationModels::AnalysisTaskState) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::ExperimentationModels
