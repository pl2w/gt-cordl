#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/GetTreatmentAssignmentResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GetTreatmentAssignmentResult)
namespace PlayFab::ExperimentationModels {
class TreatmentAssignment;
}
// Forward declare root types
namespace PlayFab::ExperimentationModels {
class GetTreatmentAssignmentResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ExperimentationModels::GetTreatmentAssignmentResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ExperimentationModels::GetTreatmentAssignmentResult*, "PlayFab.ExperimentationModels", "GetTreatmentAssignmentResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ExperimentationModels {
// Is value type: false
// CS Name: PlayFab.ExperimentationModels.GetTreatmentAssignmentResult
class CORDL_TYPE GetTreatmentAssignmentResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field TreatmentAssignment, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TreatmentAssignment, put=__cordl_internal_set_TreatmentAssignment)) ::PlayFab::ExperimentationModels::TreatmentAssignment*  TreatmentAssignment;

static inline ::PlayFab::ExperimentationModels::GetTreatmentAssignmentResult* New_ctor() ;

constexpr ::PlayFab::ExperimentationModels::TreatmentAssignment* const& __cordl_internal_get_TreatmentAssignment() const;

constexpr ::PlayFab::ExperimentationModels::TreatmentAssignment*& __cordl_internal_get_TreatmentAssignment() ;

constexpr void __cordl_internal_set_TreatmentAssignment(::PlayFab::ExperimentationModels::TreatmentAssignment*  value) ;

/// @brief Method .ctor, addr 0xa840ed0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetTreatmentAssignmentResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetTreatmentAssignmentResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetTreatmentAssignmentResult(GetTreatmentAssignmentResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetTreatmentAssignmentResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetTreatmentAssignmentResult(GetTreatmentAssignmentResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19828};

/// @brief Field TreatmentAssignment, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::ExperimentationModels::TreatmentAssignment*  ___TreatmentAssignment;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ExperimentationModels::GetTreatmentAssignmentResult, ___TreatmentAssignment) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ExperimentationModels::GetTreatmentAssignmentResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ExperimentationModels
