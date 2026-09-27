#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/GetLatestScorecardResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GetLatestScorecardResult)
namespace PlayFab::ExperimentationModels {
class Scorecard;
}
// Forward declare root types
namespace PlayFab::ExperimentationModels {
class GetLatestScorecardResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ExperimentationModels::GetLatestScorecardResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ExperimentationModels::GetLatestScorecardResult*, "PlayFab.ExperimentationModels", "GetLatestScorecardResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ExperimentationModels {
// Is value type: false
// CS Name: PlayFab.ExperimentationModels.GetLatestScorecardResult
class CORDL_TYPE GetLatestScorecardResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Scorecard, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Scorecard, put=__cordl_internal_set_Scorecard)) ::PlayFab::ExperimentationModels::Scorecard*  Scorecard;

static inline ::PlayFab::ExperimentationModels::GetLatestScorecardResult* New_ctor() ;

constexpr ::PlayFab::ExperimentationModels::Scorecard* const& __cordl_internal_get_Scorecard() const;

constexpr ::PlayFab::ExperimentationModels::Scorecard*& __cordl_internal_get_Scorecard() ;

constexpr void __cordl_internal_set_Scorecard(::PlayFab::ExperimentationModels::Scorecard*  value) ;

/// @brief Method .ctor, addr 0xa840ec0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetLatestScorecardResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetLatestScorecardResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetLatestScorecardResult(GetLatestScorecardResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetLatestScorecardResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetLatestScorecardResult(GetLatestScorecardResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19826};

/// @brief Field Scorecard, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::ExperimentationModels::Scorecard*  ___Scorecard;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ExperimentationModels::GetLatestScorecardResult, ___Scorecard) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ExperimentationModels::GetLatestScorecardResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ExperimentationModels
