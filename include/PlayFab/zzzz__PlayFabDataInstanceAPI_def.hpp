#pragma once
// IWYU pragma private; include "PlayFab/PlayFabDataInstanceAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabDataInstanceAPI)
namespace PlayFab::DataModels {
class AbortFileUploadsRequest;
}
namespace PlayFab::DataModels {
class AbortFileUploadsResponse;
}
namespace PlayFab::DataModels {
class DeleteFilesRequest;
}
namespace PlayFab::DataModels {
class DeleteFilesResponse;
}
namespace PlayFab::DataModels {
class FinalizeFileUploadsRequest;
}
namespace PlayFab::DataModels {
class FinalizeFileUploadsResponse;
}
namespace PlayFab::DataModels {
class GetFilesRequest;
}
namespace PlayFab::DataModels {
class GetFilesResponse;
}
namespace PlayFab::DataModels {
class GetObjectsRequest;
}
namespace PlayFab::DataModels {
class GetObjectsResponse;
}
namespace PlayFab::DataModels {
class InitiateFileUploadsRequest;
}
namespace PlayFab::DataModels {
class InitiateFileUploadsResponse;
}
namespace PlayFab::DataModels {
class SetObjectsRequest;
}
namespace PlayFab::DataModels {
class SetObjectsResponse;
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
class PlayFabDataInstanceAPI;
}
// Write type traits
MARK_REF_T(::PlayFab::PlayFabDataInstanceAPI*);
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabDataInstanceAPI*, "PlayFab", "PlayFabDataInstanceAPI");
// Dependencies System.Object
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PlayFabDataInstanceAPI
class CORDL_TYPE PlayFabDataInstanceAPI : public ::System::Object {
public:
// Declarations
/// @brief Field apiSettings, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_apiSettings, put=__cordl_internal_set_apiSettings)) ::PlayFab::PlayFabApiSettings*  apiSettings;

/// @brief Field authenticationContext, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_authenticationContext, put=__cordl_internal_set_authenticationContext)) ::PlayFab::PlayFabAuthenticationContext*  authenticationContext;

/// @brief Convert operator to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr operator  ::PlayFab::SharedModels::IPlayFabInstanceApi*() noexcept;

/// @brief Method AbortFileUploads, addr 0xa7c4e8c, size 0x18c, virtual false, abstract: false, final false
inline void AbortFileUploads(::PlayFab::DataModels::AbortFileUploadsRequest*  request, ::System::Action_1<::PlayFab::DataModels::AbortFileUploadsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method DeleteFiles, addr 0xa7c5018, size 0x18c, virtual false, abstract: false, final false
inline void DeleteFiles(::PlayFab::DataModels::DeleteFilesRequest*  request, ::System::Action_1<::PlayFab::DataModels::DeleteFilesResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method FinalizeFileUploads, addr 0xa7c51a4, size 0x18c, virtual false, abstract: false, final false
inline void FinalizeFileUploads(::PlayFab::DataModels::FinalizeFileUploadsRequest*  request, ::System::Action_1<::PlayFab::DataModels::FinalizeFileUploadsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ForgetAllCredentials, addr 0xa7c4e7c, size 0x10, virtual false, abstract: false, final false
inline void ForgetAllCredentials() ;

/// @brief Method GetFiles, addr 0xa7c5330, size 0x18c, virtual false, abstract: false, final false
inline void GetFiles(::PlayFab::DataModels::GetFilesRequest*  request, ::System::Action_1<::PlayFab::DataModels::GetFilesResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetObjects, addr 0xa7c54bc, size 0x18c, virtual false, abstract: false, final false
inline void GetObjects(::PlayFab::DataModels::GetObjectsRequest*  request, ::System::Action_1<::PlayFab::DataModels::GetObjectsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method InitiateFileUploads, addr 0xa7c5648, size 0x18c, virtual false, abstract: false, final false
inline void InitiateFileUploads(::PlayFab::DataModels::InitiateFileUploadsRequest*  request, ::System::Action_1<::PlayFab::DataModels::InitiateFileUploadsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method IsEntityLoggedIn, addr 0xa7c4e54, size 0x28, virtual false, abstract: false, final false
inline bool IsEntityLoggedIn() ;

static inline ::PlayFab::PlayFabDataInstanceAPI* New_ctor(::PlayFab::PlayFabAuthenticationContext*  context) ;

static inline ::PlayFab::PlayFabDataInstanceAPI* New_ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context) ;

/// @brief Method SetObjects, addr 0xa7c57d4, size 0x18c, virtual false, abstract: false, final false
inline void SetObjects(::PlayFab::DataModels::SetObjectsRequest*  request, ::System::Action_1<::PlayFab::DataModels::SetObjectsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

constexpr ::PlayFab::PlayFabApiSettings* const& __cordl_internal_get_apiSettings() const;

constexpr ::PlayFab::PlayFabApiSettings*& __cordl_internal_get_apiSettings() ;

constexpr ::PlayFab::PlayFabAuthenticationContext* const& __cordl_internal_get_authenticationContext() const;

constexpr ::PlayFab::PlayFabAuthenticationContext*& __cordl_internal_get_authenticationContext() ;

constexpr void __cordl_internal_set_apiSettings(::PlayFab::PlayFabApiSettings*  value) ;

constexpr void __cordl_internal_set_authenticationContext(::PlayFab::PlayFabAuthenticationContext*  value) ;

/// @brief Method .ctor, addr 0xa7c4d48, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::PlayFab::PlayFabAuthenticationContext*  context) ;

/// @brief Method .ctor, addr 0xa7c4dc4, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context) ;

/// @brief Convert to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr ::PlayFab::SharedModels::IPlayFabInstanceApi* i___PlayFab__SharedModels__IPlayFabInstanceApi() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabDataInstanceAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabDataInstanceAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabDataInstanceAPI(PlayFabDataInstanceAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabDataInstanceAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabDataInstanceAPI(PlayFabDataInstanceAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19494};

/// @brief Field apiSettings, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::PlayFabApiSettings*  ___apiSettings;

/// @brief Field authenticationContext, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::PlayFabAuthenticationContext*  ___authenticationContext;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::PlayFabDataInstanceAPI, ___apiSettings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabDataInstanceAPI, ___authenticationContext) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::PlayFabDataInstanceAPI) == 0x20, "Size mismatch!");

} // namespace end def PlayFab
