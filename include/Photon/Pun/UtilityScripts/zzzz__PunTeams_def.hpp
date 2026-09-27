#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/PunTeams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PunTeams)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace GlobalNamespace {
struct PunTeams_Team;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class PunTeams;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::PunTeams*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::PunTeams*, "Photon.Pun.UtilityScripts", "PunTeams");
// [Obsolete("do not use this or add it to the scene. use PhotonTeamsManager instead")]
// Dependencies Photon.Pun.MonoBehaviourPunCallbacks
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.PunTeams
class CORDL_TYPE PunTeams : public ::Photon::Pun::MonoBehaviourPunCallbacks {
public:
// Declarations
using Team = ::GlobalNamespace::PunTeams_Team;

/// @brief Field PlayersPerTeam, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PlayersPerTeam, put=setStaticF_PlayersPerTeam)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PunTeams_Team,::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*>*  PlayersPerTeam;

static inline ::Photon::Pun::UtilityScripts::PunTeams* New_ctor() ;

/// @brief Method OnDisable, addr 0xa738964, size 0x14, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnJoinedRoom, addr 0xa738978, size 0x4, virtual true, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnLeftRoom, addr 0xa738dfc, size 0x4, virtual true, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method OnPlayerEnteredRoom, addr 0xa738e08, size 0x4, virtual true, abstract: false, final false
inline void OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer) ;

/// @brief Method OnPlayerLeftRoom, addr 0xa738e04, size 0x4, virtual true, abstract: false, final false
inline void OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer) ;

/// @brief Method OnPlayerPropertiesUpdate, addr 0xa738e00, size 0x4, virtual true, abstract: false, final false
inline void OnPlayerPropertiesUpdate(::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps) ;

/// @brief Method Start, addr 0xa738588, size 0x3dc, virtual false, abstract: false, final false
inline void Start() ;

/// [Obsolete("do not call this.")]
/// @brief Method UpdateTeams, addr 0xa73897c, size 0x480, virtual false, abstract: false, final false
inline void UpdateTeams() ;

/// @brief Method .ctor, addr 0xa738ed0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PunTeams_Team,::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*>* getStaticF_PlayersPerTeam() ;

static inline void setStaticF_PlayersPerTeam(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PunTeams_Team,::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PunTeams() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PunTeams", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PunTeams(PunTeams && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PunTeams", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PunTeams(PunTeams const& ) = delete;

/// @brief Field TeamPlayerProp offset 0xffffffff size 0x8
static constexpr ::ConstString  TeamPlayerProp{u"team"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31220};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Pun::UtilityScripts::PunTeams) == 0x28, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
