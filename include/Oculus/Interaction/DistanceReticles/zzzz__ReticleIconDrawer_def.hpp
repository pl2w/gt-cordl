#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceReticles/ReticleIconDrawer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/DistanceReticles/zzzz__InteractorReticle_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(ReticleIconDrawer)
namespace Oculus::Interaction::DistanceReticles {
class ReticleDataIcon;
}
namespace Oculus::Interaction {
class IDistanceInteractor;
}
namespace Oculus::Interaction {
class IInteractorView;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::DistanceReticles {
class ReticleIconDrawer;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::DistanceReticles::ReticleIconDrawer*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DistanceReticles::ReticleIconDrawer*, "Oculus.Interaction.DistanceReticles", "ReticleIconDrawer");
// Dependencies Oculus.Interaction.DistanceReticles.InteractorReticle`1<TReticleData>, UnityEngine.Vector3
namespace Oculus::Interaction::DistanceReticles {
// Is value type: false
// CS Name: Oculus.Interaction.DistanceReticles.ReticleIconDrawer
class CORDL_TYPE ReticleIconDrawer : public ::Oculus::Interaction::DistanceReticles::InteractorReticle_1<::UnityW<::Oculus::Interaction::DistanceReticles::ReticleDataIcon>> {
public:
// Declarations
 __declspec(property(get=get_ConstantScreenSize, put=set_ConstantScreenSize)) bool  ConstantScreenSize;

 __declspec(property(get=get_DefaultIcon, put=set_DefaultIcon)) ::UnityW<::UnityEngine::Texture>  DefaultIcon;

 __declspec(property(get=get_DistanceInteractor, put=set_DistanceInteractor)) ::Oculus::Interaction::IDistanceInteractor*  DistanceInteractor;

 __declspec(property(get=get_InteractableComponent)) ::UnityW<::UnityEngine::Component>  InteractableComponent;

 __declspec(property(get=get_Interactor, put=set_Interactor)) ::Oculus::Interaction::IInteractorView*  Interactor;

/// @brief Field <DistanceInteractor>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__DistanceInteractor_k__BackingField, put=__cordl_internal_set__DistanceInteractor_k__BackingField)) ::Oculus::Interaction::IDistanceInteractor*  _DistanceInteractor_k__BackingField;

/// @brief Field <Interactor>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__Interactor_k__BackingField, put=__cordl_internal_set__Interactor_k__BackingField)) ::Oculus::Interaction::IInteractorView*  _Interactor_k__BackingField;

/// @brief Field _centerEye, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__centerEye, put=__cordl_internal_set__centerEye)) ::UnityW<::UnityEngine::Transform>  _centerEye;

/// @brief Field _constantScreenSize, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__constantScreenSize, put=__cordl_internal_set__constantScreenSize)) bool  _constantScreenSize;

/// @brief Field _defaultIcon, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultIcon, put=__cordl_internal_set__defaultIcon)) ::UnityW<::UnityEngine::Texture>  _defaultIcon;

/// @brief Field _distanceInteractor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__distanceInteractor, put=__cordl_internal_set__distanceInteractor)) ::UnityW<::UnityEngine::Object>  _distanceInteractor;

/// @brief Field _originalScale, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get__originalScale, put=__cordl_internal_set__originalScale)) ::UnityEngine::Vector3  _originalScale;

/// @brief Field _renderer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::MeshRenderer>  _renderer;

/// @brief Method Align, addr 0xa4f1888, size 0x364, virtual true, abstract: false, final false
inline void Align(::Oculus::Interaction::DistanceReticles::ReticleDataIcon*  data) ;

/// @brief Method Awake, addr 0xa4f15ac, size 0x70, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Draw, addr 0xa4f16d8, size 0x1b0, virtual true, abstract: false, final false
inline void Draw(::Oculus::Interaction::DistanceReticles::ReticleDataIcon*  dataIcon) ;

/// @brief Method Hide, addr 0xa4f1bec, size 0x1c, virtual true, abstract: false, final false
inline void Hide() ;

/// @brief Method InjectAllReticleIconDrawer, addr 0xa4f1c08, size 0x40, virtual false, abstract: false, final false
inline void InjectAllReticleIconDrawer(::Oculus::Interaction::IDistanceInteractor*  distanceInteractor, ::UnityEngine::Transform*  centerEye, ::UnityEngine::MeshRenderer*  renderer) ;

/// @brief Method InjectCenterEye, addr 0xa4f1d2c, size 0x8, virtual false, abstract: false, final false
inline void InjectCenterEye(::UnityEngine::Transform*  centerEye) ;

/// @brief Method InjectDistanceInteractor, addr 0xa4f1c48, size 0xe4, virtual false, abstract: false, final false
inline void InjectDistanceInteractor(::Oculus::Interaction::IDistanceInteractor*  distanceInteractor) ;

/// @brief Method InjectRenderer, addr 0xa4f1d34, size 0x8, virtual false, abstract: false, final false
inline void InjectRenderer(::UnityEngine::MeshRenderer*  renderer) ;

static inline ::Oculus::Interaction::DistanceReticles::ReticleIconDrawer* New_ctor() ;

/// @brief Method OnValidate, addr 0xa4f1518, size 0x94, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Start, addr 0xa4f161c, size 0xbc, virtual true, abstract: false, final false
inline void Start() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__24_0, addr 0xa4f1d84, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__24_0() ;

constexpr ::Oculus::Interaction::IDistanceInteractor* const& __cordl_internal_get__DistanceInteractor_k__BackingField() const;

constexpr ::Oculus::Interaction::IDistanceInteractor*& __cordl_internal_get__DistanceInteractor_k__BackingField() ;

constexpr ::Oculus::Interaction::IInteractorView* const& __cordl_internal_get__Interactor_k__BackingField() const;

constexpr ::Oculus::Interaction::IInteractorView*& __cordl_internal_get__Interactor_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__centerEye() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__centerEye() ;

constexpr bool const& __cordl_internal_get__constantScreenSize() const;

constexpr bool& __cordl_internal_get__constantScreenSize() ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get__defaultIcon() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get__defaultIcon() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__distanceInteractor() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__distanceInteractor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__originalScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__originalScale() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__renderer() ;

constexpr void __cordl_internal_set__DistanceInteractor_k__BackingField(::Oculus::Interaction::IDistanceInteractor*  value) ;

constexpr void __cordl_internal_set__Interactor_k__BackingField(::Oculus::Interaction::IInteractorView*  value) ;

constexpr void __cordl_internal_set__centerEye(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__constantScreenSize(bool  value) ;

constexpr void __cordl_internal_set__defaultIcon(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set__distanceInteractor(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__originalScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

/// @brief Method .ctor, addr 0xa4f1d3c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ConstantScreenSize, addr 0xa4f1404, size 0x8, virtual false, abstract: false, final false
inline bool get_ConstantScreenSize() ;

/// @brief Method get_DefaultIcon, addr 0xa4f13f4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> get_DefaultIcon() ;

/// [CompilerGenerated]
/// @brief Method get_DistanceInteractor, addr 0xa4f13e4, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IDistanceInteractor* get_DistanceInteractor() ;

/// @brief Method get_InteractableComponent, addr 0xa4f1424, size 0xf4, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> get_InteractableComponent() ;

/// [CompilerGenerated]
/// @brief Method get_Interactor, addr 0xa4f1414, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Interaction::IInteractorView* get_Interactor() ;

/// @brief Method set_ConstantScreenSize, addr 0xa4f140c, size 0x8, virtual false, abstract: false, final false
inline void set_ConstantScreenSize(bool  value) ;

/// @brief Method set_DefaultIcon, addr 0xa4f13fc, size 0x8, virtual false, abstract: false, final false
inline void set_DefaultIcon(::UnityEngine::Texture*  value) ;

/// [CompilerGenerated]
/// @brief Method set_DistanceInteractor, addr 0xa4f13ec, size 0x8, virtual false, abstract: false, final false
inline void set_DistanceInteractor(::Oculus::Interaction::IDistanceInteractor*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Interactor, addr 0xa4f141c, size 0x8, virtual true, abstract: false, final false
inline void set_Interactor(::Oculus::Interaction::IInteractorView*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReticleIconDrawer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReticleIconDrawer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReticleIconDrawer(ReticleIconDrawer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReticleIconDrawer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReticleIconDrawer(ReticleIconDrawer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16375};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IDistanceInteractor), new[] {  })]
/// @brief Field _distanceInteractor, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____distanceInteractor;

/// [CompilerGenerated]
/// @brief Field <DistanceInteractor>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::IDistanceInteractor*  ____DistanceInteractor_k__BackingField;

/// [SerializeField]
/// @brief Field _renderer, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____renderer;

/// [SerializeField]
/// @brief Field _centerEye, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____centerEye;

/// [SerializeField]
/// @brief Field _defaultIcon, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ____defaultIcon;

/// [SerializeField]
/// @brief Field _constantScreenSize, offset: 0x60, size: 0x1, def value: None
 bool  ____constantScreenSize;

/// @brief Field _originalScale, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____originalScale;

/// [CompilerGenerated]
/// @brief Field <Interactor>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractorView*  ____Interactor_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleIconDrawer, ____distanceInteractor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleIconDrawer, ____DistanceInteractor_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleIconDrawer, ____renderer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleIconDrawer, ____centerEye) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleIconDrawer, ____defaultIcon) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleIconDrawer, ____constantScreenSize) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleIconDrawer, ____originalScale) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleIconDrawer, ____Interactor_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::DistanceReticles::ReticleIconDrawer) == 0x78, "Size mismatch!");

} // namespace end def Oculus::Interaction::DistanceReticles
