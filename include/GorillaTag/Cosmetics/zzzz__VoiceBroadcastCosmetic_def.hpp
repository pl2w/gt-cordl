#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/VoiceBroadcastCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__TalkingCosmeticType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceBroadcastCosmetic)
namespace GlobalNamespace {
class GorillaSpeakerLoudness;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GorillaTag::Audio {
class LoudSpeakerActivator;
}
namespace GorillaTag::Cosmetics {
class VoiceBroadcastCosmeticWearable;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class VoiceBroadcastCosmetic;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::VoiceBroadcastCosmetic*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::VoiceBroadcastCosmetic*, "GorillaTag.Cosmetics", "VoiceBroadcastCosmetic");
// [RequireComponent(typeof(GorillaTag.Audio.LoudSpeakerActivator))]
// Dependencies GorillaTag.Cosmetics.TalkingCosmeticType, UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.VoiceBroadcastCosmetic
class CORDL_TYPE VoiceBroadcastCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field animator, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field gsl, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_gsl, put=__cordl_internal_set_gsl)) ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>  gsl;

/// @brief Field isListening, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isListening, put=__cordl_internal_set_isListening)) bool  isListening;

/// @brief Field isSpeaking, offset 0x6d, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSpeaking, put=__cordl_internal_set_isSpeaking)) bool  isSpeaking;

/// @brief Field lastSliceUpdateTime, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastSliceUpdateTime, put=__cordl_internal_set_lastSliceUpdateTime)) float_t  lastSliceUpdateTime;

/// @brief Field loudSpeaker, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_loudSpeaker, put=__cordl_internal_set_loudSpeaker)) ::UnityW<::GorillaTag::Audio::LoudSpeakerActivator>  loudSpeaker;

/// @brief Field minSpeakingTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_minSpeakingTime, put=__cordl_internal_set_minSpeakingTime)) float_t  minSpeakingTime;

/// @brief Field minVolume, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_minVolume, put=__cordl_internal_set_minVolume)) float_t  minVolume;

/// @brief Field onStartListening, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onStartListening, put=__cordl_internal_set_onStartListening)) ::UnityEngine::Events::UnityEvent*  onStartListening;

/// @brief Field onStartSpeaking, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_onStartSpeaking, put=__cordl_internal_set_onStartSpeaking)) ::UnityEngine::Events::UnityEvent*  onStartSpeaking;

/// @brief Field onStopListening, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_onStopListening, put=__cordl_internal_set_onStopListening)) ::UnityEngine::Events::UnityEvent*  onStopListening;

/// @brief Field onStopSpeaking, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_onStopSpeaking, put=__cordl_internal_set_onStopSpeaking)) ::UnityEngine::Events::UnityEvent*  onStopSpeaking;

/// @brief Field simpleAnimation, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_simpleAnimation, put=__cordl_internal_set_simpleAnimation)) ::UnityW<::UnityEngine::Animation>  simpleAnimation;

/// @brief Field speakingTime, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_speakingTime, put=__cordl_internal_set_speakingTime)) float_t  speakingTime;

/// @brief Field talkAnimationTrigger, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_talkAnimationTrigger, put=__cordl_internal_set_talkAnimationTrigger)) int32_t  talkAnimationTrigger;

/// @brief Field talkAnimationTriggerName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_talkAnimationTriggerName, put=__cordl_internal_set_talkAnimationTriggerName)) ::StringW  talkAnimationTriggerName;

/// @brief Field talkingCosmeticType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_talkingCosmeticType, put=__cordl_internal_set_talkingCosmeticType)) ::GorillaTag::Cosmetics::TalkingCosmeticType  talkingCosmeticType;

/// @brief Field wearable, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_wearable, put=__cordl_internal_set_wearable)) ::UnityW<::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable>  wearable;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x5da5a14, size 0xd0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTag::Cosmetics::VoiceBroadcastCosmetic* New_ctor() ;

/// @brief Method OnDisable, addr 0x5da5c0c, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5da5c00, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ResetToFirstFrame, addr 0x5da5e34, size 0x50, virtual false, abstract: false, final false
inline void ResetToFirstFrame() ;

/// @brief Method SetListenState, addr 0x5da5c18, size 0x80, virtual false, abstract: false, final false
inline void SetListenState(bool  listening) ;

/// @brief Method SetWearable, addr 0x5da5ae4, size 0x8, virtual false, abstract: false, final false
inline void SetWearable(::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable*  wearable) ;

/// @brief Method SliceUpdate, addr 0x5da5c98, size 0x19c, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method StartBroadcast, addr 0x5da5aec, size 0x7c, virtual false, abstract: false, final false
inline void StartBroadcast() ;

/// @brief Method StopBroadcast, addr 0x5da5b84, size 0x60, virtual false, abstract: false, final false
inline void StopBroadcast() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness> const& __cordl_internal_get_gsl() const;

constexpr ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>& __cordl_internal_get_gsl() ;

constexpr bool const& __cordl_internal_get_isListening() const;

constexpr bool& __cordl_internal_get_isListening() ;

constexpr bool const& __cordl_internal_get_isSpeaking() const;

constexpr bool& __cordl_internal_get_isSpeaking() ;

constexpr float_t const& __cordl_internal_get_lastSliceUpdateTime() const;

constexpr float_t& __cordl_internal_get_lastSliceUpdateTime() ;

constexpr ::UnityW<::GorillaTag::Audio::LoudSpeakerActivator> const& __cordl_internal_get_loudSpeaker() const;

constexpr ::UnityW<::GorillaTag::Audio::LoudSpeakerActivator>& __cordl_internal_get_loudSpeaker() ;

constexpr float_t const& __cordl_internal_get_minSpeakingTime() const;

constexpr float_t& __cordl_internal_get_minSpeakingTime() ;

constexpr float_t const& __cordl_internal_get_minVolume() const;

constexpr float_t& __cordl_internal_get_minVolume() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onStartListening() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onStartListening() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onStartSpeaking() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onStartSpeaking() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onStopListening() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onStopListening() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onStopSpeaking() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onStopSpeaking() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_simpleAnimation() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_simpleAnimation() ;

constexpr float_t const& __cordl_internal_get_speakingTime() const;

constexpr float_t& __cordl_internal_get_speakingTime() ;

constexpr int32_t const& __cordl_internal_get_talkAnimationTrigger() const;

constexpr int32_t& __cordl_internal_get_talkAnimationTrigger() ;

constexpr ::StringW const& __cordl_internal_get_talkAnimationTriggerName() const;

constexpr ::StringW& __cordl_internal_get_talkAnimationTriggerName() ;

constexpr ::GorillaTag::Cosmetics::TalkingCosmeticType const& __cordl_internal_get_talkingCosmeticType() const;

constexpr ::GorillaTag::Cosmetics::TalkingCosmeticType& __cordl_internal_get_talkingCosmeticType() ;

constexpr ::UnityW<::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable> const& __cordl_internal_get_wearable() const;

constexpr ::UnityW<::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable>& __cordl_internal_get_wearable() ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_gsl(::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>  value) ;

constexpr void __cordl_internal_set_isListening(bool  value) ;

constexpr void __cordl_internal_set_isSpeaking(bool  value) ;

constexpr void __cordl_internal_set_lastSliceUpdateTime(float_t  value) ;

constexpr void __cordl_internal_set_loudSpeaker(::UnityW<::GorillaTag::Audio::LoudSpeakerActivator>  value) ;

constexpr void __cordl_internal_set_minSpeakingTime(float_t  value) ;

constexpr void __cordl_internal_set_minVolume(float_t  value) ;

constexpr void __cordl_internal_set_onStartListening(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onStartSpeaking(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onStopListening(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onStopSpeaking(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_simpleAnimation(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_speakingTime(float_t  value) ;

constexpr void __cordl_internal_set_talkAnimationTrigger(int32_t  value) ;

constexpr void __cordl_internal_set_talkAnimationTriggerName(::StringW  value) ;

constexpr void __cordl_internal_set_talkingCosmeticType(::GorillaTag::Cosmetics::TalkingCosmeticType  value) ;

constexpr void __cordl_internal_set_wearable(::UnityW<::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable>  value) ;

/// @brief Method .ctor, addr 0x5da5e84, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceBroadcastCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceBroadcastCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceBroadcastCosmetic(VoiceBroadcastCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceBroadcastCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceBroadcastCosmetic(VoiceBroadcastCosmetic const& ) = delete;

/// @brief Field EVENTS offset 0xffffffff size 0x8
static constexpr ::ConstString  EVENTS{u"Events"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4985};

/// @brief Field talkingCosmeticType, offset: 0x20, size: 0x4, def value: None
 ::GorillaTag::Cosmetics::TalkingCosmeticType  ___talkingCosmeticType;

/// [Tooltip("How loud the Gorilla voice should be before detecting as talking.")]
/// [SerializeField]
/// @brief Field minVolume, offset: 0x24, size: 0x4, def value: None
 float_t  ___minVolume;

/// [Tooltip("How long the initial speaking section needs to last to trigger the talking animation.")]
/// [SerializeField]
/// @brief Field minSpeakingTime, offset: 0x28, size: 0x4, def value: None
 float_t  ___minSpeakingTime;

/// [SerializeField]
/// @brief Field simpleAnimation, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___simpleAnimation;

/// [SerializeField]
/// @brief Field talkAnimationTriggerName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___talkAnimationTriggerName;

/// @brief Field talkAnimationTrigger, offset: 0x40, size: 0x4, def value: None
 int32_t  ___talkAnimationTrigger;

/// [SerializeField]
/// @brief Field onStartListening, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onStartListening;

/// [SerializeField]
/// @brief Field onStartSpeaking, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onStartSpeaking;

/// [SerializeField]
/// @brief Field onStopSpeaking, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onStopSpeaking;

/// [SerializeField]
/// @brief Field onStopListening, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onStopListening;

/// @brief Field speakingTime, offset: 0x68, size: 0x4, def value: None
 float_t  ___speakingTime;

/// @brief Field isListening, offset: 0x6c, size: 0x1, def value: None
 bool  ___isListening;

/// @brief Field isSpeaking, offset: 0x6d, size: 0x1, def value: None
 bool  ___isSpeaking;

/// @brief Field wearable, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Cosmetics::VoiceBroadcastCosmeticWearable>  ___wearable;

/// @brief Field loudSpeaker, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Audio::LoudSpeakerActivator>  ___loudSpeaker;

/// @brief Field gsl, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>  ___gsl;

/// @brief Field animator, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// @brief Field lastSliceUpdateTime, offset: 0x90, size: 0x4, def value: None
 float_t  ___lastSliceUpdateTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmetic, ___talkingCosmeticType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmetic, ___minVolume) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmetic, ___minSpeakingTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmetic, ___simpleAnimation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmetic, ___talkAnimationTriggerName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmetic, ___talkAnimationTrigger) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmetic, ___onStartListening) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmetic, ___onStartSpeaking) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmetic, ___onStopSpeaking) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmetic, ___onStopListening) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmetic, ___speakingTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmetic, ___isListening) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmetic, ___isSpeaking) == 0x6d, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmetic, ___wearable) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmetic, ___loudSpeaker) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmetic, ___gsl) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmetic, ___animator) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VoiceBroadcastCosmetic, ___lastSliceUpdateTime) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::VoiceBroadcastCosmetic) == 0x98, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
