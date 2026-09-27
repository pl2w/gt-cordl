#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/RequestMultiplayerServerRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RequestMultiplayerServerRequest)
namespace PlayFab::MultiplayerModels {
class BuildAliasParams;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class RequestMultiplayerServerRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::RequestMultiplayerServerRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::RequestMultiplayerServerRequest*, "PlayFab.MultiplayerModels", "RequestMultiplayerServerRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.RequestMultiplayerServerRequest
class CORDL_TYPE RequestMultiplayerServerRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field BuildAliasParams, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_BuildAliasParams, put=__cordl_internal_set_BuildAliasParams)) ::PlayFab::MultiplayerModels::BuildAliasParams*  BuildAliasParams;

/// @brief Field BuildId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_BuildId, put=__cordl_internal_set_BuildId)) ::StringW  BuildId;

/// @brief Field InitialPlayers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_InitialPlayers, put=__cordl_internal_set_InitialPlayers)) ::System::Collections::Generic::List_1<::StringW>*  InitialPlayers;

/// @brief Field PreferredRegions, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PreferredRegions, put=__cordl_internal_set_PreferredRegions)) ::System::Collections::Generic::List_1<::StringW>*  PreferredRegions;

/// @brief Field SessionCookie, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_SessionCookie, put=__cordl_internal_set_SessionCookie)) ::StringW  SessionCookie;

/// @brief Field SessionId, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_SessionId, put=__cordl_internal_set_SessionId)) ::StringW  SessionId;

static inline ::PlayFab::MultiplayerModels::RequestMultiplayerServerRequest* New_ctor() ;

constexpr ::PlayFab::MultiplayerModels::BuildAliasParams* const& __cordl_internal_get_BuildAliasParams() const;

constexpr ::PlayFab::MultiplayerModels::BuildAliasParams*& __cordl_internal_get_BuildAliasParams() ;

constexpr ::StringW const& __cordl_internal_get_BuildId() const;

constexpr ::StringW& __cordl_internal_get_BuildId() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_InitialPlayers() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_InitialPlayers() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_PreferredRegions() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_PreferredRegions() ;

constexpr ::StringW const& __cordl_internal_get_SessionCookie() const;

constexpr ::StringW& __cordl_internal_get_SessionCookie() ;

constexpr ::StringW const& __cordl_internal_get_SessionId() const;

constexpr ::StringW& __cordl_internal_get_SessionId() ;

constexpr void __cordl_internal_set_BuildAliasParams(::PlayFab::MultiplayerModels::BuildAliasParams*  value) ;

constexpr void __cordl_internal_set_BuildId(::StringW  value) ;

constexpr void __cordl_internal_set_InitialPlayers(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_PreferredRegions(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_SessionCookie(::StringW  value) ;

constexpr void __cordl_internal_set_SessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa840bd8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RequestMultiplayerServerRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RequestMultiplayerServerRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RequestMultiplayerServerRequest(RequestMultiplayerServerRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RequestMultiplayerServerRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RequestMultiplayerServerRequest(RequestMultiplayerServerRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19727};

/// @brief Field BuildAliasParams, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::BuildAliasParams*  ___BuildAliasParams;

/// @brief Field BuildId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___BuildId;

/// @brief Field InitialPlayers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___InitialPlayers;

/// @brief Field PreferredRegions, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___PreferredRegions;

/// @brief Field SessionCookie, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___SessionCookie;

/// @brief Field SessionId, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___SessionId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::RequestMultiplayerServerRequest, ___BuildAliasParams) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::RequestMultiplayerServerRequest, ___BuildId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::RequestMultiplayerServerRequest, ___InitialPlayers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::RequestMultiplayerServerRequest, ___PreferredRegions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::RequestMultiplayerServerRequest, ___SessionCookie) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::RequestMultiplayerServerRequest, ___SessionId) == 0x40, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::RequestMultiplayerServerRequest) == 0x48, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
