#pragma once
// IWYU pragma private; include "Oculus/Interaction/Interactable_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__InteractableState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Interactable_2)
namespace Oculus::Interaction::Collections {
template<typename T>
class EnumerableHashSet_1;
}
namespace Oculus::Interaction::Collections {
template<typename T>
class IEnumerableHashSet_1;
}
namespace Oculus::Interaction {
class IGameObjectFilter;
}
namespace Oculus::Interaction {
class IInteractableView;
}
namespace Oculus::Interaction {
class IInteractable;
}
namespace Oculus::Interaction {
class IInteractorView;
}
namespace Oculus::Interaction {
template<typename TInteractor,typename TInteractable>
class InteractableRegistry_2;
}
namespace Oculus::Interaction {
struct InteractableStateChangeArgs;
}
namespace Oculus::Interaction {
struct InteractableState;
}
namespace Oculus::Interaction {
template<typename TInteractor,typename TInteractable>
class Interactable_2___c;
}
namespace Oculus::Interaction {
template<typename T>
class MAction_1;
}
namespace Oculus::Interaction {
template<typename T>
class MultiAction_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename TInput,typename TOutput>
class Converter_2;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
template<typename TInteractor,typename TInteractable>
class Interactable_2;
}
namespace Oculus::Interaction {
template<typename TInteractor,typename TInteractable>
class Interactable_2___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::Interactable_2);
MARK_GEN_REF_T_PTR(::Oculus::Interaction::Interactable_2___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::Interactable_2, "Oculus.Interaction", "Interactable`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::Interactable_2___c, "Oculus.Interaction", "Interactable`2/<>c");
// Dependencies Oculus.Interaction.InteractableState, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// cpp template
template<typename TInteractor,typename TInteractable>
// Is value type: false
// CS Name: Oculus.Interaction.Interactable`2<TInteractor,TInteractable>
class CORDL_TYPE Interactable_2 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::Interactable_2___c<TInteractor, TInteractable>;

 __declspec(property(get=get_Data, put=set_Data)) ::System::Object*  Data;

/// @brief Field InteractorFilters, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_InteractorFilters, put=__cordl_internal_set_InteractorFilters)) ::System::Collections::Generic::List_1<::Oculus::Interaction::IGameObjectFilter*>*  InteractorFilters;

 __declspec(property(get=get_InteractorViews)) ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*  InteractorViews;

 __declspec(property(get=get_Interactors)) ::Oculus::Interaction::Collections::IEnumerableHashSet_1<TInteractor>*  Interactors;

 __declspec(property(get=get_MaxInteractors, put=set_MaxInteractors)) int32_t  MaxInteractors;

 __declspec(property(get=get_MaxSelectingInteractors, put=set_MaxSelectingInteractors)) int32_t  MaxSelectingInteractors;

 __declspec(property(get=get_SelectingInteractorViews)) ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*  SelectingInteractorViews;

 __declspec(property(get=get_SelectingInteractors)) ::Oculus::Interaction::Collections::IEnumerableHashSet_1<TInteractor>*  SelectingInteractors;

 __declspec(property(get=get_State, put=set_State)) ::Oculus::Interaction::InteractableState  State;

 __declspec(property(get=get_WhenInteractorAdded)) ::Oculus::Interaction::MAction_1<TInteractor>*  WhenInteractorAdded;

 __declspec(property(get=get_WhenInteractorRemoved)) ::Oculus::Interaction::MAction_1<TInteractor>*  WhenInteractorRemoved;

/// @brief Field WhenInteractorViewAdded, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenInteractorViewAdded, put=__cordl_internal_set_WhenInteractorViewAdded)) ::System::Action_1<::Oculus::Interaction::IInteractorView*>*  WhenInteractorViewAdded;

/// @brief Field WhenInteractorViewRemoved, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenInteractorViewRemoved, put=__cordl_internal_set_WhenInteractorViewRemoved)) ::System::Action_1<::Oculus::Interaction::IInteractorView*>*  WhenInteractorViewRemoved;

 __declspec(property(get=get_WhenSelectingInteractorAdded)) ::Oculus::Interaction::MAction_1<TInteractor>*  WhenSelectingInteractorAdded;

 __declspec(property(get=get_WhenSelectingInteractorRemoved)) ::Oculus::Interaction::MAction_1<TInteractor>*  WhenSelectingInteractorRemoved;

/// @brief Field WhenSelectingInteractorViewAdded, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenSelectingInteractorViewAdded, put=__cordl_internal_set_WhenSelectingInteractorViewAdded)) ::System::Action_1<::Oculus::Interaction::IInteractorView*>*  WhenSelectingInteractorViewAdded;

/// @brief Field WhenSelectingInteractorViewRemoved, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenSelectingInteractorViewRemoved, put=__cordl_internal_set_WhenSelectingInteractorViewRemoved)) ::System::Action_1<::Oculus::Interaction::IInteractorView*>*  WhenSelectingInteractorViewRemoved;

/// @brief Field WhenStateChanged, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenStateChanged, put=__cordl_internal_set_WhenStateChanged)) ::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*  WhenStateChanged;

/// @brief Field <Data>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Data_k__BackingField, put=__cordl_internal_set__Data_k__BackingField)) ::System::Object*  _Data_k__BackingField;

/// @brief Field _data, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::UnityW<::UnityEngine::Object>  _data;

/// @brief Field _interactorFilters, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactorFilters, put=__cordl_internal_set__interactorFilters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  _interactorFilters;

/// @brief Field _interactors, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactors, put=__cordl_internal_set__interactors)) ::Oculus::Interaction::Collections::EnumerableHashSet_1<TInteractor>*  _interactors;

/// @brief Field _maxInteractors, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxInteractors, put=__cordl_internal_set__maxInteractors)) int32_t  _maxInteractors;

/// @brief Field _maxSelectingInteractors, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxSelectingInteractors, put=__cordl_internal_set__maxSelectingInteractors)) int32_t  _maxSelectingInteractors;

/// @brief Field _registry, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__registry, put=setStaticF__registry)) ::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>*  _registry;

/// @brief Field _selectingInteractors, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectingInteractors, put=__cordl_internal_set__selectingInteractors)) ::Oculus::Interaction::Collections::EnumerableHashSet_1<TInteractor>*  _selectingInteractors;

/// @brief Field _started, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _state, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::Oculus::Interaction::InteractableState  _state;

/// @brief Field _whenInteractorAdded, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenInteractorAdded, put=__cordl_internal_set__whenInteractorAdded)) ::Oculus::Interaction::MultiAction_1<TInteractor>*  _whenInteractorAdded;

/// @brief Field _whenInteractorRemoved, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenInteractorRemoved, put=__cordl_internal_set__whenInteractorRemoved)) ::Oculus::Interaction::MultiAction_1<TInteractor>*  _whenInteractorRemoved;

/// @brief Field _whenSelectingInteractorAdded, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenSelectingInteractorAdded, put=__cordl_internal_set__whenSelectingInteractorAdded)) ::Oculus::Interaction::MultiAction_1<TInteractor>*  _whenSelectingInteractorAdded;

/// @brief Field _whenSelectingInteractorRemoved, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenSelectingInteractorRemoved, put=__cordl_internal_set__whenSelectingInteractorRemoved)) ::Oculus::Interaction::MultiAction_1<TInteractor>*  _whenSelectingInteractorRemoved;

/// @brief Convert operator to "::Oculus::Interaction::IInteractable"
constexpr operator  ::Oculus::Interaction::IInteractable*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::IInteractableView"
constexpr operator  ::Oculus::Interaction::IInteractableView*() noexcept;

/// @brief Method AddInteractor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddInteractor(TInteractor  interactor) ;

/// @brief Method AddSelectingInteractor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddSelectingInteractor(TInteractor  interactor) ;

/// @brief Method Awake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CanBeSelectedBy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool CanBeSelectedBy(TInteractor  interactor) ;

/// @brief Method Disable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Disable() ;

/// @brief Method Enable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Enable() ;

/// @brief Method HasInteractor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool HasInteractor(TInteractor  interactor) ;

/// @brief Method HasSelectingInteractor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool HasSelectingInteractor(TInteractor  interactor) ;

/// @brief Method InjectOptionalData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InjectOptionalData(::System::Object*  data) ;

/// @brief Method InjectOptionalInteractorFilters, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InjectOptionalInteractorFilters(::System::Collections::Generic::List_1<::Oculus::Interaction::IGameObjectFilter*>*  interactorFilters) ;

/// @brief Method InteractorAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void InteractorAdded(TInteractor  interactor) ;

/// @brief Method InteractorRemoved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void InteractorRemoved(TInteractor  interactor) ;

static inline ::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>* New_ctor() ;

/// @brief Method OnDisable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RemoveInteractor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveInteractor(TInteractor  interactor) ;

/// @brief Method RemoveInteractorByIdentifier, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void RemoveInteractorByIdentifier(int32_t  id) ;

/// @brief Method RemoveSelectingInteractor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveSelectingInteractor(TInteractor  interactor) ;

/// @brief Method SelectingInteractorAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SelectingInteractorAdded(TInteractor  interactor) ;

/// @brief Method SelectingInteractorRemoved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SelectingInteractorRemoved(TInteractor  interactor) ;

/// @brief Method SetRegistry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetRegistry(::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>*  registry) ;

/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateInteractableState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UpdateInteractableState() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IGameObjectFilter*>* const& __cordl_internal_get_InteractorFilters() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IGameObjectFilter*>*& __cordl_internal_get_InteractorFilters() ;

constexpr ::System::Action_1<::Oculus::Interaction::IInteractorView*>* const& __cordl_internal_get_WhenInteractorViewAdded() const;

constexpr ::System::Action_1<::Oculus::Interaction::IInteractorView*>*& __cordl_internal_get_WhenInteractorViewAdded() ;

constexpr ::System::Action_1<::Oculus::Interaction::IInteractorView*>* const& __cordl_internal_get_WhenInteractorViewRemoved() const;

constexpr ::System::Action_1<::Oculus::Interaction::IInteractorView*>*& __cordl_internal_get_WhenInteractorViewRemoved() ;

constexpr ::System::Action_1<::Oculus::Interaction::IInteractorView*>* const& __cordl_internal_get_WhenSelectingInteractorViewAdded() const;

constexpr ::System::Action_1<::Oculus::Interaction::IInteractorView*>*& __cordl_internal_get_WhenSelectingInteractorViewAdded() ;

constexpr ::System::Action_1<::Oculus::Interaction::IInteractorView*>* const& __cordl_internal_get_WhenSelectingInteractorViewRemoved() const;

constexpr ::System::Action_1<::Oculus::Interaction::IInteractorView*>*& __cordl_internal_get_WhenSelectingInteractorViewRemoved() ;

constexpr ::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>* const& __cordl_internal_get_WhenStateChanged() const;

constexpr ::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*& __cordl_internal_get_WhenStateChanged() ;

constexpr ::System::Object* const& __cordl_internal_get__Data_k__BackingField() const;

constexpr ::System::Object*& __cordl_internal_get__Data_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__data() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__data() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get__interactorFilters() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get__interactorFilters() ;

constexpr ::Oculus::Interaction::Collections::EnumerableHashSet_1<TInteractor>* const& __cordl_internal_get__interactors() const;

constexpr ::Oculus::Interaction::Collections::EnumerableHashSet_1<TInteractor>*& __cordl_internal_get__interactors() ;

constexpr int32_t const& __cordl_internal_get__maxInteractors() const;

constexpr int32_t& __cordl_internal_get__maxInteractors() ;

constexpr int32_t const& __cordl_internal_get__maxSelectingInteractors() const;

constexpr int32_t& __cordl_internal_get__maxSelectingInteractors() ;

constexpr ::Oculus::Interaction::Collections::EnumerableHashSet_1<TInteractor>* const& __cordl_internal_get__selectingInteractors() const;

constexpr ::Oculus::Interaction::Collections::EnumerableHashSet_1<TInteractor>*& __cordl_internal_get__selectingInteractors() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::Oculus::Interaction::InteractableState const& __cordl_internal_get__state() const;

constexpr ::Oculus::Interaction::InteractableState& __cordl_internal_get__state() ;

constexpr ::Oculus::Interaction::MultiAction_1<TInteractor>* const& __cordl_internal_get__whenInteractorAdded() const;

constexpr ::Oculus::Interaction::MultiAction_1<TInteractor>*& __cordl_internal_get__whenInteractorAdded() ;

constexpr ::Oculus::Interaction::MultiAction_1<TInteractor>* const& __cordl_internal_get__whenInteractorRemoved() const;

constexpr ::Oculus::Interaction::MultiAction_1<TInteractor>*& __cordl_internal_get__whenInteractorRemoved() ;

constexpr ::Oculus::Interaction::MultiAction_1<TInteractor>* const& __cordl_internal_get__whenSelectingInteractorAdded() const;

constexpr ::Oculus::Interaction::MultiAction_1<TInteractor>*& __cordl_internal_get__whenSelectingInteractorAdded() ;

constexpr ::Oculus::Interaction::MultiAction_1<TInteractor>* const& __cordl_internal_get__whenSelectingInteractorRemoved() const;

constexpr ::Oculus::Interaction::MultiAction_1<TInteractor>*& __cordl_internal_get__whenSelectingInteractorRemoved() ;

constexpr void __cordl_internal_set_InteractorFilters(::System::Collections::Generic::List_1<::Oculus::Interaction::IGameObjectFilter*>*  value) ;

constexpr void __cordl_internal_set_WhenInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

constexpr void __cordl_internal_set_WhenInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

constexpr void __cordl_internal_set_WhenSelectingInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

constexpr void __cordl_internal_set_WhenSelectingInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

constexpr void __cordl_internal_set_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*  value) ;

constexpr void __cordl_internal_set__Data_k__BackingField(::System::Object*  value) ;

constexpr void __cordl_internal_set__data(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__interactorFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set__interactors(::Oculus::Interaction::Collections::EnumerableHashSet_1<TInteractor>*  value) ;

constexpr void __cordl_internal_set__maxInteractors(int32_t  value) ;

constexpr void __cordl_internal_set__maxSelectingInteractors(int32_t  value) ;

constexpr void __cordl_internal_set__selectingInteractors(::Oculus::Interaction::Collections::EnumerableHashSet_1<TInteractor>*  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__state(::Oculus::Interaction::InteractableState  value) ;

constexpr void __cordl_internal_set__whenInteractorAdded(::Oculus::Interaction::MultiAction_1<TInteractor>*  value) ;

constexpr void __cordl_internal_set__whenInteractorRemoved(::Oculus::Interaction::MultiAction_1<TInteractor>*  value) ;

constexpr void __cordl_internal_set__whenSelectingInteractorAdded(::Oculus::Interaction::MultiAction_1<TInteractor>*  value) ;

constexpr void __cordl_internal_set__whenSelectingInteractorRemoved(::Oculus::Interaction::MultiAction_1<TInteractor>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenInteractorViewAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_WhenInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenInteractorViewRemoved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_WhenInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenSelectingInteractorViewAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_WhenSelectingInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenSelectingInteractorViewRemoved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_WhenSelectingInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenStateChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*  value) ;

static inline ::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>* getStaticF__registry() ;

/// [CompilerGenerated]
/// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* get_Data() ;

/// @brief Method get_InteractorViews, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>* get_InteractorViews() ;

/// @brief Method get_Interactors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Collections::IEnumerableHashSet_1<TInteractor>* get_Interactors() ;

/// @brief Method get_MaxInteractors, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_MaxInteractors() ;

/// @brief Method get_MaxSelectingInteractors, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_MaxSelectingInteractors() ;

/// @brief Method get_Registry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>* get_Registry() ;

/// @brief Method get_SelectingInteractorViews, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>* get_SelectingInteractorViews() ;

/// @brief Method get_SelectingInteractors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Collections::IEnumerableHashSet_1<TInteractor>* get_SelectingInteractors() ;

/// @brief Method get_State, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Oculus::Interaction::InteractableState get_State() ;

/// @brief Method get_WhenInteractorAdded, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Oculus::Interaction::MAction_1<TInteractor>* get_WhenInteractorAdded() ;

/// @brief Method get_WhenInteractorRemoved, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Oculus::Interaction::MAction_1<TInteractor>* get_WhenInteractorRemoved() ;

/// @brief Method get_WhenSelectingInteractorAdded, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Oculus::Interaction::MAction_1<TInteractor>* get_WhenSelectingInteractorAdded() ;

/// @brief Method get_WhenSelectingInteractorRemoved, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Oculus::Interaction::MAction_1<TInteractor>* get_WhenSelectingInteractorRemoved() ;

/// @brief Convert to "::Oculus::Interaction::IInteractable"
constexpr ::Oculus::Interaction::IInteractable* i___Oculus__Interaction__IInteractable() noexcept;

/// @brief Convert to "::Oculus::Interaction::IInteractableView"
constexpr ::Oculus::Interaction::IInteractableView* i___Oculus__Interaction__IInteractableView() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenInteractorViewAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_WhenInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenInteractorViewRemoved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_WhenInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenSelectingInteractorViewAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_WhenSelectingInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenSelectingInteractorViewRemoved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_WhenSelectingInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenStateChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*  value) ;

static inline void setStaticF__registry(::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Data(::System::Object*  value) ;

/// @brief Method set_MaxInteractors, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_MaxInteractors(int32_t  value) ;

/// @brief Method set_MaxSelectingInteractors, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_MaxSelectingInteractors(int32_t  value) ;

/// @brief Method set_State, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_State(::Oculus::Interaction::InteractableState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Interactable_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Interactable_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Interactable_2(Interactable_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Interactable_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Interactable_2(Interactable_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15773};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IGameObjectFilter), new[] {  })]
/// [Optional]
/// @brief Field _interactorFilters, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ____interactorFilters;

/// @brief Field InteractorFilters, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::IGameObjectFilter*>*  ___InteractorFilters;

/// [SerializeField]
/// @brief Field _maxInteractors, offset: 0x30, size: 0x4, def value: None
 int32_t  ____maxInteractors;

/// [SerializeField]
/// @brief Field _maxSelectingInteractors, offset: 0x34, size: 0x4, def value: None
 int32_t  ____maxSelectingInteractors;

/// [SerializeField]
/// [Optional]
/// @brief Field _data, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____data;

/// [CompilerGenerated]
/// @brief Field <Data>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::System::Object*  ____Data_k__BackingField;

/// @brief Field _started, offset: 0x48, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _interactors, offset: 0x50, size: 0x8, def value: None
 ::Oculus::Interaction::Collections::EnumerableHashSet_1<TInteractor>*  ____interactors;

/// @brief Field _selectingInteractors, offset: 0x58, size: 0x8, def value: None
 ::Oculus::Interaction::Collections::EnumerableHashSet_1<TInteractor>*  ____selectingInteractors;

/// @brief Field _state, offset: 0x60, size: 0x4, def value: None
 ::Oculus::Interaction::InteractableState  ____state;

/// [CompilerGenerated]
/// @brief Field WhenStateChanged, offset: 0x68, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*  ___WhenStateChanged;

/// [CompilerGenerated]
/// @brief Field WhenInteractorViewAdded, offset: 0x70, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::IInteractorView*>*  ___WhenInteractorViewAdded;

/// [CompilerGenerated]
/// @brief Field WhenInteractorViewRemoved, offset: 0x78, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::IInteractorView*>*  ___WhenInteractorViewRemoved;

/// [CompilerGenerated]
/// @brief Field WhenSelectingInteractorViewAdded, offset: 0x80, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::IInteractorView*>*  ___WhenSelectingInteractorViewAdded;

/// [CompilerGenerated]
/// @brief Field WhenSelectingInteractorViewRemoved, offset: 0x88, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::IInteractorView*>*  ___WhenSelectingInteractorViewRemoved;

/// @brief Field _whenInteractorAdded, offset: 0x90, size: 0x8, def value: None
 ::Oculus::Interaction::MultiAction_1<TInteractor>*  ____whenInteractorAdded;

/// @brief Field _whenInteractorRemoved, offset: 0x98, size: 0x8, def value: None
 ::Oculus::Interaction::MultiAction_1<TInteractor>*  ____whenInteractorRemoved;

/// @brief Field _whenSelectingInteractorAdded, offset: 0xa0, size: 0x8, def value: None
 ::Oculus::Interaction::MultiAction_1<TInteractor>*  ____whenSelectingInteractorAdded;

/// @brief Field _whenSelectingInteractorRemoved, offset: 0xa8, size: 0x8, def value: None
 ::Oculus::Interaction::MultiAction_1<TInteractor>*  ____whenSelectingInteractorRemoved;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// cpp template
template<typename TInteractor,typename TInteractable>
// Is value type: false
// CS Name: Oculus.Interaction.Interactable`2/<>c<TInteractor,TInteractable>
class CORDL_TYPE Interactable_2___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*  __9;

/// @brief Field <>9__75_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__75_0, put=setStaticF___9__75_0)) ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IGameObjectFilter*>*  __9__75_0;

/// @brief Field <>9__80_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__80_0, put=setStaticF___9__80_0)) ::System::Converter_2<::Oculus::Interaction::IGameObjectFilter*,::UnityW<::UnityEngine::Object>>*  __9__80_0;

/// @brief Field <>9__82_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__82_0, put=setStaticF___9__82_0)) ::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*  __9__82_0;

/// @brief Field <>9__82_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__82_1, put=setStaticF___9__82_1)) ::System::Action_1<::Oculus::Interaction::IInteractorView*>*  __9__82_1;

/// @brief Field <>9__82_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__82_2, put=setStaticF___9__82_2)) ::System::Action_1<::Oculus::Interaction::IInteractorView*>*  __9__82_2;

/// @brief Field <>9__82_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__82_3, put=setStaticF___9__82_3)) ::System::Action_1<::Oculus::Interaction::IInteractorView*>*  __9__82_3;

/// @brief Field <>9__82_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__82_4, put=setStaticF___9__82_4)) ::System::Action_1<::Oculus::Interaction::IInteractorView*>*  __9__82_4;

static inline ::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>* New_ctor() ;

/// @brief Method <Awake>b__75_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IGameObjectFilter* _Awake_b__75_0(::UnityEngine::Object*  mono) ;

/// @brief Method <InjectOptionalInteractorFilters>b__80_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> _InjectOptionalInteractorFilters_b__80_0(::Oculus::Interaction::IGameObjectFilter*  interactorFilter) ;

/// @brief Method <.ctor>b__82_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__82_0(::Oculus::Interaction::InteractableStateChangeArgs  _p0_) ;

/// @brief Method <.ctor>b__82_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__82_1(::Oculus::Interaction::IInteractorView*  _p0_) ;

/// @brief Method <.ctor>b__82_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__82_2(::Oculus::Interaction::IInteractorView*  _p0_) ;

/// @brief Method <.ctor>b__82_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__82_3(::Oculus::Interaction::IInteractorView*  _p0_) ;

/// @brief Method <.ctor>b__82_4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__82_4(::Oculus::Interaction::IInteractorView*  _p0_) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>* getStaticF___9() ;

static inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IGameObjectFilter*>* getStaticF___9__75_0() ;

static inline ::System::Converter_2<::Oculus::Interaction::IGameObjectFilter*,::UnityW<::UnityEngine::Object>>* getStaticF___9__80_0() ;

static inline ::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>* getStaticF___9__82_0() ;

static inline ::System::Action_1<::Oculus::Interaction::IInteractorView*>* getStaticF___9__82_1() ;

static inline ::System::Action_1<::Oculus::Interaction::IInteractorView*>* getStaticF___9__82_2() ;

static inline ::System::Action_1<::Oculus::Interaction::IInteractorView*>* getStaticF___9__82_3() ;

static inline ::System::Action_1<::Oculus::Interaction::IInteractorView*>* getStaticF___9__82_4() ;

static inline void setStaticF___9(::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*  value) ;

static inline void setStaticF___9__75_0(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IGameObjectFilter*>*  value) ;

static inline void setStaticF___9__80_0(::System::Converter_2<::Oculus::Interaction::IGameObjectFilter*,::UnityW<::UnityEngine::Object>>*  value) ;

static inline void setStaticF___9__82_0(::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*  value) ;

static inline void setStaticF___9__82_1(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

static inline void setStaticF___9__82_2(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

static inline void setStaticF___9__82_3(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

static inline void setStaticF___9__82_4(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Interactable_2___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Interactable_2___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Interactable_2___c(Interactable_2___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Interactable_2___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Interactable_2___c(Interactable_2___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15772};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
