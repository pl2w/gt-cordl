#pragma once
// IWYU pragma private; include "GlobalNamespace/CasualGameMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaGameManager_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CasualGameMode)
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
class CasualGameMode;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CasualGameMode*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CasualGameMode*, "", "CasualGameMode");
// Dependencies GorillaGameManager
namespace GlobalNamespace {
// Is value type: false
// CS Name: CasualGameMode
class CORDL_TYPE CasualGameMode : public ::GlobalNamespace::GorillaGameManager {
public:
// Declarations
/// @brief Method AddFusionDataBehaviour, addr 0x579bc6c, size 0x74, virtual true, abstract: false, final false
inline void AddFusionDataBehaviour(::Fusion::NetworkObject*  behaviour) ;

/// @brief Method GameModeName, addr 0x579bce0, size 0x40, virtual true, abstract: false, final false
inline ::StringW GameModeName() ;

/// @brief Method GameModeNameRoomLabel, addr 0x579bd20, size 0xd8, virtual true, abstract: false, final false
inline ::StringW GameModeNameRoomLabel() ;

/// @brief Method GameType, addr 0x579bc64, size 0x8, virtual true, abstract: false, final false
inline ::GorillaGameModes::GameModeType GameType() ;

/// @brief Method MyMatIndex, addr 0x579bc48, size 0x8, virtual true, abstract: false, final false
inline int32_t MyMatIndex(::GlobalNamespace::NetPlayer*  player) ;

static inline ::GlobalNamespace::CasualGameMode* New_ctor() ;

/// @brief Method OnSerializeRead, addr 0x579bc50, size 0x4, virtual true, abstract: false, final false
inline void OnSerializeRead(::System::Object*  newData) ;

/// @brief Method OnSerializeRead, addr 0x579bc5c, size 0x4, virtual true, abstract: false, final false
inline void OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnSerializeWrite, addr 0x579bc54, size 0x8, virtual true, abstract: false, final false
inline ::System::Object* OnSerializeWrite() ;

/// @brief Method OnSerializeWrite, addr 0x579bc60, size 0x4, virtual true, abstract: false, final false
inline void OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method .ctor, addr 0x579bdf8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CasualGameMode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CasualGameMode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CasualGameMode(CasualGameMode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CasualGameMode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CasualGameMode(CasualGameMode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1484};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CasualGameMode) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
