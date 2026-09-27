#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetMultiplayerServerDetailsResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetMultiplayerServerDetailsResponse)
namespace PlayFab::MultiplayerModels {
class ConnectedPlayer;
}
namespace PlayFab::MultiplayerModels {
class Port;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class GetMultiplayerServerDetailsResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse*, "PlayFab.MultiplayerModels", "GetMultiplayerServerDetailsResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon, System.DateTime, System.Nullable`1<T>
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.GetMultiplayerServerDetailsResponse
class CORDL_TYPE GetMultiplayerServerDetailsResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field ConnectedPlayers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConnectedPlayers, put=__cordl_internal_set_ConnectedPlayers)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::ConnectedPlayer*>*  ConnectedPlayers;

/// @brief Field FQDN, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_FQDN, put=__cordl_internal_set_FQDN)) ::StringW  FQDN;

/// @brief Field IPV4Address, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_IPV4Address, put=__cordl_internal_set_IPV4Address)) ::StringW  IPV4Address;

/// @brief Field LastStateTransitionTime, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_LastStateTransitionTime, put=__cordl_internal_set_LastStateTransitionTime)) ::System::Nullable_1<::System::DateTime>  LastStateTransitionTime;

/// @brief Field Ports, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Ports, put=__cordl_internal_set_Ports)) ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*  Ports;

/// @brief Field Region, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_Region, put=__cordl_internal_set_Region)) ::StringW  Region;

/// @brief Field ServerId, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_ServerId, put=__cordl_internal_set_ServerId)) ::StringW  ServerId;

/// @brief Field SessionId, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_SessionId, put=__cordl_internal_set_SessionId)) ::StringW  SessionId;

/// @brief Field State, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_State, put=__cordl_internal_set_State)) ::StringW  State;

/// @brief Field VmId, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_VmId, put=__cordl_internal_set_VmId)) ::StringW  VmId;

static inline ::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::ConnectedPlayer*>* const& __cordl_internal_get_ConnectedPlayers() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::ConnectedPlayer*>*& __cordl_internal_get_ConnectedPlayers() ;

constexpr ::StringW const& __cordl_internal_get_FQDN() const;

constexpr ::StringW& __cordl_internal_get_FQDN() ;

constexpr ::StringW const& __cordl_internal_get_IPV4Address() const;

constexpr ::StringW& __cordl_internal_get_IPV4Address() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_LastStateTransitionTime() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_LastStateTransitionTime() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>* const& __cordl_internal_get_Ports() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*& __cordl_internal_get_Ports() ;

constexpr ::StringW const& __cordl_internal_get_Region() const;

constexpr ::StringW& __cordl_internal_get_Region() ;

constexpr ::StringW const& __cordl_internal_get_ServerId() const;

constexpr ::StringW& __cordl_internal_get_ServerId() ;

constexpr ::StringW const& __cordl_internal_get_SessionId() const;

constexpr ::StringW& __cordl_internal_get_SessionId() ;

constexpr ::StringW const& __cordl_internal_get_State() const;

constexpr ::StringW& __cordl_internal_get_State() ;

constexpr ::StringW const& __cordl_internal_get_VmId() const;

constexpr ::StringW& __cordl_internal_get_VmId() ;

constexpr void __cordl_internal_set_ConnectedPlayers(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::ConnectedPlayer*>*  value) ;

constexpr void __cordl_internal_set_FQDN(::StringW  value) ;

constexpr void __cordl_internal_set_IPV4Address(::StringW  value) ;

constexpr void __cordl_internal_set_LastStateTransitionTime(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_Ports(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*  value) ;

constexpr void __cordl_internal_set_Region(::StringW  value) ;

constexpr void __cordl_internal_set_ServerId(::StringW  value) ;

constexpr void __cordl_internal_set_SessionId(::StringW  value) ;

constexpr void __cordl_internal_set_State(::StringW  value) ;

constexpr void __cordl_internal_set_VmId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa8409c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetMultiplayerServerDetailsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetMultiplayerServerDetailsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetMultiplayerServerDetailsResponse(GetMultiplayerServerDetailsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetMultiplayerServerDetailsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetMultiplayerServerDetailsResponse(GetMultiplayerServerDetailsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19659};

/// @brief Field ConnectedPlayers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::ConnectedPlayer*>*  ___ConnectedPlayers;

/// @brief Field FQDN, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___FQDN;

/// @brief Field IPV4Address, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___IPV4Address;

/// @brief Field LastStateTransitionTime, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___LastStateTransitionTime;

/// @brief Field Ports, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::Port*>*  ___Ports;

/// @brief Field Region, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___Region;

/// @brief Field ServerId, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___ServerId;

/// @brief Field SessionId, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___SessionId;

/// @brief Field State, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___State;

/// @brief Field VmId, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___VmId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse, ___ConnectedPlayers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse, ___FQDN) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse, ___IPV4Address) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse, ___LastStateTransitionTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse, ___Ports) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse, ___Region) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse, ___ServerId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse, ___SessionId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse, ___State) == 0x68, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse, ___VmId) == 0x70, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::GetMultiplayerServerDetailsResponse) == 0x78, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
