#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/MatchmakeResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/ClientModels/zzzz__MatchmakeStatus_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MatchmakeResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class MatchmakeResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::MatchmakeResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::MatchmakeResult*, "PlayFab.ClientModels", "MatchmakeResult");
// Dependencies PlayFab.ClientModels.MatchmakeStatus, PlayFab.SharedModels.PlayFabResultCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.MatchmakeResult
class CORDL_TYPE MatchmakeResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Expires, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Expires, put=__cordl_internal_set_Expires)) ::StringW  Expires;

/// @brief Field LobbyID, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_LobbyID, put=__cordl_internal_set_LobbyID)) ::StringW  LobbyID;

/// @brief Field PollWaitTimeMS, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_PollWaitTimeMS, put=__cordl_internal_set_PollWaitTimeMS)) ::System::Nullable_1<int32_t>  PollWaitTimeMS;

/// @brief Field ServerIPV4Address, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_ServerIPV4Address, put=__cordl_internal_set_ServerIPV4Address)) ::StringW  ServerIPV4Address;

/// @brief Field ServerIPV6Address, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_ServerIPV6Address, put=__cordl_internal_set_ServerIPV6Address)) ::StringW  ServerIPV6Address;

/// @brief Field ServerPort, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_ServerPort, put=__cordl_internal_set_ServerPort)) ::System::Nullable_1<int32_t>  ServerPort;

/// @brief Field ServerPublicDNSName, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_ServerPublicDNSName, put=__cordl_internal_set_ServerPublicDNSName)) ::StringW  ServerPublicDNSName;

/// @brief Field Status, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_Status, put=__cordl_internal_set_Status)) ::System::Nullable_1<::PlayFab::ClientModels::MatchmakeStatus>  Status;

/// @brief Field Ticket, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_Ticket, put=__cordl_internal_set_Ticket)) ::StringW  Ticket;

static inline ::PlayFab::ClientModels::MatchmakeResult* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Expires() const;

constexpr ::StringW& __cordl_internal_get_Expires() ;

constexpr ::StringW const& __cordl_internal_get_LobbyID() const;

constexpr ::StringW& __cordl_internal_get_LobbyID() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_PollWaitTimeMS() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_PollWaitTimeMS() ;

constexpr ::StringW const& __cordl_internal_get_ServerIPV4Address() const;

constexpr ::StringW& __cordl_internal_get_ServerIPV4Address() ;

constexpr ::StringW const& __cordl_internal_get_ServerIPV6Address() const;

constexpr ::StringW& __cordl_internal_get_ServerIPV6Address() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_ServerPort() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_ServerPort() ;

constexpr ::StringW const& __cordl_internal_get_ServerPublicDNSName() const;

constexpr ::StringW& __cordl_internal_get_ServerPublicDNSName() ;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::MatchmakeStatus> const& __cordl_internal_get_Status() const;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::MatchmakeStatus>& __cordl_internal_get_Status() ;

constexpr ::StringW const& __cordl_internal_get_Ticket() const;

constexpr ::StringW& __cordl_internal_get_Ticket() ;

constexpr void __cordl_internal_set_Expires(::StringW  value) ;

constexpr void __cordl_internal_set_LobbyID(::StringW  value) ;

constexpr void __cordl_internal_set_PollWaitTimeMS(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_ServerIPV4Address(::StringW  value) ;

constexpr void __cordl_internal_set_ServerIPV6Address(::StringW  value) ;

constexpr void __cordl_internal_set_ServerPort(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_ServerPublicDNSName(::StringW  value) ;

constexpr void __cordl_internal_set_Status(::System::Nullable_1<::PlayFab::ClientModels::MatchmakeStatus>  value) ;

constexpr void __cordl_internal_set_Ticket(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e0b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatchmakeResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatchmakeResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatchmakeResult(MatchmakeResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatchmakeResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatchmakeResult(MatchmakeResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20166};

/// @brief Field Expires, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Expires;

/// @brief Field LobbyID, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___LobbyID;

/// @brief Field PollWaitTimeMS, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___PollWaitTimeMS;

/// @brief Field ServerIPV4Address, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___ServerIPV4Address;

/// @brief Field ServerIPV6Address, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___ServerIPV6Address;

/// @brief Field ServerPort, offset: 0x50, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___ServerPort;

/// @brief Field ServerPublicDNSName, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___ServerPublicDNSName;

/// @brief Field Status, offset: 0x68, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::ClientModels::MatchmakeStatus>  ___Status;

/// @brief Size padding 0x68 - 0x80 = 0x18, packed as 0x18
 uint8_t  _cordl_size_padding[0x18];

/// @brief Field Ticket, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___Ticket;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::MatchmakeResult, ___Expires) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::MatchmakeResult, ___LobbyID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::MatchmakeResult, ___PollWaitTimeMS) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::MatchmakeResult, ___ServerIPV4Address) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::MatchmakeResult, ___ServerIPV6Address) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::MatchmakeResult, ___ServerPort) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::MatchmakeResult, ___ServerPublicDNSName) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::MatchmakeResult, ___Status) == 0x68, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::MatchmakeResult, ___Ticket) == 0x78, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::MatchmakeResult) == 0x68, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
