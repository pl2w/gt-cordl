#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ICinemachineCamera.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_ActivationEventParams_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ICinemachineCamera)
namespace GlobalNamespace {
struct ICinemachineCamera_ActivationEventParams;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class ICinemachineCamera_ActivationEvent;
}
namespace Unity::Cinemachine {
class ICinemachineMixer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace Unity::Cinemachine {
class ICinemachineCamera_ActivationEvent;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::ICinemachineCamera*);
MARK_REF_T(::Unity::Cinemachine::ICinemachineCamera_ActivationEvent*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::ICinemachineCamera*, "Unity.Cinemachine", "ICinemachineCamera");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::ICinemachineCamera_ActivationEvent*, "Unity.Cinemachine", "ICinemachineCamera/ActivationEvent");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.ICinemachineCamera
class CORDL_TYPE ICinemachineCamera {
public:
// Declarations
using ActivationEventParams = ::GlobalNamespace::ICinemachineCamera_ActivationEventParams;

using ActivationEvent = ::Unity::Cinemachine::ICinemachineCamera_ActivationEvent;

 __declspec(property(get=get_Description)) ::StringW  Description;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ParentCamera)) ::Unity::Cinemachine::ICinemachineMixer*  ParentCamera;

 __declspec(property(get=get_State)) ::Unity::Cinemachine::CameraState  State;

/// @brief Method OnCameraActivated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnCameraActivated(::GlobalNamespace::ICinemachineCamera_ActivationEventParams  evt) ;

/// @brief Method UpdateCameraState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateCameraState(::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method get_Description, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Description() ;

/// @brief Method get_IsValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsValid() ;

/// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Name() ;

/// @brief Method get_ParentCamera, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Unity::Cinemachine::ICinemachineMixer* get_ParentCamera() ;

/// @brief Method get_State, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Unity::Cinemachine::CameraState get_State() ;

// Ctor Parameters [CppParam { name: "", ty: "ICinemachineCamera", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICinemachineCamera(ICinemachineCamera const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22322};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
// Dependencies Unity.Cinemachine.ICinemachineCamera::ActivationEventParams, UnityEngine.Events.UnityEvent`1<T0>
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.ICinemachineCamera/ActivationEvent
class CORDL_TYPE ICinemachineCamera_ActivationEvent : public ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::ICinemachineCamera_ActivationEventParams> {
public:
// Declarations
static inline ::Unity::Cinemachine::ICinemachineCamera_ActivationEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xaeb2d9c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ICinemachineCamera_ActivationEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ICinemachineCamera_ActivationEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ICinemachineCamera_ActivationEvent(ICinemachineCamera_ActivationEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ICinemachineCamera_ActivationEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICinemachineCamera_ActivationEvent(ICinemachineCamera_ActivationEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22321};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::ICinemachineCamera_ActivationEvent) == 0x30, "Size mismatch!");

} // namespace end def Unity::Cinemachine
