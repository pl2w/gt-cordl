#pragma once
// IWYU pragma private; include "Photon/Realtime/Player.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Player)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Photon::Realtime {
class Room;
}
namespace Photon::Realtime {
class WebFlags;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Realtime {
class Player;
}
// Write type traits
MARK_REF_T(::Photon::Realtime::Player*);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::Player*, "Photon.Realtime", "Player");
// Dependencies System.Object
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.Player
class CORDL_TYPE Player : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ActorNumber)) int32_t  ActorNumber;

 __declspec(property(get=get_CustomProperties, put=set_CustomProperties)) ::ExitGames::Client::Photon::Hashtable*  CustomProperties;

 __declspec(property(get=get_DefaultName)) ::StringW  DefaultName;

 __declspec(property(get=get_HasRejoined, put=set_HasRejoined)) bool  HasRejoined;

 __declspec(property(get=get_IsInactive, put=set_IsInactive)) bool  IsInactive;

/// @brief Field IsLocal, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsLocal, put=__cordl_internal_set_IsLocal)) bool  IsLocal;

 __declspec(property(get=get_IsMasterClient)) bool  IsMasterClient;

 __declspec(property(get=get_NickName, put=set_NickName)) ::StringW  NickName;

 __declspec(property(get=get_RoomReference, put=set_RoomReference)) ::Photon::Realtime::Room*  RoomReference;

/// @brief Field TagObject, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_TagObject, put=__cordl_internal_set_TagObject)) ::System::Object*  TagObject;

 __declspec(property(get=get_UserId, put=set_UserId)) ::StringW  UserId;

/// @brief Field <CustomProperties>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__CustomProperties_k__BackingField, put=__cordl_internal_set__CustomProperties_k__BackingField)) ::ExitGames::Client::Photon::Hashtable*  _CustomProperties_k__BackingField;

/// @brief Field <HasRejoined>k__BackingField, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasRejoined_k__BackingField, put=__cordl_internal_set__HasRejoined_k__BackingField)) bool  _HasRejoined_k__BackingField;

/// @brief Field <IsInactive>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsInactive_k__BackingField, put=__cordl_internal_set__IsInactive_k__BackingField)) bool  _IsInactive_k__BackingField;

/// @brief Field <RoomReference>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__RoomReference_k__BackingField, put=__cordl_internal_set__RoomReference_k__BackingField)) ::Photon::Realtime::Room*  _RoomReference_k__BackingField;

/// @brief Field <UserId>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__UserId_k__BackingField, put=__cordl_internal_set__UserId_k__BackingField)) ::StringW  _UserId_k__BackingField;

/// @brief Field actorNumber, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_actorNumber, put=__cordl_internal_set_actorNumber)) int32_t  actorNumber;

/// @brief Field defaultName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultName, put=__cordl_internal_set_defaultName)) ::StringW  defaultName;

/// @brief Field isDefaultGorillaNameSet, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDefaultGorillaNameSet, put=__cordl_internal_set_isDefaultGorillaNameSet)) bool  isDefaultGorillaNameSet;

/// @brief Field nickName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_nickName, put=__cordl_internal_set_nickName)) ::StringW  nickName;

/// @brief Method ChangeLocalID, addr 0xa6fee70, size 0x10, virtual false, abstract: false, final false
inline void ChangeLocalID(int32_t  newID) ;

/// @brief Method Equals, addr 0xa70b07c, size 0xa8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  p) ;

/// @brief Method Get, addr 0xa70aa00, size 0x1c, virtual false, abstract: false, final false
inline ::Photon::Realtime::Player* Get(int32_t  id) ;

/// @brief Method GetHashCode, addr 0xa70b124, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetNext, addr 0xa70aa1c, size 0x8, virtual false, abstract: false, final false
inline ::Photon::Realtime::Player* GetNext() ;

/// @brief Method GetNextFor, addr 0xa70ac08, size 0x14, virtual false, abstract: false, final false
inline ::Photon::Realtime::Player* GetNextFor(::Photon::Realtime::Player*  currentPlayer) ;

/// @brief Method GetNextFor, addr 0xa70aa24, size 0x1e4, virtual false, abstract: false, final false
inline ::Photon::Realtime::Player* GetNextFor(int32_t  currentPlayerId) ;

/// @brief Method InternalCacheProperties, addr 0xa70ac1c, size 0x1e8, virtual true, abstract: false, final false
inline void InternalCacheProperties(::ExitGames::Client::Photon::Hashtable*  properties) ;

static inline ::Photon::Realtime::Player* New_ctor(::StringW  nickName, int32_t  actorNumber, bool  isLocal) ;

static inline ::Photon::Realtime::Player* New_ctor(::StringW  nickName, int32_t  actorNumber, bool  isLocal, ::ExitGames::Client::Photon::Hashtable*  playerProperties) ;

/// @brief Method SetCustomProperties, addr 0xa6fd6c8, size 0x1c4, virtual false, abstract: false, final false
inline bool SetCustomProperties(::ExitGames::Client::Photon::Hashtable*  propertiesToSet, ::ExitGames::Client::Photon::Hashtable*  expectedValues, ::Photon::Realtime::WebFlags*  webFlags) ;

/// @brief Method SetPlayerNameProperty, addr 0xa70a808, size 0xb0, virtual false, abstract: false, final false
inline bool SetPlayerNameProperty() ;

/// @brief Method ToString, addr 0xa70ae04, size 0x7c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToStringFull, addr 0xa70ae80, size 0x1fc, virtual false, abstract: false, final false
inline ::StringW ToStringFull() ;

constexpr bool const& __cordl_internal_get_IsLocal() const;

constexpr bool& __cordl_internal_get_IsLocal() ;

constexpr ::System::Object* const& __cordl_internal_get_TagObject() const;

constexpr ::System::Object*& __cordl_internal_get_TagObject() ;

constexpr ::ExitGames::Client::Photon::Hashtable* const& __cordl_internal_get__CustomProperties_k__BackingField() const;

constexpr ::ExitGames::Client::Photon::Hashtable*& __cordl_internal_get__CustomProperties_k__BackingField() ;

constexpr bool const& __cordl_internal_get__HasRejoined_k__BackingField() const;

constexpr bool& __cordl_internal_get__HasRejoined_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsInactive_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsInactive_k__BackingField() ;

constexpr ::Photon::Realtime::Room* const& __cordl_internal_get__RoomReference_k__BackingField() const;

constexpr ::Photon::Realtime::Room*& __cordl_internal_get__RoomReference_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__UserId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__UserId_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_actorNumber() const;

constexpr int32_t& __cordl_internal_get_actorNumber() ;

constexpr ::StringW const& __cordl_internal_get_defaultName() const;

constexpr ::StringW& __cordl_internal_get_defaultName() ;

constexpr bool const& __cordl_internal_get_isDefaultGorillaNameSet() const;

constexpr bool& __cordl_internal_get_isDefaultGorillaNameSet() ;

constexpr ::StringW const& __cordl_internal_get_nickName() const;

constexpr ::StringW& __cordl_internal_get_nickName() ;

constexpr void __cordl_internal_set_IsLocal(bool  value) ;

constexpr void __cordl_internal_set_TagObject(::System::Object*  value) ;

constexpr void __cordl_internal_set__CustomProperties_k__BackingField(::ExitGames::Client::Photon::Hashtable*  value) ;

constexpr void __cordl_internal_set__HasRejoined_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsInactive_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__RoomReference_k__BackingField(::Photon::Realtime::Room*  value) ;

constexpr void __cordl_internal_set__UserId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_actorNumber(int32_t  value) ;

constexpr void __cordl_internal_set_defaultName(::StringW  value) ;

constexpr void __cordl_internal_set_isDefaultGorillaNameSet(bool  value) ;

constexpr void __cordl_internal_set_nickName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa70a9f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  nickName, int32_t  actorNumber, bool  isLocal) ;

/// @brief Method .ctor, addr 0xa6ffa80, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::StringW  nickName, int32_t  actorNumber, bool  isLocal, ::ExitGames::Client::Photon::Hashtable*  playerProperties) ;

/// @brief Method get_ActorNumber, addr 0xa70a7e8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ActorNumber() ;

/// [CompilerGenerated]
/// @brief Method get_CustomProperties, addr 0xa70a9e8, size 0x8, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::Hashtable* get_CustomProperties() ;

/// @brief Method get_DefaultName, addr 0xa70a8b8, size 0xec, virtual false, abstract: false, final false
inline ::StringW get_DefaultName() ;

/// [CompilerGenerated]
/// @brief Method get_HasRejoined, addr 0xa70a7f0, size 0x8, virtual false, abstract: false, final false
inline bool get_HasRejoined() ;

/// [CompilerGenerated]
/// @brief Method get_IsInactive, addr 0xa70a9d8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsInactive() ;

/// @brief Method get_IsMasterClient, addr 0xa70a9b4, size 0x24, virtual false, abstract: false, final false
inline bool get_IsMasterClient() ;

/// @brief Method get_NickName, addr 0xa70a800, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_NickName() ;

/// [CompilerGenerated]
/// @brief Method get_RoomReference, addr 0xa70a7d8, size 0x8, virtual false, abstract: false, final false
inline ::Photon::Realtime::Room* get_RoomReference() ;

/// [CompilerGenerated]
/// @brief Method get_UserId, addr 0xa70a9a4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_UserId() ;

/// [CompilerGenerated]
/// @brief Method set_CustomProperties, addr 0xa70a9f0, size 0x8, virtual false, abstract: false, final false
inline void set_CustomProperties(::ExitGames::Client::Photon::Hashtable*  value) ;

/// [CompilerGenerated]
/// @brief Method set_HasRejoined, addr 0xa70a7f8, size 0x8, virtual false, abstract: false, final false
inline void set_HasRejoined(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsInactive, addr 0xa70a9e0, size 0x8, virtual false, abstract: false, final false
inline void set_IsInactive(bool  value) ;

/// @brief Method set_NickName, addr 0xa6f9f74, size 0x74, virtual false, abstract: false, final false
inline void set_NickName(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_RoomReference, addr 0xa70a7e0, size 0x8, virtual false, abstract: false, final false
inline void set_RoomReference(::Photon::Realtime::Room*  value) ;

/// [CompilerGenerated]
/// @brief Method set_UserId, addr 0xa70a9ac, size 0x8, virtual false, abstract: false, final false
inline void set_UserId(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Player() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Player", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Player(Player && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Player", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Player(Player const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29892};

/// [CompilerGenerated]
/// @brief Field <RoomReference>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Photon::Realtime::Room*  ____RoomReference_k__BackingField;

/// @brief Field actorNumber, offset: 0x18, size: 0x4, def value: None
 int32_t  ___actorNumber;

/// @brief Field IsLocal, offset: 0x1c, size: 0x1, def value: None
 bool  ___IsLocal;

/// [CompilerGenerated]
/// @brief Field <HasRejoined>k__BackingField, offset: 0x1d, size: 0x1, def value: None
 bool  ____HasRejoined_k__BackingField;

/// @brief Field nickName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___nickName;

/// @brief Field isDefaultGorillaNameSet, offset: 0x28, size: 0x1, def value: None
 bool  ___isDefaultGorillaNameSet;

/// @brief Field defaultName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___defaultName;

/// [CompilerGenerated]
/// @brief Field <UserId>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____UserId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsInactive>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____IsInactive_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CustomProperties>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::ExitGames::Client::Photon::Hashtable*  ____CustomProperties_k__BackingField;

/// @brief Field TagObject, offset: 0x50, size: 0x8, def value: None
 ::System::Object*  ___TagObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Realtime::Player, ____RoomReference_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Player, ___actorNumber) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Player, ___IsLocal) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Player, ____HasRejoined_k__BackingField) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Player, ___nickName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Player, ___isDefaultGorillaNameSet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Player, ___defaultName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Player, ____UserId_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Player, ____IsInactive_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Player, ____CustomProperties_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::Player, ___TagObject) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Photon::Realtime::Player) == 0x58, "Size mismatch!");

} // namespace end def Photon::Realtime
