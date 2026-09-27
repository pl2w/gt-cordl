#pragma once
// IWYU pragma private; include "Oculus/Interaction/IndexPinchSafeReleaseSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IndexPinchSafeReleaseSelector)
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace Oculus::Interaction {
class ISelector;
}
namespace Oculus::Interaction {
class IndexPinchSafeReleaseSelector___c;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class IndexPinchSafeReleaseSelector;
}
namespace Oculus::Interaction {
class IndexPinchSafeReleaseSelector___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::IndexPinchSafeReleaseSelector*);
MARK_REF_T(::Oculus::Interaction::IndexPinchSafeReleaseSelector___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IndexPinchSafeReleaseSelector*, "Oculus.Interaction", "IndexPinchSafeReleaseSelector");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IndexPinchSafeReleaseSelector___c*, "Oculus.Interaction", "IndexPinchSafeReleaseSelector/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IndexPinchSafeReleaseSelector
class CORDL_TYPE IndexPinchSafeReleaseSelector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::IndexPinchSafeReleaseSelector___c;

 __declspec(property(get=get_Active)) bool  Active;

 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_SafeReleaseThreshold, put=set_SafeReleaseThreshold)) float_t  SafeReleaseThreshold;

 __declspec(property(get=get_SelectOnRelease, put=set_SelectOnRelease)) bool  SelectOnRelease;

/// @brief Field WhenSelected, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenSelected, put=__cordl_internal_set_WhenSelected)) ::System::Action*  WhenSelected;

/// @brief Field WhenUnselected, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenUnselected, put=__cordl_internal_set_WhenUnselected)) ::System::Action*  WhenUnselected;

/// @brief Field <Hand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field _active, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__active, put=__cordl_internal_set__active)) bool  _active;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _pendingUnselect, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get__pendingUnselect, put=__cordl_internal_set__pendingUnselect)) bool  _pendingUnselect;

/// @brief Field _safeReleaseThreshold, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__safeReleaseThreshold, put=__cordl_internal_set__safeReleaseThreshold)) float_t  _safeReleaseThreshold;

/// @brief Field _selectOnRelease, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__selectOnRelease, put=__cordl_internal_set__selectOnRelease)) bool  _selectOnRelease;

/// @brief Field _started, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _wasPinching, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasPinching, put=__cordl_internal_set__wasPinching)) bool  _wasPinching;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::ISelector"
constexpr operator  ::Oculus::Interaction::ISelector*() noexcept;

/// @brief Method Awake, addr 0xa480480, size 0x70, virtual true, abstract: false, final false
inline void Awake() ;

/// [Obsolete("Disable the component to Cancel any ongoing pinch")]
/// @brief Method Cancel, addr 0xa480d18, size 0x4, virtual false, abstract: false, final false
inline void Cancel() ;

/// @brief Method HandleHandUpdated, addr 0xa4807a8, size 0x188, virtual false, abstract: false, final false
inline void HandleHandUpdated() ;

/// @brief Method InjectAllIndexPinchSafeReleaseSelector, addr 0xa480d1c, size 0x4, virtual false, abstract: false, final false
inline void InjectAllIndexPinchSafeReleaseSelector(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectHand, addr 0xa480d20, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// [Obsolete("Use SelectOnRelease setter instead.")]
/// @brief Method InjectSelectOnRelease, addr 0xa480df0, size 0x4, virtual false, abstract: false, final false
inline void InjectSelectOnRelease(bool  selectOnRelease) ;

/// @brief Method IsIndexExtended, addr 0xa480930, size 0x3e8, virtual true, abstract: false, final false
inline bool IsIndexExtended() ;

static inline ::Oculus::Interaction::IndexPinchSafeReleaseSelector* New_ctor() ;

/// @brief Method OnDisable, addr 0xa480688, size 0x120, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa48051c, size 0x16c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa4804f0, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::System::Action* const& __cordl_internal_get_WhenSelected() const;

constexpr ::System::Action*& __cordl_internal_get_WhenSelected() ;

constexpr ::System::Action* const& __cordl_internal_get_WhenUnselected() const;

constexpr ::System::Action*& __cordl_internal_get_WhenUnselected() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr bool const& __cordl_internal_get__active() const;

constexpr bool& __cordl_internal_get__active() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr bool const& __cordl_internal_get__pendingUnselect() const;

constexpr bool& __cordl_internal_get__pendingUnselect() ;

constexpr float_t const& __cordl_internal_get__safeReleaseThreshold() const;

constexpr float_t& __cordl_internal_get__safeReleaseThreshold() ;

constexpr bool const& __cordl_internal_get__selectOnRelease() const;

constexpr bool& __cordl_internal_get__selectOnRelease() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr bool const& __cordl_internal_get__wasPinching() const;

constexpr bool& __cordl_internal_get__wasPinching() ;

constexpr void __cordl_internal_set_WhenSelected(::System::Action*  value) ;

constexpr void __cordl_internal_set_WhenUnselected(::System::Action*  value) ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__active(bool  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__pendingUnselect(bool  value) ;

constexpr void __cordl_internal_set__safeReleaseThreshold(float_t  value) ;

constexpr void __cordl_internal_set__selectOnRelease(bool  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__wasPinching(bool  value) ;

/// @brief Method .ctor, addr 0xa480df4, size 0x194, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenSelected, addr 0xa480210, size 0x9c, virtual true, abstract: false, final true
inline void add_WhenSelected(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenUnselected, addr 0xa480348, size 0x9c, virtual true, abstract: false, final true
inline void add_WhenUnselected(::System::Action*  value) ;

/// @brief Method get_Active, addr 0xa480208, size 0x8, virtual true, abstract: false, final true
inline bool get_Active() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa4801d8, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// @brief Method get_SafeReleaseThreshold, addr 0xa4801f8, size 0x8, virtual false, abstract: false, final false
inline float_t get_SafeReleaseThreshold() ;

/// @brief Method get_SelectOnRelease, addr 0xa4801e8, size 0x8, virtual false, abstract: false, final false
inline bool get_SelectOnRelease() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

/// @brief Convert to "::Oculus::Interaction::ISelector"
constexpr ::Oculus::Interaction::ISelector* i___Oculus__Interaction__ISelector() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenSelected, addr 0xa4802ac, size 0x9c, virtual true, abstract: false, final true
inline void remove_WhenSelected(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenUnselected, addr 0xa4803e4, size 0x9c, virtual true, abstract: false, final true
inline void remove_WhenUnselected(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa4801e0, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

/// @brief Method set_SafeReleaseThreshold, addr 0xa480200, size 0x8, virtual false, abstract: false, final false
inline void set_SafeReleaseThreshold(float_t  value) ;

/// @brief Method set_SelectOnRelease, addr 0xa4801f0, size 0x8, virtual false, abstract: false, final false
inline void set_SelectOnRelease(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IndexPinchSafeReleaseSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IndexPinchSafeReleaseSelector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IndexPinchSafeReleaseSelector(IndexPinchSafeReleaseSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IndexPinchSafeReleaseSelector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IndexPinchSafeReleaseSelector(IndexPinchSafeReleaseSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15978};

/// [Tooltip("The hand to check.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// [Tooltip("If checked, the selector will select during the frame when the pinch is released as opposed to when it\'s pinching.")]
/// [SerializeField]
/// @brief Field _selectOnRelease, offset: 0x30, size: 0x1, def value: None
 bool  ____selectOnRelease;

/// [Tooltip("Indicates how extended the index needs to be in order to be safe to unpinch.")]
/// [SerializeField]
/// [Range(-1, 1)]
/// @brief Field _safeReleaseThreshold, offset: 0x34, size: 0x4, def value: None
 float_t  ____safeReleaseThreshold;

/// @brief Field _wasPinching, offset: 0x38, size: 0x1, def value: None
 bool  ____wasPinching;

/// @brief Field _active, offset: 0x39, size: 0x1, def value: None
 bool  ____active;

/// @brief Field _pendingUnselect, offset: 0x3a, size: 0x1, def value: None
 bool  ____pendingUnselect;

/// [CompilerGenerated]
/// @brief Field WhenSelected, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___WhenSelected;

/// [CompilerGenerated]
/// @brief Field WhenUnselected, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  ___WhenUnselected;

/// @brief Field _started, offset: 0x50, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::IndexPinchSafeReleaseSelector, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::IndexPinchSafeReleaseSelector, ____Hand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::IndexPinchSafeReleaseSelector, ____selectOnRelease) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::IndexPinchSafeReleaseSelector, ____safeReleaseThreshold) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::IndexPinchSafeReleaseSelector, ____wasPinching) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::IndexPinchSafeReleaseSelector, ____active) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::IndexPinchSafeReleaseSelector, ____pendingUnselect) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::IndexPinchSafeReleaseSelector, ___WhenSelected) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::IndexPinchSafeReleaseSelector, ___WhenUnselected) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::IndexPinchSafeReleaseSelector, ____started) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::IndexPinchSafeReleaseSelector) == 0x58, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IndexPinchSafeReleaseSelector/<>c
class CORDL_TYPE IndexPinchSafeReleaseSelector___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::IndexPinchSafeReleaseSelector___c*  __9;

/// @brief Field <>9__35_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__35_0, put=setStaticF___9__35_0)) ::System::Action*  __9__35_0;

/// @brief Field <>9__35_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__35_1, put=setStaticF___9__35_1)) ::System::Action*  __9__35_1;

static inline ::Oculus::Interaction::IndexPinchSafeReleaseSelector___c* New_ctor() ;

/// @brief Method <.ctor>b__35_0, addr 0xa480ff8, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__35_0() ;

/// @brief Method <.ctor>b__35_1, addr 0xa480ffc, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__35_1() ;

/// @brief Method .ctor, addr 0xa480ff0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::IndexPinchSafeReleaseSelector___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__35_0() ;

static inline ::System::Action* getStaticF___9__35_1() ;

static inline void setStaticF___9(::Oculus::Interaction::IndexPinchSafeReleaseSelector___c*  value) ;

static inline void setStaticF___9__35_0(::System::Action*  value) ;

static inline void setStaticF___9__35_1(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IndexPinchSafeReleaseSelector___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IndexPinchSafeReleaseSelector___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IndexPinchSafeReleaseSelector___c(IndexPinchSafeReleaseSelector___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IndexPinchSafeReleaseSelector___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IndexPinchSafeReleaseSelector___c(IndexPinchSafeReleaseSelector___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15977};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::IndexPinchSafeReleaseSelector___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
