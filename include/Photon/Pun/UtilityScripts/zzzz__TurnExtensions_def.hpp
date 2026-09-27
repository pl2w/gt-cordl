#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/TurnExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TurnExtensions)
namespace Photon::Realtime {
class Player;
}
namespace Photon::Realtime {
class RoomInfo;
}
namespace Photon::Realtime {
class Room;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class TurnExtensions;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::TurnExtensions*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::TurnExtensions*, "Photon.Pun.UtilityScripts", "TurnExtensions");
// [Extension]
// Dependencies System.Object
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.TurnExtensions
class CORDL_TYPE TurnExtensions : public ::System::Object {
public:
// Declarations
/// @brief Field FinishedTurnPropKey, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FinishedTurnPropKey, put=setStaticF_FinishedTurnPropKey)) ::StringW  FinishedTurnPropKey;

/// @brief Field TurnPropKey, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TurnPropKey, put=setStaticF_TurnPropKey)) ::StringW  TurnPropKey;

/// @brief Field TurnStartPropKey, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TurnStartPropKey, put=setStaticF_TurnStartPropKey)) ::StringW  TurnStartPropKey;

/// [Extension]
/// @brief Method GetFinishedTurn, addr 0xa73d630, size 0x160, virtual false, abstract: false, final false
static inline int32_t GetFinishedTurn(::Photon::Realtime::Player*  player) ;

/// [Extension]
/// @brief Method GetTurn, addr 0xa73c470, size 0xf8, virtual false, abstract: false, final false
static inline int32_t GetTurn(::Photon::Realtime::RoomInfo*  room) ;

/// [Extension]
/// @brief Method GetTurnStart, addr 0xa73c828, size 0xf8, virtual false, abstract: false, final false
static inline int32_t GetTurnStart(::Photon::Realtime::RoomInfo*  room) ;

/// [Extension]
/// @brief Method SetFinishedTurn, addr 0xa73ce84, size 0x150, virtual false, abstract: false, final false
static inline void SetFinishedTurn(::Photon::Realtime::Player*  player, int32_t  turn) ;

/// [Extension]
/// @brief Method SetTurn, addr 0xa73c608, size 0x178, virtual false, abstract: false, final false
static inline void SetTurn(::Photon::Realtime::Room*  room, int32_t  turn, bool  setStartTime) ;

static inline ::StringW getStaticF_FinishedTurnPropKey() ;

static inline ::StringW getStaticF_TurnPropKey() ;

static inline ::StringW getStaticF_TurnStartPropKey() ;

static inline void setStaticF_FinishedTurnPropKey(::StringW  value) ;

static inline void setStaticF_TurnPropKey(::StringW  value) ;

static inline void setStaticF_TurnStartPropKey(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TurnExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TurnExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TurnExtensions(TurnExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TurnExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TurnExtensions(TurnExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31239};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Pun::UtilityScripts::TurnExtensions) == 0x10, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
