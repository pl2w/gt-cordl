#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceReticles/DistantInteractionLineVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DistantInteractionLineVisual)
namespace Oculus::Interaction::DistanceReticles {
class DistantInteractionLineVisual_DummyPointReticle;
}
namespace Oculus::Interaction::DistanceReticles {
class IReticleData;
}
namespace Oculus::Interaction {
class IDistanceInteractor;
}
namespace Oculus::Interaction {
class IRelativeToRef;
}
namespace Oculus::Interaction {
struct InteractorStateChangeArgs;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::DistanceReticles {
class DistantInteractionLineVisual;
}
namespace Oculus::Interaction::DistanceReticles {
class DistantInteractionLineVisual_DummyPointReticle;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*);
MARK_REF_T(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*, "Oculus.Interaction.DistanceReticles", "DistantInteractionLineVisual");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle*, "Oculus.Interaction.DistanceReticles", "DistantInteractionLineVisual/DummyPointReticle");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction::DistanceReticles {
// Is value type: false
// CS Name: Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual
class CORDL_TYPE DistantInteractionLineVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DummyPointReticle = ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle;

 __declspec(property(get=get_DistanceInteractor, put=set_DistanceInteractor)) ::Oculus::Interaction::IDistanceInteractor*  DistanceInteractor;

 __declspec(property(get=get_NumLinePoints)) int32_t  NumLinePoints;

 __declspec(property(get=get_TargetlessLength)) float_t  TargetlessLength;

 __declspec(property(get=get_VisualOffset, put=set_VisualOffset)) float_t  VisualOffset;

/// @brief Field <DistanceInteractor>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__DistanceInteractor_k__BackingField, put=__cordl_internal_set__DistanceInteractor_k__BackingField)) ::Oculus::Interaction::IDistanceInteractor*  _DistanceInteractor_k__BackingField;

/// @brief Field _distanceInteractor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__distanceInteractor, put=__cordl_internal_set__distanceInteractor)) ::UnityW<::UnityEngine::Object>  _distanceInteractor;

/// @brief Field _dummyTarget, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__dummyTarget, put=__cordl_internal_set__dummyTarget)) ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle*  _dummyTarget;

/// @brief Field _linePoints, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__linePoints, put=__cordl_internal_set__linePoints)) ::ArrayW<::UnityEngine::Vector3>  _linePoints;

/// @brief Field _numLinePoints, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__numLinePoints, put=__cordl_internal_set__numLinePoints)) int32_t  _numLinePoints;

/// @brief Field _shouldDrawLine, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__shouldDrawLine, put=__cordl_internal_set__shouldDrawLine)) bool  _shouldDrawLine;

/// @brief Field _started, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _target, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::Oculus::Interaction::DistanceReticles::IReticleData*  _target;

/// @brief Field _targetlessLength, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__targetlessLength, put=__cordl_internal_set__targetlessLength)) float_t  _targetlessLength;

/// @brief Field _visibleDuringNormal, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__visibleDuringNormal, put=__cordl_internal_set__visibleDuringNormal)) bool  _visibleDuringNormal;

/// @brief Field _visualOffset, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__visualOffset, put=__cordl_internal_set__visualOffset)) float_t  _visualOffset;

/// @brief Method Awake, addr 0xa4ef428, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method EvaluateBezier, addr 0xa4f0058, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 EvaluateBezier(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  middle, ::UnityEngine::Vector3  end, float_t  t) ;

/// @brief Method HandlePostProcessed, addr 0xa4ef93c, size 0x18, virtual false, abstract: false, final false
inline void HandlePostProcessed() ;

/// @brief Method HandleStateChanged, addr 0xa4ef808, size 0x134, virtual false, abstract: false, final false
inline void HandleStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  args) ;

/// @brief Method HideLine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void HideLine() ;

/// @brief Method InjectAllDistantInteractionLineVisual, addr 0xa4f00d0, size 0x4, virtual false, abstract: false, final false
inline void InjectAllDistantInteractionLineVisual(::Oculus::Interaction::IDistanceInteractor*  interactor) ;

/// @brief Method InjectDistanceInteractor, addr 0xa4ef298, size 0xd0, virtual false, abstract: false, final false
inline void InjectDistanceInteractor(::Oculus::Interaction::IDistanceInteractor*  interactor) ;

/// @brief Method InteractableSet, addr 0xa4efca0, size 0x188, virtual true, abstract: false, final false
inline void InteractableSet(::Oculus::Interaction::IRelativeToRef*  interactable) ;

/// @brief Method InteractableUnset, addr 0xa4efe28, size 0xc, virtual true, abstract: false, final false
inline void InteractableUnset() ;

static inline ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4ef644, size 0x1c4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4ef480, size 0x1c4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RenderLine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RenderLine(::ArrayW<::UnityEngine::Vector3>  linePoints) ;

/// @brief Method Start, addr 0xa4ef1a0, size 0x7c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TargetHit, addr 0xa4efe34, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 TargetHit(::UnityEngine::Vector3  hitPoint) ;

/// @brief Method UpdateLine, addr 0xa4ef954, size 0x34c, virtual false, abstract: false, final false
inline void UpdateLine() ;

constexpr ::Oculus::Interaction::IDistanceInteractor* const& __cordl_internal_get__DistanceInteractor_k__BackingField() const;

constexpr ::Oculus::Interaction::IDistanceInteractor*& __cordl_internal_get__DistanceInteractor_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__distanceInteractor() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__distanceInteractor() ;

constexpr ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle* const& __cordl_internal_get__dummyTarget() const;

constexpr ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle*& __cordl_internal_get__dummyTarget() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__linePoints() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__linePoints() ;

constexpr int32_t const& __cordl_internal_get__numLinePoints() const;

constexpr int32_t& __cordl_internal_get__numLinePoints() ;

constexpr bool const& __cordl_internal_get__shouldDrawLine() const;

constexpr bool& __cordl_internal_get__shouldDrawLine() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::Oculus::Interaction::DistanceReticles::IReticleData* const& __cordl_internal_get__target() const;

constexpr ::Oculus::Interaction::DistanceReticles::IReticleData*& __cordl_internal_get__target() ;

constexpr float_t const& __cordl_internal_get__targetlessLength() const;

constexpr float_t& __cordl_internal_get__targetlessLength() ;

constexpr bool const& __cordl_internal_get__visibleDuringNormal() const;

constexpr bool& __cordl_internal_get__visibleDuringNormal() ;

constexpr float_t const& __cordl_internal_get__visualOffset() const;

constexpr float_t& __cordl_internal_get__visualOffset() ;

constexpr void __cordl_internal_set__DistanceInteractor_k__BackingField(::Oculus::Interaction::IDistanceInteractor*  value) ;

constexpr void __cordl_internal_set__distanceInteractor(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__dummyTarget(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle*  value) ;

constexpr void __cordl_internal_set__linePoints(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__numLinePoints(int32_t  value) ;

constexpr void __cordl_internal_set__shouldDrawLine(bool  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__target(::Oculus::Interaction::DistanceReticles::IReticleData*  value) ;

constexpr void __cordl_internal_set__targetlessLength(float_t  value) ;

constexpr void __cordl_internal_set__visibleDuringNormal(bool  value) ;

constexpr void __cordl_internal_set__visualOffset(float_t  value) ;

/// @brief Method .ctor, addr 0xa4ef374, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_DistanceInteractor, addr 0xa4ef3f8, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IDistanceInteractor* get_DistanceInteractor() ;

/// @brief Method get_NumLinePoints, addr 0xa4ef418, size 0x8, virtual false, abstract: false, final false
inline int32_t get_NumLinePoints() ;

/// @brief Method get_TargetlessLength, addr 0xa4ef420, size 0x8, virtual false, abstract: false, final false
inline float_t get_TargetlessLength() ;

/// @brief Method get_VisualOffset, addr 0xa4ef408, size 0x8, virtual false, abstract: false, final false
inline float_t get_VisualOffset() ;

/// [CompilerGenerated]
/// @brief Method set_DistanceInteractor, addr 0xa4ef400, size 0x8, virtual false, abstract: false, final false
inline void set_DistanceInteractor(::Oculus::Interaction::IDistanceInteractor*  value) ;

/// @brief Method set_VisualOffset, addr 0xa4ef410, size 0x8, virtual false, abstract: false, final false
inline void set_VisualOffset(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DistantInteractionLineVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DistantInteractionLineVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DistantInteractionLineVisual(DistantInteractionLineVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DistantInteractionLineVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DistantInteractionLineVisual(DistantInteractionLineVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16366};

/// [Tooltip("The distance interactor used as the origin of the line visual.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IDistanceInteractor), new[] {  })]
/// @brief Field _distanceInteractor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____distanceInteractor;

/// [CompilerGenerated]
/// @brief Field <DistanceInteractor>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::IDistanceInteractor*  ____DistanceInteractor_k__BackingField;

/// [Tooltip("Where the line visual begins relative to the hand or controller. The lower the value, the closer the line.")]
/// [SerializeField]
/// @brief Field _visualOffset, offset: 0x30, size: 0x4, def value: None
 float_t  ____visualOffset;

/// @brief Field _linePoints, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____linePoints;

/// [Tooltip("Should the line be visible when the distance interactor is in a normal state (not selecting, hovering, or disabled)?")]
/// [SerializeField]
/// @brief Field _visibleDuringNormal, offset: 0x40, size: 0x1, def value: None
 bool  ____visibleDuringNormal;

/// @brief Field _target, offset: 0x48, size: 0x8, def value: None
 ::Oculus::Interaction::DistanceReticles::IReticleData*  ____target;

/// [Tooltip("The number of segments that make up the line. The more segments, the smoother the line.")]
/// [SerializeField]
/// @brief Field _numLinePoints, offset: 0x50, size: 0x4, def value: None
 int32_t  ____numLinePoints;

/// [Tooltip("The length of the line when the interactor is in a normal state. Only visible if the \"Visible during normal\" checkbox is also selected.")]
/// [SerializeField]
/// @brief Field _targetlessLength, offset: 0x54, size: 0x4, def value: None
 float_t  ____targetlessLength;

/// @brief Field _started, offset: 0x58, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _shouldDrawLine, offset: 0x59, size: 0x1, def value: None
 bool  ____shouldDrawLine;

/// @brief Field _dummyTarget, offset: 0x60, size: 0x8, def value: None
 ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle*  ____dummyTarget;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual, ____distanceInteractor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual, ____DistanceInteractor_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual, ____visualOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual, ____linePoints) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual, ____visibleDuringNormal) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual, ____target) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual, ____numLinePoints) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual, ____targetlessLength) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual, ____started) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual, ____shouldDrawLine) == 0x59, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual, ____dummyTarget) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual) == 0x68, "Size mismatch!");

} // namespace end def Oculus::Interaction::DistanceReticles
// Dependencies System.Object
namespace Oculus::Interaction::DistanceReticles {
// Is value type: false
// CS Name: Oculus.Interaction.DistanceReticles.DistantInteractionLineVisual/DummyPointReticle
class CORDL_TYPE DistantInteractionLineVisual_DummyPointReticle : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Target, put=set_Target)) ::UnityW<::UnityEngine::Transform>  Target;

/// @brief Field <Target>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Target_k__BackingField, put=__cordl_internal_set__Target_k__BackingField)) ::UnityW<::UnityEngine::Transform>  _Target_k__BackingField;

/// @brief Convert operator to "::Oculus::Interaction::DistanceReticles::IReticleData"
constexpr operator  ::Oculus::Interaction::DistanceReticles::IReticleData*() noexcept;

static inline ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle* New_ctor() ;

/// @brief Method ProcessHitPoint, addr 0xa4f00ec, size 0x18, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 ProcessHitPoint(::UnityEngine::Vector3  hitPoint) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__Target_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__Target_k__BackingField() ;

constexpr void __cordl_internal_set__Target_k__BackingField(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xa4f00d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Target, addr 0xa4f00dc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_Target() ;

/// @brief Convert to "::Oculus::Interaction::DistanceReticles::IReticleData"
constexpr ::Oculus::Interaction::DistanceReticles::IReticleData* i___Oculus__Interaction__DistanceReticles__IReticleData() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Target, addr 0xa4f00e4, size 0x8, virtual false, abstract: false, final false
inline void set_Target(::UnityEngine::Transform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DistantInteractionLineVisual_DummyPointReticle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DistantInteractionLineVisual_DummyPointReticle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DistantInteractionLineVisual_DummyPointReticle(DistantInteractionLineVisual_DummyPointReticle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DistantInteractionLineVisual_DummyPointReticle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DistantInteractionLineVisual_DummyPointReticle(DistantInteractionLineVisual_DummyPointReticle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16365};

/// [CompilerGenerated]
/// @brief Field <Target>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____Target_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle, ____Target_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::DistanceReticles
