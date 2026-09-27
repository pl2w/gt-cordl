#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/GetExperimentsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(GetExperimentsRequest)
// Forward declare root types
namespace PlayFab::ExperimentationModels {
class GetExperimentsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ExperimentationModels::GetExperimentsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ExperimentationModels::GetExperimentsRequest*, "PlayFab.ExperimentationModels", "GetExperimentsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ExperimentationModels {
// Is value type: false
// CS Name: PlayFab.ExperimentationModels.GetExperimentsRequest
class CORDL_TYPE GetExperimentsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
static inline ::PlayFab::ExperimentationModels::GetExperimentsRequest* New_ctor() ;

/// @brief Method .ctor, addr 0xa840ea8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetExperimentsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetExperimentsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetExperimentsRequest(GetExperimentsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetExperimentsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetExperimentsRequest(GetExperimentsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19823};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ExperimentationModels::GetExperimentsRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ExperimentationModels
