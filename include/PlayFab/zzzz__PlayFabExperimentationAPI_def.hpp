#pragma once
// IWYU pragma private; include "PlayFab/PlayFabExperimentationAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabExperimentationAPI)
namespace PlayFab::ExperimentationModels {
class CreateExperimentRequest;
}
namespace PlayFab::ExperimentationModels {
class CreateExperimentResult;
}
namespace PlayFab::ExperimentationModels {
class DeleteExperimentRequest;
}
namespace PlayFab::ExperimentationModels {
class EmptyResponse;
}
namespace PlayFab::ExperimentationModels {
class GetExperimentsRequest;
}
namespace PlayFab::ExperimentationModels {
class GetExperimentsResult;
}
namespace PlayFab::ExperimentationModels {
class GetLatestScorecardRequest;
}
namespace PlayFab::ExperimentationModels {
class GetLatestScorecardResult;
}
namespace PlayFab::ExperimentationModels {
class GetTreatmentAssignmentRequest;
}
namespace PlayFab::ExperimentationModels {
class GetTreatmentAssignmentResult;
}
namespace PlayFab::ExperimentationModels {
class StartExperimentRequest;
}
namespace PlayFab::ExperimentationModels {
class StopExperimentRequest;
}
namespace PlayFab::ExperimentationModels {
class UpdateExperimentRequest;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab {
class PlayFabExperimentationAPI;
}
// Write type traits
MARK_REF_T(::PlayFab::PlayFabExperimentationAPI*);
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabExperimentationAPI*, "PlayFab", "PlayFabExperimentationAPI");
// Dependencies System.Object
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PlayFabExperimentationAPI
class CORDL_TYPE PlayFabExperimentationAPI : public ::System::Object {
public:
// Declarations
/// @brief Method CreateExperiment, addr 0xa7c6294, size 0x194, virtual false, abstract: false, final false
static inline void CreateExperiment(::PlayFab::ExperimentationModels::CreateExperimentRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::CreateExperimentResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method DeleteExperiment, addr 0xa7c6428, size 0x194, virtual false, abstract: false, final false
static inline void DeleteExperiment(::PlayFab::ExperimentationModels::DeleteExperimentRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ForgetAllCredentials, addr 0xa7c6234, size 0x60, virtual false, abstract: false, final false
static inline void ForgetAllCredentials() ;

/// @brief Method GetExperiments, addr 0xa7c65bc, size 0x194, virtual false, abstract: false, final false
static inline void GetExperiments(::PlayFab::ExperimentationModels::GetExperimentsRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::GetExperimentsResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetLatestScorecard, addr 0xa7c6750, size 0x194, virtual false, abstract: false, final false
static inline void GetLatestScorecard(::PlayFab::ExperimentationModels::GetLatestScorecardRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::GetLatestScorecardResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetTreatmentAssignment, addr 0xa7c68e4, size 0x194, virtual false, abstract: false, final false
static inline void GetTreatmentAssignment(::PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::GetTreatmentAssignmentResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method IsEntityLoggedIn, addr 0xa7c61c0, size 0x74, virtual false, abstract: false, final false
static inline bool IsEntityLoggedIn() ;

/// @brief Method StartExperiment, addr 0xa7c6a78, size 0x194, virtual false, abstract: false, final false
static inline void StartExperiment(::PlayFab::ExperimentationModels::StartExperimentRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method StopExperiment, addr 0xa7c6c0c, size 0x194, virtual false, abstract: false, final false
static inline void StopExperiment(::PlayFab::ExperimentationModels::StopExperimentRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method UpdateExperiment, addr 0xa7c6da0, size 0x194, virtual false, abstract: false, final false
static inline void UpdateExperiment(::PlayFab::ExperimentationModels::UpdateExperimentRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabExperimentationAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabExperimentationAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabExperimentationAPI(PlayFabExperimentationAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabExperimentationAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabExperimentationAPI(PlayFabExperimentationAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19497};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::PlayFabExperimentationAPI) == 0x10, "Size mismatch!");

} // namespace end def PlayFab
