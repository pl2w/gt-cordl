#pragma once
// IWYU pragma private; include "Photon/Voice/PUN/PhotonVoiceView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/Unity/zzzz__VoiceComponent_def.hpp"
CORDL_MODULE_EXPORT(PhotonVoiceView)
namespace Photon::Pun {
class PhotonView;
}
namespace Photon::Voice::Unity {
class Recorder;
}
namespace Photon::Voice::Unity {
class Speaker;
}
// Forward declare root types
namespace Photon::Voice::PUN {
class PhotonVoiceView;
}
// Write type traits
MARK_REF_T(::Photon::Voice::PUN::PhotonVoiceView*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::PUN::PhotonVoiceView*, "Photon.Voice.PUN", "PhotonVoiceView");
// [AddComponentMenu("Photon Voice/Photon Voice View")]
// [RequireComponent(typeof(Photon.Pun.PhotonView))]
// [HelpURL("https://doc.photonengine.com/en-us/voice/v2/getting-started/voice-for-pun")]
// Dependencies Photon.Voice.Unity.VoiceComponent
namespace Photon::Voice::PUN {
// Is value type: false
// CS Name: Photon.Voice.PUN.PhotonVoiceView
class CORDL_TYPE PhotonVoiceView : public ::Photon::Voice::Unity::VoiceComponent {
public:
// Declarations
/// @brief Field AutoCreateRecorderIfNotFound, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoCreateRecorderIfNotFound, put=__cordl_internal_set_AutoCreateRecorderIfNotFound)) bool  AutoCreateRecorderIfNotFound;

 __declspec(property(get=get_IsPhotonViewReady)) bool  IsPhotonViewReady;

 __declspec(property(get=get_IsRecorder, put=set_IsRecorder)) bool  IsRecorder;

 __declspec(property(get=get_IsRecording)) bool  IsRecording;

 __declspec(property(get=get_IsSetup)) bool  IsSetup;

 __declspec(property(get=get_IsSpeaker, put=set_IsSpeaker)) bool  IsSpeaker;

 __declspec(property(get=get_IsSpeakerLinked)) bool  IsSpeakerLinked;

 __declspec(property(get=get_IsSpeaking)) bool  IsSpeaking;

 __declspec(property(get=get_RecorderInUse, put=set_RecorderInUse)) ::UnityW<::Photon::Voice::Unity::Recorder>  RecorderInUse;

 __declspec(property(get=get_RequiresRecorder)) bool  RequiresRecorder;

 __declspec(property(get=get_RequiresSpeaker)) bool  RequiresSpeaker;

/// @brief Field SetupDebugSpeaker, offset 0x4b, size 0x1 
 __declspec(property(get=__cordl_internal_get_SetupDebugSpeaker, put=__cordl_internal_set_SetupDebugSpeaker)) bool  SetupDebugSpeaker;

 __declspec(property(get=get_SpeakerInUse, put=set_SpeakerInUse)) ::UnityW<::Photon::Voice::Unity::Speaker>  SpeakerInUse;

/// @brief Field UsePrimaryRecorder, offset 0x4a, size 0x1 
 __declspec(property(get=__cordl_internal_get_UsePrimaryRecorder, put=__cordl_internal_set_UsePrimaryRecorder)) bool  UsePrimaryRecorder;

/// @brief Field <IsRecorder>k__BackingField, offset 0x4d, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsRecorder_k__BackingField, put=__cordl_internal_set__IsRecorder_k__BackingField)) bool  _IsRecorder_k__BackingField;

/// @brief Field <IsSpeaker>k__BackingField, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSpeaker_k__BackingField, put=__cordl_internal_set__IsSpeaker_k__BackingField)) bool  _IsSpeaker_k__BackingField;

/// @brief Field onEnableCalledOnce, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_onEnableCalledOnce, put=__cordl_internal_set_onEnableCalledOnce)) bool  onEnableCalledOnce;

/// @brief Field photonView, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_photonView, put=__cordl_internal_set_photonView)) ::UnityW<::Photon::Pun::PhotonView>  photonView;

/// @brief Field recorderInUse, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_recorderInUse, put=__cordl_internal_set_recorderInUse)) ::UnityW<::Photon::Voice::Unity::Recorder>  recorderInUse;

/// @brief Field speakerInUse, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_speakerInUse, put=__cordl_internal_set_speakerInUse)) ::UnityW<::Photon::Voice::Unity::Speaker>  speakerInUse;

/// @brief Method Awake, addr 0xa780988, size 0x6c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckLateLinking, addr 0xa780b2c, size 0x2cc, virtual false, abstract: false, final false
inline void CheckLateLinking() ;

/// @brief Method Init, addr 0xa7809f4, size 0x11c, virtual false, abstract: false, final false
inline void Init() ;

static inline ::Photon::Voice::PUN::PhotonVoiceView* New_ctor() ;

/// @brief Method OnEnable, addr 0xa780b10, size 0x18, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Setup, addr 0xa780df8, size 0x11c, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method SetupRecorder, addr 0xa780f14, size 0x420, virtual false, abstract: false, final false
inline bool SetupRecorder() ;

/// @brief Method SetupRecorder, addr 0xa781334, size 0x370, virtual false, abstract: false, final false
inline bool SetupRecorder(::Photon::Voice::Unity::Recorder*  recorder) ;

/// @brief Method SetupRecorderInUse, addr 0xa7801e0, size 0x45c, virtual false, abstract: false, final false
inline void SetupRecorderInUse() ;

/// @brief Method SetupSpeaker, addr 0xa7816a4, size 0x3ec, virtual false, abstract: false, final false
inline bool SetupSpeaker() ;

/// @brief Method SetupSpeaker, addr 0xa781a90, size 0x57c, virtual false, abstract: false, final false
inline bool SetupSpeaker(::Photon::Voice::Unity::Speaker*  speaker) ;

/// @brief Method SetupSpeakerInUse, addr 0xa77edc4, size 0x29c, virtual false, abstract: false, final false
inline void SetupSpeakerInUse() ;

/// @brief Method Start, addr 0xa780b28, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get_AutoCreateRecorderIfNotFound() const;

constexpr bool& __cordl_internal_get_AutoCreateRecorderIfNotFound() ;

constexpr bool const& __cordl_internal_get_SetupDebugSpeaker() const;

constexpr bool& __cordl_internal_get_SetupDebugSpeaker() ;

constexpr bool const& __cordl_internal_get_UsePrimaryRecorder() const;

constexpr bool& __cordl_internal_get_UsePrimaryRecorder() ;

constexpr bool const& __cordl_internal_get__IsRecorder_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsRecorder_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSpeaker_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSpeaker_k__BackingField() ;

constexpr bool const& __cordl_internal_get_onEnableCalledOnce() const;

constexpr bool& __cordl_internal_get_onEnableCalledOnce() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_photonView() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_photonView() ;

constexpr ::UnityW<::Photon::Voice::Unity::Recorder> const& __cordl_internal_get_recorderInUse() const;

constexpr ::UnityW<::Photon::Voice::Unity::Recorder>& __cordl_internal_get_recorderInUse() ;

constexpr ::UnityW<::Photon::Voice::Unity::Speaker> const& __cordl_internal_get_speakerInUse() const;

constexpr ::UnityW<::Photon::Voice::Unity::Speaker>& __cordl_internal_get_speakerInUse() ;

constexpr void __cordl_internal_set_AutoCreateRecorderIfNotFound(bool  value) ;

constexpr void __cordl_internal_set_SetupDebugSpeaker(bool  value) ;

constexpr void __cordl_internal_set_UsePrimaryRecorder(bool  value) ;

constexpr void __cordl_internal_set__IsRecorder_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsSpeaker_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_onEnableCalledOnce(bool  value) ;

constexpr void __cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value) ;

constexpr void __cordl_internal_set_recorderInUse(::UnityW<::Photon::Voice::Unity::Recorder>  value) ;

constexpr void __cordl_internal_set_speakerInUse(::UnityW<::Photon::Voice::Unity::Speaker>  value) ;

/// @brief Method .ctor, addr 0xa78200c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsPhotonViewReady, addr 0xa78063c, size 0x88, virtual false, abstract: false, final false
inline bool get_IsPhotonViewReady() ;

/// [CompilerGenerated]
/// @brief Method get_IsRecorder, addr 0xa780928, size 0x8, virtual false, abstract: false, final false
inline bool get_IsRecorder() ;

/// @brief Method get_IsRecording, addr 0xa780938, size 0x28, virtual false, abstract: false, final false
inline bool get_IsRecording() ;

/// @brief Method get_IsSetup, addr 0xa78089c, size 0x54, virtual false, abstract: false, final false
inline bool get_IsSetup() ;

/// [CompilerGenerated]
/// @brief Method get_IsSpeaker, addr 0xa7808f0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSpeaker() ;

/// @brief Method get_IsSpeakerLinked, addr 0xa780960, size 0x28, virtual false, abstract: false, final false
inline bool get_IsSpeakerLinked() ;

/// @brief Method get_IsSpeaking, addr 0xa780900, size 0x28, virtual false, abstract: false, final false
inline bool get_IsSpeaking() ;

/// @brief Method get_RecorderInUse, addr 0xa780018, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Photon::Voice::Unity::Recorder> get_RecorderInUse() ;

/// @brief Method get_RequiresRecorder, addr 0xa7801a8, size 0x38, virtual false, abstract: false, final false
inline bool get_RequiresRecorder() ;

/// @brief Method get_RequiresSpeaker, addr 0xa780854, size 0x48, virtual false, abstract: false, final false
inline bool get_RequiresSpeaker() ;

/// @brief Method get_SpeakerInUse, addr 0xa7806c4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Photon::Voice::Unity::Speaker> get_SpeakerInUse() ;

/// [CompilerGenerated]
/// @brief Method set_IsRecorder, addr 0xa780930, size 0x8, virtual false, abstract: false, final false
inline void set_IsRecorder(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsSpeaker, addr 0xa7808f8, size 0x8, virtual false, abstract: false, final false
inline void set_IsSpeaker(bool  value) ;

/// @brief Method set_RecorderInUse, addr 0xa780020, size 0x188, virtual false, abstract: false, final false
inline void set_RecorderInUse(::Photon::Voice::Unity::Recorder*  value) ;

/// @brief Method set_SpeakerInUse, addr 0xa7806cc, size 0x188, virtual false, abstract: false, final false
inline void set_SpeakerInUse(::Photon::Voice::Unity::Speaker*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonVoiceView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonVoiceView", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonVoiceView(PhotonVoiceView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonVoiceView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonVoiceView(PhotonVoiceView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32226};

/// @brief Field photonView, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ___photonView;

/// [SerializeField]
/// @brief Field recorderInUse, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::Recorder>  ___recorderInUse;

/// [SerializeField]
/// @brief Field speakerInUse, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::Speaker>  ___speakerInUse;

/// @brief Field onEnableCalledOnce, offset: 0x48, size: 0x1, def value: None
 bool  ___onEnableCalledOnce;

/// @brief Field AutoCreateRecorderIfNotFound, offset: 0x49, size: 0x1, def value: None
 bool  ___AutoCreateRecorderIfNotFound;

/// @brief Field UsePrimaryRecorder, offset: 0x4a, size: 0x1, def value: None
 bool  ___UsePrimaryRecorder;

/// @brief Field SetupDebugSpeaker, offset: 0x4b, size: 0x1, def value: None
 bool  ___SetupDebugSpeaker;

/// [CompilerGenerated]
/// @brief Field <IsSpeaker>k__BackingField, offset: 0x4c, size: 0x1, def value: None
 bool  ____IsSpeaker_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsRecorder>k__BackingField, offset: 0x4d, size: 0x1, def value: None
 bool  ____IsRecorder_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::PUN::PhotonVoiceView, ___photonView) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PUN::PhotonVoiceView, ___recorderInUse) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PUN::PhotonVoiceView, ___speakerInUse) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PUN::PhotonVoiceView, ___onEnableCalledOnce) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PUN::PhotonVoiceView, ___AutoCreateRecorderIfNotFound) == 0x49, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PUN::PhotonVoiceView, ___UsePrimaryRecorder) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PUN::PhotonVoiceView, ___SetupDebugSpeaker) == 0x4b, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PUN::PhotonVoiceView, ____IsSpeaker_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PUN::PhotonVoiceView, ____IsRecorder_k__BackingField) == 0x4d, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::PUN::PhotonVoiceView) == 0x50, "Size mismatch!");

} // namespace end def Photon::Voice::PUN
