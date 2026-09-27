#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/GetLatestScorecardRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetLatestScorecardRequest)
// Forward declare root types
namespace PlayFab::ExperimentationModels {
class GetLatestScorecardRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ExperimentationModels::GetLatestScorecardRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ExperimentationModels::GetLatestScorecardRequest*, "PlayFab.ExperimentationModels", "GetLatestScorecardRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ExperimentationModels {
// Is value type: false
// CS Name: PlayFab.ExperimentationModels.GetLatestScorecardRequest
class CORDL_TYPE GetLatestScorecardRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field ExperimentId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ExperimentId, put=__cordl_internal_set_ExperimentId)) ::StringW  ExperimentId;

static inline ::PlayFab::ExperimentationModels::GetLatestScorecardRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_ExperimentId() const;

constexpr ::StringW& __cordl_internal_get_ExperimentId() ;

constexpr void __cordl_internal_set_ExperimentId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840eb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetLatestScorecardRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetLatestScorecardRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetLatestScorecardRequest(GetLatestScorecardRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetLatestScorecardRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetLatestScorecardRequest(GetLatestScorecardRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19825};

/// @brief Field ExperimentId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___ExperimentId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ExperimentationModels::GetLatestScorecardRequest, ___ExperimentId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ExperimentationModels::GetLatestScorecardRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ExperimentationModels
