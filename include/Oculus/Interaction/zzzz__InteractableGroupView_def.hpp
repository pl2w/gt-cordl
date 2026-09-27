#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractableGroupView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__InteractableState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InteractableGroupView)
namespace Oculus::Interaction {
class IInteractableView;
}
namespace Oculus::Interaction {
class IInteractorView;
}
namespace Oculus::Interaction {
class InteractableGroupView___c;
}
namespace Oculus::Interaction {
struct InteractableStateChangeArgs;
}
namespace Oculus::Interaction {
struct InteractableState;
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
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class InteractableGroupView;
}
namespace Oculus::Interaction {
class InteractableGroupView___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::InteractableGroupView*);
MARK_REF_T(::Oculus::Interaction::InteractableGroupView___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::InteractableGroupView*, "Oculus.Interaction", "InteractableGroupView");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::InteractableGroupView___c*, "Oculus.Interaction", "InteractableGroupView/<>c");
// Dependencies Oculus.Interaction.InteractableState, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.InteractableGroupView
class CORDL_TYPE InteractableGroupView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::InteractableGroupView___c;

 __declspec(property(get=get_Data, put=set_Data)) ::System::Object*  Data;

/// @brief Field Interactables, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Interactables, put=__cordl_internal_set_Interactables)) ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractableView*>*  Interactables;

 __declspec(property(get=get_InteractorViews)) ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*  InteractorViews;

 __declspec(property(get=get_InteractorsCount)) int32_t  InteractorsCount;

 __declspec(property(get=get_MaxInteractors)) int32_t  MaxInteractors;

 __declspec(property(get=get_MaxSelectingInteractors)) int32_t  MaxSelectingInteractors;

 __declspec(property(get=get_SelectingInteractorViews)) ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*  SelectingInteractorViews;

 __declspec(property(get=get_SelectingInteractorsCount)) int32_t  SelectingInteractorsCount;

 __declspec(property(get=get_State, put=set_State)) ::Oculus::Interaction::InteractableState  State;

/// @brief Field WhenInteractorViewAdded, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenInteractorViewAdded, put=__cordl_internal_set_WhenInteractorViewAdded)) ::System::Action_1<::Oculus::Interaction::IInteractorView*>*  WhenInteractorViewAdded;

/// @brief Field WhenInteractorViewRemoved, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenInteractorViewRemoved, put=__cordl_internal_set_WhenInteractorViewRemoved)) ::System::Action_1<::Oculus::Interaction::IInteractorView*>*  WhenInteractorViewRemoved;

/// @brief Field WhenSelectingInteractorViewAdded, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenSelectingInteractorViewAdded, put=__cordl_internal_set_WhenSelectingInteractorViewAdded)) ::System::Action_1<::Oculus::Interaction::IInteractorView*>*  WhenSelectingInteractorViewAdded;

/// @brief Field WhenSelectingInteractorViewRemoved, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenSelectingInteractorViewRemoved, put=__cordl_internal_set_WhenSelectingInteractorViewRemoved)) ::System::Action_1<::Oculus::Interaction::IInteractorView*>*  WhenSelectingInteractorViewRemoved;

/// @brief Field WhenStateChanged, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenStateChanged, put=__cordl_internal_set_WhenStateChanged)) ::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*  WhenStateChanged;

/// @brief Field <Data>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Data_k__BackingField, put=__cordl_internal_set__Data_k__BackingField)) ::System::Object*  _Data_k__BackingField;

/// @brief Field _data, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::UnityW<::UnityEngine::Object>  _data;

/// @brief Field _interactables, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactables, put=__cordl_internal_set__interactables)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  _interactables;

/// @brief Field _started, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _state, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::Oculus::Interaction::InteractableState  _state;

/// @brief Convert operator to "::Oculus::Interaction::IInteractableView"
constexpr operator  ::Oculus::Interaction::IInteractableView*() noexcept;

/// @brief Method Awake, addr 0xa417238, size 0x12c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleInteractorViewAdded, addr 0xa417cc8, size 0x20, virtual false, abstract: false, final false
inline void HandleInteractorViewAdded(::Oculus::Interaction::IInteractorView*  obj) ;

/// @brief Method HandleInteractorViewRemoved, addr 0xa417ce8, size 0x20, virtual false, abstract: false, final false
inline void HandleInteractorViewRemoved(::Oculus::Interaction::IInteractorView*  obj) ;

/// @brief Method HandleSelectingInteractorViewAdded, addr 0xa417d08, size 0x20, virtual false, abstract: false, final false
inline void HandleSelectingInteractorViewAdded(::Oculus::Interaction::IInteractorView*  obj) ;

/// @brief Method HandleSelectingInteractorViewRemoved, addr 0xa417d28, size 0x20, virtual false, abstract: false, final false
inline void HandleSelectingInteractorViewRemoved(::Oculus::Interaction::IInteractorView*  obj) ;

/// @brief Method HandleStateChange, addr 0xa417cc4, size 0x4, virtual false, abstract: false, final false
inline void HandleStateChange(::Oculus::Interaction::InteractableStateChangeArgs  args) ;

/// @brief Method InjectAllInteractableGroupView, addr 0xa417d48, size 0x4, virtual false, abstract: false, final false
inline void InjectAllInteractableGroupView(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractableView*>*  interactables) ;

/// @brief Method InjectInteractables, addr 0xa417d4c, size 0x12c, virtual false, abstract: false, final false
inline void InjectInteractables(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractableView*>*  interactables) ;

/// @brief Method InjectOptionalData, addr 0xa417e78, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalData(::System::Object*  data) ;

static inline ::Oculus::Interaction::InteractableGroupView* New_ctor() ;

/// @brief Method OnDisable, addr 0xa417840, size 0x484, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4173bc, size 0x484, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa417364, size 0x58, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateState, addr 0xa417200, size 0x38, virtual false, abstract: false, final false
inline void UpdateState() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractableView*>* const& __cordl_internal_get_Interactables() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractableView*>*& __cordl_internal_get_Interactables() ;

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

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get__interactables() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get__interactables() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::Oculus::Interaction::InteractableState const& __cordl_internal_get__state() const;

constexpr ::Oculus::Interaction::InteractableState& __cordl_internal_get__state() ;

constexpr void __cordl_internal_set_Interactables(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractableView*>*  value) ;

constexpr void __cordl_internal_set_WhenInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

constexpr void __cordl_internal_set_WhenInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

constexpr void __cordl_internal_set_WhenSelectingInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

constexpr void __cordl_internal_set_WhenSelectingInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

constexpr void __cordl_internal_set_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*  value) ;

constexpr void __cordl_internal_set__Data_k__BackingField(::System::Object*  value) ;

constexpr void __cordl_internal_set__data(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__interactables(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__state(::Oculus::Interaction::InteractableState  value) ;

/// @brief Method .ctor, addr 0xa417f48, size 0x354, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenInteractorViewAdded, addr 0xa416780, size 0xb0, virtual true, abstract: false, final true
inline void add_WhenInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenInteractorViewRemoved, addr 0xa4168e0, size 0xb0, virtual true, abstract: false, final true
inline void add_WhenInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenSelectingInteractorViewAdded, addr 0xa416a40, size 0xb0, virtual true, abstract: false, final true
inline void add_WhenSelectingInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenSelectingInteractorViewRemoved, addr 0xa416ba0, size 0xb0, virtual true, abstract: false, final true
inline void add_WhenSelectingInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenStateChanged, addr 0xa417060, size 0xb0, virtual true, abstract: false, final true
inline void add_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*  value) ;

/// [CompilerGenerated]
/// @brief Method get_Data, addr 0xa416188, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* get_Data() ;

/// @brief Method get_InteractorViews, addr 0xa416540, size 0x120, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>* get_InteractorViews() ;

/// @brief Method get_InteractorsCount, addr 0xa416198, size 0x1d4, virtual false, abstract: false, final false
inline int32_t get_InteractorsCount() ;

/// @brief Method get_MaxInteractors, addr 0xa416d00, size 0x1b0, virtual true, abstract: false, final true
inline int32_t get_MaxInteractors() ;

/// @brief Method get_MaxSelectingInteractors, addr 0xa416eb0, size 0x1b0, virtual true, abstract: false, final true
inline int32_t get_MaxSelectingInteractors() ;

/// @brief Method get_SelectingInteractorViews, addr 0xa416660, size 0x120, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>* get_SelectingInteractorViews() ;

/// @brief Method get_SelectingInteractorsCount, addr 0xa41636c, size 0x1d4, virtual false, abstract: false, final false
inline int32_t get_SelectingInteractorsCount() ;

/// @brief Method get_State, addr 0xa4171c0, size 0x8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::InteractableState get_State() ;

/// @brief Convert to "::Oculus::Interaction::IInteractableView"
constexpr ::Oculus::Interaction::IInteractableView* i___Oculus__Interaction__IInteractableView() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenInteractorViewAdded, addr 0xa416830, size 0xb0, virtual true, abstract: false, final true
inline void remove_WhenInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenInteractorViewRemoved, addr 0xa416990, size 0xb0, virtual true, abstract: false, final true
inline void remove_WhenInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenSelectingInteractorViewAdded, addr 0xa416af0, size 0xb0, virtual true, abstract: false, final true
inline void remove_WhenSelectingInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenSelectingInteractorViewRemoved, addr 0xa416c50, size 0xb0, virtual true, abstract: false, final true
inline void remove_WhenSelectingInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenStateChanged, addr 0xa417110, size 0xb0, virtual true, abstract: false, final true
inline void remove_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Data, addr 0xa416190, size 0x8, virtual false, abstract: false, final false
inline void set_Data(::System::Object*  value) ;

/// @brief Method set_State, addr 0xa4171c8, size 0x38, virtual false, abstract: false, final false
inline void set_State(::Oculus::Interaction::InteractableState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractableGroupView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractableGroupView", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractableGroupView(InteractableGroupView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractableGroupView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractableGroupView(InteractableGroupView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15778};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IInteractableView), new[] {  })]
/// @brief Field _interactables, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ____interactables;

/// @brief Field Interactables, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractableView*>*  ___Interactables;

/// [SerializeField]
/// [Optional]
/// @brief Field _data, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____data;

/// [CompilerGenerated]
/// @brief Field <Data>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::System::Object*  ____Data_k__BackingField;

/// [CompilerGenerated]
/// @brief Field WhenInteractorViewAdded, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::IInteractorView*>*  ___WhenInteractorViewAdded;

/// [CompilerGenerated]
/// @brief Field WhenInteractorViewRemoved, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::IInteractorView*>*  ___WhenInteractorViewRemoved;

/// [CompilerGenerated]
/// @brief Field WhenSelectingInteractorViewAdded, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::IInteractorView*>*  ___WhenSelectingInteractorViewAdded;

/// [CompilerGenerated]
/// @brief Field WhenSelectingInteractorViewRemoved, offset: 0x58, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::IInteractorView*>*  ___WhenSelectingInteractorViewRemoved;

/// [CompilerGenerated]
/// @brief Field WhenStateChanged, offset: 0x60, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*  ___WhenStateChanged;

/// @brief Field _state, offset: 0x68, size: 0x4, def value: None
 ::Oculus::Interaction::InteractableState  ____state;

/// @brief Field _started, offset: 0x6c, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::InteractableGroupView, ____interactables) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableGroupView, ___Interactables) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableGroupView, ____data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableGroupView, ____Data_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableGroupView, ___WhenInteractorViewAdded) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableGroupView, ___WhenInteractorViewRemoved) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableGroupView, ___WhenSelectingInteractorViewAdded) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableGroupView, ___WhenSelectingInteractorViewRemoved) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableGroupView, ___WhenStateChanged) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableGroupView, ____state) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableGroupView, ____started) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::InteractableGroupView) == 0x70, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.InteractableGroupView/<>c
class CORDL_TYPE InteractableGroupView___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::InteractableGroupView___c*  __9;

/// @brief Field <>9__12_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_0, put=setStaticF___9__12_0)) ::System::Func_2<::Oculus::Interaction::IInteractableView*,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*>*  __9__12_0;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::System::Func_2<::Oculus::Interaction::IInteractableView*,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*>*  __9__14_0;

/// @brief Field <>9__39_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__39_0, put=setStaticF___9__39_0)) ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractableView*>*  __9__39_0;

/// @brief Field <>9__50_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__50_0, put=setStaticF___9__50_0)) ::System::Converter_2<::Oculus::Interaction::IInteractableView*,::UnityW<::UnityEngine::Object>>*  __9__50_0;

/// @brief Field <>9__52_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_0, put=setStaticF___9__52_0)) ::System::Action_1<::Oculus::Interaction::IInteractorView*>*  __9__52_0;

/// @brief Field <>9__52_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_1, put=setStaticF___9__52_1)) ::System::Action_1<::Oculus::Interaction::IInteractorView*>*  __9__52_1;

/// @brief Field <>9__52_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_2, put=setStaticF___9__52_2)) ::System::Action_1<::Oculus::Interaction::IInteractorView*>*  __9__52_2;

/// @brief Field <>9__52_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_3, put=setStaticF___9__52_3)) ::System::Action_1<::Oculus::Interaction::IInteractorView*>*  __9__52_3;

/// @brief Field <>9__52_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_4, put=setStaticF___9__52_4)) ::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*  __9__52_4;

static inline ::Oculus::Interaction::InteractableGroupView___c* New_ctor() ;

/// @brief Method <Awake>b__39_0, addr 0xa41844c, size 0x48, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IInteractableView* _Awake_b__39_0(::UnityEngine::Object*  mono) ;

/// @brief Method <InjectInteractables>b__50_0, addr 0xa418494, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> _InjectInteractables_b__50_0(::Oculus::Interaction::IInteractableView*  interactable) ;

/// @brief Method <.ctor>b__52_0, addr 0xa41850c, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__52_0(::Oculus::Interaction::IInteractorView*  _p0_) ;

/// @brief Method <.ctor>b__52_1, addr 0xa418510, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__52_1(::Oculus::Interaction::IInteractorView*  _p0_) ;

/// @brief Method <.ctor>b__52_2, addr 0xa418514, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__52_2(::Oculus::Interaction::IInteractorView*  _p0_) ;

/// @brief Method <.ctor>b__52_3, addr 0xa418518, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__52_3(::Oculus::Interaction::IInteractorView*  _p0_) ;

/// @brief Method <.ctor>b__52_4, addr 0xa41851c, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__52_4(::Oculus::Interaction::InteractableStateChangeArgs  _p0_) ;

/// @brief Method .ctor, addr 0xa418304, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_InteractorViews>b__12_0, addr 0xa41830c, size 0xa0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>* _get_InteractorViews_b__12_0(::Oculus::Interaction::IInteractableView*  interactable) ;

/// @brief Method <get_SelectingInteractorViews>b__14_0, addr 0xa4183ac, size 0xa0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>* _get_SelectingInteractorViews_b__14_0(::Oculus::Interaction::IInteractableView*  interactable) ;

static inline ::Oculus::Interaction::InteractableGroupView___c* getStaticF___9() ;

static inline ::System::Func_2<::Oculus::Interaction::IInteractableView*,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*>* getStaticF___9__12_0() ;

static inline ::System::Func_2<::Oculus::Interaction::IInteractableView*,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*>* getStaticF___9__14_0() ;

static inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractableView*>* getStaticF___9__39_0() ;

static inline ::System::Converter_2<::Oculus::Interaction::IInteractableView*,::UnityW<::UnityEngine::Object>>* getStaticF___9__50_0() ;

static inline ::System::Action_1<::Oculus::Interaction::IInteractorView*>* getStaticF___9__52_0() ;

static inline ::System::Action_1<::Oculus::Interaction::IInteractorView*>* getStaticF___9__52_1() ;

static inline ::System::Action_1<::Oculus::Interaction::IInteractorView*>* getStaticF___9__52_2() ;

static inline ::System::Action_1<::Oculus::Interaction::IInteractorView*>* getStaticF___9__52_3() ;

static inline ::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>* getStaticF___9__52_4() ;

static inline void setStaticF___9(::Oculus::Interaction::InteractableGroupView___c*  value) ;

static inline void setStaticF___9__12_0(::System::Func_2<::Oculus::Interaction::IInteractableView*,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*>*  value) ;

static inline void setStaticF___9__14_0(::System::Func_2<::Oculus::Interaction::IInteractableView*,::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*>*  value) ;

static inline void setStaticF___9__39_0(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractableView*>*  value) ;

static inline void setStaticF___9__50_0(::System::Converter_2<::Oculus::Interaction::IInteractableView*,::UnityW<::UnityEngine::Object>>*  value) ;

static inline void setStaticF___9__52_0(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

static inline void setStaticF___9__52_1(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

static inline void setStaticF___9__52_2(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

static inline void setStaticF___9__52_3(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value) ;

static inline void setStaticF___9__52_4(::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractableGroupView___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractableGroupView___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractableGroupView___c(InteractableGroupView___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractableGroupView___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractableGroupView___c(InteractableGroupView___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15777};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::InteractableGroupView___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
