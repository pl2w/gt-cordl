#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomControls.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RoomControls)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace GlobalNamespace {
class RoomControls_PunCallbacks;
}
namespace GlobalNamespace {
class RoomControls___c;
}
namespace GorillaTag {
template<typename T>
class DelegateListProcessor_1;
}
namespace GorillaTag {
template<typename T1,typename T2>
class DelegateListProcessor_2;
}
namespace GorillaTag {
class DelegateListProcessor;
}
namespace Photon::Realtime {
class IInRoomCallbacks;
}
namespace Photon::Realtime {
class Player;
}
namespace Photon::Realtime {
class RaiseEventOptions;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class RoomControls;
}
namespace GlobalNamespace {
class RoomControls_PunCallbacks;
}
namespace GlobalNamespace {
class RoomControls___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RoomControls*);
MARK_REF_T(::GlobalNamespace::RoomControls_PunCallbacks*);
MARK_REF_T(::GlobalNamespace::RoomControls___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoomControls*, "", "RoomControls");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoomControls_PunCallbacks*, "", "RoomControls/PunCallbacks");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoomControls___c*, "", "RoomControls/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoomControls
class CORDL_TYPE RoomControls : public ::System::Object {
public:
// Declarations
using PunCallbacks = ::GlobalNamespace::RoomControls_PunCallbacks;

using __c = ::GlobalNamespace::RoomControls___c;

/// @brief Field OnPlayerBlockChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnPlayerBlockChanged, put=setStaticF_OnPlayerBlockChanged)) ::GorillaTag::DelegateListProcessor_2<::StringW,bool>*  OnPlayerBlockChanged;

/// @brief Field OnPlayerMuteChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnPlayerMuteChanged, put=setStaticF_OnPlayerMuteChanged)) ::GorillaTag::DelegateListProcessor_2<::StringW,bool>*  OnPlayerMuteChanged;

/// @brief Field OnRoomControlsEnabledChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnRoomControlsEnabledChanged, put=setStaticF_OnRoomControlsEnabledChanged)) ::GorillaTag::DelegateListProcessor_1<bool>*  OnRoomControlsEnabledChanged;

/// @brief Field OnRoomStateLoaded, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnRoomStateLoaded, put=setStaticF_OnRoomStateLoaded)) ::GorillaTag::DelegateListProcessor*  OnRoomStateLoaded;

/// @brief Field RaiseToMasterClient, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RaiseToMasterClient, put=setStaticF_RaiseToMasterClient)) ::Photon::Realtime::RaiseEventOptions*  RaiseToMasterClient;

/// @brief Field blockedPlayers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_blockedPlayers, put=setStaticF_blockedPlayers)) ::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*  blockedPlayers;

/// @brief Field mutedPlayers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_mutedPlayers, put=setStaticF_mutedPlayers)) ::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*  mutedPlayers;

/// @brief Field punCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_punCallbacks, put=setStaticF_punCallbacks)) ::GlobalNamespace::RoomControls_PunCallbacks*  punCallbacks;

/// @brief Field roomControlsEnabled, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_roomControlsEnabled, put=setStaticF_roomControlsEnabled)) bool  roomControlsEnabled;

/// @brief Method ApplyRoomProperties, addr 0x5ad97f0, size 0x238, virtual false, abstract: false, final false
static inline void ApplyRoomProperties(::ExitGames::Client::Photon::Hashtable*  properties) ;

/// @brief Method ApplyRoomProperty, addr 0x5ad9a90, size 0x17c, virtual false, abstract: false, final false
static inline void ApplyRoomProperty(::ExitGames::Client::Photon::Hashtable*  source, ::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*  destination) ;

/// @brief Method CanModerate, addr 0x5ada210, size 0x5c, virtual false, abstract: false, final false
static inline bool CanModerate() ;

/// @brief Method CanModerate, addr 0x5ada26c, size 0x218, virtual false, abstract: false, final false
static inline bool CanModerate(::by_ref<::StringW>  cannotReason) ;

/// @brief Method IsRoomControlsTrusted, addr 0x5ad9a28, size 0x68, virtual false, abstract: false, final false
static inline bool IsRoomControlsTrusted() ;

/// @brief Method KickAndBlockPlayer, addr 0x5ada644, size 0x228, virtual false, abstract: false, final false
static inline void KickAndBlockPlayer(int32_t  targetActorNumber, int32_t  howManySeconds) ;

/// @brief Method KickPlayer, addr 0x5ada484, size 0x1c0, virtual false, abstract: false, final false
static inline void KickPlayer(int32_t  targetActorNumber) ;

/// @brief Method MutePlayer, addr 0x5ada9c8, size 0x228, virtual false, abstract: false, final false
static inline void MutePlayer(int32_t  targetActorNumber, int32_t  howManySeconds) ;

/// @brief Method ReconcileRoomProperties, addr 0x5ad9c0c, size 0x288, virtual false, abstract: false, final false
static inline void ReconcileRoomProperties(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged) ;

/// @brief Method ReconcileRoomProperty, addr 0x5ad9e94, size 0x37c, virtual false, abstract: false, final false
static inline void ReconcileRoomProperty(::ExitGames::Client::Photon::Hashtable*  source, ::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*  destination, ::GorillaTag::DelegateListProcessor_2<::StringW,bool>*  onPropertyChanged) ;

/// [OnExitPlay_Run]
/// @brief Method RemovePunCallbacks, addr 0x5ad9768, size 0x88, virtual false, abstract: false, final false
static inline void RemovePunCallbacks() ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// @brief Method SubscribeToRoomEvents, addr 0x5ad9540, size 0x228, virtual false, abstract: false, final false
static inline void SubscribeToRoomEvents() ;

/// @brief Method UnblockPlayer, addr 0x5ada86c, size 0x15c, virtual false, abstract: false, final false
static inline void UnblockPlayer(::StringW  targetUserId) ;

/// @brief Method UnmutePlayer, addr 0x5adabf0, size 0x15c, virtual false, abstract: false, final false
static inline void UnmutePlayer(::StringW  targetUserId) ;

static inline ::GorillaTag::DelegateListProcessor_2<::StringW,bool>* getStaticF_OnPlayerBlockChanged() ;

static inline ::GorillaTag::DelegateListProcessor_2<::StringW,bool>* getStaticF_OnPlayerMuteChanged() ;

static inline ::GorillaTag::DelegateListProcessor_1<bool>* getStaticF_OnRoomControlsEnabledChanged() ;

static inline ::GorillaTag::DelegateListProcessor* getStaticF_OnRoomStateLoaded() ;

static inline ::Photon::Realtime::RaiseEventOptions* getStaticF_RaiseToMasterClient() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,int64_t>* getStaticF_blockedPlayers() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,int64_t>* getStaticF_mutedPlayers() ;

static inline ::GlobalNamespace::RoomControls_PunCallbacks* getStaticF_punCallbacks() ;

static inline bool getStaticF_roomControlsEnabled() ;

/// @brief Method get_BlockedPlayers, addr 0x5ad9490, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,int64_t>* get_BlockedPlayers() ;

/// @brief Method get_MutedPlayers, addr 0x5ad94e8, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,int64_t>* get_MutedPlayers() ;

/// @brief Method get_RoomControlsEnabled, addr 0x5ad9438, size 0x58, virtual false, abstract: false, final false
static inline bool get_RoomControlsEnabled() ;

static inline void setStaticF_OnPlayerBlockChanged(::GorillaTag::DelegateListProcessor_2<::StringW,bool>*  value) ;

static inline void setStaticF_OnPlayerMuteChanged(::GorillaTag::DelegateListProcessor_2<::StringW,bool>*  value) ;

static inline void setStaticF_OnRoomControlsEnabledChanged(::GorillaTag::DelegateListProcessor_1<bool>*  value) ;

static inline void setStaticF_OnRoomStateLoaded(::GorillaTag::DelegateListProcessor*  value) ;

static inline void setStaticF_RaiseToMasterClient(::Photon::Realtime::RaiseEventOptions*  value) ;

static inline void setStaticF_blockedPlayers(::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*  value) ;

static inline void setStaticF_mutedPlayers(::System::Collections::Generic::Dictionary_2<::StringW,int64_t>*  value) ;

static inline void setStaticF_punCallbacks(::GlobalNamespace::RoomControls_PunCallbacks*  value) ;

static inline void setStaticF_roomControlsEnabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomControls() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomControls", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomControls(RoomControls && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomControls", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomControls(RoomControls const& ) = delete;

/// @brief Field BlockPlayerEventCode offset 0xffffffff size 0x1
static constexpr uint8_t  BlockPlayerEventCode{static_cast<uint8_t>(0x64u)};

/// @brief Field BlockedPlayersRoomPropertyKey offset 0xffffffff size 0x8
static constexpr ::ConstString  BlockedPlayersRoomPropertyKey{u"blockedUsers"};

/// @brief Field MutePlayerEventCode offset 0xffffffff size 0x1
static constexpr uint8_t  MutePlayerEventCode{static_cast<uint8_t>(0x66u)};

/// @brief Field MutedPlayersRoomPropertyKey offset 0xffffffff size 0x8
static constexpr ::ConstString  MutedPlayersRoomPropertyKey{u"mutedUsers"};

/// @brief Field RoomControlsEnabledRoomPropertyKey offset 0xffffffff size 0x8
static constexpr ::ConstString  RoomControlsEnabledRoomPropertyKey{u"roomControlsEnabled"};

/// @brief Field UnblockPlayerEventCode offset 0xffffffff size 0x1
static constexpr uint8_t  UnblockPlayerEventCode{static_cast<uint8_t>(0x65u)};

/// @brief Field UnmutePlayerEventCode offset 0xffffffff size 0x1
static constexpr uint8_t  UnmutePlayerEventCode{static_cast<uint8_t>(0x67u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3401};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RoomControls) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoomControls/<>c
class CORDL_TYPE RoomControls___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::RoomControls___c*  __9;

/// @brief Field <>9__21_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_0, put=setStaticF___9__21_0)) ::System::Action*  __9__21_0;

/// @brief Field <>9__21_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_1, put=setStaticF___9__21_1)) ::System::Action*  __9__21_1;

static inline ::GlobalNamespace::RoomControls___c* New_ctor() ;

/// @brief Method <SubscribeToRoomEvents>b__21_0, addr 0x5adb090, size 0x128, virtual false, abstract: false, final false
inline void _SubscribeToRoomEvents_b__21_0() ;

/// @brief Method <SubscribeToRoomEvents>b__21_1, addr 0x5adb1b8, size 0xd4, virtual false, abstract: false, final false
inline void _SubscribeToRoomEvents_b__21_1() ;

/// @brief Method .ctor, addr 0x5adb088, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::RoomControls___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__21_0() ;

static inline ::System::Action* getStaticF___9__21_1() ;

static inline void setStaticF___9(::GlobalNamespace::RoomControls___c*  value) ;

static inline void setStaticF___9__21_0(::System::Action*  value) ;

static inline void setStaticF___9__21_1(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomControls___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomControls___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomControls___c(RoomControls___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomControls___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomControls___c(RoomControls___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3400};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RoomControls___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoomControls/PunCallbacks
class CORDL_TYPE RoomControls_PunCallbacks : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Photon::Realtime::IInRoomCallbacks"
constexpr operator  ::Photon::Realtime::IInRoomCallbacks*() noexcept;

static inline ::GlobalNamespace::RoomControls_PunCallbacks* New_ctor() ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched, addr 0x5adb01c, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient) ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnPlayerEnteredRoom, addr 0x5adb010, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer) ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnPlayerLeftRoom, addr 0x5adb014, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer) ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnPlayerPropertiesUpdate, addr 0x5adb018, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate(::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps) ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnRoomPropertiesUpdate, addr 0x5adafbc, size 0x54, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged) ;

/// @brief Method .ctor, addr 0x5adafb4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Photon::Realtime::IInRoomCallbacks"
constexpr ::Photon::Realtime::IInRoomCallbacks* i___Photon__Realtime__IInRoomCallbacks() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomControls_PunCallbacks() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomControls_PunCallbacks", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomControls_PunCallbacks(RoomControls_PunCallbacks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomControls_PunCallbacks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomControls_PunCallbacks(RoomControls_PunCallbacks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3399};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RoomControls_PunCallbacks) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
