#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineLegacyCameraEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CinemachineLegacyCameraEvents)
namespace GlobalNamespace {
struct ICinemachineCamera_ActivationEventParams;
}
namespace Unity::Cinemachine {
class CinemachineLegacyCameraEvents_OnCameraLiveEvent;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineLegacyCameraEvents;
}
namespace Unity::Cinemachine {
class CinemachineLegacyCameraEvents_OnCameraLiveEvent;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineLegacyCameraEvents*);
MARK_REF_T(::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineLegacyCameraEvents*, "Unity.Cinemachine", "CinemachineLegacyCameraEvents");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*, "Unity.Cinemachine", "CinemachineLegacyCameraEvents/OnCameraLiveEvent");
// [Obsolete("Please use CinemachineCameraEvents instead.")]
// [AddComponentMenu("")]
// Dependencies UnityEngine.MonoBehaviour
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineLegacyCameraEvents
class CORDL_TYPE CinemachineLegacyCameraEvents : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using OnCameraLiveEvent = ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent;

/// @brief Field OnCameraLive, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCameraLive, put=__cordl_internal_set_OnCameraLive)) ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*  OnCameraLive;

/// @brief Field m_Vcam, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Vcam, put=__cordl_internal_set_m_Vcam)) ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  m_Vcam;

static inline ::Unity::Cinemachine::CinemachineLegacyCameraEvents* New_ctor() ;

/// @brief Method OnCameraActivated, addr 0xaed41ac, size 0x74, virtual false, abstract: false, final false
inline void OnCameraActivated(::GlobalNamespace::ICinemachineCamera_ActivationEventParams  evt) ;

/// @brief Method OnDisable, addr 0xaed40dc, size 0xd0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xaed3f9c, size 0x140, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent* const& __cordl_internal_get_OnCameraLive() const;

constexpr ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*& __cordl_internal_get_OnCameraLive() ;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> const& __cordl_internal_get_m_Vcam() const;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>& __cordl_internal_get_m_Vcam() ;

constexpr void __cordl_internal_set_OnCameraLive(::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*  value) ;

constexpr void __cordl_internal_set_m_Vcam(::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  value) ;

/// @brief Method .ctor, addr 0xaed4220, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineLegacyCameraEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineLegacyCameraEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineLegacyCameraEvents(CinemachineLegacyCameraEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineLegacyCameraEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineLegacyCameraEvents(CinemachineLegacyCameraEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22421};

/// [Tooltip("This event fires when the CinemachineCamera goes Live")]
/// @brief Field OnCameraLive, offset: 0x20, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent*  ___OnCameraLive;

/// @brief Field m_Vcam, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  ___m_Vcam;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineLegacyCameraEvents, ___OnCameraLive) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineLegacyCameraEvents, ___m_Vcam) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineLegacyCameraEvents) == 0x30, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies UnityEngine.Events.UnityEvent`2<T0, T1>
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineLegacyCameraEvents/OnCameraLiveEvent
class CORDL_TYPE CinemachineLegacyCameraEvents_OnCameraLiveEvent : public ::UnityEngine::Events::UnityEvent_2<::Unity::Cinemachine::ICinemachineCamera*,::Unity::Cinemachine::ICinemachineCamera*> {
public:
// Declarations
static inline ::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xaed4288, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineLegacyCameraEvents_OnCameraLiveEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineLegacyCameraEvents_OnCameraLiveEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineLegacyCameraEvents_OnCameraLiveEvent(CinemachineLegacyCameraEvents_OnCameraLiveEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineLegacyCameraEvents_OnCameraLiveEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineLegacyCameraEvents_OnCameraLiveEvent(CinemachineLegacyCameraEvents_OnCameraLiveEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22420};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::CinemachineLegacyCameraEvents_OnCameraLiveEvent) == 0x30, "Size mismatch!");

} // namespace end def Unity::Cinemachine
