#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceReticles/ReticleMeshDrawer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/DistanceReticles/zzzz__InteractorReticle_1_def.hpp"
#include "Oculus/Interaction/zzzz__PoseTravelData_def.hpp"
CORDL_MODULE_EXPORT(ReticleMeshDrawer)
namespace Oculus::Interaction::DistanceReticles {
class ReticleDataMesh;
}
namespace Oculus::Interaction::HandGrab {
class IHandGrabInteractor;
}
namespace Oculus::Interaction {
class IInteractorView;
}
namespace Oculus::Interaction {
struct PoseTravelData;
}
namespace Oculus::Interaction {
class Tween;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::DistanceReticles {
class ReticleMeshDrawer;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer*, "Oculus.Interaction.DistanceReticles", "ReticleMeshDrawer");
// Dependencies Oculus.Interaction.DistanceReticles.InteractorReticle`1<TReticleData>, Oculus.Interaction.PoseTravelData
namespace Oculus::Interaction::DistanceReticles {
// Is value type: false
// CS Name: Oculus.Interaction.DistanceReticles.ReticleMeshDrawer
class CORDL_TYPE ReticleMeshDrawer : public ::Oculus::Interaction::DistanceReticles::InteractorReticle_1<::UnityW<::Oculus::Interaction::DistanceReticles::ReticleDataMesh>> {
public:
// Declarations
 __declspec(property(get=get_HandGrabInteractor, put=set_HandGrabInteractor)) ::Oculus::Interaction::HandGrab::IHandGrabInteractor*  HandGrabInteractor;

 __declspec(property(get=get_InteractableComponent)) ::UnityW<::UnityEngine::Component>  InteractableComponent;

 __declspec(property(get=get_Interactor, put=set_Interactor)) ::Oculus::Interaction::IInteractorView*  Interactor;

 __declspec(property(get=get_TravelData, put=set_TravelData)) ::Oculus::Interaction::PoseTravelData  TravelData;

/// @brief Field <HandGrabInteractor>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__HandGrabInteractor_k__BackingField, put=__cordl_internal_set__HandGrabInteractor_k__BackingField)) ::Oculus::Interaction::HandGrab::IHandGrabInteractor*  _HandGrabInteractor_k__BackingField;

/// @brief Field <Interactor>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Interactor_k__BackingField, put=__cordl_internal_set__Interactor_k__BackingField)) ::Oculus::Interaction::IInteractorView*  _Interactor_k__BackingField;

/// @brief Field _filter, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__filter, put=__cordl_internal_set__filter)) ::UnityW<::UnityEngine::MeshFilter>  _filter;

/// @brief Field _handGrabInteractor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__handGrabInteractor, put=__cordl_internal_set__handGrabInteractor)) ::UnityW<::UnityEngine::Object>  _handGrabInteractor;

/// @brief Field _renderer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::MeshRenderer>  _renderer;

/// @brief Field _travelData, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get__travelData, put=__cordl_internal_set__travelData)) ::Oculus::Interaction::PoseTravelData  _travelData;

/// @brief Field _tween, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__tween, put=__cordl_internal_set__tween)) ::Oculus::Interaction::Tween*  _tween;

/// @brief Method Align, addr 0xa4f24b0, size 0xc8, virtual true, abstract: false, final false
inline void Align(::Oculus::Interaction::DistanceReticles::ReticleDataMesh*  data) ;

/// @brief Method Awake, addr 0xa4f1f90, size 0x94, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method DestinationPose, addr 0xa4f21f4, size 0x288, virtual false, abstract: false, final false
inline ::UnityEngine::Pose DestinationPose(::Oculus::Interaction::DistanceReticles::ReticleDataMesh*  data, ::UnityEngine::Pose  worldSnapPose) ;

/// @brief Method Draw, addr 0xa4f20bc, size 0x138, virtual true, abstract: false, final false
inline void Draw(::Oculus::Interaction::DistanceReticles::ReticleDataMesh*  dataMesh) ;

/// @brief Method Hide, addr 0xa4f247c, size 0x34, virtual true, abstract: false, final false
inline void Hide() ;

/// @brief Method InjectAllReticleMeshDrawer, addr 0xa4f2578, size 0x40, virtual false, abstract: false, final false
inline void InjectAllReticleMeshDrawer(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::UnityEngine::MeshFilter*  filter, ::UnityEngine::MeshRenderer*  renderer) ;

/// @brief Method InjectFilter, addr 0xa4f26bc, size 0x8, virtual false, abstract: false, final false
inline void InjectFilter(::UnityEngine::MeshFilter*  filter) ;

/// @brief Method InjectHandGrabInteractor, addr 0xa4f25b8, size 0x104, virtual false, abstract: false, final false
inline void InjectHandGrabInteractor(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor) ;

/// @brief Method InjectRenderer, addr 0xa4f26c4, size 0x8, virtual false, abstract: false, final false
inline void InjectRenderer(::UnityEngine::MeshRenderer*  renderer) ;

static inline ::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer* New_ctor() ;

/// @brief Method Reset, addr 0xa4f1f00, size 0x90, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Start, addr 0xa4f2024, size 0x98, virtual true, abstract: false, final false
inline void Start() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__20_0, addr 0xa4f2734, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__20_0() ;

constexpr ::Oculus::Interaction::HandGrab::IHandGrabInteractor* const& __cordl_internal_get__HandGrabInteractor_k__BackingField() const;

constexpr ::Oculus::Interaction::HandGrab::IHandGrabInteractor*& __cordl_internal_get__HandGrabInteractor_k__BackingField() ;

constexpr ::Oculus::Interaction::IInteractorView* const& __cordl_internal_get__Interactor_k__BackingField() const;

constexpr ::Oculus::Interaction::IInteractorView*& __cordl_internal_get__Interactor_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__filter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__filter() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__handGrabInteractor() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__handGrabInteractor() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__renderer() ;

constexpr ::Oculus::Interaction::PoseTravelData const& __cordl_internal_get__travelData() const;

constexpr ::Oculus::Interaction::PoseTravelData& __cordl_internal_get__travelData() ;

constexpr ::Oculus::Interaction::Tween* const& __cordl_internal_get__tween() const;

constexpr ::Oculus::Interaction::Tween*& __cordl_internal_get__tween() ;

constexpr void __cordl_internal_set__HandGrabInteractor_k__BackingField(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  value) ;

constexpr void __cordl_internal_set__Interactor_k__BackingField(::Oculus::Interaction::IInteractorView*  value) ;

constexpr void __cordl_internal_set__filter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set__handGrabInteractor(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__travelData(::Oculus::Interaction::PoseTravelData  value) ;

constexpr void __cordl_internal_set__tween(::Oculus::Interaction::Tween*  value) ;

/// @brief Method .ctor, addr 0xa4f26cc, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_HandGrabInteractor, addr 0xa4f1dcc, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::HandGrab::IHandGrabInteractor* get_HandGrabInteractor() ;

/// @brief Method get_InteractableComponent, addr 0xa4f1e0c, size 0xf4, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> get_InteractableComponent() ;

/// [CompilerGenerated]
/// @brief Method get_Interactor, addr 0xa4f1dfc, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Interaction::IInteractorView* get_Interactor() ;

/// @brief Method get_TravelData, addr 0xa4f1ddc, size 0xc, virtual false, abstract: false, final false
inline ::Oculus::Interaction::PoseTravelData get_TravelData() ;

/// [CompilerGenerated]
/// @brief Method set_HandGrabInteractor, addr 0xa4f1dd4, size 0x8, virtual false, abstract: false, final false
inline void set_HandGrabInteractor(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Interactor, addr 0xa4f1e04, size 0x8, virtual true, abstract: false, final false
inline void set_Interactor(::Oculus::Interaction::IInteractorView*  value) ;

/// @brief Method set_TravelData, addr 0xa4f1de8, size 0x14, virtual false, abstract: false, final false
inline void set_TravelData(::Oculus::Interaction::PoseTravelData  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReticleMeshDrawer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReticleMeshDrawer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReticleMeshDrawer(ReticleMeshDrawer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReticleMeshDrawer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReticleMeshDrawer(ReticleMeshDrawer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16376};

/// [Tooltip("The hand grab interactor that uses the reticle.")]
/// [FormerlySerializedAs("_handGrabber")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.HandGrab.IHandGrabInteractor), new[] { typeof(Oculus.Interaction.IInteractorView) })]
/// @brief Field _handGrabInteractor, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____handGrabInteractor;

/// [CompilerGenerated]
/// @brief Field <HandGrabInteractor>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::IHandGrabInteractor*  ____HandGrabInteractor_k__BackingField;

/// [Tooltip("The ReticleMesh prefab\'s mesh filter.")]
/// [SerializeField]
/// @brief Field _filter, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ____filter;

/// [Tooltip("The ReticleMesh prefab\'s mesh renderer.")]
/// [SerializeField]
/// @brief Field _renderer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____renderer;

/// [SerializeField]
/// @brief Field _travelData, offset: 0x58, size: 0x10, def value: None
 ::Oculus::Interaction::PoseTravelData  ____travelData;

/// [CompilerGenerated]
/// @brief Field <Interactor>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractorView*  ____Interactor_k__BackingField;

/// @brief Field _tween, offset: 0x70, size: 0x8, def value: None
 ::Oculus::Interaction::Tween*  ____tween;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer, ____handGrabInteractor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer, ____HandGrabInteractor_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer, ____filter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer, ____renderer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer, ____travelData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer, ____Interactor_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer, ____tween) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::DistanceReticles::ReticleMeshDrawer) == 0x78, "Size mismatch!");

} // namespace end def Oculus::Interaction::DistanceReticles
