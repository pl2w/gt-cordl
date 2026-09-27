#pragma once
// IWYU pragma private; include "PlayFab/PlayFabExperimentationInstanceAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabExperimentationInstanceAPI)
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
namespace PlayFab::SharedModels {
class IPlayFabInstanceApi;
}
namespace PlayFab {
class PlayFabApiSettings;
}
namespace PlayFab {
class PlayFabAuthenticationContext;
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
class PlayFabExperimentationInstanceAPI;
}
// Write type traits
MARK_REF_T(::PlayFab::PlayFabExperimentationInstanceAPI*);
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabExperimentationInstanceAPI*, "PlayFab", "PlayFabExperimentationInstanceAPI");
// Dependencies System.Object
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PlayFabExperimentationInstanceAPI
class CORDL_TYPE PlayFabExperimentationInstanceAPI : public ::System::Object {
public:
// Declarations
/// @brief Field apiSettings, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_apiSettings, put=__cordl_internal_set_apiSettings)) ::PlayFab::PlayFabApiSettings*  apiSettings;

/// @brief Field authenticationContext, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_authenticationContext, put=__cordl_internal_set_authenticationContext)) ::PlayFab::PlayFabAuthenticationContext*  authenticationContext;

/// @brief Convert operator to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr operator  ::PlayFab::SharedModels::IPlayFabInstanceApi*() noexcept;

/// @brief Method CreateExperiment, addr 0xa7c7078, size 0x18c, virtual false, abstract: false, final false
inline void CreateExperiment(::PlayFab::ExperimentationModels::CreateExperimentRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::CreateExperimentResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method DeleteExperiment, addr 0xa7c7204, size 0x18c, virtual false, abstract: false, final false
inline void DeleteExperiment(::PlayFab::ExperimentationModels::DeleteExperimentRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ForgetAllCredentials, addr 0xa7c7068, size 0x10, virtual false, abstract: false, final false
inline void ForgetAllCredentials() ;

/// @brief Method GetExperiments, addr 0xa7c7390, size 0x18c, virtual false, abstract: false, final false
inline void GetExperiments(::PlayFab::ExperimentationModels::GetExperimentsRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::GetExperimentsResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetLatestScorecard, addr 0xa7c751c, size 0x18c, virtual false, abstract: false, final false
inline void GetLatestScorecard(::PlayFab::ExperimentationModels::GetLatestScorecardRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::GetLatestScorecardResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetTreatmentAssignment, addr 0xa7c76a8, size 0x18c, virtual false, abstract: false, final false
inline void GetTreatmentAssignment(::PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::GetTreatmentAssignmentResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method IsEntityLoggedIn, addr 0xa7c7040, size 0x28, virtual false, abstract: false, final false
inline bool IsEntityLoggedIn() ;

static inline ::PlayFab::PlayFabExperimentationInstanceAPI* New_ctor(::PlayFab::PlayFabAuthenticationContext*  context) ;

static inline ::PlayFab::PlayFabExperimentationInstanceAPI* New_ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context) ;

/// @brief Method StartExperiment, addr 0xa7c7834, size 0x18c, virtual false, abstract: false, final false
inline void StartExperiment(::PlayFab::ExperimentationModels::StartExperimentRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method StopExperiment, addr 0xa7c79c0, size 0x18c, virtual false, abstract: false, final false
inline void StopExperiment(::PlayFab::ExperimentationModels::StopExperimentRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method UpdateExperiment, addr 0xa7c7b4c, size 0x18c, virtual false, abstract: false, final false
inline void UpdateExperiment(::PlayFab::ExperimentationModels::UpdateExperimentRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

constexpr ::PlayFab::PlayFabApiSettings* const& __cordl_internal_get_apiSettings() const;

constexpr ::PlayFab::PlayFabApiSettings*& __cordl_internal_get_apiSettings() ;

constexpr ::PlayFab::PlayFabAuthenticationContext* const& __cordl_internal_get_authenticationContext() const;

constexpr ::PlayFab::PlayFabAuthenticationContext*& __cordl_internal_get_authenticationContext() ;

constexpr void __cordl_internal_set_apiSettings(::PlayFab::PlayFabApiSettings*  value) ;

constexpr void __cordl_internal_set_authenticationContext(::PlayFab::PlayFabAuthenticationContext*  value) ;

/// @brief Method .ctor, addr 0xa7c6f34, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::PlayFab::PlayFabAuthenticationContext*  context) ;

/// @brief Method .ctor, addr 0xa7c6fb0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context) ;

/// @brief Convert to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr ::PlayFab::SharedModels::IPlayFabInstanceApi* i___PlayFab__SharedModels__IPlayFabInstanceApi() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabExperimentationInstanceAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabExperimentationInstanceAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabExperimentationInstanceAPI(PlayFabExperimentationInstanceAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabExperimentationInstanceAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabExperimentationInstanceAPI(PlayFabExperimentationInstanceAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19498};

/// @brief Field apiSettings, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::PlayFabApiSettings*  ___apiSettings;

/// @brief Field authenticationContext, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::PlayFabAuthenticationContext*  ___authenticationContext;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::PlayFabExperimentationInstanceAPI, ___apiSettings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabExperimentationInstanceAPI, ___authenticationContext) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::PlayFabExperimentationInstanceAPI) == 0x20, "Size mismatch!");

} // namespace end def PlayFab
