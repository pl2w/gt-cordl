#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractableGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InteractableGroup)
namespace GlobalNamespace {
struct InteractableGroup_InteractableLimits;
}
namespace Oculus::Interaction {
class IInteractable;
}
namespace Oculus::Interaction {
class IInteractorView;
}
namespace Oculus::Interaction {
class InteractableGroup___c;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
class InteractableGroup;
}
namespace Oculus::Interaction {
class InteractableGroup___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::InteractableGroup*);
MARK_REF_T(::Oculus::Interaction::InteractableGroup___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::InteractableGroup*, "Oculus.Interaction", "InteractableGroup");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::InteractableGroup___c*, "Oculus.Interaction", "InteractableGroup/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.InteractableGroup
class CORDL_TYPE InteractableGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InteractableLimits = ::GlobalNamespace::InteractableGroup_InteractableLimits;

using __c = ::Oculus::Interaction::InteractableGroup___c;

 __declspec(property(get=get_Data, put=set_Data)) ::System::Object*  Data;

/// @brief Field Interactables, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Interactables, put=__cordl_internal_set_Interactables)) ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractable*>*  Interactables;

/// @brief Field <Data>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__Data_k__BackingField, put=__cordl_internal_set__Data_k__BackingField)) ::System::Object*  _Data_k__BackingField;

/// @brief Field _data, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::UnityW<::UnityEngine::Object>  _data;

/// @brief Field _interactables, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactables, put=__cordl_internal_set__interactables)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  _interactables;

/// @brief Field _interactors, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__interactors, put=__cordl_internal_set__interactors)) int32_t  _interactors;

/// @brief Field _limits, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__limits, put=__cordl_internal_set__limits)) ::System::Collections::Generic::List_1<::GlobalNamespace::InteractableGroup_InteractableLimits>*  _limits;

/// @brief Field _maxInteractors, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxInteractors, put=__cordl_internal_set__maxInteractors)) int32_t  _maxInteractors;

/// @brief Field _maxSelectingInteractors, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxSelectingInteractors, put=__cordl_internal_set__maxSelectingInteractors)) int32_t  _maxSelectingInteractors;

/// @brief Field _selectInteractors, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__selectInteractors, put=__cordl_internal_set__selectInteractors)) int32_t  _selectInteractors;

/// @brief Field _started, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa4149f8, size 0x114, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleInteractorViewAdded, addr 0xa415e48, size 0x4, virtual false, abstract: false, final false
inline void HandleInteractorViewAdded(::Oculus::Interaction::IInteractorView*  interactorView) ;

/// @brief Method HandleInteractorViewRemoved, addr 0xa415e4c, size 0x4, virtual false, abstract: false, final false
inline void HandleInteractorViewRemoved(::Oculus::Interaction::IInteractorView*  interactorView) ;

/// @brief Method HandleSelectingInteractorViewAdded, addr 0xa415e50, size 0x4, virtual false, abstract: false, final false
inline void HandleSelectingInteractorViewAdded(::Oculus::Interaction::IInteractorView*  interactorView) ;

/// @brief Method HandleSelectingInteractorViewRemoved, addr 0xa415e54, size 0x4, virtual false, abstract: false, final false
inline void HandleSelectingInteractorViewRemoved(::Oculus::Interaction::IInteractorView*  interactorView) ;

/// @brief Method InjectAllInteractableGroup, addr 0xa415e58, size 0x4, virtual false, abstract: false, final false
inline void InjectAllInteractableGroup(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractable*>*  interactables) ;

/// @brief Method InjectInteractables, addr 0xa415e5c, size 0x124, virtual false, abstract: false, final false
inline void InjectInteractables(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractable*>*  interactables) ;

/// @brief Method InjectOptionalData, addr 0xa415f80, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalData(::System::Object*  data) ;

static inline ::Oculus::Interaction::InteractableGroup* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4155ec, size 0x3e4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa414e48, size 0x3e4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa414b0c, size 0x33c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateInteractorCount, addr 0xa41522c, size 0x1e0, virtual false, abstract: false, final false
inline void UpdateInteractorCount() ;

/// @brief Method UpdateMaxInteractors, addr 0xa4159d0, size 0x238, virtual false, abstract: false, final false
inline void UpdateMaxInteractors() ;

/// @brief Method UpdateMaxSelecting, addr 0xa415c08, size 0x240, virtual false, abstract: false, final false
inline void UpdateMaxSelecting() ;

/// @brief Method UpdateSelectingInteractorCount, addr 0xa41540c, size 0x1e0, virtual false, abstract: false, final false
inline void UpdateSelectingInteractorCount() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractable*>* const& __cordl_internal_get_Interactables() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractable*>*& __cordl_internal_get_Interactables() ;

constexpr ::System::Object* const& __cordl_internal_get__Data_k__BackingField() const;

constexpr ::System::Object*& __cordl_internal_get__Data_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__data() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__data() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get__interactables() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get__interactables() ;

constexpr int32_t const& __cordl_internal_get__interactors() const;

constexpr int32_t& __cordl_internal_get__interactors() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::InteractableGroup_InteractableLimits>* const& __cordl_internal_get__limits() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::InteractableGroup_InteractableLimits>*& __cordl_internal_get__limits() ;

constexpr int32_t const& __cordl_internal_get__maxInteractors() const;

constexpr int32_t& __cordl_internal_get__maxInteractors() ;

constexpr int32_t const& __cordl_internal_get__maxSelectingInteractors() const;

constexpr int32_t& __cordl_internal_get__maxSelectingInteractors() ;

constexpr int32_t const& __cordl_internal_get__selectInteractors() const;

constexpr int32_t& __cordl_internal_get__selectInteractors() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_Interactables(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractable*>*  value) ;

constexpr void __cordl_internal_set__Data_k__BackingField(::System::Object*  value) ;

constexpr void __cordl_internal_set__data(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__interactables(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set__interactors(int32_t  value) ;

constexpr void __cordl_internal_set__limits(::System::Collections::Generic::List_1<::GlobalNamespace::InteractableGroup_InteractableLimits>*  value) ;

constexpr void __cordl_internal_set__maxInteractors(int32_t  value) ;

constexpr void __cordl_internal_set__maxSelectingInteractors(int32_t  value) ;

constexpr void __cordl_internal_set__selectInteractors(int32_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa416050, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Data, addr 0xa4149e8, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_Data() ;

/// [CompilerGenerated]
/// @brief Method set_Data, addr 0xa4149f0, size 0x8, virtual false, abstract: false, final false
inline void set_Data(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractableGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractableGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractableGroup(InteractableGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractableGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractableGroup(InteractableGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15776};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IInteractable), new[] {  })]
/// @brief Field _interactables, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ____interactables;

/// @brief Field Interactables, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractable*>*  ___Interactables;

/// @brief Field _limits, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::InteractableGroup_InteractableLimits>*  ____limits;

/// [SerializeField]
/// @brief Field _maxInteractors, offset: 0x38, size: 0x4, def value: None
 int32_t  ____maxInteractors;

/// [SerializeField]
/// @brief Field _maxSelectingInteractors, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____maxSelectingInteractors;

/// @brief Field _interactors, offset: 0x40, size: 0x4, def value: None
 int32_t  ____interactors;

/// @brief Field _selectInteractors, offset: 0x44, size: 0x4, def value: None
 int32_t  ____selectInteractors;

/// [SerializeField]
/// [Optional]
/// @brief Field _data, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____data;

/// [CompilerGenerated]
/// @brief Field <Data>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::System::Object*  ____Data_k__BackingField;

/// @brief Field _started, offset: 0x58, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::InteractableGroup, ____interactables) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableGroup, ___Interactables) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableGroup, ____limits) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableGroup, ____maxInteractors) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableGroup, ____maxSelectingInteractors) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableGroup, ____interactors) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableGroup, ____selectInteractors) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableGroup, ____data) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableGroup, ____Data_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractableGroup, ____started) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::InteractableGroup) == 0x60, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.InteractableGroup/<>c
class CORDL_TYPE InteractableGroup___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::InteractableGroup___c*  __9;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractable*>*  __9__14_0;

/// @brief Field <>9__27_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_0, put=setStaticF___9__27_0)) ::System::Converter_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Object>>*  __9__27_0;

static inline ::Oculus::Interaction::InteractableGroup___c* New_ctor() ;

/// @brief Method <Awake>b__14_0, addr 0xa4160c8, size 0x48, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IInteractable* _Awake_b__14_0(::UnityEngine::Object*  mono) ;

/// @brief Method <InjectInteractables>b__27_0, addr 0xa416110, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> _InjectInteractables_b__27_0(::Oculus::Interaction::IInteractable*  interactable) ;

/// @brief Method .ctor, addr 0xa4160c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::InteractableGroup___c* getStaticF___9() ;

static inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractable*>* getStaticF___9__14_0() ;

static inline ::System::Converter_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Object>>* getStaticF___9__27_0() ;

static inline void setStaticF___9(::Oculus::Interaction::InteractableGroup___c*  value) ;

static inline void setStaticF___9__14_0(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractable*>*  value) ;

static inline void setStaticF___9__27_0(::System::Converter_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Object>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractableGroup___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractableGroup___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractableGroup___c(InteractableGroup___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractableGroup___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractableGroup___c(InteractableGroup___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15775};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::InteractableGroup___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
