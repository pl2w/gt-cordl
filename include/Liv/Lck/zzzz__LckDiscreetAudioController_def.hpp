#pragma once
// IWYU pragma private; include "Liv/Lck/LckDiscreetAudioController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LckDiscreetAudioController)
namespace GlobalNamespace {
struct LckDiscreetAudioController_AudioClipAndVolume;
}
namespace GlobalNamespace {
struct LckDiscreetAudioController_AudioClip;
}
namespace Liv::Lck {
class ILckService;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace Liv::Lck {
class LckDiscreetAudioController;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckDiscreetAudioController*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckDiscreetAudioController*, "Liv.Lck", "LckDiscreetAudioController");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckDiscreetAudioController
class CORDL_TYPE LckDiscreetAudioController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AudioClip = ::GlobalNamespace::LckDiscreetAudioController_AudioClip;

using AudioClipAndVolume = ::GlobalNamespace::LckDiscreetAudioController_AudioClipAndVolume;

/// @brief Field _allAudioClips, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__allAudioClips, put=__cordl_internal_set__allAudioClips)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LckDiscreetAudioController_AudioClip,::GlobalNamespace::LckDiscreetAudioController_AudioClipAndVolume>*  _allAudioClips;

/// @brief Field _cameraShutterSound, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraShutterSound, put=__cordl_internal_set__cameraShutterSound)) ::UnityW<::UnityEngine::AudioClip>  _cameraShutterSound;

/// @brief Field _cameraShutterSoundVolume, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__cameraShutterSoundVolume, put=__cordl_internal_set__cameraShutterSoundVolume)) float_t  _cameraShutterSoundVolume;

/// @brief Field _clickDown, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__clickDown, put=__cordl_internal_set__clickDown)) ::UnityW<::UnityEngine::AudioClip>  _clickDown;

/// @brief Field _clickDownVolume, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__clickDownVolume, put=__cordl_internal_set__clickDownVolume)) float_t  _clickDownVolume;

/// @brief Field _clickUp, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__clickUp, put=__cordl_internal_set__clickUp)) ::UnityW<::UnityEngine::AudioClip>  _clickUp;

/// @brief Field _clickUpVolume, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__clickUpVolume, put=__cordl_internal_set__clickUpVolume)) float_t  _clickUpVolume;

/// @brief Field _hoverSound, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__hoverSound, put=__cordl_internal_set__hoverSound)) ::UnityW<::UnityEngine::AudioClip>  _hoverSound;

/// @brief Field _hoverSoundVolume, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__hoverSoundVolume, put=__cordl_internal_set__hoverSoundVolume)) float_t  _hoverSoundVolume;

/// @brief Field _lckService, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckService, put=__cordl_internal_set__lckService)) ::Liv::Lck::ILckService*  _lckService;

/// @brief Field _recordingSaved, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordingSaved, put=__cordl_internal_set__recordingSaved)) ::UnityW<::UnityEngine::AudioClip>  _recordingSaved;

/// @brief Field _recordingSavedVolume, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__recordingSavedVolume, put=__cordl_internal_set__recordingSavedVolume)) float_t  _recordingSavedVolume;

/// @brief Field _recordingStart, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordingStart, put=__cordl_internal_set__recordingStart)) ::UnityW<::UnityEngine::AudioClip>  _recordingStart;

/// @brief Field _recordingStartVolume, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__recordingStartVolume, put=__cordl_internal_set__recordingStartVolume)) float_t  _recordingStartVolume;

/// @brief Field _screenshotBeepSound, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__screenshotBeepSound, put=__cordl_internal_set__screenshotBeepSound)) ::UnityW<::UnityEngine::AudioClip>  _screenshotBeepSound;

/// @brief Field _screenshotBeepSoundVolume, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__screenshotBeepSoundVolume, put=__cordl_internal_set__screenshotBeepSoundVolume)) float_t  _screenshotBeepSoundVolume;

/// @brief Field _streamingStarted, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__streamingStarted, put=__cordl_internal_set__streamingStarted)) ::UnityW<::UnityEngine::AudioClip>  _streamingStarted;

/// @brief Field _streamingStartedVolume, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__streamingStartedVolume, put=__cordl_internal_set__streamingStartedVolume)) float_t  _streamingStartedVolume;

/// @brief Field _streamingStopped, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__streamingStopped, put=__cordl_internal_set__streamingStopped)) ::UnityW<::UnityEngine::AudioClip>  _streamingStopped;

/// @brief Field _streamingStoppedVolume, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__streamingStoppedVolume, put=__cordl_internal_set__streamingStoppedVolume)) float_t  _streamingStoppedVolume;

/// @brief Method Awake, addr 0x9ce0cac, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method InitializeAudioClipDictionary, addr 0x9ce0cb0, size 0x238, virtual false, abstract: false, final false
inline void InitializeAudioClipDictionary() ;

static inline ::Liv::Lck::LckDiscreetAudioController* New_ctor() ;

/// @brief Method PlayDiscreetAudioClip, addr 0x9ce10e4, size 0xd8, virtual false, abstract: false, final false
inline void PlayDiscreetAudioClip(::GlobalNamespace::LckDiscreetAudioController_AudioClip  clip) ;

/// @brief Method Start, addr 0x9ce0f10, size 0x1d4, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LckDiscreetAudioController_AudioClip,::GlobalNamespace::LckDiscreetAudioController_AudioClipAndVolume>* const& __cordl_internal_get__allAudioClips() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LckDiscreetAudioController_AudioClip,::GlobalNamespace::LckDiscreetAudioController_AudioClipAndVolume>*& __cordl_internal_get__allAudioClips() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__cameraShutterSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__cameraShutterSound() ;

constexpr float_t const& __cordl_internal_get__cameraShutterSoundVolume() const;

constexpr float_t& __cordl_internal_get__cameraShutterSoundVolume() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__clickDown() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__clickDown() ;

constexpr float_t const& __cordl_internal_get__clickDownVolume() const;

constexpr float_t& __cordl_internal_get__clickDownVolume() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__clickUp() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__clickUp() ;

constexpr float_t const& __cordl_internal_get__clickUpVolume() const;

constexpr float_t& __cordl_internal_get__clickUpVolume() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__hoverSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__hoverSound() ;

constexpr float_t const& __cordl_internal_get__hoverSoundVolume() const;

constexpr float_t& __cordl_internal_get__hoverSoundVolume() ;

constexpr ::Liv::Lck::ILckService* const& __cordl_internal_get__lckService() const;

constexpr ::Liv::Lck::ILckService*& __cordl_internal_get__lckService() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__recordingSaved() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__recordingSaved() ;

constexpr float_t const& __cordl_internal_get__recordingSavedVolume() const;

constexpr float_t& __cordl_internal_get__recordingSavedVolume() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__recordingStart() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__recordingStart() ;

constexpr float_t const& __cordl_internal_get__recordingStartVolume() const;

constexpr float_t& __cordl_internal_get__recordingStartVolume() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__screenshotBeepSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__screenshotBeepSound() ;

constexpr float_t const& __cordl_internal_get__screenshotBeepSoundVolume() const;

constexpr float_t& __cordl_internal_get__screenshotBeepSoundVolume() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__streamingStarted() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__streamingStarted() ;

constexpr float_t const& __cordl_internal_get__streamingStartedVolume() const;

constexpr float_t& __cordl_internal_get__streamingStartedVolume() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__streamingStopped() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__streamingStopped() ;

constexpr float_t const& __cordl_internal_get__streamingStoppedVolume() const;

constexpr float_t& __cordl_internal_get__streamingStoppedVolume() ;

constexpr void __cordl_internal_set__allAudioClips(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LckDiscreetAudioController_AudioClip,::GlobalNamespace::LckDiscreetAudioController_AudioClipAndVolume>*  value) ;

constexpr void __cordl_internal_set__cameraShutterSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__cameraShutterSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set__clickDown(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__clickDownVolume(float_t  value) ;

constexpr void __cordl_internal_set__clickUp(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__clickUpVolume(float_t  value) ;

constexpr void __cordl_internal_set__hoverSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__hoverSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set__lckService(::Liv::Lck::ILckService*  value) ;

constexpr void __cordl_internal_set__recordingSaved(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__recordingSavedVolume(float_t  value) ;

constexpr void __cordl_internal_set__recordingStart(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__recordingStartVolume(float_t  value) ;

constexpr void __cordl_internal_set__screenshotBeepSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__screenshotBeepSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set__streamingStarted(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__streamingStartedVolume(float_t  value) ;

constexpr void __cordl_internal_set__streamingStopped(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__streamingStoppedVolume(float_t  value) ;

/// @brief Method .ctor, addr 0x9ce11bc, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckDiscreetAudioController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckDiscreetAudioController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckDiscreetAudioController(LckDiscreetAudioController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckDiscreetAudioController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckDiscreetAudioController(LckDiscreetAudioController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24700};

/// [InjectLck]
/// @brief Field _lckService, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ILckService*  ____lckService;

/// @brief Field _allAudioClips, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LckDiscreetAudioController_AudioClip,::GlobalNamespace::LckDiscreetAudioController_AudioClipAndVolume>*  ____allAudioClips;

/// [Header("Audio Clips")]
/// [SerializeField]
/// @brief Field _recordingStart, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____recordingStart;

/// [SerializeField]
/// @brief Field _recordingSaved, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____recordingSaved;

/// [SerializeField]
/// @brief Field _clickDown, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____clickDown;

/// [SerializeField]
/// @brief Field _clickUp, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____clickUp;

/// [SerializeField]
/// @brief Field _hoverSound, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____hoverSound;

/// [SerializeField]
/// @brief Field _cameraShutterSound, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____cameraShutterSound;

/// [SerializeField]
/// @brief Field _screenshotBeepSound, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____screenshotBeepSound;

/// [SerializeField]
/// @brief Field _streamingStarted, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____streamingStarted;

/// [SerializeField]
/// @brief Field _streamingStopped, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____streamingStopped;

/// [Header("Audio Volumes")]
/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _recordingStartVolume, offset: 0x78, size: 0x4, def value: None
 float_t  ____recordingStartVolume;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _recordingSavedVolume, offset: 0x7c, size: 0x4, def value: None
 float_t  ____recordingSavedVolume;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _clickDownVolume, offset: 0x80, size: 0x4, def value: None
 float_t  ____clickDownVolume;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _clickUpVolume, offset: 0x84, size: 0x4, def value: None
 float_t  ____clickUpVolume;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _hoverSoundVolume, offset: 0x88, size: 0x4, def value: None
 float_t  ____hoverSoundVolume;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _cameraShutterSoundVolume, offset: 0x8c, size: 0x4, def value: None
 float_t  ____cameraShutterSoundVolume;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _screenshotBeepSoundVolume, offset: 0x90, size: 0x4, def value: None
 float_t  ____screenshotBeepSoundVolume;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _streamingStartedVolume, offset: 0x94, size: 0x4, def value: None
 float_t  ____streamingStartedVolume;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _streamingStoppedVolume, offset: 0x98, size: 0x4, def value: None
 float_t  ____streamingStoppedVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckDiscreetAudioController, ____lckService) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckDiscreetAudioController, ____allAudioClips) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckDiscreetAudioController, ____recordingStart) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckDiscreetAudioController, ____recordingSaved) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckDiscreetAudioController, ____clickDown) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckDiscreetAudioController, ____clickUp) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckDiscreetAudioController, ____hoverSound) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckDiscreetAudioController, ____cameraShutterSound) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckDiscreetAudioController, ____screenshotBeepSound) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckDiscreetAudioController, ____streamingStarted) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckDiscreetAudioController, ____streamingStopped) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckDiscreetAudioController, ____recordingStartVolume) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckDiscreetAudioController, ____recordingSavedVolume) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckDiscreetAudioController, ____clickDownVolume) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckDiscreetAudioController, ____clickUpVolume) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckDiscreetAudioController, ____hoverSoundVolume) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckDiscreetAudioController, ____cameraShutterSoundVolume) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckDiscreetAudioController, ____screenshotBeepSoundVolume) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckDiscreetAudioController, ____streamingStartedVolume) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckDiscreetAudioController, ____streamingStoppedVolume) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckDiscreetAudioController) == 0xa0, "Size mismatch!");

} // namespace end def Liv::Lck
