#pragma once
// IWYU pragma private; include "GlobalNamespace/NetPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetPlayer)
namespace Fusion {
struct PlayerRef;
}
namespace GlobalNamespace {
struct NetPlayer_SingleCallRPC;
}
namespace GorillaTag {
class ObjectPoolEvents;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class NetPlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NetPlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetPlayer*, "", "NetPlayer");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetPlayer
class CORDL_TYPE NetPlayer : public ::System::Object {
public:
// Declarations
using SingleCallRPC = ::GlobalNamespace::NetPlayer_SingleCallRPC;

 __declspec(property(get=get_ActorNumber)) int32_t  ActorNumber;

 __declspec(property(get=get_DefaultName)) ::StringW  DefaultName;

 __declspec(property(get=get_InRoom)) bool  InRoom;

 __declspec(property(get=get_IsLocal)) bool  IsLocal;

 __declspec(property(get=get_IsMasterClient)) bool  IsMasterClient;

 __declspec(property(get=get_IsNull)) bool  IsNull;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_JoinedTime, put=set_JoinedTime)) float_t  JoinedTime;

 __declspec(property(get=get_LeftTime, put=set_LeftTime)) float_t  LeftTime;

 __declspec(property(get=get_NickName)) ::StringW  NickName;

 __declspec(property(get=get_SanitizedNickName, put=set_SanitizedNickName)) ::StringW  SanitizedNickName;

/// @brief Field SingleCallRPCStatus, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SingleCallRPCStatus, put=__cordl_internal_set_SingleCallRPCStatus)) ::System::Collections::Generic::HashSet_1<int32_t>*  SingleCallRPCStatus;

 __declspec(property(get=get_UserId)) ::StringW  UserId;

/// @brief Field <JoinedTime>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__JoinedTime_k__BackingField, put=__cordl_internal_set__JoinedTime_k__BackingField)) float_t  _JoinedTime_k__BackingField;

/// @brief Field <LeftTime>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__LeftTime_k__BackingField, put=__cordl_internal_set__LeftTime_k__BackingField)) float_t  _LeftTime_k__BackingField;

/// @brief Field <SanitizedNickName>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__SanitizedNickName_k__BackingField, put=__cordl_internal_set__SanitizedNickName_k__BackingField)) ::StringW  _SanitizedNickName_k__BackingField;

/// @brief Convert operator to "::GorillaTag::ObjectPoolEvents"
constexpr operator  ::GorillaTag::ObjectPoolEvents*() noexcept;

/// @brief Method CheckSingleCallRPC, addr 0x56e7b5c, size 0x58, virtual true, abstract: false, final false
inline bool CheckSingleCallRPC(::GlobalNamespace::NetPlayer_SingleCallRPC  RPCType) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Equals(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  other) ;

/// @brief Method Get, addr 0x56e7f60, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::NetPlayer* Get(int32_t  actorNr) ;

/// @brief Method Get, addr 0x56e78c8, size 0x50, virtual false, abstract: false, final false
static inline ::GlobalNamespace::NetPlayer* Get(::Fusion::PlayerRef  player) ;

/// @brief Method Get, addr 0x56e77c4, size 0x70, virtual false, abstract: false, final false
static inline ::GlobalNamespace::NetPlayer* Get(::Photon::Realtime::Player*  player) ;

/// @brief Method GetPlayerRef, addr 0x56e7c0c, size 0x78, virtual false, abstract: false, final false
inline ::Photon::Realtime::Player* GetPlayerRef() ;

static inline ::GlobalNamespace::NetPlayer* New_ctor() ;

/// @brief Method OnReturned, addr 0x56d762c, size 0x80, virtual true, abstract: false, final false
inline void OnReturned() ;

/// @brief Method OnTaken, addr 0x56d76b0, size 0x64, virtual true, abstract: false, final false
inline void OnTaken() ;

/// @brief Method ReceivedSingleCallRPC, addr 0x56e7bb4, size 0x58, virtual true, abstract: false, final false
inline void ReceivedSingleCallRPC(::GlobalNamespace::NetPlayer_SingleCallRPC  RPCType) ;

/// @brief Method ToStringFull, addr 0x56e7c84, size 0xa0, virtual false, abstract: false, final false
inline ::StringW ToStringFull() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_SingleCallRPCStatus() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_SingleCallRPCStatus() ;

constexpr float_t const& __cordl_internal_get__JoinedTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__JoinedTime_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__LeftTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__LeftTime_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__SanitizedNickName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__SanitizedNickName_k__BackingField() ;

constexpr void __cordl_internal_set_SingleCallRPCStatus(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__JoinedTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__LeftTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__SanitizedNickName_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x56d6b34, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActorNumber, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_ActorNumber() ;

/// @brief Method get_DefaultName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_DefaultName() ;

/// @brief Method get_InRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_InRoom() ;

/// @brief Method get_IsLocal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsLocal() ;

/// @brief Method get_IsMasterClient, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsMasterClient() ;

/// @brief Method get_IsNull, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsNull() ;

/// @brief Method get_IsValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsValid() ;

/// [CompilerGenerated]
/// @brief Method get_JoinedTime, addr 0x56e7b3c, size 0x8, virtual true, abstract: false, final false
inline float_t get_JoinedTime() ;

/// [CompilerGenerated]
/// @brief Method get_LeftTime, addr 0x56e7b4c, size 0x8, virtual true, abstract: false, final false
inline float_t get_LeftTime() ;

/// @brief Method get_NickName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_NickName() ;

/// [CompilerGenerated]
/// @brief Method get_SanitizedNickName, addr 0x56e7b2c, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_SanitizedNickName() ;

/// @brief Method get_UserId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_UserId() ;

/// @brief Convert to "::GorillaTag::ObjectPoolEvents"
constexpr ::GorillaTag::ObjectPoolEvents* i___GorillaTag__ObjectPoolEvents() noexcept;

/// @brief Method op_Implicit, addr 0x56e7ecc, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::NetPlayer* op_Implicit___GlobalNamespace__NetPlayer_(::Fusion::PlayerRef  player) ;

/// @brief Method op_Implicit, addr 0x56e7d24, size 0xb4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::NetPlayer* op_Implicit___GlobalNamespace__NetPlayer_(::Photon::Realtime::Player*  player) ;

/// [CompilerGenerated]
/// @brief Method set_JoinedTime, addr 0x56e7b44, size 0x8, virtual false, abstract: false, final false
inline void set_JoinedTime(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_LeftTime, addr 0x56e7b54, size 0x8, virtual false, abstract: false, final false
inline void set_LeftTime(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_SanitizedNickName, addr 0x56e7b34, size 0x8, virtual true, abstract: false, final false
inline void set_SanitizedNickName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetPlayer(NetPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetPlayer(NetPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1114};

/// [CompilerGenerated]
/// @brief Field <SanitizedNickName>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____SanitizedNickName_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <JoinedTime>k__BackingField, offset: 0x18, size: 0x4, def value: None
 float_t  ____JoinedTime_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <LeftTime>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 float_t  ____LeftTime_k__BackingField;

/// @brief Field SingleCallRPCStatus, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___SingleCallRPCStatus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetPlayer, ____SanitizedNickName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetPlayer, ____JoinedTime_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetPlayer, ____LeftTime_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetPlayer, ___SingleCallRPCStatus) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetPlayer) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
