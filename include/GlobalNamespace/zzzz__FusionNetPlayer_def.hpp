#pragma once
// IWYU pragma private; include "GlobalNamespace/FusionNetPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FusionNetPlayer)
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
struct PlayerRef;
}
namespace GlobalNamespace {
class NetPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class FusionNetPlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FusionNetPlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FusionNetPlayer*, "", "FusionNetPlayer");
// Dependencies Fusion.PlayerRef, NetPlayer
namespace GlobalNamespace {
// Is value type: false
// CS Name: FusionNetPlayer
class CORDL_TYPE FusionNetPlayer : public ::GlobalNamespace::NetPlayer {
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

 __declspec(property(get=get_PlayerRef, put=set_PlayerRef)) ::Fusion::PlayerRef  PlayerRef;

 __declspec(property(get=get_UserId)) ::StringW  UserId;

/// @brief Field <PlayerRef>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__PlayerRef_k__BackingField, put=__cordl_internal_set__PlayerRef_k__BackingField)) ::Fusion::PlayerRef  _PlayerRef_k__BackingField;

/// @brief Field _defaultName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultName, put=__cordl_internal_set__defaultName)) ::StringW  _defaultName;

 __declspec(property(get=get_runner)) ::UnityW<::Fusion::NetworkRunner>  runner;

/// @brief Field validPlayer, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_validPlayer, put=__cordl_internal_set_validPlayer)) bool  validPlayer;

/// @brief Method Equals, addr 0x56d7458, size 0x100, virtual true, abstract: false, final false
inline bool Equals(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  other) ;

/// @brief Method InitPlayer, addr 0x56d7558, size 0x10, virtual false, abstract: false, final false
inline void InitPlayer(::Fusion::PlayerRef  player) ;

static inline ::GlobalNamespace::FusionNetPlayer* New_ctor() ;

static inline ::GlobalNamespace::FusionNetPlayer* New_ctor(::Fusion::PlayerRef  playerRef) ;

/// @brief Method OnReturned, addr 0x56d7568, size 0xc4, virtual true, abstract: false, final false
inline void OnReturned() ;

/// @brief Method OnTaken, addr 0x56d76ac, size 0x4, virtual true, abstract: false, final false
inline void OnTaken() ;

constexpr ::Fusion::PlayerRef const& __cordl_internal_get__PlayerRef_k__BackingField() const;

constexpr ::Fusion::PlayerRef& __cordl_internal_get__PlayerRef_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__defaultName() const;

constexpr ::StringW& __cordl_internal_get__defaultName() ;

constexpr bool const& __cordl_internal_get_validPlayer() const;

constexpr bool& __cordl_internal_get_validPlayer() ;

constexpr void __cordl_internal_set__PlayerRef_k__BackingField(::Fusion::PlayerRef  value) ;

constexpr void __cordl_internal_set__defaultName(::StringW  value) ;

constexpr void __cordl_internal_set_validPlayer(bool  value) ;

/// @brief Method .ctor, addr 0x56d6b1c, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x56d6be0, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::Fusion::PlayerRef  playerRef) ;

/// @brief Method get_ActorNumber, addr 0x56d6d18, size 0x6c, virtual true, abstract: false, final false
inline int32_t get_ActorNumber() ;

/// @brief Method get_DefaultName, addr 0x56d70a8, size 0xb4, virtual true, abstract: false, final false
inline ::StringW get_DefaultName() ;

/// @brief Method get_InRoom, addr 0x56d715c, size 0x2fc, virtual true, abstract: false, final false
inline bool get_InRoom() ;

/// @brief Method get_IsLocal, addr 0x56d6f64, size 0xc8, virtual true, abstract: false, final false
inline bool get_IsLocal() ;

/// @brief Method get_IsMasterClient, addr 0x56d6e48, size 0x11c, virtual true, abstract: false, final false
inline bool get_IsMasterClient() ;

/// @brief Method get_IsNull, addr 0x56d702c, size 0x8, virtual true, abstract: false, final false
inline bool get_IsNull() ;

/// @brief Method get_IsValid, addr 0x56d6cac, size 0x6c, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_NickName, addr 0x56d7034, size 0x74, virtual true, abstract: false, final false
inline ::StringW get_NickName() ;

/// [CompilerGenerated]
/// @brief Method get_PlayerRef, addr 0x56d6b0c, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::PlayerRef get_PlayerRef() ;

/// @brief Method get_UserId, addr 0x56d6d84, size 0xc4, virtual true, abstract: false, final false
inline ::StringW get_UserId() ;

/// @brief Method get_runner, addr 0x56d6c04, size 0xa8, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::NetworkRunner> get_runner() ;

/// [CompilerGenerated]
/// @brief Method set_PlayerRef, addr 0x56d6b14, size 0x8, virtual false, abstract: false, final false
inline void set_PlayerRef(::Fusion::PlayerRef  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionNetPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionNetPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionNetPlayer(FusionNetPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionNetPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionNetPlayer(FusionNetPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1079};

/// [CompilerGenerated]
/// @brief Field <PlayerRef>k__BackingField, offset: 0x28, size: 0x4, def value: None
 ::Fusion::PlayerRef  ____PlayerRef_k__BackingField;

/// @brief Field _defaultName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____defaultName;

/// @brief Field validPlayer, offset: 0x38, size: 0x1, def value: None
 bool  ___validPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FusionNetPlayer, ____PlayerRef_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionNetPlayer, ____defaultName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionNetPlayer, ___validPlayer) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FusionNetPlayer) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
