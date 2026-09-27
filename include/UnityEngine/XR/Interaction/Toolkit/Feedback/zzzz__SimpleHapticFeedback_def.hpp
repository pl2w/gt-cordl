#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Feedback/SimpleHapticFeedback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SimpleHapticFeedback)
namespace UnityEngine::XR::Interaction::Toolkit::Feedback {
class HapticImpulseData;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class HapticImpulsePlayer;
}
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
class Object;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Feedback {
class SimpleHapticFeedback;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*, "UnityEngine.XR.Interaction.Toolkit.Feedback", "SimpleHapticFeedback");
// [AddComponentMenu("XR/Feedback/Simple Haptic Feedback", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Feedback.SimpleHapticFeedback.html")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::Feedback {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Feedback.SimpleHapticFeedback
class CORDL_TYPE SimpleHapticFeedback : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_allowHoverHapticsWhileSelecting, put=set_allowHoverHapticsWhileSelecting)) bool  allowHoverHapticsWhileSelecting;

 __declspec(property(get=get_hapticImpulsePlayer, put=set_hapticImpulsePlayer)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer>  hapticImpulsePlayer;

 __declspec(property(get=get_hoverCanceledData, put=set_hoverCanceledData)) ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  hoverCanceledData;

 __declspec(property(get=get_hoverEnteredData, put=set_hoverEnteredData)) ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  hoverEnteredData;

 __declspec(property(get=get_hoverExitedData, put=set_hoverExitedData)) ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  hoverExitedData;

/// @brief Field m_AllowHoverHapticsWhileSelecting, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AllowHoverHapticsWhileSelecting, put=__cordl_internal_set_m_AllowHoverHapticsWhileSelecting)) bool  m_AllowHoverHapticsWhileSelecting;

/// @brief Field m_HapticImpulsePlayer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HapticImpulsePlayer, put=__cordl_internal_set_m_HapticImpulsePlayer)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer>  m_HapticImpulsePlayer;

/// @brief Field m_HoverCanceledData, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HoverCanceledData, put=__cordl_internal_set_m_HoverCanceledData)) ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  m_HoverCanceledData;

/// @brief Field m_HoverEnteredData, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HoverEnteredData, put=__cordl_internal_set_m_HoverEnteredData)) ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  m_HoverEnteredData;

/// @brief Field m_HoverExitedData, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HoverExitedData, put=__cordl_internal_set_m_HoverExitedData)) ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  m_HoverExitedData;

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

/// @brief Field m_SelectCanceledData, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectCanceledData, put=__cordl_internal_set_m_SelectCanceledData)) ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  m_SelectCanceledData;

/// @brief Field m_SelectEnteredData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectEnteredData, put=__cordl_internal_set_m_SelectEnteredData)) ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  m_SelectEnteredData;

/// @brief Field m_SelectExitedData, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectExitedData, put=__cordl_internal_set_m_SelectExitedData)) ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  m_SelectExitedData;

 __declspec(property(get=get_playHoverCanceled, put=set_playHoverCanceled)) bool  playHoverCanceled;

 __declspec(property(get=get_playHoverEntered, put=set_playHoverEntered)) bool  playHoverEntered;

 __declspec(property(get=get_playHoverExited, put=set_playHoverExited)) bool  playHoverExited;

 __declspec(property(get=get_playSelectCanceled, put=set_playSelectCanceled)) bool  playSelectCanceled;

 __declspec(property(get=get_playSelectEntered, put=set_playSelectEntered)) bool  playSelectEntered;

 __declspec(property(get=get_playSelectExited, put=set_playSelectExited)) bool  playSelectExited;

 __declspec(property(get=get_selectCanceledData, put=set_selectCanceledData)) ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  selectCanceledData;

 __declspec(property(get=get_selectEnteredData, put=set_selectEnteredData)) ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  selectEnteredData;

 __declspec(property(get=get_selectExitedData, put=set_selectExitedData)) ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  selectExitedData;

/// @brief Method Awake, addr 0xb4ce56c, size 0x180, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateHapticImpulsePlayer, addr 0xb4ce6ec, size 0x28, virtual false, abstract: false, final false
inline void CreateHapticImpulsePlayer() ;

/// @brief Method GetInteractorSource, addr 0xb4ce730, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* GetInteractorSource() ;

/// @brief Method IsHoverHapticsAllowed, addr 0xb4cf31c, size 0x30, virtual false, abstract: false, final false
inline bool IsHoverHapticsAllowed(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

/// @brief Method IsSelecting, addr 0xb4cf3fc, size 0xf8, virtual false, abstract: false, final false
static inline bool IsSelecting(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback* New_ctor() ;

/// @brief Method OnDisable, addr 0xb4cebc4, size 0x1c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4ce714, size 0x1c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnHoverEntered, addr 0xb4cf29c, size 0x80, virtual false, abstract: false, final false
inline void OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// @brief Method OnHoverExited, addr 0xb4cf34c, size 0xb0, virtual false, abstract: false, final false
inline void OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args) ;

/// @brief Method OnSelectEntered, addr 0xb4cf1fc, size 0x20, virtual false, abstract: false, final false
inline void OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method OnSelectExited, addr 0xb4cf21c, size 0x80, virtual false, abstract: false, final false
inline void OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method Reset, addr 0xb4ce568, size 0x4, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SendHapticImpulse, addr 0xb4cf158, size 0xa4, virtual false, abstract: false, final false
inline bool SendHapticImpulse(float_t  amplitude, float_t  duration, float_t  frequency) ;

/// @brief Method SendHapticImpulse, addr 0xb4cf140, size 0x18, virtual false, abstract: false, final false
inline bool SendHapticImpulse(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  data) ;

/// @brief Method SetInteractorSource, addr 0xb4cf020, size 0x120, virtual false, abstract: false, final false
inline void SetInteractorSource(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method Subscribe, addr 0xb4ce784, size 0x440, virtual false, abstract: false, final false
inline void Subscribe(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method Unsubscribe, addr 0xb4cebe0, size 0x440, virtual false, abstract: false, final false
inline void Unsubscribe(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

constexpr bool const& __cordl_internal_get_m_AllowHoverHapticsWhileSelecting() const;

constexpr bool& __cordl_internal_get_m_AllowHoverHapticsWhileSelecting() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer> const& __cordl_internal_get_m_HapticImpulsePlayer() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer>& __cordl_internal_get_m_HapticImpulsePlayer() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* const& __cordl_internal_get_m_HoverCanceledData() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*& __cordl_internal_get_m_HoverCanceledData() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* const& __cordl_internal_get_m_HoverEnteredData() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*& __cordl_internal_get_m_HoverEnteredData() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* const& __cordl_internal_get_m_HoverExitedData() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*& __cordl_internal_get_m_HoverExitedData() ;

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

constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* const& __cordl_internal_get_m_SelectCanceledData() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*& __cordl_internal_get_m_SelectCanceledData() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* const& __cordl_internal_get_m_SelectEnteredData() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*& __cordl_internal_get_m_SelectEnteredData() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* const& __cordl_internal_get_m_SelectExitedData() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*& __cordl_internal_get_m_SelectExitedData() ;

constexpr void __cordl_internal_set_m_AllowHoverHapticsWhileSelecting(bool  value) ;

constexpr void __cordl_internal_set_m_HapticImpulsePlayer(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer>  value) ;

constexpr void __cordl_internal_set_m_HoverCanceledData(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  value) ;

constexpr void __cordl_internal_set_m_HoverEnteredData(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  value) ;

constexpr void __cordl_internal_set_m_HoverExitedData(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  value) ;

constexpr void __cordl_internal_set_m_InteractorSource(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set_m_InteractorSourceObject(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_m_PlayHoverCanceled(bool  value) ;

constexpr void __cordl_internal_set_m_PlayHoverEntered(bool  value) ;

constexpr void __cordl_internal_set_m_PlayHoverExited(bool  value) ;

constexpr void __cordl_internal_set_m_PlaySelectCanceled(bool  value) ;

constexpr void __cordl_internal_set_m_PlaySelectEntered(bool  value) ;

constexpr void __cordl_internal_set_m_PlaySelectExited(bool  value) ;

constexpr void __cordl_internal_set_m_SelectCanceledData(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  value) ;

constexpr void __cordl_internal_set_m_SelectEnteredData(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  value) ;

constexpr void __cordl_internal_set_m_SelectExitedData(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  value) ;

/// @brief Method .ctor, addr 0xb4cf4f4, size 0x1c0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_allowHoverHapticsWhileSelecting, addr 0xb4ce558, size 0x8, virtual false, abstract: false, final false
inline bool get_allowHoverHapticsWhileSelecting() ;

/// @brief Method get_hapticImpulsePlayer, addr 0xb4ce488, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer> get_hapticImpulsePlayer() ;

/// @brief Method get_hoverCanceledData, addr 0xb4ce548, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* get_hoverCanceledData() ;

/// @brief Method get_hoverEnteredData, addr 0xb4ce508, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* get_hoverEnteredData() ;

/// @brief Method get_hoverExitedData, addr 0xb4ce528, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* get_hoverExitedData() ;

/// @brief Method get_playHoverCanceled, addr 0xb4ce538, size 0x8, virtual false, abstract: false, final false
inline bool get_playHoverCanceled() ;

/// @brief Method get_playHoverEntered, addr 0xb4ce4f8, size 0x8, virtual false, abstract: false, final false
inline bool get_playHoverEntered() ;

/// @brief Method get_playHoverExited, addr 0xb4ce518, size 0x8, virtual false, abstract: false, final false
inline bool get_playHoverExited() ;

/// @brief Method get_playSelectCanceled, addr 0xb4ce4d8, size 0x8, virtual false, abstract: false, final false
inline bool get_playSelectCanceled() ;

/// @brief Method get_playSelectEntered, addr 0xb4ce498, size 0x8, virtual false, abstract: false, final false
inline bool get_playSelectEntered() ;

/// @brief Method get_playSelectExited, addr 0xb4ce4b8, size 0x8, virtual false, abstract: false, final false
inline bool get_playSelectExited() ;

/// @brief Method get_selectCanceledData, addr 0xb4ce4e8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* get_selectCanceledData() ;

/// @brief Method get_selectEnteredData, addr 0xb4ce4a8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* get_selectEnteredData() ;

/// @brief Method get_selectExitedData, addr 0xb4ce4c8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* get_selectExitedData() ;

/// @brief Method set_allowHoverHapticsWhileSelecting, addr 0xb4ce560, size 0x8, virtual false, abstract: false, final false
inline void set_allowHoverHapticsWhileSelecting(bool  value) ;

/// @brief Method set_hapticImpulsePlayer, addr 0xb4ce490, size 0x8, virtual false, abstract: false, final false
inline void set_hapticImpulsePlayer(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer*  value) ;

/// @brief Method set_hoverCanceledData, addr 0xb4ce550, size 0x8, virtual false, abstract: false, final false
inline void set_hoverCanceledData(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  value) ;

/// @brief Method set_hoverEnteredData, addr 0xb4ce510, size 0x8, virtual false, abstract: false, final false
inline void set_hoverEnteredData(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  value) ;

/// @brief Method set_hoverExitedData, addr 0xb4ce530, size 0x8, virtual false, abstract: false, final false
inline void set_hoverExitedData(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  value) ;

/// @brief Method set_playHoverCanceled, addr 0xb4ce540, size 0x8, virtual false, abstract: false, final false
inline void set_playHoverCanceled(bool  value) ;

/// @brief Method set_playHoverEntered, addr 0xb4ce500, size 0x8, virtual false, abstract: false, final false
inline void set_playHoverEntered(bool  value) ;

/// @brief Method set_playHoverExited, addr 0xb4ce520, size 0x8, virtual false, abstract: false, final false
inline void set_playHoverExited(bool  value) ;

/// @brief Method set_playSelectCanceled, addr 0xb4ce4e0, size 0x8, virtual false, abstract: false, final false
inline void set_playSelectCanceled(bool  value) ;

/// @brief Method set_playSelectEntered, addr 0xb4ce4a0, size 0x8, virtual false, abstract: false, final false
inline void set_playSelectEntered(bool  value) ;

/// @brief Method set_playSelectExited, addr 0xb4ce4c0, size 0x8, virtual false, abstract: false, final false
inline void set_playSelectExited(bool  value) ;

/// @brief Method set_selectCanceledData, addr 0xb4ce4f0, size 0x8, virtual false, abstract: false, final false
inline void set_selectCanceledData(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  value) ;

/// @brief Method set_selectEnteredData, addr 0xb4ce4b0, size 0x8, virtual false, abstract: false, final false
inline void set_selectEnteredData(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  value) ;

/// @brief Method set_selectExitedData, addr 0xb4ce4d0, size 0x8, virtual false, abstract: false, final false
inline void set_selectExitedData(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleHapticFeedback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleHapticFeedback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleHapticFeedback(SimpleHapticFeedback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleHapticFeedback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleHapticFeedback(SimpleHapticFeedback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11692};

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor))]
/// @brief Field m_InteractorSourceObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___m_InteractorSourceObject;

/// [SerializeField]
/// @brief Field m_HapticImpulsePlayer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer>  ___m_HapticImpulsePlayer;

/// [SerializeField]
/// @brief Field m_PlaySelectEntered, offset: 0x30, size: 0x1, def value: None
 bool  ___m_PlaySelectEntered;

/// [SerializeField]
/// @brief Field m_SelectEnteredData, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  ___m_SelectEnteredData;

/// [SerializeField]
/// @brief Field m_PlaySelectExited, offset: 0x40, size: 0x1, def value: None
 bool  ___m_PlaySelectExited;

/// [SerializeField]
/// @brief Field m_SelectExitedData, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  ___m_SelectExitedData;

/// [SerializeField]
/// @brief Field m_PlaySelectCanceled, offset: 0x50, size: 0x1, def value: None
 bool  ___m_PlaySelectCanceled;

/// [SerializeField]
/// @brief Field m_SelectCanceledData, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  ___m_SelectCanceledData;

/// [SerializeField]
/// @brief Field m_PlayHoverEntered, offset: 0x60, size: 0x1, def value: None
 bool  ___m_PlayHoverEntered;

/// [SerializeField]
/// @brief Field m_HoverEnteredData, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  ___m_HoverEnteredData;

/// [SerializeField]
/// @brief Field m_PlayHoverExited, offset: 0x70, size: 0x1, def value: None
 bool  ___m_PlayHoverExited;

/// [SerializeField]
/// @brief Field m_HoverExitedData, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  ___m_HoverExitedData;

/// [SerializeField]
/// @brief Field m_PlayHoverCanceled, offset: 0x80, size: 0x1, def value: None
 bool  ___m_PlayHoverCanceled;

/// [SerializeField]
/// @brief Field m_HoverCanceledData, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  ___m_HoverCanceledData;

/// [SerializeField]
/// @brief Field m_AllowHoverHapticsWhileSelecting, offset: 0x90, size: 0x1, def value: None
 bool  ___m_AllowHoverHapticsWhileSelecting;

/// @brief Field m_InteractorSource, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::Object>>*  ___m_InteractorSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback, ___m_InteractorSourceObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback, ___m_HapticImpulsePlayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback, ___m_PlaySelectEntered) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback, ___m_SelectEnteredData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback, ___m_PlaySelectExited) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback, ___m_SelectExitedData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback, ___m_PlaySelectCanceled) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback, ___m_SelectCanceledData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback, ___m_PlayHoverEntered) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback, ___m_HoverEnteredData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback, ___m_PlayHoverExited) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback, ___m_HoverExitedData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback, ___m_PlayHoverCanceled) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback, ___m_HoverCanceledData) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback, ___m_AllowHoverHapticsWhileSelecting) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback, ___m_InteractorSource) == 0x98, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback) == 0xa0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Feedback
