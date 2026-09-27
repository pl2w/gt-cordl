#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/StartExperimentRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StartExperimentRequest)
// Forward declare root types
namespace PlayFab::ExperimentationModels {
class StartExperimentRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ExperimentationModels::StartExperimentRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ExperimentationModels::StartExperimentRequest*, "PlayFab.ExperimentationModels", "StartExperimentRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ExperimentationModels {
// Is value type: false
// CS Name: PlayFab.ExperimentationModels.StartExperimentRequest
class CORDL_TYPE StartExperimentRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field ExperimentId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ExperimentId, put=__cordl_internal_set_ExperimentId)) ::StringW  ExperimentId;

static inline ::PlayFab::ExperimentationModels::StartExperimentRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_ExperimentId() const;

constexpr ::StringW& __cordl_internal_get_ExperimentId() ;

constexpr void __cordl_internal_set_ExperimentId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840ef0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StartExperimentRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StartExperimentRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StartExperimentRequest(StartExperimentRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StartExperimentRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StartExperimentRequest(StartExperimentRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19832};

/// @brief Field ExperimentId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___ExperimentId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ExperimentationModels::StartExperimentRequest, ___ExperimentId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ExperimentationModels::StartExperimentRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ExperimentationModels
