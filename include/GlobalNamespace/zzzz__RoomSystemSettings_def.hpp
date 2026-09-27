#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomSystemSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RoomSystemSettings)
namespace GlobalNamespace {
class CallLimiterWithCooldown;
}
namespace GlobalNamespace {
struct GTZone;
}
namespace GlobalNamespace {
class PrivateRoomCount;
}
namespace GlobalNamespace {
class RoomCount;
}
namespace GlobalNamespace {
struct RoomSystem_PlayerEffectConfig;
}
namespace GorillaGameModes {
struct GameModeType;
}
namespace GorillaTag {
class ExpectedUsersDecayTimer;
}
namespace GorillaTag {
class TickSystemTimer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class RoomSystemSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RoomSystemSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoomSystemSettings*, "", "RoomSystemSettings");
// [CreateAssetMenu(menuName = "ScriptableObjects/RoomSystemSettings", order = 2)]
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoomSystemSettings
class CORDL_TYPE RoomSystemSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_ExpectedUsersTimer)) ::GorillaTag::ExpectedUsersDecayTimer*  ExpectedUsersTimer;

 __declspec(property(get=get_LavaSyncLimiter)) ::GlobalNamespace::CallLimiterWithCooldown*  LavaSyncLimiter;

 __declspec(property(get=get_PausedDCTimer)) int32_t  PausedDCTimer;

 __declspec(property(get=get_PlayerEffectLimiter)) ::GlobalNamespace::CallLimiterWithCooldown*  PlayerEffectLimiter;

 __declspec(property(get=get_PlayerEffects)) ::System::Collections::Generic::List_1<::GlobalNamespace::RoomSystem_PlayerEffectConfig>*  PlayerEffects;

 __declspec(property(get=get_PlayerImpactEffect)) ::UnityW<::UnityEngine::GameObject>  PlayerImpactEffect;

 __declspec(property(get=get_ResyncNetworkTimeTimer)) ::GorillaTag::TickSystemTimer*  ResyncNetworkTimeTimer;

 __declspec(property(get=get_SoundEffectLimiter)) ::GlobalNamespace::CallLimiterWithCooldown*  SoundEffectLimiter;

 __declspec(property(get=get_SoundEffectOtherLimiter)) ::GlobalNamespace::CallLimiterWithCooldown*  SoundEffectOtherLimiter;

 __declspec(property(get=get_StatusEffectLimiter)) ::GlobalNamespace::CallLimiterWithCooldown*  StatusEffectLimiter;

/// @brief Field expectedUsersTimer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_expectedUsersTimer, put=__cordl_internal_set_expectedUsersTimer)) ::GorillaTag::ExpectedUsersDecayTimer*  expectedUsersTimer;

/// @brief Field lavaSyncLimiter, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaSyncLimiter, put=__cordl_internal_set_lavaSyncLimiter)) ::GlobalNamespace::CallLimiterWithCooldown*  lavaSyncLimiter;

/// @brief Field pausedDCTimer, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_pausedDCTimer, put=__cordl_internal_set_pausedDCTimer)) int32_t  pausedDCTimer;

/// @brief Field playerEffectLimiter, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerEffectLimiter, put=__cordl_internal_set_playerEffectLimiter)) ::GlobalNamespace::CallLimiterWithCooldown*  playerEffectLimiter;

/// @brief Field playerEffects, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerEffects, put=__cordl_internal_set_playerEffects)) ::System::Collections::Generic::List_1<::GlobalNamespace::RoomSystem_PlayerEffectConfig>*  playerEffects;

/// @brief Field playerImpactEffect, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerImpactEffect, put=__cordl_internal_set_playerImpactEffect)) ::UnityW<::UnityEngine::GameObject>  playerImpactEffect;

/// @brief Field privateRoomCountZoneModeMapping, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_privateRoomCountZoneModeMapping, put=__cordl_internal_set_privateRoomCountZoneModeMapping)) ::GlobalNamespace::PrivateRoomCount*  privateRoomCountZoneModeMapping;

/// @brief Field publicRoomCountZoneModeMapping, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_publicRoomCountZoneModeMapping, put=__cordl_internal_set_publicRoomCountZoneModeMapping)) ::GlobalNamespace::RoomCount*  publicRoomCountZoneModeMapping;

/// @brief Field resyncNetworkTimeTimer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_resyncNetworkTimeTimer, put=__cordl_internal_set_resyncNetworkTimeTimer)) ::GorillaTag::TickSystemTimer*  resyncNetworkTimeTimer;

/// @brief Field soundEffectLimiter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundEffectLimiter, put=__cordl_internal_set_soundEffectLimiter)) ::GlobalNamespace::CallLimiterWithCooldown*  soundEffectLimiter;

/// @brief Field soundEffectOtherLimiter, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundEffectOtherLimiter, put=__cordl_internal_set_soundEffectOtherLimiter)) ::GlobalNamespace::CallLimiterWithCooldown*  soundEffectOtherLimiter;

/// @brief Field statusEffectLimiter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_statusEffectLimiter, put=__cordl_internal_set_statusEffectLimiter)) ::GlobalNamespace::CallLimiterWithCooldown*  statusEffectLimiter;

/// @brief Field subsPrivateRoomCountZoneModeMapping, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_subsPrivateRoomCountZoneModeMapping, put=__cordl_internal_set_subsPrivateRoomCountZoneModeMapping)) ::GlobalNamespace::PrivateRoomCount*  subsPrivateRoomCountZoneModeMapping;

/// @brief Field subsPublicRoomCountZoneModeMapping, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_subsPublicRoomCountZoneModeMapping, put=__cordl_internal_set_subsPublicRoomCountZoneModeMapping)) ::GlobalNamespace::RoomCount*  subsPublicRoomCountZoneModeMapping;

/// @brief Method GetRoomCount, addr 0x5ad0e18, size 0x48, virtual false, abstract: false, final false
inline int32_t GetRoomCount(bool  privateRoom, bool  sub) ;

/// @brief Method GetRoomCount, addr 0x5ad1454, size 0x4c, virtual false, abstract: false, final false
inline int32_t GetRoomCount(::GlobalNamespace::GTZone  zone, ::GorillaGameModes::GameModeType  mode, bool  privateRoom, bool  sub) ;

static inline ::GlobalNamespace::RoomSystemSettings* New_ctor() ;

constexpr ::GorillaTag::ExpectedUsersDecayTimer* const& __cordl_internal_get_expectedUsersTimer() const;

constexpr ::GorillaTag::ExpectedUsersDecayTimer*& __cordl_internal_get_expectedUsersTimer() ;

constexpr ::GlobalNamespace::CallLimiterWithCooldown* const& __cordl_internal_get_lavaSyncLimiter() const;

constexpr ::GlobalNamespace::CallLimiterWithCooldown*& __cordl_internal_get_lavaSyncLimiter() ;

constexpr int32_t const& __cordl_internal_get_pausedDCTimer() const;

constexpr int32_t& __cordl_internal_get_pausedDCTimer() ;

constexpr ::GlobalNamespace::CallLimiterWithCooldown* const& __cordl_internal_get_playerEffectLimiter() const;

constexpr ::GlobalNamespace::CallLimiterWithCooldown*& __cordl_internal_get_playerEffectLimiter() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RoomSystem_PlayerEffectConfig>* const& __cordl_internal_get_playerEffects() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RoomSystem_PlayerEffectConfig>*& __cordl_internal_get_playerEffects() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_playerImpactEffect() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_playerImpactEffect() ;

constexpr ::GlobalNamespace::PrivateRoomCount* const& __cordl_internal_get_privateRoomCountZoneModeMapping() const;

constexpr ::GlobalNamespace::PrivateRoomCount*& __cordl_internal_get_privateRoomCountZoneModeMapping() ;

constexpr ::GlobalNamespace::RoomCount* const& __cordl_internal_get_publicRoomCountZoneModeMapping() const;

constexpr ::GlobalNamespace::RoomCount*& __cordl_internal_get_publicRoomCountZoneModeMapping() ;

constexpr ::GorillaTag::TickSystemTimer* const& __cordl_internal_get_resyncNetworkTimeTimer() const;

constexpr ::GorillaTag::TickSystemTimer*& __cordl_internal_get_resyncNetworkTimeTimer() ;

constexpr ::GlobalNamespace::CallLimiterWithCooldown* const& __cordl_internal_get_soundEffectLimiter() const;

constexpr ::GlobalNamespace::CallLimiterWithCooldown*& __cordl_internal_get_soundEffectLimiter() ;

constexpr ::GlobalNamespace::CallLimiterWithCooldown* const& __cordl_internal_get_soundEffectOtherLimiter() const;

constexpr ::GlobalNamespace::CallLimiterWithCooldown*& __cordl_internal_get_soundEffectOtherLimiter() ;

constexpr ::GlobalNamespace::CallLimiterWithCooldown* const& __cordl_internal_get_statusEffectLimiter() const;

constexpr ::GlobalNamespace::CallLimiterWithCooldown*& __cordl_internal_get_statusEffectLimiter() ;

constexpr ::GlobalNamespace::PrivateRoomCount* const& __cordl_internal_get_subsPrivateRoomCountZoneModeMapping() const;

constexpr ::GlobalNamespace::PrivateRoomCount*& __cordl_internal_get_subsPrivateRoomCountZoneModeMapping() ;

constexpr ::GlobalNamespace::RoomCount* const& __cordl_internal_get_subsPublicRoomCountZoneModeMapping() const;

constexpr ::GlobalNamespace::RoomCount*& __cordl_internal_get_subsPublicRoomCountZoneModeMapping() ;

constexpr void __cordl_internal_set_expectedUsersTimer(::GorillaTag::ExpectedUsersDecayTimer*  value) ;

constexpr void __cordl_internal_set_lavaSyncLimiter(::GlobalNamespace::CallLimiterWithCooldown*  value) ;

constexpr void __cordl_internal_set_pausedDCTimer(int32_t  value) ;

constexpr void __cordl_internal_set_playerEffectLimiter(::GlobalNamespace::CallLimiterWithCooldown*  value) ;

constexpr void __cordl_internal_set_playerEffects(::System::Collections::Generic::List_1<::GlobalNamespace::RoomSystem_PlayerEffectConfig>*  value) ;

constexpr void __cordl_internal_set_playerImpactEffect(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_privateRoomCountZoneModeMapping(::GlobalNamespace::PrivateRoomCount*  value) ;

constexpr void __cordl_internal_set_publicRoomCountZoneModeMapping(::GlobalNamespace::RoomCount*  value) ;

constexpr void __cordl_internal_set_resyncNetworkTimeTimer(::GorillaTag::TickSystemTimer*  value) ;

constexpr void __cordl_internal_set_soundEffectLimiter(::GlobalNamespace::CallLimiterWithCooldown*  value) ;

constexpr void __cordl_internal_set_soundEffectOtherLimiter(::GlobalNamespace::CallLimiterWithCooldown*  value) ;

constexpr void __cordl_internal_set_statusEffectLimiter(::GlobalNamespace::CallLimiterWithCooldown*  value) ;

constexpr void __cordl_internal_set_subsPrivateRoomCountZoneModeMapping(::GlobalNamespace::PrivateRoomCount*  value) ;

constexpr void __cordl_internal_set_subsPublicRoomCountZoneModeMapping(::GlobalNamespace::RoomCount*  value) ;

/// @brief Method .ctor, addr 0x5adbfc0, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ExpectedUsersTimer, addr 0x5adbf70, size 0x8, virtual false, abstract: false, final false
inline ::GorillaTag::ExpectedUsersDecayTimer* get_ExpectedUsersTimer() ;

/// @brief Method get_LavaSyncLimiter, addr 0x5adbfa0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::CallLimiterWithCooldown* get_LavaSyncLimiter() ;

/// @brief Method get_PausedDCTimer, addr 0x5adbfb8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PausedDCTimer() ;

/// @brief Method get_PlayerEffectLimiter, addr 0x5adbf98, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::CallLimiterWithCooldown* get_PlayerEffectLimiter() ;

/// @brief Method get_PlayerEffects, addr 0x5adbfb0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::RoomSystem_PlayerEffectConfig>* get_PlayerEffects() ;

/// @brief Method get_PlayerImpactEffect, addr 0x5adbfa8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_PlayerImpactEffect() ;

/// @brief Method get_ResyncNetworkTimeTimer, addr 0x5adbf78, size 0x8, virtual false, abstract: false, final false
inline ::GorillaTag::TickSystemTimer* get_ResyncNetworkTimeTimer() ;

/// @brief Method get_SoundEffectLimiter, addr 0x5adbf88, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::CallLimiterWithCooldown* get_SoundEffectLimiter() ;

/// @brief Method get_SoundEffectOtherLimiter, addr 0x5adbf90, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::CallLimiterWithCooldown* get_SoundEffectOtherLimiter() ;

/// @brief Method get_StatusEffectLimiter, addr 0x5adbf80, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::CallLimiterWithCooldown* get_StatusEffectLimiter() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomSystemSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomSystemSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomSystemSettings(RoomSystemSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomSystemSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomSystemSettings(RoomSystemSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3404};

/// [SerializeField]
/// @brief Field expectedUsersTimer, offset: 0x18, size: 0x8, def value: None
 ::GorillaTag::ExpectedUsersDecayTimer*  ___expectedUsersTimer;

/// [SerializeField]
/// @brief Field resyncNetworkTimeTimer, offset: 0x20, size: 0x8, def value: None
 ::GorillaTag::TickSystemTimer*  ___resyncNetworkTimeTimer;

/// [SerializeField]
/// @brief Field statusEffectLimiter, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiterWithCooldown*  ___statusEffectLimiter;

/// [SerializeField]
/// @brief Field soundEffectLimiter, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiterWithCooldown*  ___soundEffectLimiter;

/// [SerializeField]
/// @brief Field soundEffectOtherLimiter, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiterWithCooldown*  ___soundEffectOtherLimiter;

/// [SerializeField]
/// @brief Field playerEffectLimiter, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiterWithCooldown*  ___playerEffectLimiter;

/// [SerializeField]
/// @brief Field lavaSyncLimiter, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiterWithCooldown*  ___lavaSyncLimiter;

/// [SerializeField]
/// @brief Field playerImpactEffect, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___playerImpactEffect;

/// [SerializeField]
/// @brief Field playerEffects, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::RoomSystem_PlayerEffectConfig>*  ___playerEffects;

/// [SerializeField]
/// @brief Field pausedDCTimer, offset: 0x60, size: 0x4, def value: None
 int32_t  ___pausedDCTimer;

/// [SerializeField]
/// @brief Field publicRoomCountZoneModeMapping, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::RoomCount*  ___publicRoomCountZoneModeMapping;

/// [SerializeField]
/// @brief Field privateRoomCountZoneModeMapping, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::PrivateRoomCount*  ___privateRoomCountZoneModeMapping;

/// [SerializeField]
/// @brief Field subsPublicRoomCountZoneModeMapping, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::RoomCount*  ___subsPublicRoomCountZoneModeMapping;

/// [SerializeField]
/// @brief Field subsPrivateRoomCountZoneModeMapping, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::PrivateRoomCount*  ___subsPrivateRoomCountZoneModeMapping;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomSystemSettings, ___expectedUsersTimer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystemSettings, ___resyncNetworkTimeTimer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystemSettings, ___statusEffectLimiter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystemSettings, ___soundEffectLimiter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystemSettings, ___soundEffectOtherLimiter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystemSettings, ___playerEffectLimiter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystemSettings, ___lavaSyncLimiter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystemSettings, ___playerImpactEffect) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystemSettings, ___playerEffects) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystemSettings, ___pausedDCTimer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystemSettings, ___publicRoomCountZoneModeMapping) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystemSettings, ___privateRoomCountZoneModeMapping) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystemSettings, ___subsPublicRoomCountZoneModeMapping) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystemSettings, ___subsPrivateRoomCountZoneModeMapping) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoomSystemSettings) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
