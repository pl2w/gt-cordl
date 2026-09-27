#pragma once
// IWYU pragma private; include "Oculus/Interaction/SecondaryInteractorFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecondaryInteractorFilter)
namespace Oculus::Interaction {
class IGameObjectFilter;
}
namespace Oculus::Interaction {
class IInteractable;
}
namespace Oculus::Interaction {
class IInteractorView;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class SecondaryInteractorFilter;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::SecondaryInteractorFilter*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::SecondaryInteractorFilter*, "Oculus.Interaction", "SecondaryInteractorFilter");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.SecondaryInteractorFilter
class CORDL_TYPE SecondaryInteractorFilter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_PrimaryInteractable, put=set_PrimaryInteractable)) ::Oculus::Interaction::IInteractable*  PrimaryInteractable;

 __declspec(property(get=get_SecondaryInteractable, put=set_SecondaryInteractable)) ::Oculus::Interaction::IInteractable*  SecondaryInteractable;

/// @brief Field <PrimaryInteractable>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__PrimaryInteractable_k__BackingField, put=__cordl_internal_set__PrimaryInteractable_k__BackingField)) ::Oculus::Interaction::IInteractable*  _PrimaryInteractable_k__BackingField;

/// @brief Field <SecondaryInteractable>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__SecondaryInteractable_k__BackingField, put=__cordl_internal_set__SecondaryInteractable_k__BackingField)) ::Oculus::Interaction::IInteractable*  _SecondaryInteractable_k__BackingField;

/// @brief Field _primaryInteractable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__primaryInteractable, put=__cordl_internal_set__primaryInteractable)) ::UnityW<::UnityEngine::Object>  _primaryInteractable;

/// @brief Field _primaryToSecondaryMap, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__primaryToSecondaryMap, put=__cordl_internal_set__primaryToSecondaryMap)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<int32_t>*>*  _primaryToSecondaryMap;

/// @brief Field _secondaryInteractable, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__secondaryInteractable, put=__cordl_internal_set__secondaryInteractable)) ::UnityW<::UnityEngine::Object>  _secondaryInteractable;

/// @brief Field _selectRequired, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__selectRequired, put=__cordl_internal_set__selectRequired)) bool  _selectRequired;

/// @brief Field _started, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Convert operator to "::Oculus::Interaction::IGameObjectFilter"
constexpr operator  ::Oculus::Interaction::IGameObjectFilter*() noexcept;

/// @brief Method Awake, addr 0xa442180, size 0x74, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Filter, addr 0xa442738, size 0x2c0, virtual true, abstract: false, final true
inline bool Filter(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method HandleInteractorAdded, addr 0xa4429f8, size 0x178, virtual false, abstract: false, final false
inline void HandleInteractorAdded(::Oculus::Interaction::IInteractorView*  interactor) ;

/// @brief Method HandleInteractorRemoved, addr 0xa442b70, size 0x430, virtual false, abstract: false, final false
inline void HandleInteractorRemoved(::Oculus::Interaction::IInteractorView*  primaryInteractor) ;

/// @brief Method InjectAllSecondaryInteractorFilter, addr 0xa442fa0, size 0x34, virtual false, abstract: false, final false
inline void InjectAllSecondaryInteractorFilter(::Oculus::Interaction::IInteractable*  primaryInteractable, ::Oculus::Interaction::IInteractable*  secondaryInteractable, bool  selectRequired) ;

/// @brief Method InjectPrimaryInteractable, addr 0xa442fd4, size 0xcc, virtual false, abstract: false, final false
inline void InjectPrimaryInteractable(::Oculus::Interaction::IInteractable*  interactableView) ;

/// @brief Method InjectSecondaryInteractable, addr 0xa4430a0, size 0xcc, virtual false, abstract: false, final false
inline void InjectSecondaryInteractable(::Oculus::Interaction::IInteractable*  interactable) ;

/// @brief Method InjectSelectRequired, addr 0xa44316c, size 0x8, virtual false, abstract: false, final false
inline void InjectSelectRequired(bool  selectRequired) ;

static inline ::Oculus::Interaction::SecondaryInteractorFilter* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4424ac, size 0x28c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa442220, size 0x28c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa4421f4, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::IInteractable* const& __cordl_internal_get__PrimaryInteractable_k__BackingField() const;

constexpr ::Oculus::Interaction::IInteractable*& __cordl_internal_get__PrimaryInteractable_k__BackingField() ;

constexpr ::Oculus::Interaction::IInteractable* const& __cordl_internal_get__SecondaryInteractable_k__BackingField() const;

constexpr ::Oculus::Interaction::IInteractable*& __cordl_internal_get__SecondaryInteractable_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__primaryInteractable() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__primaryInteractable() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<int32_t>*>* const& __cordl_internal_get__primaryToSecondaryMap() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<int32_t>*>*& __cordl_internal_get__primaryToSecondaryMap() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__secondaryInteractable() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__secondaryInteractable() ;

constexpr bool const& __cordl_internal_get__selectRequired() const;

constexpr bool& __cordl_internal_get__selectRequired() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__PrimaryInteractable_k__BackingField(::Oculus::Interaction::IInteractable*  value) ;

constexpr void __cordl_internal_set__SecondaryInteractable_k__BackingField(::Oculus::Interaction::IInteractable*  value) ;

constexpr void __cordl_internal_set__primaryInteractable(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__primaryToSecondaryMap(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<int32_t>*>*  value) ;

constexpr void __cordl_internal_set__secondaryInteractable(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__selectRequired(bool  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa443174, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_PrimaryInteractable, addr 0xa442160, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IInteractable* get_PrimaryInteractable() ;

/// [CompilerGenerated]
/// @brief Method get_SecondaryInteractable, addr 0xa442170, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IInteractable* get_SecondaryInteractable() ;

/// @brief Convert to "::Oculus::Interaction::IGameObjectFilter"
constexpr ::Oculus::Interaction::IGameObjectFilter* i___Oculus__Interaction__IGameObjectFilter() noexcept;

/// [CompilerGenerated]
/// @brief Method set_PrimaryInteractable, addr 0xa442168, size 0x8, virtual false, abstract: false, final false
inline void set_PrimaryInteractable(::Oculus::Interaction::IInteractable*  value) ;

/// [CompilerGenerated]
/// @brief Method set_SecondaryInteractable, addr 0xa442178, size 0x8, virtual false, abstract: false, final false
inline void set_SecondaryInteractable(::Oculus::Interaction::IInteractable*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SecondaryInteractorFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SecondaryInteractorFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SecondaryInteractorFilter(SecondaryInteractorFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecondaryInteractorFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecondaryInteractorFilter(SecondaryInteractorFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15799};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IInteractable), new[] {  })]
/// @brief Field _primaryInteractable, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____primaryInteractable;

/// [CompilerGenerated]
/// @brief Field <PrimaryInteractable>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractable*  ____PrimaryInteractable_k__BackingField;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IInteractable), new[] {  })]
/// @brief Field _secondaryInteractable, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____secondaryInteractable;

/// [CompilerGenerated]
/// @brief Field <SecondaryInteractable>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractable*  ____SecondaryInteractable_k__BackingField;

/// [SerializeField]
/// @brief Field _selectRequired, offset: 0x40, size: 0x1, def value: None
 bool  ____selectRequired;

/// @brief Field _primaryToSecondaryMap, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<int32_t>*>*  ____primaryToSecondaryMap;

/// @brief Field _started, offset: 0x50, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::SecondaryInteractorFilter, ____primaryInteractable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SecondaryInteractorFilter, ____PrimaryInteractable_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SecondaryInteractorFilter, ____secondaryInteractable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SecondaryInteractorFilter, ____SecondaryInteractable_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SecondaryInteractorFilter, ____selectRequired) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SecondaryInteractorFilter, ____primaryToSecondaryMap) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SecondaryInteractorFilter, ____started) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::SecondaryInteractorFilter) == 0x58, "Size mismatch!");

} // namespace end def Oculus::Interaction
