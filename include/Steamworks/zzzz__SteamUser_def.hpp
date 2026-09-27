#pragma once
// IWYU pragma private; include "Steamworks/SteamUser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamUser)
namespace Steamworks {
struct CSteamID;
}
namespace Steamworks {
struct HAuthTicket;
}
namespace Steamworks {
struct SteamNetworkingIdentity;
}
// Forward declare root types
namespace Steamworks {
class SteamUser;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamUser*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamUser*, "Steamworks", "SteamUser");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamUser
class CORDL_TYPE SteamUser : public ::System::Object {
public:
// Declarations
/// @brief Method CancelAuthTicket, addr 0x5f2f878, size 0x54, virtual false, abstract: false, final false
static inline void CancelAuthTicket(::Steamworks::HAuthTicket  hAuthTicket) ;

/// @brief Method GetAuthSessionTicket, addr 0x5f2f484, size 0xc4, virtual false, abstract: false, final false
static inline ::Steamworks::HAuthTicket GetAuthSessionTicket(::ArrayW<uint8_t>  pTicket, int32_t  cbMaxTicket, ::by_ref<uint32_t>  pcbTicket, ::by_ref<::Steamworks::SteamNetworkingIdentity>  pSteamNetworkingIdentity) ;

/// @brief Method GetAuthTicketForWebApi, addr 0x5f2f600, size 0x1ac, virtual false, abstract: false, final false
static inline ::Steamworks::HAuthTicket GetAuthTicketForWebApi(::StringW  pchIdentity) ;

/// @brief Method GetSteamID, addr 0x5f2f370, size 0x94, virtual false, abstract: false, final false
static inline ::Steamworks::CSteamID GetSteamID() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamUser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamUser", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamUser(SteamUser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamUser", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamUser(SteamUser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32120};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamUser) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
