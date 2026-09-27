#pragma once
// IWYU pragma private; include "GlobalNamespace/SuperCasualGame.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaGameManager_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SuperCasualGame)
namespace Fusion {
class NetworkObject;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GorillaGameModes {
struct GameModeType;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class SuperCasualGame;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SuperCasualGame*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SuperCasualGame*, "", "SuperCasualGame");
// Dependencies GorillaGameManager
namespace GlobalNamespace {
// Is value type: false
// CS Name: SuperCasualGame
class CORDL_TYPE SuperCasualGame : public ::GlobalNamespace::GorillaGameManager {
public:
// Declarations
/// @brief Method AddFusionDataBehaviour, addr 0x5af82e4, size 0x74, virtual true, abstract: false, final false
inline void AddFusionDataBehaviour(::Fusion::NetworkObject*  behaviour) ;

/// @brief Method GameModeName, addr 0x5af8358, size 0x40, virtual true, abstract: false, final false
inline ::StringW GameModeName() ;

/// @brief Method GameModeNameRoomLabel, addr 0x5af8398, size 0xd8, virtual true, abstract: false, final false
inline ::StringW GameModeNameRoomLabel() ;

/// @brief Method GameType, addr 0x5af82dc, size 0x8, virtual true, abstract: false, final false
inline ::GorillaGameModes::GameModeType GameType() ;

/// @brief Method MyMatIndex, addr 0x5af82c0, size 0x8, virtual true, abstract: false, final false
inline int32_t MyMatIndex(::GlobalNamespace::NetPlayer*  player) ;

static inline ::GlobalNamespace::SuperCasualGame* New_ctor() ;

/// @brief Method OnPlayerEnteredRoom, addr 0x5af86a8, size 0xe4, virtual true, abstract: false, final false
inline void OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer*  newPlayer) ;

/// @brief Method OnSerializeRead, addr 0x5af82c8, size 0x4, virtual true, abstract: false, final false
inline void OnSerializeRead(::System::Object*  newData) ;

/// @brief Method OnSerializeRead, addr 0x5af82d4, size 0x4, virtual true, abstract: false, final false
inline void OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnSerializeWrite, addr 0x5af82cc, size 0x8, virtual true, abstract: false, final false
inline ::System::Object* OnSerializeWrite() ;

/// @brief Method OnSerializeWrite, addr 0x5af82d8, size 0x4, virtual true, abstract: false, final false
inline void OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method StartPlaying, addr 0x5af8470, size 0x190, virtual true, abstract: false, final false
inline void StartPlaying() ;

/// @brief Method StopPlaying, addr 0x5af8600, size 0xa8, virtual true, abstract: false, final false
inline void StopPlaying() ;

/// @brief Method .ctor, addr 0x5af878c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SuperCasualGame() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SuperCasualGame", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SuperCasualGame(SuperCasualGame && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SuperCasualGame", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SuperCasualGame(SuperCasualGame const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{383};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SuperCasualGame) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
