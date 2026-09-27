#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineMixerEventsBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CinemachineMixerEventsBase)
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
class ICinemachineCamera;
}
namespace Unity::Cinemachine {
class ICinemachineMixer;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineMixerEventsBase;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineMixerEventsBase*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineMixerEventsBase*, "Unity.Cinemachine", "CinemachineMixerEventsBase");
// [SaveDuringPlay]
// Dependencies UnityEngine.MonoBehaviour
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineMixerEventsBase
class CORDL_TYPE CinemachineMixerEventsBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field BlendCreatedEvent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_BlendCreatedEvent, put=__cordl_internal_set_BlendCreatedEvent)) ::Unity::Cinemachine::CinemachineCore_BlendEvent*  BlendCreatedEvent;

/// @brief Field BlendFinishedEvent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_BlendFinishedEvent, put=__cordl_internal_set_BlendFinishedEvent)) ::Unity::Cinemachine::CinemachineCore_CameraEvent*  BlendFinishedEvent;

/// @brief Field CameraActivatedEvent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CameraActivatedEvent, put=__cordl_internal_set_CameraActivatedEvent)) ::Unity::Cinemachine::CinemachineCore_CameraEvent*  CameraActivatedEvent;

/// @brief Field CameraCutEvent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_CameraCutEvent, put=__cordl_internal_set_CameraCutEvent)) ::Unity::Cinemachine::CinemachineCore_CameraEvent*  CameraCutEvent;

/// @brief Field CameraDeactivatedEvent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_CameraDeactivatedEvent, put=__cordl_internal_set_CameraDeactivatedEvent)) ::Unity::Cinemachine::CinemachineCore_CameraEvent*  CameraDeactivatedEvent;

/// @brief Method GetMixer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Unity::Cinemachine::ICinemachineMixer* GetMixer() ;

/// @brief Method InstallHandlers, addr 0xaede3f8, size 0x240, virtual false, abstract: false, final false
inline void InstallHandlers(::Unity::Cinemachine::ICinemachineMixer*  mixer) ;

static inline ::Unity::Cinemachine::CinemachineMixerEventsBase* New_ctor() ;

/// @brief Method OnBlendCreated, addr 0xaee02e0, size 0x90, virtual false, abstract: false, final false
inline void OnBlendCreated(::GlobalNamespace::CinemachineCore_BlendEventParams  evt) ;

/// @brief Method OnBlendFinished, addr 0xaee0370, size 0x90, virtual false, abstract: false, final false
inline void OnBlendFinished(::Unity::Cinemachine::ICinemachineMixer*  mixer, ::Unity::Cinemachine::ICinemachineCamera*  cam) ;

/// @brief Method OnCameraActivated, addr 0xaee019c, size 0xb4, virtual false, abstract: false, final false
inline void OnCameraActivated(::GlobalNamespace::ICinemachineCamera_ActivationEventParams  evt) ;

/// @brief Method OnCameraDeactivated, addr 0xaee0250, size 0x90, virtual false, abstract: false, final false
inline void OnCameraDeactivated(::Unity::Cinemachine::ICinemachineMixer*  mixer, ::Unity::Cinemachine::ICinemachineCamera*  cam) ;

/// @brief Method UninstallHandlers, addr 0xaede710, size 0x220, virtual false, abstract: false, final false
inline void UninstallHandlers() ;

constexpr ::Unity::Cinemachine::CinemachineCore_BlendEvent* const& __cordl_internal_get_BlendCreatedEvent() const;

constexpr ::Unity::Cinemachine::CinemachineCore_BlendEvent*& __cordl_internal_get_BlendCreatedEvent() ;

constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent* const& __cordl_internal_get_BlendFinishedEvent() const;

constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent*& __cordl_internal_get_BlendFinishedEvent() ;

constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent* const& __cordl_internal_get_CameraActivatedEvent() const;

constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent*& __cordl_internal_get_CameraActivatedEvent() ;

constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent* const& __cordl_internal_get_CameraCutEvent() const;

constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent*& __cordl_internal_get_CameraCutEvent() ;

constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent* const& __cordl_internal_get_CameraDeactivatedEvent() const;

constexpr ::Unity::Cinemachine::CinemachineCore_CameraEvent*& __cordl_internal_get_CameraDeactivatedEvent() ;

constexpr void __cordl_internal_set_BlendCreatedEvent(::Unity::Cinemachine::CinemachineCore_BlendEvent*  value) ;

constexpr void __cordl_internal_set_BlendFinishedEvent(::Unity::Cinemachine::CinemachineCore_CameraEvent*  value) ;

constexpr void __cordl_internal_set_CameraActivatedEvent(::Unity::Cinemachine::CinemachineCore_CameraEvent*  value) ;

constexpr void __cordl_internal_set_CameraCutEvent(::Unity::Cinemachine::CinemachineCore_CameraEvent*  value) ;

constexpr void __cordl_internal_set_CameraDeactivatedEvent(::Unity::Cinemachine::CinemachineCore_CameraEvent*  value) ;

/// @brief Method .ctor, addr 0xaedea44, size 0x118, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineMixerEventsBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineMixerEventsBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineMixerEventsBase(CinemachineMixerEventsBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineMixerEventsBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineMixerEventsBase(CinemachineMixerEventsBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22459};

/// [Space]
/// [Tooltip("This event will fire whenever a virtual camera goes live.  If a blend is involved, then the event will fire on the first frame of the blend.")]
/// @brief Field CameraActivatedEvent, offset: 0x20, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineCore_CameraEvent*  ___CameraActivatedEvent;

/// [Tooltip("This event will fire whenever a virtual stops being live.  If a blend is involved, then the event will fire after the last frame of the blend.")]
/// @brief Field CameraDeactivatedEvent, offset: 0x28, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineCore_CameraEvent*  ___CameraDeactivatedEvent;

/// [Tooltip("This event will fire whenever a blend is created in the root frame of this Brain.  The handler can modify any settings in the blend, except the cameras themselves.  Note: timeline tracks will not generate these events.")]
/// @brief Field BlendCreatedEvent, offset: 0x30, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineCore_BlendEvent*  ___BlendCreatedEvent;

/// [Tooltip("This event will fire whenever a virtual camera finishes blending in.  It will not fire if the blend length is zero.")]
/// @brief Field BlendFinishedEvent, offset: 0x38, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineCore_CameraEvent*  ___BlendFinishedEvent;

/// [Tooltip("This event is fired when there is a camera cut.  A camera cut is a camera activation with a zero-length blend.")]
/// @brief Field CameraCutEvent, offset: 0x40, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineCore_CameraEvent*  ___CameraCutEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineMixerEventsBase, ___CameraActivatedEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineMixerEventsBase, ___CameraDeactivatedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineMixerEventsBase, ___BlendCreatedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineMixerEventsBase, ___BlendFinishedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineMixerEventsBase, ___CameraCutEvent) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineMixerEventsBase) == 0x48, "Size mismatch!");

} // namespace end def Unity::Cinemachine
