#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Feedback/SimpleAudioFeedback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SimpleAudioFeedback)
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename TInterface,typename TObject>
class UnityObjectReferenceCache_2;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Feedback {
class SimpleAudioFeedback;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*, "UnityEngine.XR.Interaction.Toolkit.Feedback", "SimpleAudioFeedback");
// [AddComponentMenu("XR/Feedback/Simple Audio Feedback", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Feedback.SimpleAudioFeedback.html")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::Feedback {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Feedback.SimpleAudioFeedback
class CORDL_TYPE SimpleAudioFeedback : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_allowHoverAudioWhileSelecting, put=set_allowHoverAudioWhileSelecting)) bool  allowHoverAudioWhileSelecting;

 __declspec(property(get=get_audioSource, put=set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

 __declspec(property(get=get_hoverCanceledClip, put=set_hoverCanceledClip)) ::UnityW<::UnityEngine::AudioClip>  hoverCanceledClip;

 __declspec(property(get=get_hoverEnteredClip, put=set_hoverEnteredClip)) ::UnityW<::UnityEngine::AudioClip>  hoverEnteredClip;

 __declspec(property(get=get_hoverExitedClip, put=set_hoverExitedClip)) ::UnityW<::UnityEngine::AudioClip>  hoverExitedClip;

/// @brief Field m_AllowHoverAudioWhileSelecting, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AllowHoverAudioWhileSelecting, put=__cordl_internal_set_m_AllowHoverAudioWhileSelecting)) bool  m_AllowHoverAudioWhileSelecting;

/// @brief Field m_AudioSource, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AudioSource, put=__cordl_internal_set_m_AudioSource)) ::UnityW<::UnityEngine::AudioSource>  m_AudioSource;

/// @brief Field m_HoverCanceledClip, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HoverCanceledClip, put=__cordl_internal_set_m_HoverCanceledClip)) ::UnityW<::UnityEngine::AudioClip>  m_HoverCanceledClip;

/// @brief Field m_HoverEnteredClip, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HoverEnteredClip, put=__cordl_internal_set_m_HoverEnteredClip)) ::UnityW<::UnityEngine::AudioClip>  m_HoverEnteredClip;

/// @brief Field m_HoverExitedClip, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HoverExitedClip, put=__cordl_internal_set_m_HoverExitedClip)) ::UnityW<::UnityEngine::AudioClip>  m_HoverExitedClip;

/// @brief Field m_InteractorSource, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractorSource, put=__cordl_internal_set_m_InteractorSource)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::Object>>*  m_InteractorSource;

/// @brief Field m_InteractorSourceObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractorSourceObject, put=__cordl_internal_set_m_InteractorSourceObject)) ::UnityW<::UnityEngine::Object>  m_InteractorSourceObject;

/// @brief Field m_PlayHoverCanceled, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayHoverCanceled, put=__cordl_internal_set_m_PlayHoverCanceled)) bool  m_PlayHoverCanceled;

/// @brief Field m_PlayHoverEntered, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayHoverEntered, put=__cordl_internal_set_m_PlayHoverEntered)) bool  m_PlayHoverEntered;

/// @brief Field m_PlayHoverExited, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayHoverExited, put=__cordl_internal_set_m_PlayHoverExited)) bool  m_PlayHoverExited;

/// @brief Field m_PlaySelectCanceled, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlaySelectCanceled, put=__cordl_internal_set_m_PlaySelectCanceled)) bool  m_PlaySelectCanceled;

/// @brief Field m_PlaySelectEntered, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlaySelectEntered, put=__cordl_internal_set_m_PlaySelectEntered)) bool  m_PlaySelectEntered;

/// @brief Field m_PlaySelectExited, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlaySelectExited, put=__cordl_internal_set_m_PlaySelectExited)) bool  m_PlaySelectExited;

/// @brief Field m_SelectCanceledClip, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectCanceledClip, put=__cordl_internal_set_m_SelectCanceledClip)) ::UnityW<::UnityEngine::AudioClip>  m_SelectCanceledClip;

/// @brief Field m_SelectEnteredClip, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectEnteredClip, put=__cordl_internal_set_m_SelectEnteredClip)) ::UnityW<::UnityEngine::AudioClip>  m_SelectEnteredClip;

/// @brief Field m_SelectExitedClip, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectExitedClip, put=__cordl_internal_set_m_SelectExitedClip)) ::UnityW<::UnityEngine::AudioClip>  m_SelectExitedClip;

 __declspec(property(get=get_playHoverCanceled, put=set_playHoverCanceled)) bool  playHoverCanceled;

 __declspec(property(get=get_playHoverEntered, put=set_playHoverEntered)) bool  playHoverEntered;

 __declspec(property(get=get_playHoverExited, put=set_playHoverExited)) bool  playHoverExited;

 __declspec(property(get=get_playSelectCanceled, put=set_playSelectCanceled)) bool  playSelectCanceled;

 __declspec(property(get=get_playSelectEntered, put=set_playSelectEntered)) bool  playSelectEntered;

 __declspec(property(get=get_playSelectExited, put=set_playSelectExited)) bool  playSelectExited;

 __declspec(property(get=get_selectCanceledClip, put=set_selectCanceledClip)) ::UnityW<::UnityEngine::AudioClip>  selectCanceledClip;

 __declspec(property(get=get_selectEnteredClip, put=set_selectEnteredClip)) ::UnityW<::UnityEngine::AudioClip>  selectEnteredClip;

 __declspec(property(get=get_selectExitedClip, put=set_selectExitedClip)) ::UnityW<::UnityEngine::AudioClip>  selectExitedClip;

/// @brief Method Awake, addr 0xb4cd3f0, size 0x180, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateAudioSource, addr 0xb4cd570, size 0xb8, virtual false, abstract: false, final false
inline void CreateAudioSource() ;

/// @brief Method GetInteractorSource, addr 0xb4cd644, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* GetInteractorSource() ;

/// @brief Method IsHoverAudioAllowed, addr 0xb4ce208, size 0x30, virtual false, abstract: false, final false
inline bool IsHoverAudioAllowed(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

/// @brief Method IsSelecting, addr 0xb4ce2d0, size 0xf8, virtual false, abstract: false, final false
static inline bool IsSelecting(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback* New_ctor() ;

/// @brief Method OnDisable, addr 0xb4cdad8, size 0x1c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4cd628, size 0x1c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnHoverEntered, addr 0xb4ce194, size 0x74, virtual false, abstract: false, final false
inline void OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// @brief Method OnHoverExited, addr 0xb4ce238, size 0x98, virtual false, abstract: false, final false
inline void OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args) ;

/// @brief Method OnSelectEntered, addr 0xb4ce118, size 0x14, virtual false, abstract: false, final false
inline void OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method OnSelectExited, addr 0xb4ce12c, size 0x68, virtual false, abstract: false, final false
inline void OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// @brief Method PlayAudio, addr 0xb4ce054, size 0xc4, virtual false, abstract: false, final false
inline void PlayAudio(::UnityEngine::AudioClip*  clip) ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method Reset, addr 0xb4cd3ec, size 0x4, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetInteractorSource, addr 0xb4cdf34, size 0x120, virtual false, abstract: false, final false
inline void SetInteractorSource(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method Subscribe, addr 0xb4cd698, size 0x440, virtual false, abstract: false, final false
inline void Subscribe(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method Unsubscribe, addr 0xb4cdaf4, size 0x440, virtual false, abstract: false, final false
inline void Unsubscribe(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

constexpr bool const& __cordl_internal_get_m_AllowHoverAudioWhileSelecting() const;

constexpr bool& __cordl_internal_get_m_AllowHoverAudioWhileSelecting() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_m_AudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_m_AudioSource() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_m_HoverCanceledClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_m_HoverCanceledClip() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_m_HoverEnteredClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_m_HoverEnteredClip() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_m_HoverExitedClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_m_HoverExitedClip() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_m_InteractorSource() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_InteractorSource() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_InteractorSourceObject() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_InteractorSourceObject() ;

constexpr bool const& __cordl_internal_get_m_PlayHoverCanceled() const;

constexpr bool& __cordl_internal_get_m_PlayHoverCanceled() ;

constexpr bool const& __cordl_internal_get_m_PlayHoverEntered() const;

constexpr bool& __cordl_internal_get_m_PlayHoverEntered() ;

constexpr bool const& __cordl_internal_get_m_PlayHoverExited() const;

constexpr bool& __cordl_internal_get_m_PlayHoverExited() ;

constexpr bool const& __cordl_internal_get_m_PlaySelectCanceled() const;

constexpr bool& __cordl_internal_get_m_PlaySelectCanceled() ;

constexpr bool const& __cordl_internal_get_m_PlaySelectEntered() const;

constexpr bool& __cordl_internal_get_m_PlaySelectEntered() ;

constexpr bool const& __cordl_internal_get_m_PlaySelectExited() const;

constexpr bool& __cordl_internal_get_m_PlaySelectExited() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_m_SelectCanceledClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_m_SelectCanceledClip() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_m_SelectEnteredClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_m_SelectEnteredClip() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_m_SelectExitedClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_m_SelectExitedClip() ;

constexpr void __cordl_internal_set_m_AllowHoverAudioWhileSelecting(bool  value) ;

constexpr void __cordl_internal_set_m_AudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_m_HoverCanceledClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_m_HoverEnteredClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_m_HoverExitedClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_m_InteractorSource(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set_m_InteractorSourceObject(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_m_PlayHoverCanceled(bool  value) ;

constexpr void __cordl_internal_set_m_PlayHoverEntered(bool  value) ;

constexpr void __cordl_internal_set_m_PlayHoverExited(bool  value) ;

constexpr void __cordl_internal_set_m_PlaySelectCanceled(bool  value) ;

constexpr void __cordl_internal_set_m_PlaySelectEntered(bool  value) ;

constexpr void __cordl_internal_set_m_PlaySelectExited(bool  value) ;

constexpr void __cordl_internal_set_m_SelectCanceledClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_m_SelectEnteredClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_m_SelectExitedClip(::UnityW<::UnityEngine::AudioClip>  value) ;

/// @brief Method .ctor, addr 0xb4ce3c8, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_allowHoverAudioWhileSelecting, addr 0xb4cd3dc, size 0x8, virtual false, abstract: false, final false
inline bool get_allowHoverAudioWhileSelecting() ;

/// @brief Method get_audioSource, addr 0xb4cd30c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioSource> get_audioSource() ;

/// @brief Method get_hoverCanceledClip, addr 0xb4cd3cc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_hoverCanceledClip() ;

/// @brief Method get_hoverEnteredClip, addr 0xb4cd38c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_hoverEnteredClip() ;

/// @brief Method get_hoverExitedClip, addr 0xb4cd3ac, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_hoverExitedClip() ;

/// @brief Method get_playHoverCanceled, addr 0xb4cd3bc, size 0x8, virtual false, abstract: false, final false
inline bool get_playHoverCanceled() ;

/// @brief Method get_playHoverEntered, addr 0xb4cd37c, size 0x8, virtual false, abstract: false, final false
inline bool get_playHoverEntered() ;

/// @brief Method get_playHoverExited, addr 0xb4cd39c, size 0x8, virtual false, abstract: false, final false
inline bool get_playHoverExited() ;

/// @brief Method get_playSelectCanceled, addr 0xb4cd35c, size 0x8, virtual false, abstract: false, final false
inline bool get_playSelectCanceled() ;

/// @brief Method get_playSelectEntered, addr 0xb4cd31c, size 0x8, virtual false, abstract: false, final false
inline bool get_playSelectEntered() ;

/// @brief Method get_playSelectExited, addr 0xb4cd33c, size 0x8, virtual false, abstract: false, final false
inline bool get_playSelectExited() ;

/// @brief Method get_selectCanceledClip, addr 0xb4cd36c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_selectCanceledClip() ;

/// @brief Method get_selectEnteredClip, addr 0xb4cd32c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_selectEnteredClip() ;

/// @brief Method get_selectExitedClip, addr 0xb4cd34c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_selectExitedClip() ;

/// @brief Method set_allowHoverAudioWhileSelecting, addr 0xb4cd3e4, size 0x8, virtual false, abstract: false, final false
inline void set_allowHoverAudioWhileSelecting(bool  value) ;

/// @brief Method set_audioSource, addr 0xb4cd314, size 0x8, virtual false, abstract: false, final false
inline void set_audioSource(::UnityEngine::AudioSource*  value) ;

/// @brief Method set_hoverCanceledClip, addr 0xb4cd3d4, size 0x8, virtual false, abstract: false, final false
inline void set_hoverCanceledClip(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_hoverEnteredClip, addr 0xb4cd394, size 0x8, virtual false, abstract: false, final false
inline void set_hoverEnteredClip(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_hoverExitedClip, addr 0xb4cd3b4, size 0x8, virtual false, abstract: false, final false
inline void set_hoverExitedClip(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_playHoverCanceled, addr 0xb4cd3c4, size 0x8, virtual false, abstract: false, final false
inline void set_playHoverCanceled(bool  value) ;

/// @brief Method set_playHoverEntered, addr 0xb4cd384, size 0x8, virtual false, abstract: false, final false
inline void set_playHoverEntered(bool  value) ;

/// @brief Method set_playHoverExited, addr 0xb4cd3a4, size 0x8, virtual false, abstract: false, final false
inline void set_playHoverExited(bool  value) ;

/// @brief Method set_playSelectCanceled, addr 0xb4cd364, size 0x8, virtual false, abstract: false, final false
inline void set_playSelectCanceled(bool  value) ;

/// @brief Method set_playSelectEntered, addr 0xb4cd324, size 0x8, virtual false, abstract: false, final false
inline void set_playSelectEntered(bool  value) ;

/// @brief Method set_playSelectExited, addr 0xb4cd344, size 0x8, virtual false, abstract: false, final false
inline void set_playSelectExited(bool  value) ;

/// @brief Method set_selectCanceledClip, addr 0xb4cd374, size 0x8, virtual false, abstract: false, final false
inline void set_selectCanceledClip(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_selectEnteredClip, addr 0xb4cd334, size 0x8, virtual false, abstract: false, final false
inline void set_selectEnteredClip(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_selectExitedClip, addr 0xb4cd354, size 0x8, virtual false, abstract: false, final false
inline void set_selectExitedClip(::UnityEngine::AudioClip*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleAudioFeedback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleAudioFeedback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleAudioFeedback(SimpleAudioFeedback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleAudioFeedback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleAudioFeedback(SimpleAudioFeedback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11690};

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor))]
/// @brief Field m_InteractorSourceObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___m_InteractorSourceObject;

/// [SerializeField]
/// @brief Field m_AudioSource, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___m_AudioSource;

/// [SerializeField]
/// @brief Field m_PlaySelectEntered, offset: 0x30, size: 0x1, def value: None
 bool  ___m_PlaySelectEntered;

/// [SerializeField]
/// @brief Field m_SelectEnteredClip, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___m_SelectEnteredClip;

/// [SerializeField]
/// @brief Field m_PlaySelectExited, offset: 0x40, size: 0x1, def value: None
 bool  ___m_PlaySelectExited;

/// [SerializeField]
/// @brief Field m_SelectExitedClip, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___m_SelectExitedClip;

/// [SerializeField]
/// @brief Field m_PlaySelectCanceled, offset: 0x50, size: 0x1, def value: None
 bool  ___m_PlaySelectCanceled;

/// [SerializeField]
/// @brief Field m_SelectCanceledClip, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___m_SelectCanceledClip;

/// [SerializeField]
/// @brief Field m_PlayHoverEntered, offset: 0x60, size: 0x1, def value: None
 bool  ___m_PlayHoverEntered;

/// [SerializeField]
/// @brief Field m_HoverEnteredClip, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___m_HoverEnteredClip;

/// [SerializeField]
/// @brief Field m_PlayHoverExited, offset: 0x70, size: 0x1, def value: None
 bool  ___m_PlayHoverExited;

/// [SerializeField]
/// @brief Field m_HoverExitedClip, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___m_HoverExitedClip;

/// [SerializeField]
/// @brief Field m_PlayHoverCanceled, offset: 0x80, size: 0x1, def value: None
 bool  ___m_PlayHoverCanceled;

/// [SerializeField]
/// @brief Field m_HoverCanceledClip, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___m_HoverCanceledClip;

/// [SerializeField]
/// @brief Field m_AllowHoverAudioWhileSelecting, offset: 0x90, size: 0x1, def value: None
 bool  ___m_AllowHoverAudioWhileSelecting;

/// @brief Field m_InteractorSource, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::Object>>*  ___m_InteractorSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback, ___m_InteractorSourceObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback, ___m_AudioSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback, ___m_PlaySelectEntered) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback, ___m_SelectEnteredClip) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback, ___m_PlaySelectExited) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback, ___m_SelectExitedClip) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback, ___m_PlaySelectCanceled) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback, ___m_SelectCanceledClip) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback, ___m_PlayHoverEntered) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback, ___m_HoverEnteredClip) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback, ___m_PlayHoverExited) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback, ___m_HoverExitedClip) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback, ___m_PlayHoverCanceled) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback, ___m_HoverCanceledClip) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback, ___m_AllowHoverAudioWhileSelecting) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback, ___m_InteractorSource) == 0x98, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback) == 0xa0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Feedback
