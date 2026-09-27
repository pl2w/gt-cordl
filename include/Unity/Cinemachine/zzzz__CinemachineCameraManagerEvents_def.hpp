#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineCameraManagerEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineMixerEventsBase_def.hpp"
CORDL_MODULE_EXPORT(CinemachineCameraManagerEvents)
namespace Unity::Cinemachine {
class CinemachineCameraManagerBase;
}
namespace Unity::Cinemachine {
class ICinemachineMixer;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineCameraManagerEvents;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineCameraManagerEvents*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineCameraManagerEvents*, "Unity.Cinemachine", "CinemachineCameraManagerEvents");
// [AddComponentMenu("Cinemachine/Helpers/Cinemachine Camera Manager Events")]
// [SaveDuringPlay]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineCameraManagerEvents.html")]
// Dependencies Unity.Cinemachine.CinemachineMixerEventsBase
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineCameraManagerEvents
class CORDL_TYPE CinemachineCameraManagerEvents : public ::Unity::Cinemachine::CinemachineMixerEventsBase {
public:
// Declarations
/// @brief Field CameraManager, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_CameraManager, put=__cordl_internal_set_CameraManager)) ::UnityW<::Unity::Cinemachine::CinemachineCameraManagerBase>  CameraManager;

/// @brief Method GetMixer, addr 0xaedf330, size 0x8, virtual true, abstract: false, final false
inline ::Unity::Cinemachine::ICinemachineMixer* GetMixer() ;

static inline ::Unity::Cinemachine::CinemachineCameraManagerEvents* New_ctor() ;

/// @brief Method OnDisable, addr 0xaedf3d0, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xaedf338, size 0x98, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineCameraManagerBase> const& __cordl_internal_get_CameraManager() const;

constexpr ::UnityW<::Unity::Cinemachine::CinemachineCameraManagerBase>& __cordl_internal_get_CameraManager() ;

constexpr void __cordl_internal_set_CameraManager(::UnityW<::Unity::Cinemachine::CinemachineCameraManagerBase>  value) ;

/// @brief Method .ctor, addr 0xaedf3d4, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineCameraManagerEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCameraManagerEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineCameraManagerEvents(CinemachineCameraManagerEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCameraManagerEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineCameraManagerEvents(CinemachineCameraManagerEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22454};

/// [Tooltip("This is the CinemachineCameraManager emitting the events.  If null and the current GameObject has a CinemachineCameraManager component, that component will be used.")]
/// @brief Field CameraManager, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachineCameraManagerBase>  ___CameraManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineCameraManagerEvents, ___CameraManager) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineCameraManagerEvents) == 0x50, "Size mismatch!");

} // namespace end def Unity::Cinemachine
