#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceReticles/InteractorReticle_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InteractorReticle_1)
namespace Oculus::Interaction {
class IInteractorView;
}
namespace Oculus::Interaction {
struct InteractorStateChangeArgs;
}
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace Oculus::Interaction::DistanceReticles {
template<typename TReticleData>
class InteractorReticle_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::DistanceReticles::InteractorReticle_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::DistanceReticles::InteractorReticle_1, "Oculus.Interaction.DistanceReticles", "InteractorReticle`1");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::DistanceReticles {
// cpp template
template<typename TReticleData>
// Is value type: false
// CS Name: Oculus.Interaction.DistanceReticles.InteractorReticle`1<TReticleData>
class CORDL_TYPE InteractorReticle_1 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_InteractableComponent)) ::UnityW<::UnityEngine::Component>  InteractableComponent;

 __declspec(property(get=get_Interactor, put=set_Interactor)) ::Oculus::Interaction::IInteractorView*  Interactor;

 __declspec(property(get=get_VisibleDuringSelect, put=set_VisibleDuringSelect)) bool  VisibleDuringSelect;

/// @brief Field _drawn, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__drawn, put=__cordl_internal_set__drawn)) bool  _drawn;

/// @brief Field _started, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _targetData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetData, put=__cordl_internal_set__targetData)) TReticleData  _targetData;

/// @brief Field _visibleDuringSelect, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__visibleDuringSelect, put=__cordl_internal_set__visibleDuringSelect)) bool  _visibleDuringSelect;

/// @brief Method Align, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Align(TReticleData  data) ;

/// @brief Method Draw, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Draw(TReticleData  data) ;

/// @brief Method HandlePostProcessed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void HandlePostProcessed() ;

/// @brief Method HandleStateChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void HandleStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  args) ;

/// @brief Method Hide, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Hide() ;

/// @brief Method InteractableSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InteractableSet(::UnityEngine::Component*  interactable) ;

/// @brief Method InteractableUnset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InteractableUnset() ;

static inline ::Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>* New_ctor() ;

/// @brief Method OnDisable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get__drawn() const;

constexpr bool& __cordl_internal_get__drawn() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr TReticleData const& __cordl_internal_get__targetData() const;

constexpr TReticleData& __cordl_internal_get__targetData() ;

constexpr bool const& __cordl_internal_get__visibleDuringSelect() const;

constexpr bool& __cordl_internal_get__visibleDuringSelect() ;

constexpr void __cordl_internal_set__drawn(bool  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__targetData(TReticleData  value) ;

constexpr void __cordl_internal_set__visibleDuringSelect(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_InteractableComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Component> get_InteractableComponent() ;

/// @brief Method get_Interactor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::IInteractorView* get_Interactor() ;

/// @brief Method get_VisibleDuringSelect, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_VisibleDuringSelect() ;

/// @brief Method set_Interactor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Interactor(::Oculus::Interaction::IInteractorView*  value) ;

/// @brief Method set_VisibleDuringSelect, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_VisibleDuringSelect(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractorReticle_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractorReticle_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractorReticle_1(InteractorReticle_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractorReticle_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractorReticle_1(InteractorReticle_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16369};

/// [Tooltip("Should the reticle be visible when you\'re selecting an object?")]
/// [SerializeField]
/// @brief Field _visibleDuringSelect, offset: 0x20, size: 0x1, def value: None
 bool  ____visibleDuringSelect;

/// @brief Field _started, offset: 0x21, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _targetData, offset: 0x28, size: 0x8, def value: None
 TReticleData  ____targetData;

/// @brief Field _drawn, offset: 0x30, size: 0x1, def value: None
 bool  ____drawn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::DistanceReticles
