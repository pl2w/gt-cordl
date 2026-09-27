#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSeedExtractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRSeedExtractor_PlayerData_def.hpp"
#include "GlobalNamespace/zzzz__GRSeedExtractor_ScreenDisplayData_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRSeedExtractor)
namespace GlobalNamespace {
struct GRSeedExtractor_PlayerData;
}
namespace GlobalNamespace {
struct GRSeedExtractor_ScreenDisplayData;
}
namespace GlobalNamespace {
struct GRSeedExtractor_SeedProcessingVisualState;
}
namespace GlobalNamespace {
class GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135;
}
namespace GlobalNamespace {
class GRToolProgressionManager;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace GlobalNamespace {
class IDCardScanner;
}
namespace GlobalNamespace {
class ProgressionManager_JuicerStatusResponse;
}
namespace GlobalNamespace {
class TriggerEventNotifier;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
struct ValueTuple_4;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class AnimationCurve;
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
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRSeedExtractor;
}
namespace GlobalNamespace {
class GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRSeedExtractor*);
MARK_REF_T(::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRSeedExtractor*, "", "GRSeedExtractor");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135*, "", "GRSeedExtractor/<OverdrivePurchaseAnimationVisual>d__135");
// Dependencies GRSeedExtractor::PlayerData, GRSeedExtractor::ScreenDisplayData, GTZone, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRSeedExtractor
class CORDL_TYPE GRSeedExtractor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PlayerData = ::GlobalNamespace::GRSeedExtractor_PlayerData;

using ScreenDisplayData = ::GlobalNamespace::GRSeedExtractor_ScreenDisplayData;

using SeedProcessingVisualState = ::GlobalNamespace::GRSeedExtractor_SeedProcessingVisualState;

using _OverdrivePurchaseAnimationVisual_d__135 = ::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135;

 __declspec(property(get=get_CurrentPlayerActorNumber)) int32_t  CurrentPlayerActorNumber;

/// @brief Field MAX_OVERDRIVE_USES, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_MAX_OVERDRIVE_USES, put=__cordl_internal_set_MAX_OVERDRIVE_USES)) int32_t  MAX_OVERDRIVE_USES;

/// @brief Field PROCESSING_TIME_SECONDS, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_PROCESSING_TIME_SECONDS, put=__cordl_internal_set_PROCESSING_TIME_SECONDS)) float_t  PROCESSING_TIME_SECONDS;

 __declspec(property(get=get_StationOpen)) bool  StationOpen;

 __declspec(property(get=get_StationOpenForLocalPlayer)) bool  StationOpenForLocalPlayer;

/// @brief Field UpdateScreenSB, offset 0x2e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_UpdateScreenSB, put=__cordl_internal_set_UpdateScreenSB)) ::System::Text::StringBuilder*  UpdateScreenSB;

/// @brief Field chaosSeedVisualPrefab, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_chaosSeedVisualPrefab, put=__cordl_internal_set_chaosSeedVisualPrefab)) ::UnityW<::UnityEngine::GameObject>  chaosSeedVisualPrefab;

/// @brief Field chaosSeedVisuals, offset 0x290, size 0x8 
 __declspec(property(get=__cordl_internal_get_chaosSeedVisuals, put=__cordl_internal_set_chaosSeedVisuals)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  chaosSeedVisuals;

/// @brief Field coreDepositTriggerNotifier, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_coreDepositTriggerNotifier, put=__cordl_internal_set_coreDepositTriggerNotifier)) ::UnityW<::GlobalNamespace::TriggerEventNotifier>  coreDepositTriggerNotifier;

/// @brief Field currentDisplayData, offset 0x26c, size 0x14 
 __declspec(property(get=__cordl_internal_get_currentDisplayData, put=__cordl_internal_set_currentDisplayData)) ::GlobalNamespace::GRSeedExtractor_ScreenDisplayData  currentDisplayData;

/// @brief Field currentPlayerActorNumber, offset 0x288, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentPlayerActorNumber, put=__cordl_internal_set_currentPlayerActorNumber)) int32_t  currentPlayerActorNumber;

/// @brief Field currentPlayerData, offset 0x24c, size 0x20 
 __declspec(property(get=__cordl_internal_get_currentPlayerData, put=__cordl_internal_set_currentPlayerData)) ::GlobalNamespace::GRSeedExtractor_PlayerData  currentPlayerData;

/// @brief Field debugSeedCount, offset 0x2e8, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugSeedCount, put=__cordl_internal_set_debugSeedCount)) int32_t  debugSeedCount;

/// @brief Field debugSeedProcessingTime, offset 0x2ec, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugSeedProcessingTime, put=__cordl_internal_set_debugSeedProcessingTime)) float_t  debugSeedProcessingTime;

/// @brief Field defaultButtonMaterial, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultButtonMaterial, put=__cordl_internal_set_defaultButtonMaterial)) ::UnityW<::UnityEngine::Material>  defaultButtonMaterial;

/// @brief Field depositorAudioSource, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_depositorAudioSource, put=__cordl_internal_set_depositorAudioSource)) ::UnityW<::UnityEngine::AudioSource>  depositorAudioSource;

/// @brief Field depositorParticles, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_depositorParticles, put=__cordl_internal_set_depositorParticles)) ::UnityW<::UnityEngine::ParticleSystem>  depositorParticles;

/// @brief Field disableDuringOverdrive, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_disableDuringOverdrive, put=__cordl_internal_set_disableDuringOverdrive)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  disableDuringOverdrive;

/// @brief Field doorAudioSource, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorAudioSource, put=__cordl_internal_set_doorAudioSource)) ::UnityW<::UnityEngine::AudioSource>  doorAudioSource;

/// @brief Field doorCloseAudio, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorCloseAudio, put=__cordl_internal_set_doorCloseAudio)) ::UnityW<::UnityEngine::AudioClip>  doorCloseAudio;

/// @brief Field doorCloseVolume, offset 0x1e8, size 0x4 
 __declspec(property(get=__cordl_internal_get_doorCloseVolume, put=__cordl_internal_set_doorCloseVolume)) float_t  doorCloseVolume;

/// @brief Field doorOpenAudio, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorOpenAudio, put=__cordl_internal_set_doorOpenAudio)) ::UnityW<::UnityEngine::AudioClip>  doorOpenAudio;

/// @brief Field doorOpenVolume, offset 0x1d8, size 0x4 
 __declspec(property(get=__cordl_internal_get_doorOpenVolume, put=__cordl_internal_set_doorOpenVolume)) float_t  doorOpenVolume;

/// @brief Field drainingProcessingBeaker, offset 0x2a1, size 0x1 
 __declspec(property(get=__cordl_internal_get_drainingProcessingBeaker, put=__cordl_internal_set_drainingProcessingBeaker)) bool  drainingProcessingBeaker;

/// @brief Field enableDuringOverdrive, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_enableDuringOverdrive, put=__cordl_internal_set_enableDuringOverdrive)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  enableDuringOverdrive;

/// @brief Field estimatedJuiceTimeRemaining, offset 0x2a4, size 0x4 
 __declspec(property(get=__cordl_internal_get_estimatedJuiceTimeRemaining, put=__cordl_internal_set_estimatedJuiceTimeRemaining)) float_t  estimatedJuiceTimeRemaining;

/// @brief Field ghostReactor, offset 0x2d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ghostReactor, put=__cordl_internal_set_ghostReactor)) ::UnityW<::GlobalNamespace::GhostReactor>  ghostReactor;

/// @brief Field greenButtonMaterial, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_greenButtonMaterial, put=__cordl_internal_set_greenButtonMaterial)) ::UnityW<::UnityEngine::Material>  greenButtonMaterial;

/// @brief Field idCardScanner, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_idCardScanner, put=__cordl_internal_set_idCardScanner)) ::UnityW<::GlobalNamespace::IDCardScanner>  idCardScanner;

/// @brief Field juiceDepositTime, offset 0x2f8, size 0x4 
 __declspec(property(get=__cordl_internal_get_juiceDepositTime, put=__cordl_internal_set_juiceDepositTime)) float_t  juiceDepositTime;

/// @brief Field juicerAudioSource, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_juicerAudioSource, put=__cordl_internal_set_juicerAudioSource)) ::UnityW<::UnityEngine::AudioSource>  juicerAudioSource;

/// @brief Field juicerOverdriveParticles, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_juicerOverdriveParticles, put=__cordl_internal_set_juicerOverdriveParticles)) ::UnityW<::UnityEngine::ParticleSystem>  juicerOverdriveParticles;

/// @brief Field juicerSlowParticles, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_juicerSlowParticles, put=__cordl_internal_set_juicerSlowParticles)) ::UnityW<::UnityEngine::ParticleSystem>  juicerSlowParticles;

/// @brief Field lastServerRequestTime, offset 0x2cc, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastServerRequestTime, put=__cordl_internal_set_lastServerRequestTime)) float_t  lastServerRequestTime;

/// @brief Field localPlayerData, offset 0x22c, size 0x20 
 __declspec(property(get=__cordl_internal_get_localPlayerData, put=__cordl_internal_set_localPlayerData)) ::GlobalNamespace::GRSeedExtractor_PlayerData  localPlayerData;

/// @brief Field machineHumAudioSource, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_machineHumAudioSource, put=__cordl_internal_set_machineHumAudioSource)) ::UnityW<::UnityEngine::AudioSource>  machineHumAudioSource;

/// @brief Field maxVisualChaosSeedCount, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxVisualChaosSeedCount, put=__cordl_internal_set_maxVisualChaosSeedCount)) int32_t  maxVisualChaosSeedCount;

/// @brief Field overdriveActive, offset 0x2a0, size 0x1 
 __declspec(property(get=__cordl_internal_get_overdriveActive, put=__cordl_internal_set_overdriveActive)) bool  overdriveActive;

/// @brief Field overdriveAmount, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_overdriveAmount, put=__cordl_internal_set_overdriveAmount)) float_t  overdriveAmount;

/// @brief Field overdriveAmountVisual, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_overdriveAmountVisual, put=__cordl_internal_set_overdriveAmountVisual)) float_t  overdriveAmountVisual;

/// @brief Field overdriveBeepAudioSource, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_overdriveBeepAudioSource, put=__cordl_internal_set_overdriveBeepAudioSource)) ::UnityW<::UnityEngine::AudioSource>  overdriveBeepAudioSource;

/// @brief Field overdriveBeepingAudio, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get_overdriveBeepingAudio, put=__cordl_internal_set_overdriveBeepingAudio)) ::UnityW<::UnityEngine::AudioClip>  overdriveBeepingAudio;

/// @brief Field overdriveBeepingVolume, offset 0x228, size 0x4 
 __declspec(property(get=__cordl_internal_get_overdriveBeepingVolume, put=__cordl_internal_set_overdriveBeepingVolume)) float_t  overdriveBeepingVolume;

/// @brief Field overdriveConfirmButton, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_overdriveConfirmButton, put=__cordl_internal_set_overdriveConfirmButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  overdriveConfirmButton;

/// @brief Field overdriveEngineAudio, offset 0x210, size 0x8 
 __declspec(property(get=__cordl_internal_get_overdriveEngineAudio, put=__cordl_internal_set_overdriveEngineAudio)) ::UnityW<::UnityEngine::AudioClip>  overdriveEngineAudio;

/// @brief Field overdriveEngineVolume, offset 0x218, size 0x4 
 __declspec(property(get=__cordl_internal_get_overdriveEngineVolume, put=__cordl_internal_set_overdriveEngineVolume)) float_t  overdriveEngineVolume;

/// @brief Field overdriveFillAudio, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get_overdriveFillAudio, put=__cordl_internal_set_overdriveFillAudio)) ::UnityW<::UnityEngine::AudioClip>  overdriveFillAudio;

/// @brief Field overdriveFillTime, offset 0x2f0, size 0x4 
 __declspec(property(get=__cordl_internal_get_overdriveFillTime, put=__cordl_internal_set_overdriveFillTime)) float_t  overdriveFillTime;

/// @brief Field overdriveFillVolume, offset 0x208, size 0x4 
 __declspec(property(get=__cordl_internal_get_overdriveFillVolume, put=__cordl_internal_set_overdriveFillVolume)) float_t  overdriveFillVolume;

/// @brief Field overdriveLightSpinRate, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_overdriveLightSpinRate, put=__cordl_internal_set_overdriveLightSpinRate)) float_t  overdriveLightSpinRate;

/// @brief Field overdriveLightSpinnerOff, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_overdriveLightSpinnerOff, put=__cordl_internal_set_overdriveLightSpinnerOff)) ::UnityW<::UnityEngine::Transform>  overdriveLightSpinnerOff;

/// @brief Field overdriveLightSpinnerOn, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_overdriveLightSpinnerOn, put=__cordl_internal_set_overdriveLightSpinnerOn)) ::UnityW<::UnityEngine::Transform>  overdriveLightSpinnerOn;

/// @brief Field overdriveLiquidScaleParent, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_overdriveLiquidScaleParent, put=__cordl_internal_set_overdriveLiquidScaleParent)) ::UnityW<::UnityEngine::Transform>  overdriveLiquidScaleParent;

/// @brief Field overdriveMeterAudioSource, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_overdriveMeterAudioSource, put=__cordl_internal_set_overdriveMeterAudioSource)) ::UnityW<::UnityEngine::AudioSource>  overdriveMeterAudioSource;

/// @brief Field overdriveProcessTime, offset 0x2f4, size 0x4 
 __declspec(property(get=__cordl_internal_get_overdriveProcessTime, put=__cordl_internal_set_overdriveProcessTime)) float_t  overdriveProcessTime;

/// @brief Field overdrivePurchaseAnimationRoutine, offset 0x2b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_overdrivePurchaseAnimationRoutine, put=__cordl_internal_set_overdrivePurchaseAnimationRoutine)) ::UnityEngine::Coroutine*  overdrivePurchaseAnimationRoutine;

/// @brief Field overdrivePurchaseButton, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_overdrivePurchaseButton, put=__cordl_internal_set_overdrivePurchaseButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  overdrivePurchaseButton;

/// @brief Field overdrivePurchasePending, offset 0x298, size 0x1 
 __declspec(property(get=__cordl_internal_get_overdrivePurchasePending, put=__cordl_internal_set_overdrivePurchasePending)) bool  overdrivePurchasePending;

/// @brief Field overdrivePurchaseTime, offset 0x29c, size 0x4 
 __declspec(property(get=__cordl_internal_get_overdrivePurchaseTime, put=__cordl_internal_set_overdrivePurchaseTime)) float_t  overdrivePurchaseTime;

/// @brief Field overdriveServerConfirmationPending, offset 0x299, size 0x1 
 __declspec(property(get=__cordl_internal_get_overdriveServerConfirmationPending, put=__cordl_internal_set_overdriveServerConfirmationPending)) bool  overdriveServerConfirmationPending;

/// @brief Field processingAmount, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_processingAmount, put=__cordl_internal_set_processingAmount)) float_t  processingAmount;

/// @brief Field processingAmountVisual, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_processingAmountVisual, put=__cordl_internal_set_processingAmountVisual)) float_t  processingAmountVisual;

/// @brief Field processingHumAudio, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_processingHumAudio, put=__cordl_internal_set_processingHumAudio)) ::UnityW<::UnityEngine::AudioClip>  processingHumAudio;

/// @brief Field processingHumVolume, offset 0x1f8, size 0x4 
 __declspec(property(get=__cordl_internal_get_processingHumVolume, put=__cordl_internal_set_processingHumVolume)) float_t  processingHumVolume;

/// @brief Field processingLiquidFollowRate, offset 0x2a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_processingLiquidFollowRate, put=__cordl_internal_set_processingLiquidFollowRate)) float_t  processingLiquidFollowRate;

/// @brief Field processingLiquidScaleParent, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_processingLiquidScaleParent, put=__cordl_internal_set_processingLiquidScaleParent)) ::UnityW<::UnityEngine::Transform>  processingLiquidScaleParent;

/// @brief Field redButtonMaterial, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_redButtonMaterial, put=__cordl_internal_set_redButtonMaterial)) ::UnityW<::UnityEngine::Material>  redButtonMaterial;

/// @brief Field screenText, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_screenText, put=__cordl_internal_set_screenText)) ::UnityW<::TMPro::TMP_Text>  screenText;

/// @brief Field seedDepositAttemptAudio, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_seedDepositAttemptAudio, put=__cordl_internal_set_seedDepositAttemptAudio)) ::UnityW<::UnityEngine::AudioClip>  seedDepositAttemptAudio;

/// @brief Field seedDepositAttemptVolume, offset 0x198, size 0x4 
 __declspec(property(get=__cordl_internal_get_seedDepositAttemptVolume, put=__cordl_internal_set_seedDepositAttemptVolume)) float_t  seedDepositAttemptVolume;

/// @brief Field seedDepositAudio, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_seedDepositAudio, put=__cordl_internal_set_seedDepositAudio)) ::UnityW<::UnityEngine::AudioClip>  seedDepositAudio;

/// @brief Field seedDepositFailedAudio, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_seedDepositFailedAudio, put=__cordl_internal_set_seedDepositFailedAudio)) ::UnityW<::UnityEngine::AudioClip>  seedDepositFailedAudio;

/// @brief Field seedDepositFailedVolume, offset 0x188, size 0x4 
 __declspec(property(get=__cordl_internal_get_seedDepositFailedVolume, put=__cordl_internal_set_seedDepositFailedVolume)) float_t  seedDepositFailedVolume;

/// @brief Field seedDepositVolume, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get_seedDepositVolume, put=__cordl_internal_set_seedDepositVolume)) float_t  seedDepositVolume;

/// @brief Field seedDepositsPending, offset 0x2b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_seedDepositsPending, put=__cordl_internal_set_seedDepositsPending)) ::System::Collections::Generic::List_1<::System::ValueTuple_4<int32_t,int32_t,float_t,bool>>*  seedDepositsPending;

/// @brief Field seedDropAudio, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_seedDropAudio, put=__cordl_internal_set_seedDropAudio)) ::UnityW<::UnityEngine::AudioClip>  seedDropAudio;

/// @brief Field seedDropVolume, offset 0x1b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_seedDropVolume, put=__cordl_internal_set_seedDropVolume)) float_t  seedDropVolume;

/// @brief Field seedJuicingAudio, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_seedJuicingAudio, put=__cordl_internal_set_seedJuicingAudio)) ::UnityW<::UnityEngine::AudioClip>  seedJuicingAudio;

/// @brief Field seedJuicingVolume, offset 0x1c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_seedJuicingVolume, put=__cordl_internal_set_seedJuicingVolume)) float_t  seedJuicingVolume;

/// @brief Field seedMovementAudio, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_seedMovementAudio, put=__cordl_internal_set_seedMovementAudio)) ::UnityW<::UnityEngine::AudioClip>  seedMovementAudio;

/// @brief Field seedMovementVolume, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_seedMovementVolume, put=__cordl_internal_set_seedMovementVolume)) float_t  seedMovementVolume;

/// @brief Field seedProcessingPosition, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_seedProcessingPosition, put=__cordl_internal_set_seedProcessingPosition)) ::UnityW<::UnityEngine::Transform>  seedProcessingPosition;

/// @brief Field seedProcessingStates, offset 0x2c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_seedProcessingStates, put=__cordl_internal_set_seedProcessingStates)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRSeedExtractor_SeedProcessingVisualState>*  seedProcessingStates;

/// @brief Field seedTubeAudioSource, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_seedTubeAudioSource, put=__cordl_internal_set_seedTubeAudioSource)) ::UnityW<::UnityEngine::AudioSource>  seedTubeAudioSource;

/// @brief Field seedTubeEnd, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_seedTubeEnd, put=__cordl_internal_set_seedTubeEnd)) ::UnityW<::UnityEngine::Transform>  seedTubeEnd;

/// @brief Field seedTubeStart, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_seedTubeStart, put=__cordl_internal_set_seedTubeStart)) ::UnityW<::UnityEngine::Transform>  seedTubeStart;

/// @brief Field seedVisualDropTime, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_seedVisualDropTime, put=__cordl_internal_set_seedVisualDropTime)) float_t  seedVisualDropTime;

/// @brief Field seedVisualRollTime, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_seedVisualRollTime, put=__cordl_internal_set_seedVisualRollTime)) float_t  seedVisualRollTime;

/// @brief Field seedVisualScaleRange, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_seedVisualScaleRange, put=__cordl_internal_set_seedVisualScaleRange)) ::UnityEngine::Vector2  seedVisualScaleRange;

/// @brief Field shutterDoorAnimTime, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_shutterDoorAnimTime, put=__cordl_internal_set_shutterDoorAnimTime)) float_t  shutterDoorAnimTime;

/// @brief Field shutterDoorLiftRange, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_shutterDoorLiftRange, put=__cordl_internal_set_shutterDoorLiftRange)) ::UnityEngine::Vector2  shutterDoorLiftRange;

/// @brief Field shutterDoorOpenAmount, offset 0x28c, size 0x4 
 __declspec(property(get=__cordl_internal_get_shutterDoorOpenAmount, put=__cordl_internal_set_shutterDoorOpenAmount)) float_t  shutterDoorOpenAmount;

/// @brief Field shutterDoorParent, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_shutterDoorParent, put=__cordl_internal_set_shutterDoorParent)) ::UnityW<::UnityEngine::Transform>  shutterDoorParent;

/// @brief Field stationOpen, offset 0x280, size 0x1 
 __declspec(property(get=__cordl_internal_get_stationOpen, put=__cordl_internal_set_stationOpen)) bool  stationOpen;

/// @brief Field stationOpenRequestTime, offset 0x284, size 0x4 
 __declspec(property(get=__cordl_internal_get_stationOpenRequestTime, put=__cordl_internal_set_stationOpenRequestTime)) float_t  stationOpenRequestTime;

/// @brief Field timeBetweenServerRequests, offset 0x2c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeBetweenServerRequests, put=__cordl_internal_set_timeBetweenServerRequests)) float_t  timeBetweenServerRequests;

/// @brief Field toolProgressionManager, offset 0x2d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolProgressionManager, put=__cordl_internal_set_toolProgressionManager)) ::UnityW<::GlobalNamespace::GRToolProgressionManager>  toolProgressionManager;

/// @brief Field triggerNotifier, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerNotifier, put=__cordl_internal_set_triggerNotifier)) ::UnityW<::GlobalNamespace::TriggerEventNotifier>  triggerNotifier;

/// @brief Field tubeEndToProcessingPathX, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_tubeEndToProcessingPathX, put=__cordl_internal_set_tubeEndToProcessingPathX)) ::UnityEngine::AnimationCurve*  tubeEndToProcessingPathX;

/// @brief Field tubeEndToProcessingPathY, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_tubeEndToProcessingPathY, put=__cordl_internal_set_tubeEndToProcessingPathY)) ::UnityEngine::AnimationCurve*  tubeEndToProcessingPathY;

/// @brief Field visualChaosSeedRadius, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_visualChaosSeedRadius, put=__cordl_internal_set_visualChaosSeedRadius)) float_t  visualChaosSeedRadius;

/// @brief Field zone, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_zone, put=__cordl_internal_set_zone)) ::GlobalNamespace::GTZone  zone;

/// @brief Method ApplyState, addr 0x58adf70, size 0x1bc, virtual false, abstract: false, final false
inline void ApplyState(int32_t  playerActorNumber, int32_t  coreCount, int32_t  coresProcessedByOverdrive, int32_t  researchPoints, float_t  coreProcessingPercentage, float_t  overdriveSupply) ;

/// @brief Method Awake, addr 0x58aa718, size 0x2a8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CardSwipeFail, addr 0x58ad784, size 0x24, virtual false, abstract: false, final false
inline void CardSwipeFail() ;

/// @brief Method CardSwipeSuccess, addr 0x58ad760, size 0x24, virtual false, abstract: false, final false
inline void CardSwipeSuccess() ;

/// @brief Method ClearSeedVisuals, addr 0x58ab008, size 0x60, virtual false, abstract: false, final false
inline void ClearSeedVisuals() ;

/// @brief Method CloseStation, addr 0x58ac3c8, size 0x44, virtual false, abstract: false, final false
inline void CloseStation() ;

/// @brief Method CompleteSeedVisual, addr 0x58ae520, size 0xdc, virtual false, abstract: false, final false
inline void CompleteSeedVisual() ;

/// @brief Method DepositSeedVisual, addr 0x58ae294, size 0x28c, virtual false, abstract: false, final false
inline void DepositSeedVisual() ;

/// @brief Method DepositorTriggerEntered, addr 0x58ac900, size 0x4b8, virtual false, abstract: false, final false
inline void DepositorTriggerEntered(::GlobalNamespace::TriggerEventNotifier*  notifier, ::UnityEngine::Collider*  other) ;

/// @brief Method Init, addr 0x58aabbc, size 0x238, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::GRToolProgressionManager*  progression, ::GlobalNamespace::GhostReactor*  gr) ;

/// @brief Method LocalPlayerCanPurchaseOverdrive, addr 0x58acdf0, size 0xbc, virtual false, abstract: false, final false
inline bool LocalPlayerCanPurchaseOverdrive() ;

static inline ::GlobalNamespace::GRSeedExtractor* New_ctor() ;

/// @brief Method OnDisable, addr 0x58aadf8, size 0x210, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x58aadf4, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPlayerCardSwipe, addr 0x58ac790, size 0x170, virtual false, abstract: false, final false
inline void OnPlayerCardSwipe(int32_t  playerActorNumber) ;

/// @brief Method OnPlayerStatusReceived, addr 0x58acf9c, size 0x2e0, virtual false, abstract: false, final false
inline void OnPlayerStatusReceived(::GlobalNamespace::ProgressionManager_JuicerStatusResponse*  statusResponse) ;

/// @brief Method OnPurchaseOverdrive, addr 0x58ae6e4, size 0x7c, virtual false, abstract: false, final false
inline void OnPurchaseOverdrive(bool  success) ;

/// @brief Method OnResearchPointsUpdated, addr 0x58ae5fc, size 0xe8, virtual false, abstract: false, final false
inline void OnResearchPointsUpdated() ;

/// @brief Method OnStateUpdated, addr 0x58ad27c, size 0x1b4, virtual false, abstract: false, final false
inline void OnStateUpdated() ;

/// @brief Method OpenStation, addr 0x58ae12c, size 0xe4, virtual false, abstract: false, final false
inline void OpenStation(int32_t  playerActorNumber) ;

/// [IteratorStateMachine(typeof(GRSeedExtractor::<OverdrivePurchaseAnimationVisual>d__135))]
/// @brief Method OverdrivePurchaseAnimationVisual, addr 0x58ae210, size 0x84, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* OverdrivePurchaseAnimationVisual(int32_t  coresToProcess) ;

/// @brief Method OverdrivePurchaseButtonPressed, addr 0x58acdb8, size 0x38, virtual false, abstract: false, final false
inline void OverdrivePurchaseButtonPressed() ;

/// @brief Method OverdrivePurchaseConfirmButtonPressed, addr 0x58aceac, size 0xf0, virtual false, abstract: false, final false
inline void OverdrivePurchaseConfirmButtonPressed() ;

/// @brief Method RemovePendingSeedDeposit, addr 0x58ad6a0, size 0xc0, virtual false, abstract: false, final false
inline void RemovePendingSeedDeposit(int32_t  entityId) ;

/// @brief Method SeedDepositFailed, addr 0x58adf30, size 0x40, virtual false, abstract: false, final false
inline void SeedDepositFailed(int32_t  playerActorNumber, int32_t  entityNetId) ;

/// @brief Method SeedDepositSucceeded, addr 0x58adda0, size 0x190, virtual false, abstract: false, final false
inline void SeedDepositSucceeded(int32_t  playerActorNumber, int32_t  entityNetId) ;

/// @brief Method StepSeedVisualAnimation, addr 0x58ab95c, size 0x61c, virtual false, abstract: false, final false
inline void StepSeedVisualAnimation(float_t  dt) ;

/// @brief Method TriggerEntered, addr 0x58ac40c, size 0x184, virtual false, abstract: false, final false
inline void TriggerEntered(::GlobalNamespace::TriggerEventNotifier*  notifier, ::UnityEngine::Collider*  other) ;

/// @brief Method TriggerExited, addr 0x58ac590, size 0x200, virtual false, abstract: false, final false
inline void TriggerExited(::GlobalNamespace::TriggerEventNotifier*  notifier, ::UnityEngine::Collider*  other) ;

/// @brief Method TryDepositSeed, addr 0x58ad7a8, size 0x50c, virtual false, abstract: false, final false
inline void TryDepositSeed(int32_t  playerActorNumber, int32_t  seedNetId) ;

/// @brief Method TryDepositSeedServerResponse, addr 0x58ad430, size 0x270, virtual false, abstract: false, final false
inline void TryDepositSeedServerResponse(bool  succeeded) ;

/// @brief Method Update, addr 0x58ab068, size 0x654, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateOverdrivePurchaseButtons, addr 0x58aa9c0, size 0x1fc, virtual false, abstract: false, final false
inline void UpdateOverdrivePurchaseButtons() ;

/// @brief Method UpdateScreenDisplay, addr 0x58abf78, size 0x450, virtual false, abstract: false, final false
inline void UpdateScreenDisplay() ;

/// @brief Method ValidateCurrentPlayer, addr 0x58ab6bc, size 0x2a0, virtual false, abstract: false, final false
inline void ValidateCurrentPlayer() ;

/// @brief Method ValidateSeedDepositSucceeded, addr 0x58adcb4, size 0xec, virtual false, abstract: false, final false
inline bool ValidateSeedDepositSucceeded(int32_t  playerActorNumber, int32_t  entityNetId) ;

constexpr int32_t const& __cordl_internal_get_MAX_OVERDRIVE_USES() const;

constexpr int32_t& __cordl_internal_get_MAX_OVERDRIVE_USES() ;

constexpr float_t const& __cordl_internal_get_PROCESSING_TIME_SECONDS() const;

constexpr float_t& __cordl_internal_get_PROCESSING_TIME_SECONDS() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_UpdateScreenSB() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_UpdateScreenSB() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_chaosSeedVisualPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_chaosSeedVisualPrefab() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_chaosSeedVisuals() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_chaosSeedVisuals() ;

constexpr ::UnityW<::GlobalNamespace::TriggerEventNotifier> const& __cordl_internal_get_coreDepositTriggerNotifier() const;

constexpr ::UnityW<::GlobalNamespace::TriggerEventNotifier>& __cordl_internal_get_coreDepositTriggerNotifier() ;

constexpr ::GlobalNamespace::GRSeedExtractor_ScreenDisplayData const& __cordl_internal_get_currentDisplayData() const;

constexpr ::GlobalNamespace::GRSeedExtractor_ScreenDisplayData& __cordl_internal_get_currentDisplayData() ;

constexpr int32_t const& __cordl_internal_get_currentPlayerActorNumber() const;

constexpr int32_t& __cordl_internal_get_currentPlayerActorNumber() ;

constexpr ::GlobalNamespace::GRSeedExtractor_PlayerData const& __cordl_internal_get_currentPlayerData() const;

constexpr ::GlobalNamespace::GRSeedExtractor_PlayerData& __cordl_internal_get_currentPlayerData() ;

constexpr int32_t const& __cordl_internal_get_debugSeedCount() const;

constexpr int32_t& __cordl_internal_get_debugSeedCount() ;

constexpr float_t const& __cordl_internal_get_debugSeedProcessingTime() const;

constexpr float_t& __cordl_internal_get_debugSeedProcessingTime() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_defaultButtonMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_defaultButtonMaterial() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_depositorAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_depositorAudioSource() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_depositorParticles() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_depositorParticles() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_disableDuringOverdrive() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_disableDuringOverdrive() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_doorAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_doorAudioSource() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_doorCloseAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_doorCloseAudio() ;

constexpr float_t const& __cordl_internal_get_doorCloseVolume() const;

constexpr float_t& __cordl_internal_get_doorCloseVolume() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_doorOpenAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_doorOpenAudio() ;

constexpr float_t const& __cordl_internal_get_doorOpenVolume() const;

constexpr float_t& __cordl_internal_get_doorOpenVolume() ;

constexpr bool const& __cordl_internal_get_drainingProcessingBeaker() const;

constexpr bool& __cordl_internal_get_drainingProcessingBeaker() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_enableDuringOverdrive() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_enableDuringOverdrive() ;

constexpr float_t const& __cordl_internal_get_estimatedJuiceTimeRemaining() const;

constexpr float_t& __cordl_internal_get_estimatedJuiceTimeRemaining() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_ghostReactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_ghostReactor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_greenButtonMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_greenButtonMaterial() ;

constexpr ::UnityW<::GlobalNamespace::IDCardScanner> const& __cordl_internal_get_idCardScanner() const;

constexpr ::UnityW<::GlobalNamespace::IDCardScanner>& __cordl_internal_get_idCardScanner() ;

constexpr float_t const& __cordl_internal_get_juiceDepositTime() const;

constexpr float_t& __cordl_internal_get_juiceDepositTime() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_juicerAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_juicerAudioSource() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_juicerOverdriveParticles() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_juicerOverdriveParticles() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_juicerSlowParticles() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_juicerSlowParticles() ;

constexpr float_t const& __cordl_internal_get_lastServerRequestTime() const;

constexpr float_t& __cordl_internal_get_lastServerRequestTime() ;

constexpr ::GlobalNamespace::GRSeedExtractor_PlayerData const& __cordl_internal_get_localPlayerData() const;

constexpr ::GlobalNamespace::GRSeedExtractor_PlayerData& __cordl_internal_get_localPlayerData() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_machineHumAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_machineHumAudioSource() ;

constexpr int32_t const& __cordl_internal_get_maxVisualChaosSeedCount() const;

constexpr int32_t& __cordl_internal_get_maxVisualChaosSeedCount() ;

constexpr bool const& __cordl_internal_get_overdriveActive() const;

constexpr bool& __cordl_internal_get_overdriveActive() ;

constexpr float_t const& __cordl_internal_get_overdriveAmount() const;

constexpr float_t& __cordl_internal_get_overdriveAmount() ;

constexpr float_t const& __cordl_internal_get_overdriveAmountVisual() const;

constexpr float_t& __cordl_internal_get_overdriveAmountVisual() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_overdriveBeepAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_overdriveBeepAudioSource() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_overdriveBeepingAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_overdriveBeepingAudio() ;

constexpr float_t const& __cordl_internal_get_overdriveBeepingVolume() const;

constexpr float_t& __cordl_internal_get_overdriveBeepingVolume() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_overdriveConfirmButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_overdriveConfirmButton() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_overdriveEngineAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_overdriveEngineAudio() ;

constexpr float_t const& __cordl_internal_get_overdriveEngineVolume() const;

constexpr float_t& __cordl_internal_get_overdriveEngineVolume() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_overdriveFillAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_overdriveFillAudio() ;

constexpr float_t const& __cordl_internal_get_overdriveFillTime() const;

constexpr float_t& __cordl_internal_get_overdriveFillTime() ;

constexpr float_t const& __cordl_internal_get_overdriveFillVolume() const;

constexpr float_t& __cordl_internal_get_overdriveFillVolume() ;

constexpr float_t const& __cordl_internal_get_overdriveLightSpinRate() const;

constexpr float_t& __cordl_internal_get_overdriveLightSpinRate() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_overdriveLightSpinnerOff() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_overdriveLightSpinnerOff() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_overdriveLightSpinnerOn() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_overdriveLightSpinnerOn() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_overdriveLiquidScaleParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_overdriveLiquidScaleParent() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_overdriveMeterAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_overdriveMeterAudioSource() ;

constexpr float_t const& __cordl_internal_get_overdriveProcessTime() const;

constexpr float_t& __cordl_internal_get_overdriveProcessTime() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_overdrivePurchaseAnimationRoutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_overdrivePurchaseAnimationRoutine() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_overdrivePurchaseButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_overdrivePurchaseButton() ;

constexpr bool const& __cordl_internal_get_overdrivePurchasePending() const;

constexpr bool& __cordl_internal_get_overdrivePurchasePending() ;

constexpr float_t const& __cordl_internal_get_overdrivePurchaseTime() const;

constexpr float_t& __cordl_internal_get_overdrivePurchaseTime() ;

constexpr bool const& __cordl_internal_get_overdriveServerConfirmationPending() const;

constexpr bool& __cordl_internal_get_overdriveServerConfirmationPending() ;

constexpr float_t const& __cordl_internal_get_processingAmount() const;

constexpr float_t& __cordl_internal_get_processingAmount() ;

constexpr float_t const& __cordl_internal_get_processingAmountVisual() const;

constexpr float_t& __cordl_internal_get_processingAmountVisual() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_processingHumAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_processingHumAudio() ;

constexpr float_t const& __cordl_internal_get_processingHumVolume() const;

constexpr float_t& __cordl_internal_get_processingHumVolume() ;

constexpr float_t const& __cordl_internal_get_processingLiquidFollowRate() const;

constexpr float_t& __cordl_internal_get_processingLiquidFollowRate() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_processingLiquidScaleParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_processingLiquidScaleParent() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_redButtonMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_redButtonMaterial() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_screenText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_screenText() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_seedDepositAttemptAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_seedDepositAttemptAudio() ;

constexpr float_t const& __cordl_internal_get_seedDepositAttemptVolume() const;

constexpr float_t& __cordl_internal_get_seedDepositAttemptVolume() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_seedDepositAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_seedDepositAudio() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_seedDepositFailedAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_seedDepositFailedAudio() ;

constexpr float_t const& __cordl_internal_get_seedDepositFailedVolume() const;

constexpr float_t& __cordl_internal_get_seedDepositFailedVolume() ;

constexpr float_t const& __cordl_internal_get_seedDepositVolume() const;

constexpr float_t& __cordl_internal_get_seedDepositVolume() ;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_4<int32_t,int32_t,float_t,bool>>* const& __cordl_internal_get_seedDepositsPending() const;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_4<int32_t,int32_t,float_t,bool>>*& __cordl_internal_get_seedDepositsPending() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_seedDropAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_seedDropAudio() ;

constexpr float_t const& __cordl_internal_get_seedDropVolume() const;

constexpr float_t& __cordl_internal_get_seedDropVolume() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_seedJuicingAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_seedJuicingAudio() ;

constexpr float_t const& __cordl_internal_get_seedJuicingVolume() const;

constexpr float_t& __cordl_internal_get_seedJuicingVolume() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_seedMovementAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_seedMovementAudio() ;

constexpr float_t const& __cordl_internal_get_seedMovementVolume() const;

constexpr float_t& __cordl_internal_get_seedMovementVolume() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_seedProcessingPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_seedProcessingPosition() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRSeedExtractor_SeedProcessingVisualState>* const& __cordl_internal_get_seedProcessingStates() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRSeedExtractor_SeedProcessingVisualState>*& __cordl_internal_get_seedProcessingStates() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_seedTubeAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_seedTubeAudioSource() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_seedTubeEnd() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_seedTubeEnd() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_seedTubeStart() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_seedTubeStart() ;

constexpr float_t const& __cordl_internal_get_seedVisualDropTime() const;

constexpr float_t& __cordl_internal_get_seedVisualDropTime() ;

constexpr float_t const& __cordl_internal_get_seedVisualRollTime() const;

constexpr float_t& __cordl_internal_get_seedVisualRollTime() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_seedVisualScaleRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_seedVisualScaleRange() ;

constexpr float_t const& __cordl_internal_get_shutterDoorAnimTime() const;

constexpr float_t& __cordl_internal_get_shutterDoorAnimTime() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_shutterDoorLiftRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_shutterDoorLiftRange() ;

constexpr float_t const& __cordl_internal_get_shutterDoorOpenAmount() const;

constexpr float_t& __cordl_internal_get_shutterDoorOpenAmount() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_shutterDoorParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_shutterDoorParent() ;

constexpr bool const& __cordl_internal_get_stationOpen() const;

constexpr bool& __cordl_internal_get_stationOpen() ;

constexpr float_t const& __cordl_internal_get_stationOpenRequestTime() const;

constexpr float_t& __cordl_internal_get_stationOpenRequestTime() ;

constexpr float_t const& __cordl_internal_get_timeBetweenServerRequests() const;

constexpr float_t& __cordl_internal_get_timeBetweenServerRequests() ;

constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager> const& __cordl_internal_get_toolProgressionManager() const;

constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager>& __cordl_internal_get_toolProgressionManager() ;

constexpr ::UnityW<::GlobalNamespace::TriggerEventNotifier> const& __cordl_internal_get_triggerNotifier() const;

constexpr ::UnityW<::GlobalNamespace::TriggerEventNotifier>& __cordl_internal_get_triggerNotifier() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_tubeEndToProcessingPathX() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_tubeEndToProcessingPathX() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_tubeEndToProcessingPathY() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_tubeEndToProcessingPathY() ;

constexpr float_t const& __cordl_internal_get_visualChaosSeedRadius() const;

constexpr float_t& __cordl_internal_get_visualChaosSeedRadius() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_zone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_zone() ;

constexpr void __cordl_internal_set_MAX_OVERDRIVE_USES(int32_t  value) ;

constexpr void __cordl_internal_set_PROCESSING_TIME_SECONDS(float_t  value) ;

constexpr void __cordl_internal_set_UpdateScreenSB(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_chaosSeedVisualPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_chaosSeedVisuals(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_coreDepositTriggerNotifier(::UnityW<::GlobalNamespace::TriggerEventNotifier>  value) ;

constexpr void __cordl_internal_set_currentDisplayData(::GlobalNamespace::GRSeedExtractor_ScreenDisplayData  value) ;

constexpr void __cordl_internal_set_currentPlayerActorNumber(int32_t  value) ;

constexpr void __cordl_internal_set_currentPlayerData(::GlobalNamespace::GRSeedExtractor_PlayerData  value) ;

constexpr void __cordl_internal_set_debugSeedCount(int32_t  value) ;

constexpr void __cordl_internal_set_debugSeedProcessingTime(float_t  value) ;

constexpr void __cordl_internal_set_defaultButtonMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_depositorAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_depositorParticles(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_disableDuringOverdrive(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_doorAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_doorCloseAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_doorCloseVolume(float_t  value) ;

constexpr void __cordl_internal_set_doorOpenAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_doorOpenVolume(float_t  value) ;

constexpr void __cordl_internal_set_drainingProcessingBeaker(bool  value) ;

constexpr void __cordl_internal_set_enableDuringOverdrive(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_estimatedJuiceTimeRemaining(float_t  value) ;

constexpr void __cordl_internal_set_ghostReactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

constexpr void __cordl_internal_set_greenButtonMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_idCardScanner(::UnityW<::GlobalNamespace::IDCardScanner>  value) ;

constexpr void __cordl_internal_set_juiceDepositTime(float_t  value) ;

constexpr void __cordl_internal_set_juicerAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_juicerOverdriveParticles(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_juicerSlowParticles(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_lastServerRequestTime(float_t  value) ;

constexpr void __cordl_internal_set_localPlayerData(::GlobalNamespace::GRSeedExtractor_PlayerData  value) ;

constexpr void __cordl_internal_set_machineHumAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_maxVisualChaosSeedCount(int32_t  value) ;

constexpr void __cordl_internal_set_overdriveActive(bool  value) ;

constexpr void __cordl_internal_set_overdriveAmount(float_t  value) ;

constexpr void __cordl_internal_set_overdriveAmountVisual(float_t  value) ;

constexpr void __cordl_internal_set_overdriveBeepAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_overdriveBeepingAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_overdriveBeepingVolume(float_t  value) ;

constexpr void __cordl_internal_set_overdriveConfirmButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_overdriveEngineAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_overdriveEngineVolume(float_t  value) ;

constexpr void __cordl_internal_set_overdriveFillAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_overdriveFillTime(float_t  value) ;

constexpr void __cordl_internal_set_overdriveFillVolume(float_t  value) ;

constexpr void __cordl_internal_set_overdriveLightSpinRate(float_t  value) ;

constexpr void __cordl_internal_set_overdriveLightSpinnerOff(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_overdriveLightSpinnerOn(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_overdriveLiquidScaleParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_overdriveMeterAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_overdriveProcessTime(float_t  value) ;

constexpr void __cordl_internal_set_overdrivePurchaseAnimationRoutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_overdrivePurchaseButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_overdrivePurchasePending(bool  value) ;

constexpr void __cordl_internal_set_overdrivePurchaseTime(float_t  value) ;

constexpr void __cordl_internal_set_overdriveServerConfirmationPending(bool  value) ;

constexpr void __cordl_internal_set_processingAmount(float_t  value) ;

constexpr void __cordl_internal_set_processingAmountVisual(float_t  value) ;

constexpr void __cordl_internal_set_processingHumAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_processingHumVolume(float_t  value) ;

constexpr void __cordl_internal_set_processingLiquidFollowRate(float_t  value) ;

constexpr void __cordl_internal_set_processingLiquidScaleParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_redButtonMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_screenText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_seedDepositAttemptAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_seedDepositAttemptVolume(float_t  value) ;

constexpr void __cordl_internal_set_seedDepositAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_seedDepositFailedAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_seedDepositFailedVolume(float_t  value) ;

constexpr void __cordl_internal_set_seedDepositVolume(float_t  value) ;

constexpr void __cordl_internal_set_seedDepositsPending(::System::Collections::Generic::List_1<::System::ValueTuple_4<int32_t,int32_t,float_t,bool>>*  value) ;

constexpr void __cordl_internal_set_seedDropAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_seedDropVolume(float_t  value) ;

constexpr void __cordl_internal_set_seedJuicingAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_seedJuicingVolume(float_t  value) ;

constexpr void __cordl_internal_set_seedMovementAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_seedMovementVolume(float_t  value) ;

constexpr void __cordl_internal_set_seedProcessingPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_seedProcessingStates(::System::Collections::Generic::List_1<::GlobalNamespace::GRSeedExtractor_SeedProcessingVisualState>*  value) ;

constexpr void __cordl_internal_set_seedTubeAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_seedTubeEnd(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_seedTubeStart(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_seedVisualDropTime(float_t  value) ;

constexpr void __cordl_internal_set_seedVisualRollTime(float_t  value) ;

constexpr void __cordl_internal_set_seedVisualScaleRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_shutterDoorAnimTime(float_t  value) ;

constexpr void __cordl_internal_set_shutterDoorLiftRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_shutterDoorOpenAmount(float_t  value) ;

constexpr void __cordl_internal_set_shutterDoorParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_stationOpen(bool  value) ;

constexpr void __cordl_internal_set_stationOpenRequestTime(float_t  value) ;

constexpr void __cordl_internal_set_timeBetweenServerRequests(float_t  value) ;

constexpr void __cordl_internal_set_toolProgressionManager(::UnityW<::GlobalNamespace::GRToolProgressionManager>  value) ;

constexpr void __cordl_internal_set_triggerNotifier(::UnityW<::GlobalNamespace::TriggerEventNotifier>  value) ;

constexpr void __cordl_internal_set_tubeEndToProcessingPathX(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_tubeEndToProcessingPathY(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_visualChaosSeedRadius(float_t  value) ;

constexpr void __cordl_internal_set_zone(::GlobalNamespace::GTZone  value) ;

/// @brief Method .ctor, addr 0x58ae760, size 0x2d4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentPlayerActorNumber, addr 0x58aa710, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentPlayerActorNumber() ;

/// @brief Method get_StationOpen, addr 0x58aa670, size 0x8, virtual false, abstract: false, final false
inline bool get_StationOpen() ;

/// @brief Method get_StationOpenForLocalPlayer, addr 0x58aa678, size 0x98, virtual false, abstract: false, final false
inline bool get_StationOpenForLocalPlayer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRSeedExtractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRSeedExtractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRSeedExtractor(GRSeedExtractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRSeedExtractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRSeedExtractor(GRSeedExtractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2029};

/// @brief Field PROCESSING_TIME_SECONDS, offset: 0x20, size: 0x4, def value: None
 float_t  ___PROCESSING_TIME_SECONDS;

/// @brief Field MAX_OVERDRIVE_USES, offset: 0x24, size: 0x4, def value: None
 int32_t  ___MAX_OVERDRIVE_USES;

/// [SerializeField]
/// @brief Field zone, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___zone;

/// [SerializeField]
/// @brief Field triggerNotifier, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TriggerEventNotifier>  ___triggerNotifier;

/// [SerializeField]
/// @brief Field coreDepositTriggerNotifier, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TriggerEventNotifier>  ___coreDepositTriggerNotifier;

/// [SerializeField]
/// @brief Field screenText, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___screenText;

/// [SerializeField]
/// @brief Field idCardScanner, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::IDCardScanner>  ___idCardScanner;

/// [SerializeField]
/// @brief Field chaosSeedVisualPrefab, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___chaosSeedVisualPrefab;

/// [Header("Overdrive Purchase Buttons")]
/// [SerializeField]
/// @brief Field overdrivePurchaseButton, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___overdrivePurchaseButton;

/// [SerializeField]
/// @brief Field overdriveConfirmButton, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___overdriveConfirmButton;

/// [SerializeField]
/// @brief Field defaultButtonMaterial, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___defaultButtonMaterial;

/// [SerializeField]
/// @brief Field redButtonMaterial, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___redButtonMaterial;

/// [SerializeField]
/// @brief Field greenButtonMaterial, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___greenButtonMaterial;

/// [Header("Shutter Door Visual")]
/// [SerializeField]
/// @brief Field shutterDoorParent, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___shutterDoorParent;

/// [SerializeField]
/// @brief Field shutterDoorLiftRange, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___shutterDoorLiftRange;

/// [SerializeField]
/// @brief Field shutterDoorAnimTime, offset: 0x90, size: 0x4, def value: None
 float_t  ___shutterDoorAnimTime;

/// [Header("Seed Processing Visual")]
/// [SerializeField]
/// @brief Field processingLiquidScaleParent, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___processingLiquidScaleParent;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field processingAmount, offset: 0xa0, size: 0x4, def value: None
 float_t  ___processingAmount;

/// @brief Field processingAmountVisual, offset: 0xa4, size: 0x4, def value: None
 float_t  ___processingAmountVisual;

/// [SerializeField]
/// @brief Field seedTubeStart, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___seedTubeStart;

/// [SerializeField]
/// @brief Field seedTubeEnd, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___seedTubeEnd;

/// [SerializeField]
/// @brief Field seedProcessingPosition, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___seedProcessingPosition;

/// [SerializeField]
/// @brief Field tubeEndToProcessingPathY, offset: 0xc0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___tubeEndToProcessingPathY;

/// [SerializeField]
/// @brief Field tubeEndToProcessingPathX, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___tubeEndToProcessingPathX;

/// [SerializeField]
/// @brief Field visualChaosSeedRadius, offset: 0xd0, size: 0x4, def value: None
 float_t  ___visualChaosSeedRadius;

/// [SerializeField]
/// @brief Field maxVisualChaosSeedCount, offset: 0xd4, size: 0x4, def value: None
 int32_t  ___maxVisualChaosSeedCount;

/// [SerializeField]
/// @brief Field seedVisualRollTime, offset: 0xd8, size: 0x4, def value: None
 float_t  ___seedVisualRollTime;

/// [SerializeField]
/// @brief Field seedVisualDropTime, offset: 0xdc, size: 0x4, def value: None
 float_t  ___seedVisualDropTime;

/// [SerializeField]
/// @brief Field seedVisualScaleRange, offset: 0xe0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___seedVisualScaleRange;

/// [Header("Overdrive Visual")]
/// [SerializeField]
/// @brief Field overdriveLiquidScaleParent, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___overdriveLiquidScaleParent;

/// [SerializeField]
/// @brief Field overdriveLightSpinnerOff, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___overdriveLightSpinnerOff;

/// [SerializeField]
/// @brief Field overdriveLightSpinnerOn, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___overdriveLightSpinnerOn;

/// [SerializeField]
/// @brief Field enableDuringOverdrive, offset: 0x100, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___enableDuringOverdrive;

/// [SerializeField]
/// @brief Field disableDuringOverdrive, offset: 0x108, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___disableDuringOverdrive;

/// [SerializeField]
/// @brief Field overdriveLightSpinRate, offset: 0x110, size: 0x4, def value: None
 float_t  ___overdriveLightSpinRate;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field overdriveAmount, offset: 0x114, size: 0x4, def value: None
 float_t  ___overdriveAmount;

/// @brief Field overdriveAmountVisual, offset: 0x118, size: 0x4, def value: None
 float_t  ___overdriveAmountVisual;

/// [Header("VFX")]
/// [SerializeField]
/// @brief Field depositorParticles, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___depositorParticles;

/// [SerializeField]
/// @brief Field juicerSlowParticles, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___juicerSlowParticles;

/// [SerializeField]
/// @brief Field juicerOverdriveParticles, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___juicerOverdriveParticles;

/// [Header("Audio")]
/// [SerializeField]
/// @brief Field depositorAudioSource, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___depositorAudioSource;

/// [SerializeField]
/// @brief Field doorAudioSource, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___doorAudioSource;

/// [SerializeField]
/// @brief Field seedTubeAudioSource, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___seedTubeAudioSource;

/// [SerializeField]
/// @brief Field juicerAudioSource, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___juicerAudioSource;

/// [SerializeField]
/// @brief Field machineHumAudioSource, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___machineHumAudioSource;

/// [SerializeField]
/// @brief Field overdriveMeterAudioSource, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___overdriveMeterAudioSource;

/// [SerializeField]
/// @brief Field overdriveBeepAudioSource, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___overdriveBeepAudioSource;

/// [SerializeField]
/// @brief Field seedDepositAudio, offset: 0x170, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___seedDepositAudio;

/// [SerializeField]
/// @brief Field seedDepositVolume, offset: 0x178, size: 0x4, def value: None
 float_t  ___seedDepositVolume;

/// [SerializeField]
/// @brief Field seedDepositFailedAudio, offset: 0x180, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___seedDepositFailedAudio;

/// [SerializeField]
/// @brief Field seedDepositFailedVolume, offset: 0x188, size: 0x4, def value: None
 float_t  ___seedDepositFailedVolume;

/// [SerializeField]
/// @brief Field seedDepositAttemptAudio, offset: 0x190, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___seedDepositAttemptAudio;

/// [SerializeField]
/// @brief Field seedDepositAttemptVolume, offset: 0x198, size: 0x4, def value: None
 float_t  ___seedDepositAttemptVolume;

/// [SerializeField]
/// @brief Field seedMovementAudio, offset: 0x1a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___seedMovementAudio;

/// [SerializeField]
/// @brief Field seedMovementVolume, offset: 0x1a8, size: 0x4, def value: None
 float_t  ___seedMovementVolume;

/// [SerializeField]
/// @brief Field seedDropAudio, offset: 0x1b0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___seedDropAudio;

/// [SerializeField]
/// @brief Field seedDropVolume, offset: 0x1b8, size: 0x4, def value: None
 float_t  ___seedDropVolume;

/// [SerializeField]
/// @brief Field seedJuicingAudio, offset: 0x1c0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___seedJuicingAudio;

/// [SerializeField]
/// @brief Field seedJuicingVolume, offset: 0x1c8, size: 0x4, def value: None
 float_t  ___seedJuicingVolume;

/// [SerializeField]
/// @brief Field doorOpenAudio, offset: 0x1d0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___doorOpenAudio;

/// [SerializeField]
/// @brief Field doorOpenVolume, offset: 0x1d8, size: 0x4, def value: None
 float_t  ___doorOpenVolume;

/// [SerializeField]
/// @brief Field doorCloseAudio, offset: 0x1e0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___doorCloseAudio;

/// [SerializeField]
/// @brief Field doorCloseVolume, offset: 0x1e8, size: 0x4, def value: None
 float_t  ___doorCloseVolume;

/// [SerializeField]
/// @brief Field processingHumAudio, offset: 0x1f0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___processingHumAudio;

/// [SerializeField]
/// @brief Field processingHumVolume, offset: 0x1f8, size: 0x4, def value: None
 float_t  ___processingHumVolume;

/// [SerializeField]
/// @brief Field overdriveFillAudio, offset: 0x200, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___overdriveFillAudio;

/// [SerializeField]
/// @brief Field overdriveFillVolume, offset: 0x208, size: 0x4, def value: None
 float_t  ___overdriveFillVolume;

/// [SerializeField]
/// @brief Field overdriveEngineAudio, offset: 0x210, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___overdriveEngineAudio;

/// [SerializeField]
/// @brief Field overdriveEngineVolume, offset: 0x218, size: 0x4, def value: None
 float_t  ___overdriveEngineVolume;

/// [SerializeField]
/// @brief Field overdriveBeepingAudio, offset: 0x220, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___overdriveBeepingAudio;

/// [SerializeField]
/// @brief Field overdriveBeepingVolume, offset: 0x228, size: 0x4, def value: None
 float_t  ___overdriveBeepingVolume;

/// @brief Field localPlayerData, offset: 0x22c, size: 0x20, def value: None
 ::GlobalNamespace::GRSeedExtractor_PlayerData  ___localPlayerData;

/// @brief Field currentPlayerData, offset: 0x24c, size: 0x20, def value: None
 ::GlobalNamespace::GRSeedExtractor_PlayerData  ___currentPlayerData;

/// @brief Field currentDisplayData, offset: 0x26c, size: 0x14, def value: None
 ::GlobalNamespace::GRSeedExtractor_ScreenDisplayData  ___currentDisplayData;

/// @brief Field stationOpen, offset: 0x280, size: 0x1, def value: None
 bool  ___stationOpen;

/// @brief Field stationOpenRequestTime, offset: 0x284, size: 0x4, def value: None
 float_t  ___stationOpenRequestTime;

/// @brief Field currentPlayerActorNumber, offset: 0x288, size: 0x4, def value: None
 int32_t  ___currentPlayerActorNumber;

/// @brief Field shutterDoorOpenAmount, offset: 0x28c, size: 0x4, def value: None
 float_t  ___shutterDoorOpenAmount;

/// @brief Field chaosSeedVisuals, offset: 0x290, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___chaosSeedVisuals;

/// @brief Field overdrivePurchasePending, offset: 0x298, size: 0x1, def value: None
 bool  ___overdrivePurchasePending;

/// @brief Field overdriveServerConfirmationPending, offset: 0x299, size: 0x1, def value: None
 bool  ___overdriveServerConfirmationPending;

/// @brief Field overdrivePurchaseTime, offset: 0x29c, size: 0x4, def value: None
 float_t  ___overdrivePurchaseTime;

/// @brief Field overdriveActive, offset: 0x2a0, size: 0x1, def value: None
 bool  ___overdriveActive;

/// @brief Field drainingProcessingBeaker, offset: 0x2a1, size: 0x1, def value: None
 bool  ___drainingProcessingBeaker;

/// @brief Field estimatedJuiceTimeRemaining, offset: 0x2a4, size: 0x4, def value: None
 float_t  ___estimatedJuiceTimeRemaining;

/// @brief Field processingLiquidFollowRate, offset: 0x2a8, size: 0x4, def value: None
 float_t  ___processingLiquidFollowRate;

/// @brief Field seedDepositsPending, offset: 0x2b0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::ValueTuple_4<int32_t,int32_t,float_t,bool>>*  ___seedDepositsPending;

/// @brief Field overdrivePurchaseAnimationRoutine, offset: 0x2b8, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___overdrivePurchaseAnimationRoutine;

/// @brief Field seedProcessingStates, offset: 0x2c0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRSeedExtractor_SeedProcessingVisualState>*  ___seedProcessingStates;

/// @brief Field timeBetweenServerRequests, offset: 0x2c8, size: 0x4, def value: None
 float_t  ___timeBetweenServerRequests;

/// @brief Field lastServerRequestTime, offset: 0x2cc, size: 0x4, def value: None
 float_t  ___lastServerRequestTime;

/// @brief Field ghostReactor, offset: 0x2d0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___ghostReactor;

/// @brief Field toolProgressionManager, offset: 0x2d8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRToolProgressionManager>  ___toolProgressionManager;

/// @brief Field UpdateScreenSB, offset: 0x2e0, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___UpdateScreenSB;

/// [Header("Debug Animation")]
/// @brief Field debugSeedCount, offset: 0x2e8, size: 0x4, def value: None
 int32_t  ___debugSeedCount;

/// @brief Field debugSeedProcessingTime, offset: 0x2ec, size: 0x4, def value: None
 float_t  ___debugSeedProcessingTime;

/// @brief Field overdriveFillTime, offset: 0x2f0, size: 0x4, def value: None
 float_t  ___overdriveFillTime;

/// @brief Field overdriveProcessTime, offset: 0x2f4, size: 0x4, def value: None
 float_t  ___overdriveProcessTime;

/// @brief Field juiceDepositTime, offset: 0x2f8, size: 0x4, def value: None
 float_t  ___juiceDepositTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___PROCESSING_TIME_SECONDS) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___MAX_OVERDRIVE_USES) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___zone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___triggerNotifier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___coreDepositTriggerNotifier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___screenText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___idCardScanner) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___chaosSeedVisualPrefab) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___overdrivePurchaseButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___overdriveConfirmButton) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___defaultButtonMaterial) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___redButtonMaterial) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___greenButtonMaterial) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___shutterDoorParent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___shutterDoorLiftRange) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___shutterDoorAnimTime) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___processingLiquidScaleParent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___processingAmount) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___processingAmountVisual) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___seedTubeStart) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___seedTubeEnd) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___seedProcessingPosition) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___tubeEndToProcessingPathY) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___tubeEndToProcessingPathX) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___visualChaosSeedRadius) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___maxVisualChaosSeedCount) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___seedVisualRollTime) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___seedVisualDropTime) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___seedVisualScaleRange) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___overdriveLiquidScaleParent) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___overdriveLightSpinnerOff) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___overdriveLightSpinnerOn) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___enableDuringOverdrive) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___disableDuringOverdrive) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___overdriveLightSpinRate) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___overdriveAmount) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___overdriveAmountVisual) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___depositorParticles) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___juicerSlowParticles) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___juicerOverdriveParticles) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___depositorAudioSource) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___doorAudioSource) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___seedTubeAudioSource) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___juicerAudioSource) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___machineHumAudioSource) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___overdriveMeterAudioSource) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___overdriveBeepAudioSource) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___seedDepositAudio) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___seedDepositVolume) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___seedDepositFailedAudio) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___seedDepositFailedVolume) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___seedDepositAttemptAudio) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___seedDepositAttemptVolume) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___seedMovementAudio) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___seedMovementVolume) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___seedDropAudio) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___seedDropVolume) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___seedJuicingAudio) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___seedJuicingVolume) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___doorOpenAudio) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___doorOpenVolume) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___doorCloseAudio) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___doorCloseVolume) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___processingHumAudio) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___processingHumVolume) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___overdriveFillAudio) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___overdriveFillVolume) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___overdriveEngineAudio) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___overdriveEngineVolume) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___overdriveBeepingAudio) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___overdriveBeepingVolume) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___localPlayerData) == 0x22c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___currentPlayerData) == 0x24c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___currentDisplayData) == 0x26c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___stationOpen) == 0x280, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___stationOpenRequestTime) == 0x284, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___currentPlayerActorNumber) == 0x288, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___shutterDoorOpenAmount) == 0x28c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___chaosSeedVisuals) == 0x290, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___overdrivePurchasePending) == 0x298, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___overdriveServerConfirmationPending) == 0x299, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___overdrivePurchaseTime) == 0x29c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___overdriveActive) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___drainingProcessingBeaker) == 0x2a1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___estimatedJuiceTimeRemaining) == 0x2a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___processingLiquidFollowRate) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___seedDepositsPending) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___overdrivePurchaseAnimationRoutine) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___seedProcessingStates) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___timeBetweenServerRequests) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___lastServerRequestTime) == 0x2cc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___ghostReactor) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___toolProgressionManager) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___UpdateScreenSB) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___debugSeedCount) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___debugSeedProcessingTime) == 0x2ec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___overdriveFillTime) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___overdriveProcessTime) == 0x2f4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor, ___juiceDepositTime) == 0x2f8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRSeedExtractor) == 0x300, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRSeedExtractor/<OverdrivePurchaseAnimationVisual>d__135
class CORDL_TYPE GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GRSeedExtractor>  __4__this;

/// @brief Field <i>5__4, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__4, put=__cordl_internal_set__i_5__4)) int32_t  _i_5__4;

/// @brief Field <maxOverdriveFill>5__3, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxOverdriveFill_5__3, put=__cordl_internal_set__maxOverdriveFill_5__3)) float_t  _maxOverdriveFill_5__3;

/// @brief Field <overdriveFillRate>5__2, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__overdriveFillRate_5__2, put=__cordl_internal_set__overdriveFillRate_5__2)) float_t  _overdriveFillRate_5__2;

/// @brief Field <resultingOverdrive>5__9, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__resultingOverdrive_5__9, put=__cordl_internal_set__resultingOverdrive_5__9)) float_t  _resultingOverdrive_5__9;

/// @brief Field <startingOverdrive>5__8, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__startingOverdrive_5__8, put=__cordl_internal_set__startingOverdrive_5__8)) float_t  _startingOverdrive_5__8;

/// @brief Field <startingProcessingAmount>5__7, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__startingProcessingAmount_5__7, put=__cordl_internal_set__startingProcessingAmount_5__7)) float_t  _startingProcessingAmount_5__7;

/// @brief Field <timeDepositing>5__11, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeDepositing_5__11, put=__cordl_internal_set__timeDepositing_5__11)) float_t  _timeDepositing_5__11;

/// @brief Field <timeProcessing>5__10, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeProcessing_5__10, put=__cordl_internal_set__timeProcessing_5__10)) float_t  _timeProcessing_5__10;

/// @brief Field <timeToProcess>5__6, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeToProcess_5__6, put=__cordl_internal_set__timeToProcess_5__6)) float_t  _timeToProcess_5__6;

/// @brief Field <waitForSeedDepositStartTime>5__5, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__waitForSeedDepositStartTime_5__5, put=__cordl_internal_set__waitForSeedDepositStartTime_5__5)) float_t  _waitForSeedDepositStartTime_5__5;

/// @brief Field coresToProcess, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_coresToProcess, put=__cordl_internal_set_coresToProcess)) int32_t  coresToProcess;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x58aea60, size 0x8b0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x58af310, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x58af318, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x58af350, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x58aea5c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GRSeedExtractor> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GRSeedExtractor>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__i_5__4() const;

constexpr int32_t& __cordl_internal_get__i_5__4() ;

constexpr float_t const& __cordl_internal_get__maxOverdriveFill_5__3() const;

constexpr float_t& __cordl_internal_get__maxOverdriveFill_5__3() ;

constexpr float_t const& __cordl_internal_get__overdriveFillRate_5__2() const;

constexpr float_t& __cordl_internal_get__overdriveFillRate_5__2() ;

constexpr float_t const& __cordl_internal_get__resultingOverdrive_5__9() const;

constexpr float_t& __cordl_internal_get__resultingOverdrive_5__9() ;

constexpr float_t const& __cordl_internal_get__startingOverdrive_5__8() const;

constexpr float_t& __cordl_internal_get__startingOverdrive_5__8() ;

constexpr float_t const& __cordl_internal_get__startingProcessingAmount_5__7() const;

constexpr float_t& __cordl_internal_get__startingProcessingAmount_5__7() ;

constexpr float_t const& __cordl_internal_get__timeDepositing_5__11() const;

constexpr float_t& __cordl_internal_get__timeDepositing_5__11() ;

constexpr float_t const& __cordl_internal_get__timeProcessing_5__10() const;

constexpr float_t& __cordl_internal_get__timeProcessing_5__10() ;

constexpr float_t const& __cordl_internal_get__timeToProcess_5__6() const;

constexpr float_t& __cordl_internal_get__timeToProcess_5__6() ;

constexpr float_t const& __cordl_internal_get__waitForSeedDepositStartTime_5__5() const;

constexpr float_t& __cordl_internal_get__waitForSeedDepositStartTime_5__5() ;

constexpr int32_t const& __cordl_internal_get_coresToProcess() const;

constexpr int32_t& __cordl_internal_get_coresToProcess() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GRSeedExtractor>  value) ;

constexpr void __cordl_internal_set__i_5__4(int32_t  value) ;

constexpr void __cordl_internal_set__maxOverdriveFill_5__3(float_t  value) ;

constexpr void __cordl_internal_set__overdriveFillRate_5__2(float_t  value) ;

constexpr void __cordl_internal_set__resultingOverdrive_5__9(float_t  value) ;

constexpr void __cordl_internal_set__startingOverdrive_5__8(float_t  value) ;

constexpr void __cordl_internal_set__startingProcessingAmount_5__7(float_t  value) ;

constexpr void __cordl_internal_set__timeDepositing_5__11(float_t  value) ;

constexpr void __cordl_internal_set__timeProcessing_5__10(float_t  value) ;

constexpr void __cordl_internal_set__timeToProcess_5__6(float_t  value) ;

constexpr void __cordl_internal_set__waitForSeedDepositStartTime_5__5(float_t  value) ;

constexpr void __cordl_internal_set_coresToProcess(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x58aea34, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135(GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135(GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2028};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRSeedExtractor>  _____4__this;

/// @brief Field coresToProcess, offset: 0x28, size: 0x4, def value: None
 int32_t  ___coresToProcess;

/// @brief Field <overdriveFillRate>5__2, offset: 0x2c, size: 0x4, def value: None
 float_t  ____overdriveFillRate_5__2;

/// @brief Field <maxOverdriveFill>5__3, offset: 0x30, size: 0x4, def value: None
 float_t  ____maxOverdriveFill_5__3;

/// @brief Field <i>5__4, offset: 0x34, size: 0x4, def value: None
 int32_t  ____i_5__4;

/// @brief Field <waitForSeedDepositStartTime>5__5, offset: 0x38, size: 0x4, def value: None
 float_t  ____waitForSeedDepositStartTime_5__5;

/// @brief Field <timeToProcess>5__6, offset: 0x3c, size: 0x4, def value: None
 float_t  ____timeToProcess_5__6;

/// @brief Field <startingProcessingAmount>5__7, offset: 0x40, size: 0x4, def value: None
 float_t  ____startingProcessingAmount_5__7;

/// @brief Field <startingOverdrive>5__8, offset: 0x44, size: 0x4, def value: None
 float_t  ____startingOverdrive_5__8;

/// @brief Field <resultingOverdrive>5__9, offset: 0x48, size: 0x4, def value: None
 float_t  ____resultingOverdrive_5__9;

/// @brief Field <timeProcessing>5__10, offset: 0x4c, size: 0x4, def value: None
 float_t  ____timeProcessing_5__10;

/// @brief Field <timeDepositing>5__11, offset: 0x50, size: 0x4, def value: None
 float_t  ____timeDepositing_5__11;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135, ___coresToProcess) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135, ____overdriveFillRate_5__2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135, ____maxOverdriveFill_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135, ____i_5__4) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135, ____waitForSeedDepositStartTime_5__5) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135, ____timeToProcess_5__6) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135, ____startingProcessingAmount_5__7) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135, ____startingOverdrive_5__8) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135, ____resultingOverdrive_5__9) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135, ____timeProcessing_5__10) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135, ____timeDepositing_5__11) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRSeedExtractor__OverdrivePurchaseAnimationVisual_d__135) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
