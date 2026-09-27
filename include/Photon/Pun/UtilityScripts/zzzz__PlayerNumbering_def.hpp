#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/PlayerNumbering.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerNumbering)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Photon::Pun::UtilityScripts {
class PlayerNumbering_PlayerNumberingChanged;
}
namespace Photon::Pun::UtilityScripts {
class PlayerNumbering___c;
}
namespace Photon::Realtime {
class Player;
}
namespace System {
class AsyncCallback;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class PlayerNumbering;
}
namespace Photon::Pun::UtilityScripts {
class PlayerNumbering_PlayerNumberingChanged;
}
namespace Photon::Pun::UtilityScripts {
class PlayerNumbering___c;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::PlayerNumbering*);
MARK_REF_T(::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*);
MARK_REF_T(::Photon::Pun::UtilityScripts::PlayerNumbering___c*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::PlayerNumbering*, "Photon.Pun.UtilityScripts", "PlayerNumbering");
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*, "Photon.Pun.UtilityScripts", "PlayerNumbering/PlayerNumberingChanged");
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::PlayerNumbering___c*, "Photon.Pun.UtilityScripts", "PlayerNumbering/<>c");
// Dependencies Photon.Pun.MonoBehaviourPunCallbacks, Photon.Realtime.Player
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.PlayerNumbering
class CORDL_TYPE PlayerNumbering : public ::Photon::Pun::MonoBehaviourPunCallbacks {
public:
// Declarations
using PlayerNumberingChanged = ::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged;

using __c = ::Photon::Pun::UtilityScripts::PlayerNumbering___c;

/// @brief Field OnPlayerNumberingChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnPlayerNumberingChanged, put=setStaticF_OnPlayerNumberingChanged)) ::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*  OnPlayerNumberingChanged;

/// @brief Field SortedPlayers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SortedPlayers, put=setStaticF_SortedPlayers)) ::ArrayW<::Photon::Realtime::Player*>  SortedPlayers;

/// @brief Field dontDestroyOnLoad, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_dontDestroyOnLoad, put=__cordl_internal_set_dontDestroyOnLoad)) bool  dontDestroyOnLoad;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::Photon::Pun::UtilityScripts::PlayerNumbering>  instance;

/// @brief Method Awake, addr 0xa73733c, size 0x194, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Photon::Pun::UtilityScripts::PlayerNumbering* New_ctor() ;

/// @brief Method OnJoinedRoom, addr 0xa737c30, size 0x4, virtual true, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnLeftRoom, addr 0xa737c34, size 0x94, virtual true, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method OnPlayerEnteredRoom, addr 0xa737cc8, size 0x4, virtual true, abstract: false, final false
inline void OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer) ;

/// @brief Method OnPlayerLeftRoom, addr 0xa737ccc, size 0x4, virtual true, abstract: false, final false
inline void OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer) ;

/// @brief Method OnPlayerPropertiesUpdate, addr 0xa737cd0, size 0x78, virtual true, abstract: false, final false
inline void OnPlayerPropertiesUpdate(::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps) ;

/// @brief Method RefreshData, addr 0xa7374d0, size 0x760, virtual false, abstract: false, final false
inline void RefreshData() ;

constexpr bool const& __cordl_internal_get_dontDestroyOnLoad() const;

constexpr bool& __cordl_internal_get_dontDestroyOnLoad() ;

constexpr void __cordl_internal_set_dontDestroyOnLoad(bool  value) ;

/// @brief Method .ctor, addr 0xa7381bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnPlayerNumberingChanged, addr 0xa7371c4, size 0xbc, virtual false, abstract: false, final false
static inline void add_OnPlayerNumberingChanged(::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*  value) ;

static inline ::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged* getStaticF_OnPlayerNumberingChanged() ;

static inline ::ArrayW<::Photon::Realtime::Player*> getStaticF_SortedPlayers() ;

static inline ::UnityW<::Photon::Pun::UtilityScripts::PlayerNumbering> getStaticF_instance() ;

/// [CompilerGenerated]
/// @brief Method remove_OnPlayerNumberingChanged, addr 0xa737280, size 0xbc, virtual false, abstract: false, final false
static inline void remove_OnPlayerNumberingChanged(::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*  value) ;

static inline void setStaticF_OnPlayerNumberingChanged(::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged*  value) ;

static inline void setStaticF_SortedPlayers(::ArrayW<::Photon::Realtime::Player*>  value) ;

static inline void setStaticF_instance(::UnityW<::Photon::Pun::UtilityScripts::PlayerNumbering>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerNumbering() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerNumbering", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerNumbering(PlayerNumbering && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerNumbering", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerNumbering(PlayerNumbering const& ) = delete;

/// @brief Field RoomPlayerIndexedProp offset 0xffffffff size 0x8
static constexpr ::ConstString  RoomPlayerIndexedProp{u"pNr"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31215};

/// @brief Field dontDestroyOnLoad, offset: 0x28, size: 0x1, def value: None
 bool  ___dontDestroyOnLoad;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::UtilityScripts::PlayerNumbering, ___dontDestroyOnLoad) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::UtilityScripts::PlayerNumbering) == 0x30, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.PlayerNumbering/<>c
class CORDL_TYPE PlayerNumbering___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Photon::Pun::UtilityScripts::PlayerNumbering___c*  __9;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::System::Func_2<::Photon::Realtime::Player*,int32_t>*  __9__14_0;

/// @brief Field <>9__14_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_1, put=setStaticF___9__14_1)) ::System::Func_2<::Photon::Realtime::Player*,int32_t>*  __9__14_1;

/// @brief Field <>9__14_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_2, put=setStaticF___9__14_2)) ::System::Func_2<::Photon::Realtime::Player*,int32_t>*  __9__14_2;

static inline ::Photon::Pun::UtilityScripts::PlayerNumbering___c* New_ctor() ;

/// @brief Method <RefreshData>b__14_0, addr 0xa73830c, size 0x8, virtual false, abstract: false, final false
inline int32_t _RefreshData_b__14_0(::Photon::Realtime::Player*  p) ;

/// @brief Method <RefreshData>b__14_1, addr 0xa738314, size 0x14, virtual false, abstract: false, final false
inline int32_t _RefreshData_b__14_1(::Photon::Realtime::Player*  p) ;

/// @brief Method <RefreshData>b__14_2, addr 0xa738328, size 0x8, virtual false, abstract: false, final false
inline int32_t _RefreshData_b__14_2(::Photon::Realtime::Player*  p) ;

/// @brief Method .ctor, addr 0xa738304, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Photon::Pun::UtilityScripts::PlayerNumbering___c* getStaticF___9() ;

static inline ::System::Func_2<::Photon::Realtime::Player*,int32_t>* getStaticF___9__14_0() ;

static inline ::System::Func_2<::Photon::Realtime::Player*,int32_t>* getStaticF___9__14_1() ;

static inline ::System::Func_2<::Photon::Realtime::Player*,int32_t>* getStaticF___9__14_2() ;

static inline void setStaticF___9(::Photon::Pun::UtilityScripts::PlayerNumbering___c*  value) ;

static inline void setStaticF___9__14_0(::System::Func_2<::Photon::Realtime::Player*,int32_t>*  value) ;

static inline void setStaticF___9__14_1(::System::Func_2<::Photon::Realtime::Player*,int32_t>*  value) ;

static inline void setStaticF___9__14_2(::System::Func_2<::Photon::Realtime::Player*,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerNumbering___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerNumbering___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerNumbering___c(PlayerNumbering___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerNumbering___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerNumbering___c(PlayerNumbering___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31214};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Pun::UtilityScripts::PlayerNumbering___c) == 0x10, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
// Dependencies System.MulticastDelegate
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.PlayerNumbering/PlayerNumberingChanged
class CORDL_TYPE PlayerNumbering_PlayerNumberingChanged : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa738274, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa738290, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa738260, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa7381c4, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerNumbering_PlayerNumberingChanged() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerNumbering_PlayerNumberingChanged", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerNumbering_PlayerNumberingChanged(PlayerNumbering_PlayerNumberingChanged && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerNumbering_PlayerNumberingChanged", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerNumbering_PlayerNumberingChanged(PlayerNumbering_PlayerNumberingChanged const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31213};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Pun::UtilityScripts::PlayerNumbering_PlayerNumberingChanged) == 0x80, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
