#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/TeleportProceduralArcVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__TubePoint_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TeleportProceduralArcVisual)
namespace Oculus::Interaction::DistanceReticles {
class IReticleData;
}
namespace Oculus::Interaction::Input {
class IAxis1D;
}
namespace Oculus::Interaction::Locomotion {
class TeleportInteractable;
}
namespace Oculus::Interaction::Locomotion {
class TeleportInteractor;
}
namespace Oculus::Interaction {
struct InteractorStateChangeArgs;
}
namespace Oculus::Interaction {
class PinchPointerVisual;
}
namespace Oculus::Interaction {
class TubeRenderer;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class TeleportProceduralArcVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual*, "Oculus.Interaction.Locomotion", "TeleportProceduralArcVisual");
// Dependencies Oculus.Interaction.TubePoint, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.TeleportProceduralArcVisual
class CORDL_TYPE TeleportProceduralArcVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ArcPointsCount, put=set_ArcPointsCount)) int32_t  ArcPointsCount;

 __declspec(property(get=get_NoDestinationTint, put=set_NoDestinationTint)) ::UnityEngine::Color  NoDestinationTint;

/// @brief Field Progress, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Progress, put=__cordl_internal_set_Progress)) ::Oculus::Interaction::Input::IAxis1D*  Progress;

/// @brief Field _arcPoints, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__arcPoints, put=__cordl_internal_set__arcPoints)) ::ArrayW<::Oculus::Interaction::TubePoint>  _arcPoints;

/// @brief Field _arcPointsCount, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__arcPointsCount, put=__cordl_internal_set__arcPointsCount)) int32_t  _arcPointsCount;

/// @brief Field _interactor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactor, put=__cordl_internal_set__interactor)) ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>  _interactor;

/// @brief Field _noDestinationTint, offset 0x54, size 0x10 
 __declspec(property(get=__cordl_internal_get__noDestinationTint, put=__cordl_internal_set__noDestinationTint)) ::UnityEngine::Color  _noDestinationTint;

/// @brief Field _pointer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointer, put=__cordl_internal_set__pointer)) ::UnityW<::Oculus::Interaction::PinchPointerVisual>  _pointer;

/// @brief Field _pointerAnchor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointerAnchor, put=__cordl_internal_set__pointerAnchor)) ::UnityW<::UnityEngine::Transform>  _pointerAnchor;

/// @brief Field _progress, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__progress, put=__cordl_internal_set__progress)) ::UnityW<::UnityEngine::Object>  _progress;

/// @brief Field _reticleData, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__reticleData, put=__cordl_internal_set__reticleData)) ::Oculus::Interaction::DistanceReticles::IReticleData*  _reticleData;

/// @brief Field _started, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _tubeRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__tubeRenderer, put=__cordl_internal_set__tubeRenderer)) ::UnityW<::Oculus::Interaction::TubeRenderer>  _tubeRenderer;

/// @brief Method Awake, addr 0xa4cfb04, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateMidpointFactor, addr 0xa4d0c58, size 0x28, virtual false, abstract: false, final false
static inline float_t CalculateMidpointFactor(float_t  pitchDot) ;

/// @brief Method EvaluateBezierArc, addr 0xa4d0c80, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 EvaluateBezierArc(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  middle, ::UnityEngine::Vector3  end, float_t  t) ;

/// @brief Method HandleInteractableSet, addr 0xa4d0160, size 0xb4, virtual false, abstract: false, final false
inline void HandleInteractableSet(::Oculus::Interaction::Locomotion::TeleportInteractable*  interactable) ;

/// @brief Method HandleInteractableUnset, addr 0xa4d0214, size 0xc, virtual false, abstract: false, final false
inline void HandleInteractableUnset(::Oculus::Interaction::Locomotion::TeleportInteractable*  obj) ;

/// @brief Method HandleInteractorPostProcessed, addr 0xa4d0248, size 0x29c, virtual false, abstract: false, final false
inline void HandleInteractorPostProcessed() ;

/// @brief Method HandleInteractorStateChanged, addr 0xa4d0220, size 0x28, virtual false, abstract: false, final false
inline void HandleInteractorStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  stateChange) ;

/// @brief Method InjectAllTeleportProceduralArcVisual, addr 0xa4d0cf8, size 0x8, virtual false, abstract: false, final false
inline void InjectAllTeleportProceduralArcVisual(::Oculus::Interaction::Locomotion::TeleportInteractor*  interactor) ;

/// @brief Method InjectOptionalPointer, addr 0xa4d0dd8, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalPointer(::Oculus::Interaction::PinchPointerVisual*  pointer) ;

/// @brief Method InjectOptionalPointerAnchor, addr 0xa4d0de0, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalPointerAnchor(::UnityEngine::Transform*  pointerAnchor) ;

/// @brief Method InjectOptionalProgress, addr 0xa4d0d08, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalProgress(::Oculus::Interaction::Input::IAxis1D*  progress) ;

/// @brief Method InjectTeleportInteractor, addr 0xa4d0d00, size 0x8, virtual false, abstract: false, final false
inline void InjectTeleportInteractor(::Oculus::Interaction::Locomotion::TeleportInteractor*  interactor) ;

static inline ::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4cfea4, size 0x2bc, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4cfbf0, size 0x2b4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa4cfb6c, size 0x84, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdatePointer, addr 0xa4d0ae8, size 0x170, virtual false, abstract: false, final false
inline void UpdatePointer(::UnityEngine::Color  tint, ::UnityEngine::Vector3  target) ;

/// @brief Method UpdateVisualArcPoints, addr 0xa4d04e4, size 0x604, virtual false, abstract: false, final false
inline void UpdateVisualArcPoints(::UnityEngine::Pose  origin, ::UnityEngine::Vector3  target) ;

constexpr ::Oculus::Interaction::Input::IAxis1D* const& __cordl_internal_get_Progress() const;

constexpr ::Oculus::Interaction::Input::IAxis1D*& __cordl_internal_get_Progress() ;

constexpr ::ArrayW<::Oculus::Interaction::TubePoint> const& __cordl_internal_get__arcPoints() const;

constexpr ::ArrayW<::Oculus::Interaction::TubePoint>& __cordl_internal_get__arcPoints() ;

constexpr int32_t const& __cordl_internal_get__arcPointsCount() const;

constexpr int32_t& __cordl_internal_get__arcPointsCount() ;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor> const& __cordl_internal_get__interactor() const;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>& __cordl_internal_get__interactor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__noDestinationTint() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__noDestinationTint() ;

constexpr ::UnityW<::Oculus::Interaction::PinchPointerVisual> const& __cordl_internal_get__pointer() const;

constexpr ::UnityW<::Oculus::Interaction::PinchPointerVisual>& __cordl_internal_get__pointer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__pointerAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__pointerAnchor() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__progress() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__progress() ;

constexpr ::Oculus::Interaction::DistanceReticles::IReticleData* const& __cordl_internal_get__reticleData() const;

constexpr ::Oculus::Interaction::DistanceReticles::IReticleData*& __cordl_internal_get__reticleData() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityW<::Oculus::Interaction::TubeRenderer> const& __cordl_internal_get__tubeRenderer() const;

constexpr ::UnityW<::Oculus::Interaction::TubeRenderer>& __cordl_internal_get__tubeRenderer() ;

constexpr void __cordl_internal_set_Progress(::Oculus::Interaction::Input::IAxis1D*  value) ;

constexpr void __cordl_internal_set__arcPoints(::ArrayW<::Oculus::Interaction::TubePoint>  value) ;

constexpr void __cordl_internal_set__arcPointsCount(int32_t  value) ;

constexpr void __cordl_internal_set__interactor(::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>  value) ;

constexpr void __cordl_internal_set__noDestinationTint(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__pointer(::UnityW<::Oculus::Interaction::PinchPointerVisual>  value) ;

constexpr void __cordl_internal_set__pointerAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__progress(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__reticleData(::Oculus::Interaction::DistanceReticles::IReticleData*  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__tubeRenderer(::UnityW<::Oculus::Interaction::TubeRenderer>  value) ;

/// @brief Method .ctor, addr 0xa4d0de8, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ArcPointsCount, addr 0xa4cfadc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ArcPointsCount() ;

/// @brief Method get_NoDestinationTint, addr 0xa4cfaec, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_NoDestinationTint() ;

/// @brief Method set_ArcPointsCount, addr 0xa4cfae4, size 0x8, virtual false, abstract: false, final false
inline void set_ArcPointsCount(int32_t  value) ;

/// @brief Method set_NoDestinationTint, addr 0xa4cfaf8, size 0xc, virtual false, abstract: false, final false
inline void set_NoDestinationTint(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportProceduralArcVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportProceduralArcVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportProceduralArcVisual(TeleportProceduralArcVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportProceduralArcVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportProceduralArcVisual(TeleportProceduralArcVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16288};

/// [SerializeField]
/// @brief Field _interactor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>  ____interactor;

/// [SerializeField]
/// @brief Field _tubeRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::TubeRenderer>  ____tubeRenderer;

/// [SerializeField]
/// [Optional]
/// @brief Field _pointer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PinchPointerVisual>  ____pointer;

/// [SerializeField]
/// [Optional]
/// @brief Field _pointerAnchor, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____pointerAnchor;

/// [SerializeField]
/// [Optional]
/// [Interface(typeof(Oculus.Interaction.Input.IAxis1D), new[] {  })]
/// @brief Field _progress, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____progress;

/// @brief Field Progress, offset: 0x48, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IAxis1D*  ___Progress;

/// [SerializeField]
/// [Min(2)]
/// @brief Field _arcPointsCount, offset: 0x50, size: 0x4, def value: None
 int32_t  ____arcPointsCount;

/// [SerializeField]
/// @brief Field _noDestinationTint, offset: 0x54, size: 0x10, def value: None
 ::UnityEngine::Color  ____noDestinationTint;

/// @brief Field _arcPoints, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::TubePoint>  ____arcPoints;

/// @brief Field _reticleData, offset: 0x70, size: 0x8, def value: None
 ::Oculus::Interaction::DistanceReticles::IReticleData*  ____reticleData;

/// @brief Field _started, offset: 0x78, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual, ____interactor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual, ____tubeRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual, ____pointer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual, ____pointerAnchor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual, ____progress) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual, ___Progress) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual, ____arcPointsCount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual, ____noDestinationTint) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual, ____arcPoints) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual, ____reticleData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual, ____started) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::TeleportProceduralArcVisual) == 0x80, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
