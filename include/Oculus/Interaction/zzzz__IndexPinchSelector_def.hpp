#pragma once
// IWYU pragma private; include "Oculus/Interaction/IndexPinchSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(IndexPinchSelector)
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction {
class ISelector;
}
namespace Oculus::Interaction {
class IndexPinchSelector___c;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class IndexPinchSelector;
}
namespace Oculus::Interaction {
class IndexPinchSelector___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::IndexPinchSelector*);
MARK_REF_T(::Oculus::Interaction::IndexPinchSelector___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IndexPinchSelector*, "Oculus.Interaction", "IndexPinchSelector");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IndexPinchSelector___c*, "Oculus.Interaction", "IndexPinchSelector/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IndexPinchSelector
class CORDL_TYPE IndexPinchSelector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::IndexPinchSelector___c;

 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

/// @brief Field WhenSelected, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenSelected, put=__cordl_internal_set_WhenSelected)) ::System::Action*  WhenSelected;

/// @brief Field WhenUnselected, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenUnselected, put=__cordl_internal_set_WhenUnselected)) ::System::Action*  WhenUnselected;

/// @brief Field <Hand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _isIndexFingerPinching, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__isIndexFingerPinching, put=__cordl_internal_set__isIndexFingerPinching)) bool  _isIndexFingerPinching;

/// @brief Field _started, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Convert operator to "::Oculus::Interaction::ISelector"
constexpr operator  ::Oculus::Interaction::ISelector*() noexcept;

/// @brief Method Awake, addr 0xa481280, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleHandUpdated, addr 0xa481504, size 0xe8, virtual false, abstract: false, final false
inline void HandleHandUpdated() ;

/// @brief Method InjectAllIndexPinchSelector, addr 0xa4815ec, size 0x4, virtual false, abstract: false, final false
inline void InjectAllIndexPinchSelector(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectHand, addr 0xa4815f0, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

static inline ::Oculus::Interaction::IndexPinchSelector* New_ctor() ;

/// @brief Method OnDisable, addr 0xa481404, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa481304, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa4812d8, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::System::Action* const& __cordl_internal_get_WhenSelected() const;

constexpr ::System::Action*& __cordl_internal_get_WhenSelected() ;

constexpr ::System::Action* const& __cordl_internal_get_WhenUnselected() const;

constexpr ::System::Action*& __cordl_internal_get_WhenUnselected() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr bool const& __cordl_internal_get__isIndexFingerPinching() const;

constexpr bool& __cordl_internal_get__isIndexFingerPinching() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_WhenSelected(::System::Action*  value) ;

constexpr void __cordl_internal_set_WhenUnselected(::System::Action*  value) ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__isIndexFingerPinching(bool  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa4816c0, size 0x18c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenSelected, addr 0xa481010, size 0x9c, virtual true, abstract: false, final true
inline void add_WhenSelected(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenUnselected, addr 0xa481148, size 0x9c, virtual true, abstract: false, final true
inline void add_WhenUnselected(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa481000, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// @brief Convert to "::Oculus::Interaction::ISelector"
constexpr ::Oculus::Interaction::ISelector* i___Oculus__Interaction__ISelector() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenSelected, addr 0xa4810ac, size 0x9c, virtual true, abstract: false, final true
inline void remove_WhenSelected(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenUnselected, addr 0xa4811e4, size 0x9c, virtual true, abstract: false, final true
inline void remove_WhenUnselected(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa481008, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IndexPinchSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IndexPinchSelector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IndexPinchSelector(IndexPinchSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IndexPinchSelector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IndexPinchSelector(IndexPinchSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15980};

/// [Tooltip("The hand to check.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// @brief Field _isIndexFingerPinching, offset: 0x30, size: 0x1, def value: None
 bool  ____isIndexFingerPinching;

/// [CompilerGenerated]
/// @brief Field WhenSelected, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___WhenSelected;

/// [CompilerGenerated]
/// @brief Field WhenUnselected, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___WhenUnselected;

/// @brief Field _started, offset: 0x48, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::IndexPinchSelector, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::IndexPinchSelector, ____Hand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::IndexPinchSelector, ____isIndexFingerPinching) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::IndexPinchSelector, ___WhenSelected) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::IndexPinchSelector, ___WhenUnselected) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::IndexPinchSelector, ____started) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::IndexPinchSelector) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IndexPinchSelector/<>c
class CORDL_TYPE IndexPinchSelector___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::IndexPinchSelector___c*  __9;

/// @brief Field <>9__20_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_0, put=setStaticF___9__20_0)) ::System::Action*  __9__20_0;

/// @brief Field <>9__20_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_1, put=setStaticF___9__20_1)) ::System::Action*  __9__20_1;

static inline ::Oculus::Interaction::IndexPinchSelector___c* New_ctor() ;

/// @brief Method <.ctor>b__20_0, addr 0xa4818bc, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__20_0() ;

/// @brief Method <.ctor>b__20_1, addr 0xa4818c0, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__20_1() ;

/// @brief Method .ctor, addr 0xa4818b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::IndexPinchSelector___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__20_0() ;

static inline ::System::Action* getStaticF___9__20_1() ;

static inline void setStaticF___9(::Oculus::Interaction::IndexPinchSelector___c*  value) ;

static inline void setStaticF___9__20_0(::System::Action*  value) ;

static inline void setStaticF___9__20_1(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IndexPinchSelector___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IndexPinchSelector___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IndexPinchSelector___c(IndexPinchSelector___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IndexPinchSelector___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IndexPinchSelector___c(IndexPinchSelector___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15979};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::IndexPinchSelector___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
