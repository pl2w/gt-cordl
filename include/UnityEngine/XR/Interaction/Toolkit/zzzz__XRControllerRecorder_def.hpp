#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRControllerRecorder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRControllerRecorder)
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class IXRInputButtonReader;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
template<typename TValue>
class IXRInputValueReader_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class IXRInputValueReader;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename TInterface,typename TObject>
class UnityObjectReferenceCache_2;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct InteractionState;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseController;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRControllerRecorder_ButtonBypass;
}
namespace UnityEngine::XR::Interaction::Toolkit {
template<typename TValue>
class XRControllerRecorder_ValueBypass_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRControllerRecording;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRControllerState;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRControllerRecorder;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRControllerRecorder_ButtonBypass;
}
namespace UnityEngine::XR::Interaction::Toolkit {
template<typename TValue>
class XRControllerRecorder_ValueBypass_1;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*);
MARK_GEN_REF_T_PTR(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*, "UnityEngine.XR.Interaction.Toolkit", "XRControllerRecorder");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*, "UnityEngine.XR.Interaction.Toolkit", "XRControllerRecorder/ButtonBypass");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1, "UnityEngine.XR.Interaction.Toolkit", "XRControllerRecorder/ValueBypass`1");
// [AddComponentMenu("XR/Debug/XR Controller Recorder", 11)]
// [DisallowMultipleComponent]
// [DefaultExecutionOrder(-30000)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.XRControllerRecorder.html")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.XRControllerRecorder
class CORDL_TYPE XRControllerRecorder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ButtonBypass = ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass;

template<typename TValue>
using ValueBypass_1 = ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<TValue>;

/// @brief Field <recordingStartTime>k__BackingField, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__recordingStartTime_k__BackingField, put=__cordl_internal_set__recordingStartTime_k__BackingField)) float_t  _recordingStartTime_k__BackingField;

 __declspec(property(get=get_currentTime)) double_t  currentTime;

 __declspec(property(get=get_duration)) double_t  duration;

 __declspec(property(get=get_isPlaying, put=set_isPlaying)) bool  isPlaying;

 __declspec(property(get=get_isRecording, put=set_isRecording)) bool  isRecording;

/// @brief Field m_ActivateBypass, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActivateBypass, put=__cordl_internal_set_m_ActivateBypass)) ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*  m_ActivateBypass;

/// @brief Field m_CurrentTime, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentTime, put=__cordl_internal_set_m_CurrentTime)) double_t  m_CurrentTime;

/// @brief Field m_Interactor, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Interactor, put=__cordl_internal_set_m_Interactor)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::Object>>*  m_Interactor;

/// @brief Field m_InteractorObject, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractorObject, put=__cordl_internal_set_m_InteractorObject)) ::UnityW<::UnityEngine::Object>  m_InteractorObject;

/// @brief Field m_IsPlaying, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsPlaying, put=__cordl_internal_set_m_IsPlaying)) bool  m_IsPlaying;

/// @brief Field m_IsRecording, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsRecording, put=__cordl_internal_set_m_IsRecording)) bool  m_IsRecording;

/// @brief Field m_LastFrameIdx, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastFrameIdx, put=__cordl_internal_set_m_LastFrameIdx)) int32_t  m_LastFrameIdx;

/// @brief Field m_LastPlaybackTime, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LastPlaybackTime, put=__cordl_internal_set_m_LastPlaybackTime)) double_t  m_LastPlaybackTime;

/// @brief Field m_PlayOnStart, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayOnStart, put=__cordl_internal_set_m_PlayOnStart)) bool  m_PlayOnStart;

/// @brief Field m_PrevActivateBypass, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PrevActivateBypass, put=__cordl_internal_set_m_PrevActivateBypass)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*  m_PrevActivateBypass;

/// @brief Field m_PrevEnableInputActions, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PrevEnableInputActions, put=__cordl_internal_set_m_PrevEnableInputActions)) bool  m_PrevEnableInputActions;

/// @brief Field m_PrevEnableInputTracking, offset 0x6d, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PrevEnableInputTracking, put=__cordl_internal_set_m_PrevEnableInputTracking)) bool  m_PrevEnableInputTracking;

/// @brief Field m_PrevSelectBypass, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PrevSelectBypass, put=__cordl_internal_set_m_PrevSelectBypass)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*  m_PrevSelectBypass;

/// @brief Field m_PrevUIPressBypass, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PrevUIPressBypass, put=__cordl_internal_set_m_PrevUIPressBypass)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*  m_PrevUIPressBypass;

/// @brief Field m_PrevUIScrollBypass, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PrevUIScrollBypass, put=__cordl_internal_set_m_PrevUIScrollBypass)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<::UnityEngine::Vector2>*  m_PrevUIScrollBypass;

/// @brief Field m_Recording, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Recording, put=__cordl_internal_set_m_Recording)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording>  m_Recording;

/// @brief Field m_SelectBypass, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectBypass, put=__cordl_internal_set_m_SelectBypass)) ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*  m_SelectBypass;

/// @brief Field m_UIPressBypass, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UIPressBypass, put=__cordl_internal_set_m_UIPressBypass)) ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*  m_UIPressBypass;

/// @brief Field m_UIScrollBypass, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UIScrollBypass, put=__cordl_internal_set_m_UIScrollBypass)) ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<::UnityEngine::Vector2>*  m_UIScrollBypass;

/// @brief Field m_VisitEachFrame, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_VisitEachFrame, put=__cordl_internal_set_m_VisitEachFrame)) bool  m_VisitEachFrame;

/// @brief Field m_XRController, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_XRController, put=__cordl_internal_set_m_XRController)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>  m_XRController;

 __declspec(property(get=get_playOnStart, put=set_playOnStart)) bool  playOnStart;

 __declspec(property(get=get_recording, put=set_recording)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording>  recording;

 __declspec(property(get=get_recordingStartTime, put=set_recordingStartTime)) float_t  recordingStartTime;

 __declspec(property(get=get_visitEachFrame, put=set_visitEachFrame)) bool  visitEachFrame;

/// @brief [Obsolete("xrController has been deprecated in version 3.0.0. Use interactor to allow the recorder to read and playback button input instead.")]
 __declspec(property(get=get_xrController, put=set_xrController)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>  xrController;

/// @brief Method Awake, addr 0xb401fec, size 0x198, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetControllerState, addr 0xb402bbc, size 0xd0, virtual true, abstract: false, final false
inline bool GetControllerState(::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>  controllerState) ;

/// @brief Method GetInteractor, addr 0xb402650, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* GetInteractor() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder* New_ctor() ;

/// @brief Method OnDestroy, addr 0xb402b40, size 0x20, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ResetPlayback, addr 0xb401ad0, size 0xc, virtual false, abstract: false, final false
inline void ResetPlayback() ;

/// @brief Method SetInteractor, addr 0xb402b60, size 0x5c, virtual false, abstract: false, final false
inline void SetInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method StartPlaying, addr 0xb401adc, size 0x278, virtual false, abstract: false, final false
inline void StartPlaying() ;

/// @brief Method StopPlaying, addr 0xb401d54, size 0x180, virtual false, abstract: false, final false
inline void StopPlaying() ;

/// @brief Method Update, addr 0xb402184, size 0x4cc, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdatePlaybackTime, addr 0xb4027cc, size 0x374, virtual false, abstract: false, final false
inline void UpdatePlaybackTime(double_t  playbackTime) ;

constexpr float_t const& __cordl_internal_get__recordingStartTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__recordingStartTime_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass* const& __cordl_internal_get_m_ActivateBypass() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*& __cordl_internal_get_m_ActivateBypass() ;

constexpr double_t const& __cordl_internal_get_m_CurrentTime() const;

constexpr double_t& __cordl_internal_get_m_CurrentTime() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_m_Interactor() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_Interactor() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_InteractorObject() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_InteractorObject() ;

constexpr bool const& __cordl_internal_get_m_IsPlaying() const;

constexpr bool& __cordl_internal_get_m_IsPlaying() ;

constexpr bool const& __cordl_internal_get_m_IsRecording() const;

constexpr bool& __cordl_internal_get_m_IsRecording() ;

constexpr int32_t const& __cordl_internal_get_m_LastFrameIdx() const;

constexpr int32_t& __cordl_internal_get_m_LastFrameIdx() ;

constexpr double_t const& __cordl_internal_get_m_LastPlaybackTime() const;

constexpr double_t& __cordl_internal_get_m_LastPlaybackTime() ;

constexpr bool const& __cordl_internal_get_m_PlayOnStart() const;

constexpr bool& __cordl_internal_get_m_PlayOnStart() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader* const& __cordl_internal_get_m_PrevActivateBypass() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*& __cordl_internal_get_m_PrevActivateBypass() ;

constexpr bool const& __cordl_internal_get_m_PrevEnableInputActions() const;

constexpr bool& __cordl_internal_get_m_PrevEnableInputActions() ;

constexpr bool const& __cordl_internal_get_m_PrevEnableInputTracking() const;

constexpr bool& __cordl_internal_get_m_PrevEnableInputTracking() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader* const& __cordl_internal_get_m_PrevSelectBypass() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*& __cordl_internal_get_m_PrevSelectBypass() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader* const& __cordl_internal_get_m_PrevUIPressBypass() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*& __cordl_internal_get_m_PrevUIPressBypass() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_PrevUIScrollBypass() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_PrevUIScrollBypass() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording> const& __cordl_internal_get_m_Recording() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording>& __cordl_internal_get_m_Recording() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass* const& __cordl_internal_get_m_SelectBypass() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*& __cordl_internal_get_m_SelectBypass() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass* const& __cordl_internal_get_m_UIPressBypass() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*& __cordl_internal_get_m_UIPressBypass() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_UIScrollBypass() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_UIScrollBypass() ;

constexpr bool const& __cordl_internal_get_m_VisitEachFrame() const;

constexpr bool& __cordl_internal_get_m_VisitEachFrame() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> const& __cordl_internal_get_m_XRController() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>& __cordl_internal_get_m_XRController() ;

constexpr void __cordl_internal_set__recordingStartTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_m_ActivateBypass(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*  value) ;

constexpr void __cordl_internal_set_m_CurrentTime(double_t  value) ;

constexpr void __cordl_internal_set_m_Interactor(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set_m_InteractorObject(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_m_IsPlaying(bool  value) ;

constexpr void __cordl_internal_set_m_IsRecording(bool  value) ;

constexpr void __cordl_internal_set_m_LastFrameIdx(int32_t  value) ;

constexpr void __cordl_internal_set_m_LastPlaybackTime(double_t  value) ;

constexpr void __cordl_internal_set_m_PlayOnStart(bool  value) ;

constexpr void __cordl_internal_set_m_PrevActivateBypass(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_PrevEnableInputActions(bool  value) ;

constexpr void __cordl_internal_set_m_PrevEnableInputTracking(bool  value) ;

constexpr void __cordl_internal_set_m_PrevSelectBypass(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_PrevUIPressBypass(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_PrevUIScrollBypass(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_m_Recording(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording>  value) ;

constexpr void __cordl_internal_set_m_SelectBypass(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*  value) ;

constexpr void __cordl_internal_set_m_UIPressBypass(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*  value) ;

constexpr void __cordl_internal_set_m_UIScrollBypass(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_m_VisitEachFrame(bool  value) ;

constexpr void __cordl_internal_set_m_XRController(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>  value) ;

/// @brief Method .ctor, addr 0xb402c9c, size 0x15c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_currentTime, addr 0xb401ed4, size 0x8, virtual false, abstract: false, final false
inline double_t get_currentTime() ;

/// @brief Method get_duration, addr 0xb401edc, size 0x84, virtual false, abstract: false, final false
inline double_t get_duration() ;

/// @brief Method get_isPlaying, addr 0xb401ac8, size 0x8, virtual false, abstract: false, final false
inline bool get_isPlaying() ;

/// @brief Method get_isRecording, addr 0xb4018c4, size 0x8, virtual false, abstract: false, final false
inline bool get_isRecording() ;

/// @brief Method get_playOnStart, addr 0xb401894, size 0x8, virtual false, abstract: false, final false
inline bool get_playOnStart() ;

/// @brief Method get_recording, addr 0xb4018a4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording> get_recording() ;

/// [CompilerGenerated]
/// @brief Method get_recordingStartTime, addr 0xb401fdc, size 0x8, virtual false, abstract: false, final false
inline float_t get_recordingStartTime() ;

/// @brief Method get_visitEachFrame, addr 0xb4018b4, size 0x8, virtual false, abstract: false, final false
inline bool get_visitEachFrame() ;

/// @brief Method get_xrController, addr 0xb402c8c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> get_xrController() ;

/// @brief Method set_isPlaying, addr 0xb401988, size 0xc4, virtual false, abstract: false, final false
inline void set_isPlaying(bool  value) ;

/// @brief Method set_isRecording, addr 0xb4018cc, size 0xbc, virtual false, abstract: false, final false
inline void set_isRecording(bool  value) ;

/// @brief Method set_playOnStart, addr 0xb40189c, size 0x8, virtual false, abstract: false, final false
inline void set_playOnStart(bool  value) ;

/// @brief Method set_recording, addr 0xb4018ac, size 0x8, virtual false, abstract: false, final false
inline void set_recording(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*  value) ;

/// [CompilerGenerated]
/// @brief Method set_recordingStartTime, addr 0xb401fe4, size 0x8, virtual false, abstract: false, final false
inline void set_recordingStartTime(float_t  value) ;

/// @brief Method set_visitEachFrame, addr 0xb4018bc, size 0x8, virtual false, abstract: false, final false
inline void set_visitEachFrame(bool  value) ;

/// @brief Method set_xrController, addr 0xb402c94, size 0x8, virtual false, abstract: false, final false
inline void set_xrController(::UnityEngine::XR::Interaction::Toolkit::XRBaseController*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRControllerRecorder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRControllerRecorder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRControllerRecorder(XRControllerRecorder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRControllerRecorder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRControllerRecorder(XRControllerRecorder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11073};

/// [Header("Input Recording/Playback")]
/// [SerializeField]
/// [Tooltip("Controls whether this recording will start playing when the component\'s Awake() method is called.")]
/// @brief Field m_PlayOnStart, offset: 0x20, size: 0x1, def value: None
 bool  ___m_PlayOnStart;

/// [SerializeField]
/// [Tooltip("Controller Recording asset for recording and playback of controller events.")]
/// @brief Field m_Recording, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording>  ___m_Recording;

/// [SerializeField]
/// [Tooltip("Interactor whose input will be recorded and played back.")]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor))]
/// @brief Field m_InteractorObject, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___m_InteractorObject;

/// [SerializeField]
/// [Tooltip("If true, every frame of the recording must be visited even if a larger time period has passed.")]
/// @brief Field m_VisitEachFrame, offset: 0x38, size: 0x1, def value: None
 bool  ___m_VisitEachFrame;

/// @brief Field m_CurrentTime, offset: 0x40, size: 0x8, def value: None
 double_t  ___m_CurrentTime;

/// [CompilerGenerated]
/// @brief Field <recordingStartTime>k__BackingField, offset: 0x48, size: 0x4, def value: None
 float_t  ____recordingStartTime_k__BackingField;

/// @brief Field m_Interactor, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::Object>>*  ___m_Interactor;

/// @brief Field m_IsRecording, offset: 0x58, size: 0x1, def value: None
 bool  ___m_IsRecording;

/// @brief Field m_IsPlaying, offset: 0x59, size: 0x1, def value: None
 bool  ___m_IsPlaying;

/// @brief Field m_LastPlaybackTime, offset: 0x60, size: 0x8, def value: None
 double_t  ___m_LastPlaybackTime;

/// @brief Field m_LastFrameIdx, offset: 0x68, size: 0x4, def value: None
 int32_t  ___m_LastFrameIdx;

/// @brief Field m_PrevEnableInputActions, offset: 0x6c, size: 0x1, def value: None
 bool  ___m_PrevEnableInputActions;

/// @brief Field m_PrevEnableInputTracking, offset: 0x6d, size: 0x1, def value: None
 bool  ___m_PrevEnableInputTracking;

/// @brief Field m_PrevSelectBypass, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*  ___m_PrevSelectBypass;

/// @brief Field m_PrevActivateBypass, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*  ___m_PrevActivateBypass;

/// @brief Field m_PrevUIPressBypass, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*  ___m_PrevUIPressBypass;

/// @brief Field m_PrevUIScrollBypass, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<::UnityEngine::Vector2>*  ___m_PrevUIScrollBypass;

/// @brief Field m_SelectBypass, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*  ___m_SelectBypass;

/// @brief Field m_ActivateBypass, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*  ___m_ActivateBypass;

/// @brief Field m_UIPressBypass, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass*  ___m_UIPressBypass;

/// @brief Field m_UIScrollBypass, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<::UnityEngine::Vector2>*  ___m_UIScrollBypass;

/// [SerializeField]
/// [Tooltip("(Deprecated) XR Controller whose output will be recorded and played back.")]
/// [Obsolete("m_XRController has been deprecated in version 3.0.0.")]
/// @brief Field m_XRController, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>  ___m_XRController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_PlayOnStart) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_Recording) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_InteractorObject) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_VisitEachFrame) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_CurrentTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ____recordingStartTime_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_Interactor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_IsRecording) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_IsPlaying) == 0x59, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_LastPlaybackTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_LastFrameIdx) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_PrevEnableInputActions) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_PrevEnableInputTracking) == 0x6d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_PrevSelectBypass) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_PrevActivateBypass) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_PrevUIPressBypass) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_PrevUIScrollBypass) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_SelectBypass) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_ActivateBypass) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_UIPressBypass) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_UIScrollBypass) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_XRController) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder) == 0xb8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit {
// cpp template
template<typename TValue>
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.XRControllerRecorder/ValueBypass`1<TValue>
class CORDL_TYPE XRControllerRecorder_ValueBypass_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <state>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__state_k__BackingField, put=__cordl_internal_set__state_k__BackingField)) TValue  _state_k__BackingField;

 __declspec(property(get=get_state, put=set_state)) TValue  state;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>*() noexcept;

static inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ValueBypass_1<TValue>* New_ctor() ;

/// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TValue ReadValue() ;

/// @brief Method TryReadValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool TryReadValue(::by_ref<TValue>  value) ;

constexpr TValue const& __cordl_internal_get__state_k__BackingField() const;

constexpr TValue& __cordl_internal_get__state_k__BackingField() ;

constexpr void __cordl_internal_set__state_k__BackingField(TValue  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_state, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TValue get_state() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader_1_TValue_() noexcept;

/// [CompilerGenerated]
/// @brief Method set_state, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_state(TValue  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRControllerRecorder_ValueBypass_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRControllerRecorder_ValueBypass_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRControllerRecorder_ValueBypass_1(XRControllerRecorder_ValueBypass_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRControllerRecorder_ValueBypass_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRControllerRecorder_ValueBypass_1(XRControllerRecorder_ValueBypass_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11072};

/// [CompilerGenerated]
/// @brief Field <state>k__BackingField, offset: 0x10, size: 0x8, def value: None
 TValue  ____state_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit
// Dependencies System.Object, UnityEngine.XR.Interaction.Toolkit.InteractionState
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.XRControllerRecorder/ButtonBypass
class CORDL_TYPE XRControllerRecorder_ButtonBypass : public ::System::Object {
public:
// Declarations
/// @brief Field <state>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__state_k__BackingField, put=__cordl_internal_set__state_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::InteractionState  _state_k__BackingField;

 __declspec(property(get=get_state, put=set_state)) ::UnityEngine::XR::Interaction::Toolkit::InteractionState  state;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>*() noexcept;

static inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass* New_ctor() ;

/// @brief Method ReadIsPerformed, addr 0xb402e10, size 0x10, virtual true, abstract: false, final true
inline bool ReadIsPerformed() ;

/// @brief Method ReadValue, addr 0xb402e40, size 0x8, virtual true, abstract: false, final true
inline float_t ReadValue() ;

/// @brief Method ReadWasCompletedThisFrame, addr 0xb402e30, size 0x10, virtual true, abstract: false, final true
inline bool ReadWasCompletedThisFrame() ;

/// @brief Method ReadWasPerformedThisFrame, addr 0xb402e20, size 0x10, virtual true, abstract: false, final true
inline bool ReadWasPerformedThisFrame() ;

/// @brief Method TryReadValue, addr 0xb402e48, size 0x10, virtual true, abstract: false, final true
inline bool TryReadValue(::by_ref<float_t>  value) ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState const& __cordl_internal_get__state_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState& __cordl_internal_get__state_k__BackingField() ;

constexpr void __cordl_internal_set__state_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::InteractionState  value) ;

/// @brief Method .ctor, addr 0xb402df8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_state, addr 0xb402e00, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::InteractionState get_state() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputButtonReader() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader_1_float_t_() noexcept;

/// [CompilerGenerated]
/// @brief Method set_state, addr 0xb402e08, size 0x8, virtual false, abstract: false, final false
inline void set_state(::UnityEngine::XR::Interaction::Toolkit::InteractionState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRControllerRecorder_ButtonBypass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRControllerRecorder_ButtonBypass", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRControllerRecorder_ButtonBypass(XRControllerRecorder_ButtonBypass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRControllerRecorder_ButtonBypass", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRControllerRecorder_ButtonBypass(XRControllerRecorder_ButtonBypass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11071};

/// [CompilerGenerated]
/// @brief Field <state>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::InteractionState  ____state_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass, ____state_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder_ButtonBypass) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
