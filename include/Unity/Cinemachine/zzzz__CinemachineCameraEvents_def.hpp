#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineCameraEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CinemachineCameraEvents)
namespace GlobalNamespace {
struct CinemachineCore_BlendEventParams;
}
namespace GlobalNamespace {
struct ICinemachineCamera_ActivationEventParams;
}
namespace Unity::Cinemachine {
class CinemachineCore_BlendEvent;
}
namespace Unity::Cinemachine {
class CinemachineCore_CameraEvent;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace Unity::Cinemachine {
class ICinemachineMixer;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineCameraEvents;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineCameraEvents*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineCameraEvents*, "Unity.Cinemachine", "CinemachineCameraEvents");
// [AddComponentMenu("Cinemachine/Helpers/Cinemachine Camera Events")]
// [SaveDuringPlay]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineCameraEvents.html")]
// Dependencies UnityEngine.MonoBehaviour
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineCameraEvents
class CORDL_TYPE CinemachineCameraEvents : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field BlendCreatedEvent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_BlendCreatedEvent, put=__cordl_internal_set_BlendCreatedEvent)) ::Unity::Cinemachine::CinemachineCore_BlendEvent*  BlendCreatedEvent;

/// @brief Field BlendFinishedEvent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_BlendFinishedEvent, put=__cordl_internal_set_BlendFinishedEvent)) ::Unity::Cinemachine::CinemachineCore_CameraEvent*  BlendFinishedEvent;

/// @brief Field CameraActivatedEvent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_CameraActivatedEvent, put=__cordl_internal_set_CameraActivatedEvent)) ::Unity::Cinemachine::CinemachineCore_CameraEvent*  CameraActivatedEvent;

/// @brief Field CameraDeactivatedEvent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_CameraDeactivatedEvent, put=__cordl_internal_set_CameraDeactivatedEvent)) ::Unity::Cinemachine::CinemachineCore_CameraEvent*  CameraDeactivatedEvent;

/// @brief Field EventTarget, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_EventTarget, put=__cordl_internal_set_EventTarget)) ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  EventTarget;

static inline ::Unity::Cinemachine::CinemachineCameraEvents* New_ctor() ;

/// @brief Method OnBlendCreated, addr 0xaedf0a8, size 0x8c, virtual false, abstract: false, final false
inline void OnBlendCreated(::GlobalNamespace::CinemachineCore_BlendEventParams  evt) ;

/// @brief Method OnBlendFinished, addr 0xaedf134, size 0x84, virtual false, abstract: false, final false
inline void OnBlendFinished(::Unity::Cinemachine::ICinemachineMixer*  mixer, ::Unity::Cinemachine::ICinemachineCamera*  cam) ;

/// @brief Method OnCameraActivated, addr 0xaedf034, size 0x74, virtual false, abstract: false, final false
inline void OnCameraActivated(::GlobalNamespace::ICinemachineCamera_ActivationEventParams  evt) ;

/// @brief Method OnCameraDeactivated, addr 0xaedf1b8, size 0x84, virtual false, abstract: false, final false
inline void OnCameraDeactivated(::Unity::Cinemachine::ICinemachineMixer*  mixer, ::Unity::Cinemachine::ICinemachineCamera*  cam) ;

/// @brief Method OnDisable, addr 0xaedee14, size 0x220, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xaedeb5c, size 0x2b8, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::Unity::Cinemachine::CinemachineCore_BlendEvent* const& __cordl_internal_get_BlendCreatedEvent() const;

constexpr ::Unity::Cinemachine::CinemachineCore_BlendEvent*& __cordl_internal_get_BlendCreatedEvent() ;

constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent* const& __cordl_internal_get_BlendFinishedEvent() const;

constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent*& __cordl_internal_get_BlendFinishedEvent() ;

constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent* const& __cordl_internal_get_CameraActivatedEvent() const;

constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent*& __cordl_internal_get_CameraActivatedEvent() ;

constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent* const& __cordl_internal_get_CameraDeactivatedEvent() const;

constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent*& __cordl_internal_get_CameraDeactivatedEvent() ;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> const& __cordl_internal_get_EventTarget() const;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>& __cordl_internal_get_EventTarget() ;

constexpr void __cordl_internal_set_BlendCreatedEvent(::Unity::Cinemachine::CinemachineCore_BlendEvent*  value) ;

constexpr void __cordl_internal_set_BlendFinishedEvent(::Unity::Cinemachine::CinemachineCore_CameraEvent*  value) ;

constexpr void __cordl_internal_set_CameraActivatedEvent(::Unity::Cinemachine::CinemachineCore_CameraEvent*  value) ;

constexpr void __cordl_internal_set_CameraDeactivatedEvent(::Unity::Cinemachine::CinemachineCore_CameraEvent*  value) ;

constexpr void __cordl_internal_set_EventTarget(::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  value) ;

/// @brief Method .ctor, addr 0xaedf23c, size 0xf4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineCameraEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCameraEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineCameraEvents(CinemachineCameraEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCameraEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineCameraEvents(CinemachineCameraEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22453};

/// [Tooltip("This is the object whose events are being monitored.  If null and the current GameObject has a CinemachineVirtualCameraBase component, that component will be used.")]
/// @brief Field EventTarget, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  ___EventTarget;

/// [Space]
/// [Tooltip("This event will fire whenever a virtual camera becomes active in the context of a mixer.  If a blend is involved, then the event will fire on the first frame of the blend.")]
/// @brief Field CameraActivatedEvent, offset: 0x28, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineCore_CameraEvent*  ___CameraActivatedEvent;

/// [Tooltip("This event will fire whenever a virtual stops being live.  If a blend is involved, then the event will fire after the last frame of the blend.")]
/// @brief Field CameraDeactivatedEvent, offset: 0x30, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineCore_CameraEvent*  ___CameraDeactivatedEvent;

/// [Tooltip("This event will fire whenever a blend is created that involves this camera.  The handler can modify any settings in the blend, except the cameras themselves.")]
/// @brief Field BlendCreatedEvent, offset: 0x38, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineCore_BlendEvent*  ___BlendCreatedEvent;

/// [Tooltip("This event will fire whenever a virtual camera finishes blending in.  It will not fire if the blend length is zero.")]
/// @brief Field BlendFinishedEvent, offset: 0x40, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineCore_CameraEvent*  ___BlendFinishedEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineCameraEvents, ___EventTarget) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCameraEvents, ___CameraActivatedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCameraEvents, ___CameraDeactivatedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCameraEvents, ___BlendCreatedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCameraEvents, ___BlendFinishedEvent) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineCameraEvents) == 0x48, "Size mismatch!");

} // namespace end def Unity::Cinemachine
