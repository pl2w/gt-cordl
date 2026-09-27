#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/PunTurnManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PunTurnManager)
namespace ExitGames::Client::Photon {
class EventData;
}
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Photon::Pun::UtilityScripts {
class IPunTurnManagerCallbacks;
}
namespace Photon::Realtime {
class IOnEventCallback;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class PunTurnManager;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::PunTurnManager*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::PunTurnManager*, "Photon.Pun.UtilityScripts", "PunTurnManager");
// Dependencies Photon.Pun.MonoBehaviourPunCallbacks
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.PunTurnManager
class CORDL_TYPE PunTurnManager : public ::Photon::Pun::MonoBehaviourPunCallbacks {
public:
// Declarations
 __declspec(property(get=get_ElapsedTimeInTurn)) float_t  ElapsedTimeInTurn;

 __declspec(property(get=get_IsCompletedByAll)) bool  IsCompletedByAll;

 __declspec(property(get=get_IsFinishedByMe)) bool  IsFinishedByMe;

 __declspec(property(get=get_IsOver)) bool  IsOver;

 __declspec(property(get=get_RemainingSecondsInTurn)) float_t  RemainingSecondsInTurn;

 __declspec(property(get=get_Turn, put=set_Turn)) int32_t  Turn;

/// @brief Field TurnDuration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_TurnDuration, put=__cordl_internal_set_TurnDuration)) float_t  TurnDuration;

/// @brief Field TurnManagerListener, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_TurnManagerListener, put=__cordl_internal_set_TurnManagerListener)) ::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*  TurnManagerListener;

/// @brief Field _isOverCallProcessed, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__isOverCallProcessed, put=__cordl_internal_set__isOverCallProcessed)) bool  _isOverCallProcessed;

/// @brief Field finishedPlayers, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_finishedPlayers, put=__cordl_internal_set_finishedPlayers)) ::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>*  finishedPlayers;

/// @brief Field sender, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sender, put=__cordl_internal_set_sender)) ::Photon::Realtime::Player*  sender;

/// @brief Convert operator to "::Photon::Realtime::IOnEventCallback"
constexpr operator  ::Photon::Realtime::IOnEventCallback*() noexcept;

/// @brief Method BeginTurn, addr 0xa73cbc4, size 0x20, virtual false, abstract: false, final false
inline void BeginTurn() ;

/// @brief Method GetPlayerFinishedTurn, addr 0xa73d3b4, size 0x6c, virtual false, abstract: false, final false
inline bool GetPlayerFinishedTurn(::Photon::Realtime::Player*  player) ;

static inline ::Photon::Pun::UtilityScripts::PunTurnManager* New_ctor() ;

/// @brief Method OnEvent, addr 0xa73d420, size 0x5c, virtual true, abstract: false, final true
inline void OnEvent(::ExitGames::Client::Photon::EventData*  photonEvent) ;

/// @brief Method OnRoomPropertiesUpdate, addr 0xa73d47c, size 0x124, virtual true, abstract: false, final false
inline void OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged) ;

/// @brief Method ProcessOnEvent, addr 0xa73cfd4, size 0x3e0, virtual false, abstract: false, final false
inline void ProcessOnEvent(uint8_t  eventCode, ::System::Object*  content, int32_t  senderId) ;

/// @brief Method SendMove, addr 0xa73cbe4, size 0x2a0, virtual false, abstract: false, final false
inline void SendMove(::System::Object*  move, bool  finished) ;

/// @brief Method Start, addr 0xa73cabc, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa73cac0, size 0x104, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_TurnDuration() const;

constexpr float_t& __cordl_internal_get_TurnDuration() ;

constexpr ::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks* const& __cordl_internal_get_TurnManagerListener() const;

constexpr ::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*& __cordl_internal_get_TurnManagerListener() ;

constexpr bool const& __cordl_internal_get__isOverCallProcessed() const;

constexpr bool& __cordl_internal_get__isOverCallProcessed() ;

constexpr ::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>* const& __cordl_internal_get_finishedPlayers() const;

constexpr ::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>*& __cordl_internal_get_finishedPlayers() ;

constexpr ::Photon::Realtime::Player* const& __cordl_internal_get_sender() const;

constexpr ::Photon::Realtime::Player*& __cordl_internal_get_sender() ;

constexpr void __cordl_internal_set_TurnDuration(float_t  value) ;

constexpr void __cordl_internal_set_TurnManagerListener(::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*  value) ;

constexpr void __cordl_internal_set__isOverCallProcessed(bool  value) ;

constexpr void __cordl_internal_set_finishedPlayers(::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>*  value) ;

constexpr void __cordl_internal_set_sender(::Photon::Realtime::Player*  value) ;

/// @brief Method .ctor, addr 0xa73d5a0, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ElapsedTimeInTurn, addr 0xa73c780, size 0xa8, virtual false, abstract: false, final false
inline float_t get_ElapsedTimeInTurn() ;

/// @brief Method get_IsCompletedByAll, addr 0xa73c94c, size 0xb8, virtual false, abstract: false, final false
inline bool get_IsCompletedByAll() ;

/// @brief Method get_IsFinishedByMe, addr 0xa73ca04, size 0x84, virtual false, abstract: false, final false
inline bool get_IsFinishedByMe() ;

/// @brief Method get_IsOver, addr 0xa73ca88, size 0x34, virtual false, abstract: false, final false
inline bool get_IsOver() ;

/// @brief Method get_RemainingSecondsInTurn, addr 0xa73c920, size 0x2c, virtual false, abstract: false, final false
inline float_t get_RemainingSecondsInTurn() ;

/// @brief Method get_Turn, addr 0xa73c3ec, size 0x84, virtual false, abstract: false, final false
inline int32_t get_Turn() ;

/// @brief Convert to "::Photon::Realtime::IOnEventCallback"
constexpr ::Photon::Realtime::IOnEventCallback* i___Photon__Realtime__IOnEventCallback() noexcept;

/// @brief Method set_Turn, addr 0xa73c568, size 0xa0, virtual false, abstract: false, final false
inline void set_Turn(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PunTurnManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PunTurnManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PunTurnManager(PunTurnManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PunTurnManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PunTurnManager(PunTurnManager const& ) = delete;

/// @brief Field EvFinalMove offset 0xffffffff size 0x1
static constexpr uint8_t  EvFinalMove{static_cast<uint8_t>(0x2u)};

/// @brief Field EvMove offset 0xffffffff size 0x1
static constexpr uint8_t  EvMove{static_cast<uint8_t>(0x1u)};

/// @brief Field TurnManagerEventOffset offset 0xffffffff size 0x1
static constexpr uint8_t  TurnManagerEventOffset{static_cast<uint8_t>(0x0u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31237};

/// @brief Field sender, offset: 0x28, size: 0x8, def value: None
 ::Photon::Realtime::Player*  ___sender;

/// @brief Field TurnDuration, offset: 0x30, size: 0x4, def value: None
 float_t  ___TurnDuration;

/// @brief Field TurnManagerListener, offset: 0x38, size: 0x8, def value: None
 ::Photon::Pun::UtilityScripts::IPunTurnManagerCallbacks*  ___TurnManagerListener;

/// @brief Field finishedPlayers, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>*  ___finishedPlayers;

/// @brief Field _isOverCallProcessed, offset: 0x48, size: 0x1, def value: None
 bool  ____isOverCallProcessed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::UtilityScripts::PunTurnManager, ___sender) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PunTurnManager, ___TurnDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PunTurnManager, ___TurnManagerListener) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PunTurnManager, ___finishedPlayers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PunTurnManager, ____isOverCallProcessed) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::UtilityScripts::PunTurnManager) == 0x50, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
