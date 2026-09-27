#pragma once
// IWYU pragma private; include "PlayFab/PlayFabInsightsInstanceAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabInsightsInstanceAPI)
namespace PlayFab::InsightsModels {
class InsightsEmptyRequest;
}
namespace PlayFab::InsightsModels {
class InsightsGetDetailsResponse;
}
namespace PlayFab::InsightsModels {
class InsightsGetLimitsResponse;
}
namespace PlayFab::InsightsModels {
class InsightsGetOperationStatusRequest;
}
namespace PlayFab::InsightsModels {
class InsightsGetOperationStatusResponse;
}
namespace PlayFab::InsightsModels {
class InsightsGetPendingOperationsRequest;
}
namespace PlayFab::InsightsModels {
class InsightsGetPendingOperationsResponse;
}
namespace PlayFab::InsightsModels {
class InsightsOperationResponse;
}
namespace PlayFab::InsightsModels {
class InsightsSetPerformanceRequest;
}
namespace PlayFab::InsightsModels {
class InsightsSetStorageRetentionRequest;
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
class PlayFabInsightsInstanceAPI;
}
// Write type traits
MARK_REF_T(::PlayFab::PlayFabInsightsInstanceAPI*);
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabInsightsInstanceAPI*, "PlayFab", "PlayFabInsightsInstanceAPI");
// Dependencies System.Object
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PlayFabInsightsInstanceAPI
class CORDL_TYPE PlayFabInsightsInstanceAPI : public ::System::Object {
public:
// Declarations
/// @brief Field apiSettings, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_apiSettings, put=__cordl_internal_set_apiSettings)) ::PlayFab::PlayFabApiSettings*  apiSettings;

/// @brief Field authenticationContext, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_authenticationContext, put=__cordl_internal_set_authenticationContext)) ::PlayFab::PlayFabAuthenticationContext*  authenticationContext;

/// @brief Convert operator to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr operator  ::PlayFab::SharedModels::IPlayFabInstanceApi*() noexcept;

/// @brief Method ForgetAllCredentials, addr 0xa7cd898, size 0x10, virtual false, abstract: false, final false
inline void ForgetAllCredentials() ;

/// @brief Method GetDetails, addr 0xa7cd8a8, size 0x18c, virtual false, abstract: false, final false
inline void GetDetails(::PlayFab::InsightsModels::InsightsEmptyRequest*  request, ::System::Action_1<::PlayFab::InsightsModels::InsightsGetDetailsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetLimits, addr 0xa7cda34, size 0x18c, virtual false, abstract: false, final false
inline void GetLimits(::PlayFab::InsightsModels::InsightsEmptyRequest*  request, ::System::Action_1<::PlayFab::InsightsModels::InsightsGetLimitsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetOperationStatus, addr 0xa7cdbc0, size 0x18c, virtual false, abstract: false, final false
inline void GetOperationStatus(::PlayFab::InsightsModels::InsightsGetOperationStatusRequest*  request, ::System::Action_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetPendingOperations, addr 0xa7cdd4c, size 0x18c, virtual false, abstract: false, final false
inline void GetPendingOperations(::PlayFab::InsightsModels::InsightsGetPendingOperationsRequest*  request, ::System::Action_1<::PlayFab::InsightsModels::InsightsGetPendingOperationsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method IsEntityLoggedIn, addr 0xa7cd870, size 0x28, virtual false, abstract: false, final false
inline bool IsEntityLoggedIn() ;

static inline ::PlayFab::PlayFabInsightsInstanceAPI* New_ctor(::PlayFab::PlayFabAuthenticationContext*  context) ;

static inline ::PlayFab::PlayFabInsightsInstanceAPI* New_ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context) ;

/// @brief Method SetPerformance, addr 0xa7cded8, size 0x18c, virtual false, abstract: false, final false
inline void SetPerformance(::PlayFab::InsightsModels::InsightsSetPerformanceRequest*  request, ::System::Action_1<::PlayFab::InsightsModels::InsightsOperationResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method SetStorageRetention, addr 0xa7ce064, size 0x18c, virtual false, abstract: false, final false
inline void SetStorageRetention(::PlayFab::InsightsModels::InsightsSetStorageRetentionRequest*  request, ::System::Action_1<::PlayFab::InsightsModels::InsightsOperationResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

constexpr ::PlayFab::PlayFabApiSettings* const& __cordl_internal_get_apiSettings() const;

constexpr ::PlayFab::PlayFabApiSettings*& __cordl_internal_get_apiSettings() ;

constexpr ::PlayFab::PlayFabAuthenticationContext* const& __cordl_internal_get_authenticationContext() const;

constexpr ::PlayFab::PlayFabAuthenticationContext*& __cordl_internal_get_authenticationContext() ;

constexpr void __cordl_internal_set_apiSettings(::PlayFab::PlayFabApiSettings*  value) ;

constexpr void __cordl_internal_set_authenticationContext(::PlayFab::PlayFabAuthenticationContext*  value) ;

/// @brief Method .ctor, addr 0xa7cd764, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::PlayFab::PlayFabAuthenticationContext*  context) ;

/// @brief Method .ctor, addr 0xa7cd7e0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context) ;

/// @brief Convert to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr ::PlayFab::SharedModels::IPlayFabInstanceApi* i___PlayFab__SharedModels__IPlayFabInstanceApi() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabInsightsInstanceAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabInsightsInstanceAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabInsightsInstanceAPI(PlayFabInsightsInstanceAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabInsightsInstanceAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabInsightsInstanceAPI(PlayFabInsightsInstanceAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19502};

/// @brief Field apiSettings, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::PlayFabApiSettings*  ___apiSettings;

/// @brief Field authenticationContext, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::PlayFabAuthenticationContext*  ___authenticationContext;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::PlayFabInsightsInstanceAPI, ___apiSettings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabInsightsInstanceAPI, ___authenticationContext) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::PlayFabInsightsInstanceAPI) == 0x20, "Size mismatch!");

} // namespace end def PlayFab
