#pragma once
// IWYU pragma private; include "GlobalNamespace/VirtualStumpTeleporter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VirtualStumpTeleporter)
namespace GlobalNamespace {
struct GTZone;
}
namespace GlobalNamespace {
class IBuildValidation;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class VirtualStumpTeleporterSerializer;
}
namespace GorillaGameModes {
struct GameModeType;
}
namespace GorillaNetworking {
class GorillaNetworkJoinTrigger;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class VirtualStumpTeleporter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VirtualStumpTeleporter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VirtualStumpTeleporter*, "", "VirtualStumpTeleporter");
// Dependencies GTZone, GorillaGameModes.GameModeType, TMPro.TMP_Text, UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VirtualStumpTeleporter
class CORDL_TYPE VirtualStumpTeleporter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field accessDenied, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_accessDenied, put=__cordl_internal_set_accessDenied)) bool  accessDenied;

/// @brief Field accessDeniedDisabledObjects, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_accessDeniedDisabledObjects, put=__cordl_internal_set_accessDeniedDisabledObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  accessDeniedDisabledObjects;

/// @brief Field accessDeniedEnabledObjects, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_accessDeniedEnabledObjects, put=__cordl_internal_set_accessDeniedEnabledObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  accessDeniedEnabledObjects;

/// @brief Field autoLoadGamemode, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_autoLoadGamemode, put=__cordl_internal_set_autoLoadGamemode)) ::GorillaGameModes::GameModeType  autoLoadGamemode;

/// @brief Field autoLoadMapModId, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_autoLoadMapModId, put=__cordl_internal_set_autoLoadMapModId)) int64_t  autoLoadMapModId;

/// @brief Field countdownTexts, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_countdownTexts, put=__cordl_internal_set_countdownTexts)) ::ArrayW<::UnityW<::TMPro::TMP_Text>>  countdownTexts;

/// @brief Field entranceZone, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_entranceZone, put=__cordl_internal_set_entranceZone)) ::GlobalNamespace::GTZone  entranceZone;

/// @brief Field exitVStumpJoinTrigger, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_exitVStumpJoinTrigger, put=__cordl_internal_set_exitVStumpJoinTrigger)) ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  exitVStumpJoinTrigger;

/// @brief Field forcedGamemodeUponReturn, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_forcedGamemodeUponReturn, put=__cordl_internal_set_forcedGamemodeUponReturn)) ::GorillaGameModes::GameModeType  forcedGamemodeUponReturn;

/// @brief Field handHoldObjects, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_handHoldObjects, put=__cordl_internal_set_handHoldObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  handHoldObjects;

/// @brief Field lastLoggingHandsMsgId, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_lastLoggingHandsMsgId, put=setStaticF_lastLoggingHandsMsgId)) uint16_t  lastLoggingHandsMsgId;

/// @brief Field mySerializer, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_mySerializer, put=__cordl_internal_set_mySerializer)) ::UnityW<::GlobalNamespace::VirtualStumpTeleporterSerializer>  mySerializer;

/// @brief Field netSerializer, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_netSerializer, put=__cordl_internal_set_netSerializer)) ::UnityW<::GlobalNamespace::VirtualStumpTeleporterSerializer>  netSerializer;

/// @brief Field observerSoundClips, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_observerSoundClips, put=__cordl_internal_set_observerSoundClips)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  observerSoundClips;

/// @brief Field returnFromVStumpVFX, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_returnFromVStumpVFX, put=__cordl_internal_set_returnFromVStumpVFX)) ::UnityW<::UnityEngine::ParticleSystem>  returnFromVStumpVFX;

/// @brief Field returnLocation, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_returnLocation, put=__cordl_internal_set_returnLocation)) ::UnityW<::UnityEngine::Transform>  returnLocation;

/// @brief Field stayInTriggerDuration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_stayInTriggerDuration, put=__cordl_internal_set_stayInTriggerDuration)) float_t  stayInTriggerDuration;

/// @brief Field teleportToVStumpVFX, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_teleportToVStumpVFX, put=__cordl_internal_set_teleportToVStumpVFX)) ::UnityW<::UnityEngine::ParticleSystem>  teleportToVStumpVFX;

/// @brief Field teleporterSFXAudioSource, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_teleporterSFXAudioSource, put=__cordl_internal_set_teleporterSFXAudioSource)) ::UnityW<::UnityEngine::AudioSource>  teleporterSFXAudioSource;

/// @brief Field teleporting, offset 0xa9, size 0x1 
 __declspec(property(get=__cordl_internal_get_teleporting, put=__cordl_internal_set_teleporting)) bool  teleporting;

/// @brief Field teleportingPlayerSoundClips, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_teleportingPlayerSoundClips, put=__cordl_internal_set_teleportingPlayerSoundClips)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  teleportingPlayerSoundClips;

/// @brief Field triggerEntryTime, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggerEntryTime, put=__cordl_internal_set_triggerEntryTime)) float_t  triggerEntryTime;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method AllowAccess, addr 0x5a0ea84, size 0x228, virtual false, abstract: false, final false
inline void AllowAccess() ;

/// @brief Method BuildValidationCheck, addr 0x5a0e630, size 0x12c, virtual true, abstract: false, final true
inline bool BuildValidationCheck() ;

/// @brief Method DenyAccess, addr 0x5a0e87c, size 0x208, virtual false, abstract: false, final false
inline void DenyAccess() ;

/// @brief Method FinishTeleport, addr 0x5a0faf0, size 0x18, virtual false, abstract: false, final false
inline void FinishTeleport(bool  success) ;

/// @brief Method GetAutoLoadGamemode, addr 0x5a0fc88, size 0x8, virtual false, abstract: false, final false
inline ::GorillaGameModes::GameModeType GetAutoLoadGamemode() ;

/// @brief Method GetAutoLoadMapModId, addr 0x5a0fc80, size 0x8, virtual false, abstract: false, final false
inline int64_t GetAutoLoadMapModId() ;

/// @brief Method GetExitVStumpJoinTrigger, addr 0x5a0fc70, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> GetExitVStumpJoinTrigger() ;

/// @brief Method GetIndex, addr 0x5a0fb08, size 0x84, virtual false, abstract: false, final false
inline int16_t GetIndex() ;

/// @brief Method GetReturnGamemode, addr 0x5a0fc90, size 0x8, virtual false, abstract: false, final false
inline ::GorillaGameModes::GameModeType GetReturnGamemode() ;

/// @brief Method GetReturnTransform, addr 0x5a0fc78, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetReturnTransform() ;

/// @brief Method GetZone, addr 0x5a0fc68, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GTZone GetZone() ;

/// @brief Method HideCountdownText, addr 0x5a0f880, size 0x138, virtual false, abstract: false, final false
inline void HideCountdownText() ;

static inline ::GlobalNamespace::VirtualStumpTeleporter* New_ctor() ;

/// @brief Method OnDisable, addr 0x5a0ef20, size 0xd4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5a0ecac, size 0x274, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x5a0f0a4, size 0x1c0, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5a0f9b8, size 0x138, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerStay, addr 0x5a0f414, size 0x17c, virtual false, abstract: false, final false
inline void OnTriggerStay(::UnityEngine::Collider*  other) ;

/// @brief Method OnVirtualStumpDisabled, addr 0x5a0f04c, size 0x58, virtual false, abstract: false, final false
inline void OnVirtualStumpDisabled() ;

/// @brief Method OnVirtualStumpEnabled, addr 0x5a0eff4, size 0x58, virtual false, abstract: false, final false
inline void OnVirtualStumpEnabled() ;

/// @brief Method PlayTeleportEffects, addr 0x5a0fc98, size 0x2c8, virtual false, abstract: false, final false
inline void PlayTeleportEffects(bool  forLocalPlayer, bool  toVStump, ::UnityEngine::AudioSource*  vStumpSFXAudioSource, bool  sendRPC) ;

/// @brief Method ShowCountdownText, addr 0x5a0f264, size 0x1b0, virtual false, abstract: false, final false
inline void ShowCountdownText() ;

/// @brief Method SliceUpdate, addr 0x5a0e75c, size 0x120, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method TeleportPlayer, addr 0x5a0f728, size 0x158, virtual false, abstract: false, final false
inline void TeleportPlayer() ;

/// @brief Method UpdateCountdownText, addr 0x5a0f590, size 0x198, virtual false, abstract: false, final false
inline void UpdateCountdownText() ;

constexpr bool const& __cordl_internal_get_accessDenied() const;

constexpr bool& __cordl_internal_get_accessDenied() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_accessDeniedDisabledObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_accessDeniedDisabledObjects() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_accessDeniedEnabledObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_accessDeniedEnabledObjects() ;

constexpr ::GorillaGameModes::GameModeType const& __cordl_internal_get_autoLoadGamemode() const;

constexpr ::GorillaGameModes::GameModeType& __cordl_internal_get_autoLoadGamemode() ;

constexpr int64_t const& __cordl_internal_get_autoLoadMapModId() const;

constexpr int64_t& __cordl_internal_get_autoLoadMapModId() ;

constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>> const& __cordl_internal_get_countdownTexts() const;

constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>>& __cordl_internal_get_countdownTexts() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_entranceZone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_entranceZone() ;

constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> const& __cordl_internal_get_exitVStumpJoinTrigger() const;

constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>& __cordl_internal_get_exitVStumpJoinTrigger() ;

constexpr ::GorillaGameModes::GameModeType const& __cordl_internal_get_forcedGamemodeUponReturn() const;

constexpr ::GorillaGameModes::GameModeType& __cordl_internal_get_forcedGamemodeUponReturn() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_handHoldObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_handHoldObjects() ;

constexpr ::UnityW<::GlobalNamespace::VirtualStumpTeleporterSerializer> const& __cordl_internal_get_mySerializer() const;

constexpr ::UnityW<::GlobalNamespace::VirtualStumpTeleporterSerializer>& __cordl_internal_get_mySerializer() ;

constexpr ::UnityW<::GlobalNamespace::VirtualStumpTeleporterSerializer> const& __cordl_internal_get_netSerializer() const;

constexpr ::UnityW<::GlobalNamespace::VirtualStumpTeleporterSerializer>& __cordl_internal_get_netSerializer() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& __cordl_internal_get_observerSoundClips() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get_observerSoundClips() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_returnFromVStumpVFX() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_returnFromVStumpVFX() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_returnLocation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_returnLocation() ;

constexpr float_t const& __cordl_internal_get_stayInTriggerDuration() const;

constexpr float_t& __cordl_internal_get_stayInTriggerDuration() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_teleportToVStumpVFX() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_teleportToVStumpVFX() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_teleporterSFXAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_teleporterSFXAudioSource() ;

constexpr bool const& __cordl_internal_get_teleporting() const;

constexpr bool& __cordl_internal_get_teleporting() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& __cordl_internal_get_teleportingPlayerSoundClips() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get_teleportingPlayerSoundClips() ;

constexpr float_t const& __cordl_internal_get_triggerEntryTime() const;

constexpr float_t& __cordl_internal_get_triggerEntryTime() ;

constexpr void __cordl_internal_set_accessDenied(bool  value) ;

constexpr void __cordl_internal_set_accessDeniedDisabledObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_accessDeniedEnabledObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_autoLoadGamemode(::GorillaGameModes::GameModeType  value) ;

constexpr void __cordl_internal_set_autoLoadMapModId(int64_t  value) ;

constexpr void __cordl_internal_set_countdownTexts(::ArrayW<::UnityW<::TMPro::TMP_Text>>  value) ;

constexpr void __cordl_internal_set_entranceZone(::GlobalNamespace::GTZone  value) ;

constexpr void __cordl_internal_set_exitVStumpJoinTrigger(::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  value) ;

constexpr void __cordl_internal_set_forcedGamemodeUponReturn(::GorillaGameModes::GameModeType  value) ;

constexpr void __cordl_internal_set_handHoldObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_mySerializer(::UnityW<::GlobalNamespace::VirtualStumpTeleporterSerializer>  value) ;

constexpr void __cordl_internal_set_netSerializer(::UnityW<::GlobalNamespace::VirtualStumpTeleporterSerializer>  value) ;

constexpr void __cordl_internal_set_observerSoundClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value) ;

constexpr void __cordl_internal_set_returnFromVStumpVFX(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_returnLocation(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_stayInTriggerDuration(float_t  value) ;

constexpr void __cordl_internal_set_teleportToVStumpVFX(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_teleporterSFXAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_teleporting(bool  value) ;

constexpr void __cordl_internal_set_teleportingPlayerSoundClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value) ;

constexpr void __cordl_internal_set_triggerEntryTime(float_t  value) ;

/// @brief Method .ctor, addr 0x5a100ec, size 0x150, virtual false, abstract: false, final false
inline void _ctor() ;

static inline uint16_t getStaticF_lastLoggingHandsMsgId() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

static inline void setStaticF_lastLoggingHandsMsgId(uint16_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtualStumpTeleporter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpTeleporter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualStumpTeleporter(VirtualStumpTeleporter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpTeleporter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualStumpTeleporter(VirtualStumpTeleporter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2774};

/// [SerializeField]
/// @brief Field stayInTriggerDuration, offset: 0x20, size: 0x4, def value: None
 float_t  ___stayInTriggerDuration;

/// [SerializeField]
/// @brief Field countdownTexts, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::TMPro::TMP_Text>>  ___countdownTexts;

/// [SerializeField]
/// @brief Field handHoldObjects, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___handHoldObjects;

/// [SerializeField]
/// @brief Field accessDeniedDisabledObjects, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___accessDeniedDisabledObjects;

/// [SerializeField]
/// @brief Field accessDeniedEnabledObjects, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___accessDeniedEnabledObjects;

/// [SerializeField]
/// @brief Field returnLocation, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___returnLocation;

/// [SerializeField]
/// @brief Field entranceZone, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___entranceZone;

/// [SerializeField]
/// @brief Field exitVStumpJoinTrigger, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  ___exitVStumpJoinTrigger;

/// [SerializeField]
/// @brief Field autoLoadMapModId, offset: 0x60, size: 0x8, def value: None
 int64_t  ___autoLoadMapModId;

/// [SerializeField]
/// @brief Field autoLoadGamemode, offset: 0x68, size: 0x4, def value: None
 ::GorillaGameModes::GameModeType  ___autoLoadGamemode;

/// [SerializeField]
/// @brief Field forcedGamemodeUponReturn, offset: 0x6c, size: 0x4, def value: None
 ::GorillaGameModes::GameModeType  ___forcedGamemodeUponReturn;

/// [SerializeField]
/// @brief Field teleportToVStumpVFX, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___teleportToVStumpVFX;

/// [SerializeField]
/// @brief Field returnFromVStumpVFX, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___returnFromVStumpVFX;

/// [SerializeField]
/// @brief Field teleporterSFXAudioSource, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___teleporterSFXAudioSource;

/// [SerializeField]
/// @brief Field teleportingPlayerSoundClips, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  ___teleportingPlayerSoundClips;

/// [SerializeField]
/// @brief Field observerSoundClips, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  ___observerSoundClips;

/// [SerializeField]
/// @brief Field netSerializer, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VirtualStumpTeleporterSerializer>  ___netSerializer;

/// @brief Field mySerializer, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VirtualStumpTeleporterSerializer>  ___mySerializer;

/// @brief Field accessDenied, offset: 0xa8, size: 0x1, def value: None
 bool  ___accessDenied;

/// @brief Field teleporting, offset: 0xa9, size: 0x1, def value: None
 bool  ___teleporting;

/// @brief Field triggerEntryTime, offset: 0xac, size: 0x4, def value: None
 float_t  ___triggerEntryTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporter, ___stayInTriggerDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporter, ___countdownTexts) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporter, ___handHoldObjects) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporter, ___accessDeniedDisabledObjects) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporter, ___accessDeniedEnabledObjects) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporter, ___returnLocation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporter, ___entranceZone) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporter, ___exitVStumpJoinTrigger) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporter, ___autoLoadMapModId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporter, ___autoLoadGamemode) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporter, ___forcedGamemodeUponReturn) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporter, ___teleportToVStumpVFX) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporter, ___returnFromVStumpVFX) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporter, ___teleporterSFXAudioSource) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporter, ___teleportingPlayerSoundClips) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporter, ___observerSoundClips) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporter, ___netSerializer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporter, ___mySerializer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporter, ___accessDenied) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporter, ___teleporting) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpTeleporter, ___triggerEntryTime) == 0xac, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VirtualStumpTeleporter) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
