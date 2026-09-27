#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractableRegistry_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InteractableRegistry_2)
namespace GlobalNamespace {
template<typename TInteractor,typename TInteractable>
struct InteractableRegistry_2_InteractableSet;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Oculus::Interaction {
template<typename TInteractor,typename TInteractable>
class InteractableRegistry_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::InteractableRegistry_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::InteractableRegistry_2, "Oculus.Interaction", "InteractableRegistry`2");
// Dependencies System.Object
namespace Oculus::Interaction {
// cpp template
template<typename TInteractor,typename TInteractable>
// Is value type: false
// CS Name: Oculus.Interaction.InteractableRegistry`2<TInteractor,TInteractable>
class CORDL_TYPE InteractableRegistry_2 : public ::System::Object {
public:
// Declarations
using InteractableSet = ::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor, TInteractable>;

/// @brief Field _interactables, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__interactables, put=setStaticF__interactables)) ::System::Collections::Generic::List_1<TInteractable>*  _interactables;

/// @brief Method List, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable> List() ;

/// @brief Method List, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable> List(TInteractor  interactor) ;

/// @brief Method List, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable> List(TInteractor  interactor, ::System::Collections::Generic::HashSet_1<TInteractable>*  onlyInclude) ;

static inline ::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>* New_ctor() ;

/// @brief Method Register, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Register(TInteractable  interactable) ;

/// @brief Method Unregister, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Unregister(TInteractable  interactable) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<TInteractable>* getStaticF__interactables() ;

static inline void setStaticF__interactables(::System::Collections::Generic::List_1<TInteractable>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractableRegistry_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractableRegistry_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractableRegistry_2(InteractableRegistry_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractableRegistry_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractableRegistry_2(InteractableRegistry_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15781};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
