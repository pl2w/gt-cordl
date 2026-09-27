#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractorControllerDecorator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__ClassToClassDecorator_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(InteractorControllerDecorator)
namespace Oculus::Interaction::Input {
class IController;
}
namespace Oculus::Interaction {
class Context;
}
namespace Oculus::Interaction {
class Decorator_InteractorControllerDecorator___c;
}
namespace Oculus::Interaction {
class IInteractorView;
}
namespace Oculus::Interaction {
class InteractorControllerDecorator_Decorator;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace Oculus::Interaction {
class Decorator_InteractorControllerDecorator___c;
}
namespace Oculus::Interaction {
class InteractorControllerDecorator;
}
namespace Oculus::Interaction {
class InteractorControllerDecorator_Decorator;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Decorator_InteractorControllerDecorator___c*);
MARK_REF_T(::Oculus::Interaction::InteractorControllerDecorator*);
MARK_REF_T(::Oculus::Interaction::InteractorControllerDecorator_Decorator*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Decorator_InteractorControllerDecorator___c*, "Oculus.Interaction", "InteractorControllerDecorator/Decorator/<>c");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::InteractorControllerDecorator*, "Oculus.Interaction", "InteractorControllerDecorator");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::InteractorControllerDecorator_Decorator*, "Oculus.Interaction", "InteractorControllerDecorator/Decorator");
// Dependencies UnityEngine.Component, UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.InteractorControllerDecorator
class CORDL_TYPE InteractorControllerDecorator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Decorator = ::Oculus::Interaction::InteractorControllerDecorator_Decorator;

/// @brief Field _controller, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::UnityW<::UnityEngine::Component>  _controller;

/// @brief Field _interactorHierarchies, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactorHierarchies, put=__cordl_internal_set__interactorHierarchies)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _interactorHierarchies;

/// @brief Field _interactors, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactors, put=__cordl_internal_set__interactors)) ::ArrayW<::UnityW<::UnityEngine::Component>>  _interactors;

/// @brief Method Awake, addr 0xa419808, size 0x214, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Oculus::Interaction::InteractorControllerDecorator* New_ctor() ;

/// @brief Method TryGetControllerForInteractor, addr 0xa419638, size 0xd0, virtual false, abstract: false, final false
static inline bool TryGetControllerForInteractor(::Oculus::Interaction::IInteractorView*  interactor, ::by_ref<::Oculus::Interaction::Input::IController*>  controller) ;

constexpr ::UnityW<::UnityEngine::Component> const& __cordl_internal_get__controller() const;

constexpr ::UnityW<::UnityEngine::Component>& __cordl_internal_get__controller() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__interactorHierarchies() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__interactorHierarchies() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Component>> const& __cordl_internal_get__interactors() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Component>>& __cordl_internal_get__interactors() ;

constexpr void __cordl_internal_set__controller(::UnityW<::UnityEngine::Component>  value) ;

constexpr void __cordl_internal_set__interactorHierarchies(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set__interactors(::ArrayW<::UnityW<::UnityEngine::Component>>  value) ;

/// @brief Method .ctor, addr 0xa419a1c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractorControllerDecorator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractorControllerDecorator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractorControllerDecorator(InteractorControllerDecorator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractorControllerDecorator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractorControllerDecorator(InteractorControllerDecorator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15791};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IInteractorView), new[] {  })]
/// [Tooltip("Individually-listed interactors to be associated with the specified IController via Context decoration")]
/// @brief Field _interactors, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Component>>  ____interactors;

/// [SerializeField]
/// [Tooltip("Individually-listed GameObjects which are the roots of interactor hierarchies; on initialization, all IInteractorView instances hierarchically descended from these GameObjects will be associated with the specified IController via Context decoration")]
/// @brief Field _interactorHierarchies, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ____interactorHierarchies;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IController), new[] {  })]
/// [Tooltip("The IController to be associated with the specified IInteractorViews via Context decoration.")]
/// @brief Field _controller, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Component>  ____controller;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::InteractorControllerDecorator, ____interactors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorControllerDecorator, ____interactorHierarchies) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorControllerDecorator, ____controller) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::InteractorControllerDecorator) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies Oculus.Interaction.ClassToClassDecorator`2<InstanceT, DecorationT>
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.InteractorControllerDecorator/Decorator
class CORDL_TYPE InteractorControllerDecorator_Decorator : public ::Oculus::Interaction::ClassToClassDecorator_2<::Oculus::Interaction::IInteractorView*,::Oculus::Interaction::Input::IController*> {
public:
// Declarations
using __c = ::Oculus::Interaction::Decorator_InteractorControllerDecorator___c;

/// @brief Method GetFromContext, addr 0xa419708, size 0x100, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::InteractorControllerDecorator_Decorator* GetFromContext(::Oculus::Interaction::Context*  context) ;

static inline ::Oculus::Interaction::InteractorControllerDecorator_Decorator* New_ctor() ;

/// @brief Method .ctor, addr 0xa419a24, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractorControllerDecorator_Decorator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractorControllerDecorator_Decorator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractorControllerDecorator_Decorator(InteractorControllerDecorator_Decorator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractorControllerDecorator_Decorator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractorControllerDecorator_Decorator(InteractorControllerDecorator_Decorator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15790};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::InteractorControllerDecorator_Decorator) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.InteractorControllerDecorator/Decorator/<>c
class CORDL_TYPE Decorator_InteractorControllerDecorator___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Decorator_InteractorControllerDecorator___c*  __9;

/// @brief Field <>9__1_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__1_0, put=setStaticF___9__1_0)) ::System::Func_1<::Oculus::Interaction::InteractorControllerDecorator_Decorator*>*  __9__1_0;

static inline ::Oculus::Interaction::Decorator_InteractorControllerDecorator___c* New_ctor() ;

/// @brief Method <GetFromContext>b__1_0, addr 0xa419adc, size 0x50, virtual false, abstract: false, final false
inline ::Oculus::Interaction::InteractorControllerDecorator_Decorator* _GetFromContext_b__1_0() ;

/// @brief Method .ctor, addr 0xa419ad4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Decorator_InteractorControllerDecorator___c* getStaticF___9() ;

static inline ::System::Func_1<::Oculus::Interaction::InteractorControllerDecorator_Decorator*>* getStaticF___9__1_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Decorator_InteractorControllerDecorator___c*  value) ;

static inline void setStaticF___9__1_0(::System::Func_1<::Oculus::Interaction::InteractorControllerDecorator_Decorator*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Decorator_InteractorControllerDecorator___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Decorator_InteractorControllerDecorator___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Decorator_InteractorControllerDecorator___c(Decorator_InteractorControllerDecorator___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Decorator_InteractorControllerDecorator___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Decorator_InteractorControllerDecorator___c(Decorator_InteractorControllerDecorator___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15789};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Decorator_InteractorControllerDecorator___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
