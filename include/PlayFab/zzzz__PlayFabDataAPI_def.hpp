#pragma once
// IWYU pragma private; include "PlayFab/PlayFabDataAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabDataAPI)
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
class PlayFabDataAPI;
}
// Write type traits
MARK_REF_T(::PlayFab::PlayFabDataAPI*);
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabDataAPI*, "PlayFab", "PlayFabDataAPI");
// Dependencies System.Object
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PlayFabDataAPI
class CORDL_TYPE PlayFabDataAPI : public ::System::Object {
public:
// Declarations
/// @brief Method AbortFileUploads, addr 0xa7c423c, size 0x194, virtual false, abstract: false, final false
static inline void AbortFileUploads(::PlayFab::DataModels::AbortFileUploadsRequest*  request, ::System::Action_1<::PlayFab::DataModels::AbortFileUploadsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method DeleteFiles, addr 0xa7c43d0, size 0x194, virtual false, abstract: false, final false
static inline void DeleteFiles(::PlayFab::DataModels::DeleteFilesRequest*  request, ::System::Action_1<::PlayFab::DataModels::DeleteFilesResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method FinalizeFileUploads, addr 0xa7c4564, size 0x194, virtual false, abstract: false, final false
static inline void FinalizeFileUploads(::PlayFab::DataModels::FinalizeFileUploadsRequest*  request, ::System::Action_1<::PlayFab::DataModels::FinalizeFileUploadsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method ForgetAllCredentials, addr 0xa7c41dc, size 0x60, virtual false, abstract: false, final false
static inline void ForgetAllCredentials() ;

/// @brief Method GetFiles, addr 0xa7c46f8, size 0x194, virtual false, abstract: false, final false
static inline void GetFiles(::PlayFab::DataModels::GetFilesRequest*  request, ::System::Action_1<::PlayFab::DataModels::GetFilesResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method GetObjects, addr 0xa7c488c, size 0x194, virtual false, abstract: false, final false
static inline void GetObjects(::PlayFab::DataModels::GetObjectsRequest*  request, ::System::Action_1<::PlayFab::DataModels::GetObjectsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method InitiateFileUploads, addr 0xa7c4a20, size 0x194, virtual false, abstract: false, final false
static inline void InitiateFileUploads(::PlayFab::DataModels::InitiateFileUploadsRequest*  request, ::System::Action_1<::PlayFab::DataModels::InitiateFileUploadsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

/// @brief Method IsEntityLoggedIn, addr 0xa7c4168, size 0x74, virtual false, abstract: false, final false
static inline bool IsEntityLoggedIn() ;

/// @brief Method SetObjects, addr 0xa7c4bb4, size 0x194, virtual false, abstract: false, final false
static inline void SetObjects(::PlayFab::DataModels::SetObjectsRequest*  request, ::System::Action_1<::PlayFab::DataModels::SetObjectsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabDataAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabDataAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabDataAPI(PlayFabDataAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabDataAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabDataAPI(PlayFabDataAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19493};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::PlayFabDataAPI) == 0x10, "Size mismatch!");

} // namespace end def PlayFab
