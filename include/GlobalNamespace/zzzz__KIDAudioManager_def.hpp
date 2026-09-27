#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDAudioManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__KIDAudioManager_KIDSoundType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(KIDAudioManager)
namespace GlobalNamespace {
struct KIDAudioManager_KIDSoundType;
}
namespace GlobalNamespace {
class KIDAudioManager__PlayDelayedSound_d__36;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Audio {
class AudioMixerGroup;
}
namespace UnityEngine::Audio {
class AudioMixerSnapshot;
}
namespace UnityEngine::Audio {
class AudioMixer;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDAudioManager;
}
namespace GlobalNamespace {
class KIDAudioManager__PlayDelayedSound_d__36;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDAudioManager*);
MARK_REF_T(::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDAudioManager*, "", "KIDAudioManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36*, "", "KIDAudioManager/<PlayDelayedSound>d__36");
// [DefaultExecutionOrder(0)]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDAudioManager
class CORDL_TYPE KIDAudioManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using KIDSoundType = ::GlobalNamespace::KIDAudioManager_KIDSoundType;

using _PlayDelayedSound_d__36 = ::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36;

/// @brief Field KIDSnapshot, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_KIDSnapshot, put=__cordl_internal_set_KIDSnapshot)) ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>  KIDSnapshot;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::KIDAudioManager>  _instance;

/// @brief Field audioSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field buttonClickSound, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonClickSound, put=__cordl_internal_set_buttonClickSound)) ::UnityW<::UnityEngine::AudioClip>  buttonClickSound;

/// @brief Field buttonHeldSound, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonHeldSound, put=__cordl_internal_set_buttonHeldSound)) ::UnityW<::UnityEngine::AudioClip>  buttonHeldSound;

/// @brief Field buttonHoverSound, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonHoverSound, put=__cordl_internal_set_buttonHoverSound)) ::UnityW<::UnityEngine::AudioClip>  buttonHoverSound;

/// @brief Field cachedGameVolume, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_cachedGameVolume, put=__cordl_internal_set_cachedGameVolume)) float_t  cachedGameVolume;

/// @brief Field deniedSound, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_deniedSound, put=__cordl_internal_set_deniedSound)) ::UnityW<::UnityEngine::AudioClip>  deniedSound;

/// @brief Field inputBackSound, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputBackSound, put=__cordl_internal_set_inputBackSound)) ::UnityW<::UnityEngine::AudioClip>  inputBackSound;

/// @brief Field isHoldSoundPlaying, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHoldSoundPlaying, put=__cordl_internal_set_isHoldSoundPlaying)) bool  isHoldSoundPlaying;

/// @brief Field isKIDUIActive, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_isKIDUIActive, put=__cordl_internal_set_isKIDUIActive)) bool  isKIDUIActive;

/// @brief Field kidUIGroup, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_kidUIGroup, put=__cordl_internal_set_kidUIGroup)) ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  kidUIGroup;

/// @brief Field loopingAudioSource, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_loopingAudioSource, put=__cordl_internal_set_loopingAudioSource)) ::UnityW<::UnityEngine::AudioSource>  loopingAudioSource;

/// @brief Field mainMixer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainMixer, put=__cordl_internal_set_mainMixer)) ::UnityW<::UnityEngine::Audio::AudioMixer>  mainMixer;

/// @brief Field normalSnapshot, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_normalSnapshot, put=__cordl_internal_set_normalSnapshot)) ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>  normalSnapshot;

/// @brief Field pageTransitionSound, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_pageTransitionSound, put=__cordl_internal_set_pageTransitionSound)) ::UnityW<::UnityEngine::AudioClip>  pageTransitionSound;

/// @brief Field soundClips, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundClips, put=__cordl_internal_set_soundClips)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::KIDAudioManager_KIDSoundType,::UnityW<::UnityEngine::AudioClip>>*  soundClips;

/// @brief Field successSound, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_successSound, put=__cordl_internal_set_successSound)) ::UnityW<::UnityEngine::AudioClip>  successSound;

/// @brief Field turnOffPermissionSound, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_turnOffPermissionSound, put=__cordl_internal_set_turnOffPermissionSound)) ::UnityW<::UnityEngine::AudioClip>  turnOffPermissionSound;

/// @brief Method Awake, addr 0x5a2b668, size 0x1a4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ConfigureAudioSource, addr 0x5a2b80c, size 0x178, virtual false, abstract: false, final false
inline void ConfigureAudioSource() ;

/// @brief Method InitializeSoundClips, addr 0x5a2b984, size 0x138, virtual false, abstract: false, final false
inline void InitializeSoundClips() ;

/// @brief Method IsInstanceValid, addr 0x5a2bb28, size 0x118, virtual false, abstract: false, final false
inline bool IsInstanceValid() ;

/// @brief Method IsKIDUIActive, addr 0x5a2bf38, size 0x8, virtual false, abstract: false, final false
inline bool IsKIDUIActive() ;

static inline ::GlobalNamespace::KIDAudioManager* New_ctor() ;

/// [IteratorStateMachine(typeof(KIDAudioManager::<PlayDelayedSound>d__36))]
/// @brief Method PlayDelayedSound, addr 0x5a2bf40, size 0x8c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* PlayDelayedSound(::GlobalNamespace::KIDAudioManager_KIDSoundType  soundType, float_t  delay) ;

/// @brief Method PlaySound, addr 0x5a2bcec, size 0x1a0, virtual false, abstract: false, final false
inline void PlaySound(::GlobalNamespace::KIDAudioManager_KIDSoundType  soundType) ;

/// @brief Method PlaySoundWithDelay, addr 0x5a2a780, size 0x28, virtual false, abstract: false, final false
inline void PlaySoundWithDelay(::GlobalNamespace::KIDAudioManager_KIDSoundType  soundType) ;

/// @brief Method SetKIDUIAudioActive, addr 0x5a2babc, size 0x6c, virtual false, abstract: false, final false
inline void SetKIDUIAudioActive(bool  active) ;

/// @brief Method StartButtonHeldSound, addr 0x5a2be8c, size 0xac, virtual false, abstract: false, final false
inline void StartButtonHeldSound() ;

/// @brief Method StopButtonHeldSound, addr 0x5a2bc40, size 0xac, virtual false, abstract: false, final false
inline void StopButtonHeldSound() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> const& __cordl_internal_get_KIDSnapshot() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>& __cordl_internal_get_KIDSnapshot() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_buttonClickSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_buttonClickSound() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_buttonHeldSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_buttonHeldSound() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_buttonHoverSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_buttonHoverSound() ;

constexpr float_t const& __cordl_internal_get_cachedGameVolume() const;

constexpr float_t& __cordl_internal_get_cachedGameVolume() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_deniedSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_deniedSound() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_inputBackSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_inputBackSound() ;

constexpr bool const& __cordl_internal_get_isHoldSoundPlaying() const;

constexpr bool& __cordl_internal_get_isHoldSoundPlaying() ;

constexpr bool const& __cordl_internal_get_isKIDUIActive() const;

constexpr bool& __cordl_internal_get_isKIDUIActive() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup> const& __cordl_internal_get_kidUIGroup() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup>& __cordl_internal_get_kidUIGroup() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_loopingAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_loopingAudioSource() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get_mainMixer() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get_mainMixer() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> const& __cordl_internal_get_normalSnapshot() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>& __cordl_internal_get_normalSnapshot() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_pageTransitionSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_pageTransitionSound() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::KIDAudioManager_KIDSoundType,::UnityW<::UnityEngine::AudioClip>>* const& __cordl_internal_get_soundClips() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::KIDAudioManager_KIDSoundType,::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get_soundClips() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_successSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_successSound() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_turnOffPermissionSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_turnOffPermissionSound() ;

constexpr void __cordl_internal_set_KIDSnapshot(::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_buttonClickSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_buttonHeldSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_buttonHoverSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_cachedGameVolume(float_t  value) ;

constexpr void __cordl_internal_set_deniedSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_inputBackSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_isHoldSoundPlaying(bool  value) ;

constexpr void __cordl_internal_set_isKIDUIActive(bool  value) ;

constexpr void __cordl_internal_set_kidUIGroup(::UnityW<::UnityEngine::Audio::AudioMixerGroup>  value) ;

constexpr void __cordl_internal_set_loopingAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_mainMixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value) ;

constexpr void __cordl_internal_set_normalSnapshot(::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>  value) ;

constexpr void __cordl_internal_set_pageTransitionSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_soundClips(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::KIDAudioManager_KIDSoundType,::UnityW<::UnityEngine::AudioClip>>*  value) ;

constexpr void __cordl_internal_set_successSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_turnOffPermissionSound(::UnityW<::UnityEngine::AudioClip>  value) ;

/// @brief Method .ctor, addr 0x5a2bff4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::KIDAudioManager> getStaticF__instance() ;

/// @brief Method get_Instance, addr 0x5a2a674, size 0x10c, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::KIDAudioManager> get_Instance() ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::KIDAudioManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDAudioManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDAudioManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDAudioManager(KIDAudioManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDAudioManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDAudioManager(KIDAudioManager const& ) = delete;

/// @brief Field GAME_VOLUME offset 0xffffffff size 0x8
static constexpr ::ConstString  GAME_VOLUME{u"Game_Volume"};

/// @brief Field KID_VOLUME offset 0xffffffff size 0x8
static constexpr ::ConstString  KID_VOLUME{u"KID_UI_Volume"};

/// @brief Field MUTED_VALUE offset 0xffffffff size 0x4
static constexpr float_t  MUTED_VALUE{static_cast<float_t>(-80.0f)};

/// @brief Field UNMUTED_VALUE offset 0xffffffff size 0x4
static constexpr float_t  UNMUTED_VALUE{static_cast<float_t>(0.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2914};

/// [SerializeField]
/// @brief Field audioSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field loopingAudioSource, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___loopingAudioSource;

/// [SerializeField]
/// @brief Field mainMixer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixer>  ___mainMixer;

/// [SerializeField]
/// @brief Field KIDSnapshot, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>  ___KIDSnapshot;

/// [SerializeField]
/// @brief Field normalSnapshot, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>  ___normalSnapshot;

/// [SerializeField]
/// @brief Field kidUIGroup, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  ___kidUIGroup;

/// [SerializeField]
/// @brief Field buttonClickSound, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___buttonClickSound;

/// [SerializeField]
/// @brief Field deniedSound, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___deniedSound;

/// [SerializeField]
/// @brief Field successSound, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___successSound;

/// [SerializeField]
/// @brief Field buttonHoverSound, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___buttonHoverSound;

/// [SerializeField]
/// @brief Field buttonHeldSound, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___buttonHeldSound;

/// [SerializeField]
/// @brief Field pageTransitionSound, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___pageTransitionSound;

/// [SerializeField]
/// @brief Field inputBackSound, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___inputBackSound;

/// [SerializeField]
/// @brief Field turnOffPermissionSound, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___turnOffPermissionSound;

/// @brief Field isKIDUIActive, offset: 0x90, size: 0x1, def value: None
 bool  ___isKIDUIActive;

/// @brief Field cachedGameVolume, offset: 0x94, size: 0x4, def value: None
 float_t  ___cachedGameVolume;

/// @brief Field isHoldSoundPlaying, offset: 0x98, size: 0x1, def value: None
 bool  ___isHoldSoundPlaying;

/// @brief Field soundClips, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::KIDAudioManager_KIDSoundType,::UnityW<::UnityEngine::AudioClip>>*  ___soundClips;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDAudioManager, ___audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAudioManager, ___loopingAudioSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAudioManager, ___mainMixer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAudioManager, ___KIDSnapshot) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAudioManager, ___normalSnapshot) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAudioManager, ___kidUIGroup) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAudioManager, ___buttonClickSound) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAudioManager, ___deniedSound) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAudioManager, ___successSound) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAudioManager, ___buttonHoverSound) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAudioManager, ___buttonHeldSound) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAudioManager, ___pageTransitionSound) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAudioManager, ___inputBackSound) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAudioManager, ___turnOffPermissionSound) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAudioManager, ___isKIDUIActive) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAudioManager, ___cachedGameVolume) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAudioManager, ___isHoldSoundPlaying) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAudioManager, ___soundClips) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDAudioManager) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies KIDAudioManager::KIDSoundType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDAudioManager/<PlayDelayedSound>d__36
class CORDL_TYPE KIDAudioManager__PlayDelayedSound_d__36 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::KIDAudioManager>  __4__this;

/// @brief Field delay, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay, put=__cordl_internal_set_delay)) float_t  delay;

/// @brief Field soundType, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_soundType, put=__cordl_internal_set_soundType)) ::GlobalNamespace::KIDAudioManager_KIDSoundType  soundType;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5a2c000, size 0xbc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5a2c0bc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5a2c0c4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5a2c0fc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5a2bffc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::KIDAudioManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::KIDAudioManager>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get_delay() const;

constexpr float_t& __cordl_internal_get_delay() ;

constexpr ::GlobalNamespace::KIDAudioManager_KIDSoundType const& __cordl_internal_get_soundType() const;

constexpr ::GlobalNamespace::KIDAudioManager_KIDSoundType& __cordl_internal_get_soundType() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::KIDAudioManager>  value) ;

constexpr void __cordl_internal_set_delay(float_t  value) ;

constexpr void __cordl_internal_set_soundType(::GlobalNamespace::KIDAudioManager_KIDSoundType  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5a2bfcc, size 0x28, virtual false, abstract: false, final false
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
constexpr KIDAudioManager__PlayDelayedSound_d__36() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDAudioManager__PlayDelayedSound_d__36", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDAudioManager__PlayDelayedSound_d__36(KIDAudioManager__PlayDelayedSound_d__36 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDAudioManager__PlayDelayedSound_d__36", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDAudioManager__PlayDelayedSound_d__36(KIDAudioManager__PlayDelayedSound_d__36 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2913};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field delay, offset: 0x20, size: 0x4, def value: None
 float_t  ___delay;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDAudioManager>  _____4__this;

/// @brief Field soundType, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::KIDAudioManager_KIDSoundType  ___soundType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36, ___soundType) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDAudioManager__PlayDelayedSound_d__36) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
