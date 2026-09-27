#pragma once
// IWYU pragma private; include "GlobalNamespace/LckTabletSizeManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LckTabletSizeManager)
namespace GlobalNamespace {
class LckDirectGrabbable;
}
namespace Liv::Lck::GorillaTag {
struct CameraMode;
}
namespace Liv::Lck::GorillaTag {
class GTLckController;
}
namespace Liv::Lck::GorillaTag {
class GtTabletFollower;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class LckTabletSizeManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LckTabletSizeManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckTabletSizeManager*, "", "LckTabletSizeManager");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: LckTabletSizeManager
class CORDL_TYPE LckTabletSizeManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _controller, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::Liv::Lck::GorillaTag::GTLckController>  _controller;

/// @brief Field _customNearClip, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__customNearClip, put=__cordl_internal_set__customNearClip)) float_t  _customNearClip;

/// @brief Field _firstPersonCamDefaultPosition, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get__firstPersonCamDefaultPosition, put=__cordl_internal_set__firstPersonCamDefaultPosition)) ::UnityEngine::Vector3  _firstPersonCamDefaultPosition;

/// @brief Field _firstPersonCamShrinkPosition, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get__firstPersonCamShrinkPosition, put=__cordl_internal_set__firstPersonCamShrinkPosition)) ::UnityEngine::Vector3  _firstPersonCamShrinkPosition;

/// @brief Field _firstPersonCamera, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstPersonCamera, put=__cordl_internal_set__firstPersonCamera)) ::UnityW<::UnityEngine::Camera>  _firstPersonCamera;

/// @brief Field _isDefaultScale, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDefaultScale, put=__cordl_internal_set__isDefaultScale)) bool  _isDefaultScale;

/// @brief Field _lckDirectGrabbable, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckDirectGrabbable, put=__cordl_internal_set__lckDirectGrabbable)) ::UnityW<::GlobalNamespace::LckDirectGrabbable>  _lckDirectGrabbable;

/// @brief Field _selfieCamera, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__selfieCamera, put=__cordl_internal_set__selfieCamera)) ::UnityW<::UnityEngine::Camera>  _selfieCamera;

/// @brief Field _shrinkSize, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__shrinkSize, put=__cordl_internal_set__shrinkSize)) float_t  _shrinkSize;

/// @brief Field _shrinkVector, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get__shrinkVector, put=__cordl_internal_set__shrinkVector)) ::UnityEngine::Vector3  _shrinkVector;

/// @brief Field _tabletFollower, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__tabletFollower, put=__cordl_internal_set__tabletFollower)) ::UnityW<::Liv::Lck::GorillaTag::GtTabletFollower>  _tabletFollower;

/// @brief Method ClearCustomNearClip, addr 0x56cca78, size 0x30, virtual false, abstract: false, final false
inline void ClearCustomNearClip() ;

static inline ::GlobalNamespace::LckTabletSizeManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x56cc6e8, size 0x140, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnHorizontalModeChanged, addr 0x56cc828, size 0x20, virtual false, abstract: false, final false
inline void OnHorizontalModeChanged(bool  mode) ;

/// @brief Method PlayerBecameDefaultSize, addr 0x56cccbc, size 0xc8, virtual false, abstract: false, final false
inline void PlayerBecameDefaultSize() ;

/// @brief Method PlayerBecameSmall, addr 0x56ccaa8, size 0x78, virtual false, abstract: false, final false
inline void PlayerBecameSmall() ;

/// @brief Method SetCameraOnNeck, addr 0x56ccb20, size 0x19c, virtual false, abstract: false, final false
inline void SetCameraOnNeck() ;

/// @brief Method SetCustomNearClip, addr 0x56cc924, size 0x154, virtual false, abstract: false, final false
inline void SetCustomNearClip(::UnityEngine::Camera*  cam) ;

/// @brief Method Start, addr 0x56cc5a8, size 0x140, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x56ccd84, size 0x1fc, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateCustomNearClip, addr 0x56cc848, size 0xdc, virtual false, abstract: false, final false
inline void UpdateCustomNearClip(::Liv::Lck::GorillaTag::CameraMode  mode) ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController>& __cordl_internal_get__controller() ;

constexpr float_t const& __cordl_internal_get__customNearClip() const;

constexpr float_t& __cordl_internal_get__customNearClip() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__firstPersonCamDefaultPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__firstPersonCamDefaultPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__firstPersonCamShrinkPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__firstPersonCamShrinkPosition() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__firstPersonCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__firstPersonCamera() ;

constexpr bool const& __cordl_internal_get__isDefaultScale() const;

constexpr bool& __cordl_internal_get__isDefaultScale() ;

constexpr ::UnityW<::GlobalNamespace::LckDirectGrabbable> const& __cordl_internal_get__lckDirectGrabbable() const;

constexpr ::UnityW<::GlobalNamespace::LckDirectGrabbable>& __cordl_internal_get__lckDirectGrabbable() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__selfieCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__selfieCamera() ;

constexpr float_t const& __cordl_internal_get__shrinkSize() const;

constexpr float_t& __cordl_internal_get__shrinkSize() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__shrinkVector() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__shrinkVector() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtTabletFollower> const& __cordl_internal_get__tabletFollower() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtTabletFollower>& __cordl_internal_get__tabletFollower() ;

constexpr void __cordl_internal_set__controller(::UnityW<::Liv::Lck::GorillaTag::GTLckController>  value) ;

constexpr void __cordl_internal_set__customNearClip(float_t  value) ;

constexpr void __cordl_internal_set__firstPersonCamDefaultPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__firstPersonCamShrinkPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__firstPersonCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__isDefaultScale(bool  value) ;

constexpr void __cordl_internal_set__lckDirectGrabbable(::UnityW<::GlobalNamespace::LckDirectGrabbable>  value) ;

constexpr void __cordl_internal_set__selfieCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__shrinkSize(float_t  value) ;

constexpr void __cordl_internal_set__shrinkVector(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__tabletFollower(::UnityW<::Liv::Lck::GorillaTag::GtTabletFollower>  value) ;

/// @brief Method .ctor, addr 0x56ccf80, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckTabletSizeManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckTabletSizeManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckTabletSizeManager(LckTabletSizeManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckTabletSizeManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckTabletSizeManager(LckTabletSizeManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1042};

/// [SerializeField]
/// @brief Field _controller, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GTLckController>  ____controller;

/// [SerializeField]
/// @brief Field _lckDirectGrabbable, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LckDirectGrabbable>  ____lckDirectGrabbable;

/// [SerializeField]
/// @brief Field _tabletFollower, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtTabletFollower>  ____tabletFollower;

/// [SerializeField]
/// @brief Field _firstPersonCamera, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____firstPersonCamera;

/// [SerializeField]
/// @brief Field _selfieCamera, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____selfieCamera;

/// @brief Field _firstPersonCamShrinkPosition, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____firstPersonCamShrinkPosition;

/// @brief Field _firstPersonCamDefaultPosition, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____firstPersonCamDefaultPosition;

/// @brief Field _shrinkSize, offset: 0x60, size: 0x4, def value: None
 float_t  ____shrinkSize;

/// @brief Field _shrinkVector, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____shrinkVector;

/// @brief Field _customNearClip, offset: 0x70, size: 0x4, def value: None
 float_t  ____customNearClip;

/// @brief Field _isDefaultScale, offset: 0x74, size: 0x1, def value: None
 bool  ____isDefaultScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckTabletSizeManager, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckTabletSizeManager, ____lckDirectGrabbable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckTabletSizeManager, ____tabletFollower) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckTabletSizeManager, ____firstPersonCamera) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckTabletSizeManager, ____selfieCamera) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckTabletSizeManager, ____firstPersonCamShrinkPosition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckTabletSizeManager, ____firstPersonCamDefaultPosition) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckTabletSizeManager, ____shrinkSize) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckTabletSizeManager, ____shrinkVector) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckTabletSizeManager, ____customNearClip) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckTabletSizeManager, ____isDefaultScale) == 0x74, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckTabletSizeManager) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
