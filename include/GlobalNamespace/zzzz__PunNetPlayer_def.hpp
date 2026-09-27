#pragma once
// IWYU pragma private; include "GlobalNamespace/PunNetPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PunNetPlayer)
namespace GlobalNamespace {
class NetPlayer;
}
namespace Photon::Realtime {
class Player;
}
// Forward declare root types
namespace GlobalNamespace {
class PunNetPlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PunNetPlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PunNetPlayer*, "", "PunNetPlayer");
// Dependencies NetPlayer
namespace GlobalNamespace {
// Is value type: false
// CS Name: PunNetPlayer
class CORDL_TYPE PunNetPlayer : public ::GlobalNamespace::NetPlayer {
public:
// Declarations
 __declspec(property(get=get_ActorNumber)) int32_t  ActorNumber;

 __declspec(property(get=get_DefaultName)) ::StringW  DefaultName;

 __declspec(property(get=get_InRoom)) bool  InRoom;

 __declspec(property(get=get_IsLocal)) bool  IsLocal;

 __declspec(property(get=get_IsMasterClient)) bool  IsMasterClient;

 __declspec(property(get=get_IsNull)) bool  IsNull;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_NickName)) ::StringW  NickName;

 __declspec(property(get=get_PlayerRef, put=set_PlayerRef)) ::Photon::Realtime::Player*  PlayerRef;

 __declspec(property(get=get_UserId)) ::StringW  UserId;

/// @brief Field <PlayerRef>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayerRef_k__BackingField, put=__cordl_internal_set__PlayerRef_k__BackingField)) ::Photon::Realtime::Player*  _PlayerRef_k__BackingField;

/// @brief Method Equals, addr 0x570d864, size 0xd4, virtual true, abstract: false, final false
inline bool Equals(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  other) ;

/// @brief Method InitPlayer, addr 0x570d6c0, size 0x8, virtual false, abstract: false, final false
inline void InitPlayer(::Photon::Realtime::Player*  playerRef) ;

static inline ::GlobalNamespace::PunNetPlayer* New_ctor() ;

/// @brief Method OnReturned, addr 0x570d938, size 0x8, virtual true, abstract: false, final false
inline void OnReturned() ;

/// @brief Method OnTaken, addr 0x570d940, size 0x24, virtual true, abstract: false, final false
inline void OnTaken() ;

constexpr ::Photon::Realtime::Player* const& __cordl_internal_get__PlayerRef_k__BackingField() const;

constexpr ::Photon::Realtime::Player*& __cordl_internal_get__PlayerRef_k__BackingField() ;

constexpr void __cordl_internal_set__PlayerRef_k__BackingField(::Photon::Realtime::Player*  value) ;

/// @brief Method .ctor, addr 0x570d6b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActorNumber, addr 0x570d6e8, size 0x18, virtual true, abstract: false, final false
inline int32_t get_ActorNumber() ;

/// @brief Method get_DefaultName, addr 0x570d7bc, size 0x18, virtual true, abstract: false, final false
inline ::StringW get_DefaultName() ;

/// @brief Method get_InRoom, addr 0x570d7d4, size 0x90, virtual true, abstract: false, final false
inline bool get_InRoom() ;

/// @brief Method get_IsLocal, addr 0x570d730, size 0x64, virtual true, abstract: false, final false
inline bool get_IsLocal() ;

/// @brief Method get_IsMasterClient, addr 0x570d718, size 0x18, virtual true, abstract: false, final false
inline bool get_IsMasterClient() ;

/// @brief Method get_IsNull, addr 0x570d794, size 0x10, virtual true, abstract: false, final false
inline bool get_IsNull() ;

/// @brief Method get_IsValid, addr 0x570d6c8, size 0x20, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_NickName, addr 0x570d7a4, size 0x18, virtual true, abstract: false, final false
inline ::StringW get_NickName() ;

/// [CompilerGenerated]
/// @brief Method get_PlayerRef, addr 0x570d6a8, size 0x8, virtual false, abstract: false, final false
inline ::Photon::Realtime::Player* get_PlayerRef() ;

/// @brief Method get_UserId, addr 0x570d700, size 0x18, virtual true, abstract: false, final false
inline ::StringW get_UserId() ;

/// [CompilerGenerated]
/// @brief Method set_PlayerRef, addr 0x570d6b0, size 0x8, virtual false, abstract: false, final false
inline void set_PlayerRef(::Photon::Realtime::Player*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PunNetPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PunNetPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PunNetPlayer(PunNetPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PunNetPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PunNetPlayer(PunNetPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1160};

/// [CompilerGenerated]
/// @brief Field <PlayerRef>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Photon::Realtime::Player*  ____PlayerRef_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PunNetPlayer, ____PlayerRef_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PunNetPlayer) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
