#pragma once
// IWYU pragma private; include "Oculus/Interaction/PointableElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PointableElement)
namespace Oculus::Interaction {
class IPointableElement;
}
namespace Oculus::Interaction {
class IPointable;
}
namespace Oculus::Interaction {
class PointableElement___c;
}
namespace Oculus::Interaction {
struct PointerEvent;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction {
class PointableElement;
}
namespace Oculus::Interaction {
class PointableElement___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PointableElement*);
MARK_REF_T(::Oculus::Interaction::PointableElement___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PointableElement*, "Oculus.Interaction", "PointableElement");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PointableElement___c*, "Oculus.Interaction", "PointableElement/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PointableElement
class CORDL_TYPE PointableElement : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::PointableElement___c;

 __declspec(property(get=get_AddNewPointsToFront, put=set_AddNewPointsToFront)) bool  AddNewPointsToFront;

 __declspec(property(get=get_ForwardElement, put=set_ForwardElement)) ::Oculus::Interaction::IPointableElement*  ForwardElement;

 __declspec(property(get=get_Points)) ::System::Collections::Generic::List_1<::UnityEngine::Pose>*  Points;

 __declspec(property(get=get_PointsCount)) int32_t  PointsCount;

 __declspec(property(get=get_SelectingPoints)) ::System::Collections::Generic::List_1<::UnityEngine::Pose>*  SelectingPoints;

 __declspec(property(get=get_SelectingPointsCount)) int32_t  SelectingPointsCount;

 __declspec(property(get=get_TransferOnSecondSelection, put=set_TransferOnSecondSelection)) bool  TransferOnSecondSelection;

/// @brief Field WhenPointerEventRaised, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenPointerEventRaised, put=__cordl_internal_set_WhenPointerEventRaised)) ::System::Action_1<::Oculus::Interaction::PointerEvent>*  WhenPointerEventRaised;

/// @brief Field <ForwardElement>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__ForwardElement_k__BackingField, put=__cordl_internal_set__ForwardElement_k__BackingField)) ::Oculus::Interaction::IPointableElement*  _ForwardElement_k__BackingField;

/// @brief Field _addNewPointsToFront, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__addNewPointsToFront, put=__cordl_internal_set__addNewPointsToFront)) bool  _addNewPointsToFront;

/// @brief Field _forwardElement, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__forwardElement, put=__cordl_internal_set__forwardElement)) ::UnityW<::UnityEngine::Object>  _forwardElement;

/// @brief Field _pointIds, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointIds, put=__cordl_internal_set__pointIds)) ::System::Collections::Generic::List_1<int32_t>*  _pointIds;

/// @brief Field _points, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__points, put=__cordl_internal_set__points)) ::System::Collections::Generic::List_1<::UnityEngine::Pose>*  _points;

/// @brief Field _selectingPointIds, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectingPointIds, put=__cordl_internal_set__selectingPointIds)) ::System::Collections::Generic::List_1<int32_t>*  _selectingPointIds;

/// @brief Field _selectingPoints, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectingPoints, put=__cordl_internal_set__selectingPoints)) ::System::Collections::Generic::List_1<::UnityEngine::Pose>*  _selectingPoints;

/// @brief Field _started, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _transferOnSecondSelection, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__transferOnSecondSelection, put=__cordl_internal_set__transferOnSecondSelection)) bool  _transferOnSecondSelection;

/// @brief Convert operator to "::Oculus::Interaction::IPointable"
constexpr operator  ::Oculus::Interaction::IPointable*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::IPointableElement"
constexpr operator  ::Oculus::Interaction::IPointableElement*() noexcept;

/// @brief Method Awake, addr 0xa46bff4, size 0x148, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Cancel, addr 0xa46c4a0, size 0x148, virtual false, abstract: false, final false
inline void Cancel(::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Method HandlePointerEventRaised, addr 0xa46c5e8, size 0x4c, virtual false, abstract: false, final false
inline void HandlePointerEventRaised(::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Method Hover, addr 0xa46c754, size 0x1e8, virtual false, abstract: false, final false
inline void Hover(::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Method InjectOptionalForwardElement, addr 0xa46d028, size 0xcc, virtual false, abstract: false, final false
inline void InjectOptionalForwardElement(::Oculus::Interaction::IPointableElement*  forwardElement) ;

/// @brief Method Move, addr 0xa46ca2c, size 0x124, virtual false, abstract: false, final false
inline void Move(::Oculus::Interaction::PointerEvent  evt) ;

static inline ::Oculus::Interaction::PointableElement* New_ctor() ;

/// @brief Method OnDisable, addr 0xa46c2b4, size 0x1ec, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa46c1bc, size 0xf8, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PointableElementUpdated, addr 0xa46cf0c, size 0x11c, virtual true, abstract: false, final false
inline void PointableElementUpdated(::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Method ProcessPointerEvent, addr 0xa46c634, size 0x120, virtual true, abstract: false, final false
inline void ProcessPointerEvent(::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Method Select, addr 0xa46cb50, size 0x2cc, virtual false, abstract: false, final false
inline void Select(::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Method Start, addr 0xa46c13c, size 0x80, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Unhover, addr 0xa46c93c, size 0xf0, virtual false, abstract: false, final false
inline void Unhover(::Oculus::Interaction::PointerEvent  evt) ;

/// @brief Method Unselect, addr 0xa46ce1c, size 0xf0, virtual false, abstract: false, final false
inline void Unselect(::Oculus::Interaction::PointerEvent  evt) ;

constexpr ::System::Action_1<::Oculus::Interaction::PointerEvent>* const& __cordl_internal_get_WhenPointerEventRaised() const;

constexpr ::System::Action_1<::Oculus::Interaction::PointerEvent>*& __cordl_internal_get_WhenPointerEventRaised() ;

constexpr ::Oculus::Interaction::IPointableElement* const& __cordl_internal_get__ForwardElement_k__BackingField() const;

constexpr ::Oculus::Interaction::IPointableElement*& __cordl_internal_get__ForwardElement_k__BackingField() ;

constexpr bool const& __cordl_internal_get__addNewPointsToFront() const;

constexpr bool& __cordl_internal_get__addNewPointsToFront() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__forwardElement() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__forwardElement() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__pointIds() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__pointIds() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Pose>* const& __cordl_internal_get__points() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Pose>*& __cordl_internal_get__points() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__selectingPointIds() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__selectingPointIds() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Pose>* const& __cordl_internal_get__selectingPoints() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Pose>*& __cordl_internal_get__selectingPoints() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr bool const& __cordl_internal_get__transferOnSecondSelection() const;

constexpr bool& __cordl_internal_get__transferOnSecondSelection() ;

constexpr void __cordl_internal_set_WhenPointerEventRaised(::System::Action_1<::Oculus::Interaction::PointerEvent>*  value) ;

constexpr void __cordl_internal_set__ForwardElement_k__BackingField(::Oculus::Interaction::IPointableElement*  value) ;

constexpr void __cordl_internal_set__addNewPointsToFront(bool  value) ;

constexpr void __cordl_internal_set__forwardElement(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__pointIds(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__points(::System::Collections::Generic::List_1<::UnityEngine::Pose>*  value) ;

constexpr void __cordl_internal_set__selectingPointIds(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__selectingPoints(::System::Collections::Generic::List_1<::UnityEngine::Pose>*  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__transferOnSecondSelection(bool  value) ;

/// @brief Method .ctor, addr 0xa46d0f4, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenPointerEventRaised, addr 0xa462d58, size 0xb0, virtual true, abstract: false, final true
inline void add_WhenPointerEventRaised(::System::Action_1<::Oculus::Interaction::PointerEvent>*  value) ;

/// @brief Method get_AddNewPointsToFront, addr 0xa46bf8c, size 0x8, virtual false, abstract: false, final false
inline bool get_AddNewPointsToFront() ;

/// [CompilerGenerated]
/// @brief Method get_ForwardElement, addr 0xa46bf6c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IPointableElement* get_ForwardElement() ;

/// @brief Method get_Points, addr 0xa46bf9c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Pose>* get_Points() ;

/// @brief Method get_PointsCount, addr 0xa46bfa4, size 0x48, virtual false, abstract: false, final false
inline int32_t get_PointsCount() ;

/// @brief Method get_SelectingPoints, addr 0xa46bfec, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Pose>* get_SelectingPoints() ;

/// @brief Method get_SelectingPointsCount, addr 0xa463868, size 0x48, virtual false, abstract: false, final false
inline int32_t get_SelectingPointsCount() ;

/// @brief Method get_TransferOnSecondSelection, addr 0xa46bf7c, size 0x8, virtual false, abstract: false, final false
inline bool get_TransferOnSecondSelection() ;

/// @brief Convert to "::Oculus::Interaction::IPointable"
constexpr ::Oculus::Interaction::IPointable* i___Oculus__Interaction__IPointable() noexcept;

/// @brief Convert to "::Oculus::Interaction::IPointableElement"
constexpr ::Oculus::Interaction::IPointableElement* i___Oculus__Interaction__IPointableElement() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenPointerEventRaised, addr 0xa462ea4, size 0xb0, virtual true, abstract: false, final true
inline void remove_WhenPointerEventRaised(::System::Action_1<::Oculus::Interaction::PointerEvent>*  value) ;

/// @brief Method set_AddNewPointsToFront, addr 0xa46bf94, size 0x8, virtual false, abstract: false, final false
inline void set_AddNewPointsToFront(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_ForwardElement, addr 0xa46bf74, size 0x8, virtual false, abstract: false, final false
inline void set_ForwardElement(::Oculus::Interaction::IPointableElement*  value) ;

/// @brief Method set_TransferOnSecondSelection, addr 0xa46bf84, size 0x8, virtual false, abstract: false, final false
inline void set_TransferOnSecondSelection(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointableElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointableElement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointableElement(PointableElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointableElement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointableElement(PointableElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15909};

/// [Tooltip("If checked, if you\u{2019}re selecting an object with one hand and then select it with the other hand, the original hand is forced to release the object.")]
/// [SerializeField]
/// @brief Field _transferOnSecondSelection, offset: 0x20, size: 0x1, def value: None
 bool  ____transferOnSecondSelection;

/// [Tooltip("If checked, when you select an object, that hand\u{2019}s Vector3 points are added to the beginning of the list of Vector3 points instead of the end. This property has very unique usecases, so in most cases you should use the Transfer on Second Selection property instead.")]
/// [SerializeField]
/// @brief Field _addNewPointsToFront, offset: 0x21, size: 0x1, def value: None
 bool  ____addNewPointsToFront;

/// [Tooltip("Events will be forwarded to this element. Can be used to chain multiple PointableElements together. However, we recommend using the Interactable\'s Forward Element field instead.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IPointableElement), new[] {  })]
/// [Optional]
/// @brief Field _forwardElement, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____forwardElement;

/// [CompilerGenerated]
/// @brief Field <ForwardElement>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::IPointableElement*  ____ForwardElement_k__BackingField;

/// [CompilerGenerated]
/// @brief Field WhenPointerEventRaised, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::PointerEvent>*  ___WhenPointerEventRaised;

/// @brief Field _points, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Pose>*  ____points;

/// @brief Field _pointIds, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ____pointIds;

/// @brief Field _selectingPoints, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Pose>*  ____selectingPoints;

/// @brief Field _selectingPointIds, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ____selectingPointIds;

/// @brief Field _started, offset: 0x60, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PointableElement, ____transferOnSecondSelection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableElement, ____addNewPointsToFront) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableElement, ____forwardElement) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableElement, ____ForwardElement_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableElement, ___WhenPointerEventRaised) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableElement, ____points) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableElement, ____pointIds) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableElement, ____selectingPoints) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableElement, ____selectingPointIds) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableElement, ____started) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PointableElement) == 0x68, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PointableElement/<>c
class CORDL_TYPE PointableElement___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::PointableElement___c*  __9;

/// @brief Field <>9__43_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__43_0, put=setStaticF___9__43_0)) ::System::Action_1<::Oculus::Interaction::PointerEvent>*  __9__43_0;

static inline ::Oculus::Interaction::PointableElement___c* New_ctor() ;

/// @brief Method <.ctor>b__43_0, addr 0xa46d25c, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__43_0(::Oculus::Interaction::PointerEvent  _p0_) ;

/// @brief Method .ctor, addr 0xa46d254, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::PointableElement___c* getStaticF___9() ;

static inline ::System::Action_1<::Oculus::Interaction::PointerEvent>* getStaticF___9__43_0() ;

static inline void setStaticF___9(::Oculus::Interaction::PointableElement___c*  value) ;

static inline void setStaticF___9__43_0(::System::Action_1<::Oculus::Interaction::PointerEvent>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointableElement___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointableElement___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointableElement___c(PointableElement___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointableElement___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointableElement___c(PointableElement___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15908};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PointableElement___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
