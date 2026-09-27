#pragma once
// IWYU pragma private; include "GlobalNamespace/MonitorOutputController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/GorillaTag/zzzz__CameraMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MonitorOutputController)
namespace GlobalNamespace {
struct LckBodyCameraSpawner_CameraState;
}
namespace Liv::Lck::GorillaTag {
struct CameraMode;
}
namespace Liv::Lck::GorillaTag {
class GTLckController;
}
namespace Liv::Lck {
class ILckCamera;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class MonitorOutputController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonitorOutputController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonitorOutputController*, "", "MonitorOutputController");
// Dependencies Liv.Lck.GorillaTag.CameraMode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonitorOutputController
class CORDL_TYPE MonitorOutputController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _gtLckController, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__gtLckController, put=__cordl_internal_set__gtLckController)) ::UnityW<::Liv::Lck::GorillaTag::GTLckController>  _gtLckController;

/// @brief Field _lckActiveCameraMode, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__lckActiveCameraMode, put=__cordl_internal_set__lckActiveCameraMode)) ::Liv::Lck::GorillaTag::CameraMode  _lckActiveCameraMode;

/// @brief Field _lckCamera, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckCamera, put=__cordl_internal_set__lckCamera)) ::UnityW<::UnityEngine::Camera>  _lckCamera;

/// @brief Field _shoulderCamera, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__shoulderCamera, put=__cordl_internal_set__shoulderCamera)) ::UnityW<::UnityEngine::Camera>  _shoulderCamera;

/// @brief Field _shoulderCameraFov, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__shoulderCameraFov, put=__cordl_internal_set__shoulderCameraFov)) float_t  _shoulderCameraFov;

/// @brief Method Awake, addr 0x56ceae8, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CameraStateChanged, addr 0x56cef04, size 0x20, virtual false, abstract: false, final false
inline void CameraStateChanged(::GlobalNamespace::LckBodyCameraSpawner_CameraState  state) ;

/// @brief Method FindShoulderCamera, addr 0x56cedb0, size 0x154, virtual false, abstract: false, final false
inline void FindShoulderCamera() ;

static inline ::GlobalNamespace::MonitorOutputController* New_ctor() ;

/// @brief Method OnCameraModeChanged, addr 0x56cf1e8, size 0xc8, virtual false, abstract: false, final false
inline void OnCameraModeChanged(::Liv::Lck::GorillaTag::CameraMode  mode, ::Liv::Lck::ILckCamera*  lckCamera) ;

/// @brief Method OnDisable, addr 0x56cf0d0, size 0x118, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56ceb18, size 0xd8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RestoreShoulderCamera, addr 0x56cef24, size 0xe4, virtual false, abstract: false, final false
inline void RestoreShoulderCamera() ;

/// @brief Method TakeOverShoulderCamera, addr 0x56cf008, size 0xc8, virtual false, abstract: false, final false
inline void TakeOverShoulderCamera() ;

/// @brief Method Update, addr 0x56cebf0, size 0x1c0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController> const& __cordl_internal_get__gtLckController() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController>& __cordl_internal_get__gtLckController() ;

constexpr ::Liv::Lck::GorillaTag::CameraMode const& __cordl_internal_get__lckActiveCameraMode() const;

constexpr ::Liv::Lck::GorillaTag::CameraMode& __cordl_internal_get__lckActiveCameraMode() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__lckCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__lckCamera() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__shoulderCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__shoulderCamera() ;

constexpr float_t const& __cordl_internal_get__shoulderCameraFov() const;

constexpr float_t& __cordl_internal_get__shoulderCameraFov() ;

constexpr void __cordl_internal_set__gtLckController(::UnityW<::Liv::Lck::GorillaTag::GTLckController>  value) ;

constexpr void __cordl_internal_set__lckActiveCameraMode(::Liv::Lck::GorillaTag::CameraMode  value) ;

constexpr void __cordl_internal_set__lckCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__shoulderCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__shoulderCameraFov(float_t  value) ;

/// @brief Method .ctor, addr 0x56cf2b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonitorOutputController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonitorOutputController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonitorOutputController(MonitorOutputController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonitorOutputController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonitorOutputController(MonitorOutputController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1046};

/// [SerializeField]
/// @brief Field _gtLckController, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GTLckController>  ____gtLckController;

/// @brief Field _lckCamera, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____lckCamera;

/// @brief Field _lckActiveCameraMode, offset: 0x30, size: 0x4, def value: None
 ::Liv::Lck::GorillaTag::CameraMode  ____lckActiveCameraMode;

/// @brief Field _shoulderCamera, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____shoulderCamera;

/// @brief Field _shoulderCameraFov, offset: 0x40, size: 0x4, def value: None
 float_t  ____shoulderCameraFov;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonitorOutputController, ____gtLckController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonitorOutputController, ____lckCamera) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonitorOutputController, ____lckActiveCameraMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonitorOutputController, ____shoulderCamera) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonitorOutputController, ____shoulderCameraFov) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonitorOutputController) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
