#pragma once
// IWYU pragma private; include "Oculus/Interaction/ListLayout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ListLayout)
namespace Oculus::Interaction {
class ListLayout_ListElement;
}
namespace Oculus::Interaction {
class ListLayout___c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace Oculus::Interaction {
class ListLayout;
}
namespace Oculus::Interaction {
class ListLayout_ListElement;
}
namespace Oculus::Interaction {
class ListLayout___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ListLayout*);
MARK_REF_T(::Oculus::Interaction::ListLayout_ListElement*);
MARK_REF_T(::Oculus::Interaction::ListLayout___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ListLayout*, "Oculus.Interaction", "ListLayout");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ListLayout_ListElement*, "Oculus.Interaction", "ListLayout/ListElement");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ListLayout___c*, "Oculus.Interaction", "ListLayout/<>c");
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ListLayout
class CORDL_TYPE ListLayout : public ::System::Object {
public:
// Declarations
using ListElement = ::Oculus::Interaction::ListLayout_ListElement;

using __c = ::Oculus::Interaction::ListLayout___c;

 __declspec(property(get=get_Size)) float_t  Size;

/// @brief Field WhenElementAdded, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenElementAdded, put=__cordl_internal_set_WhenElementAdded)) ::System::Action_1<int32_t>*  WhenElementAdded;

/// @brief Field WhenElementRemoved, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenElementRemoved, put=__cordl_internal_set_WhenElementRemoved)) ::System::Action_1<int32_t>*  WhenElementRemoved;

/// @brief Field WhenElementUpdated, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenElementUpdated, put=__cordl_internal_set_WhenElementUpdated)) ::System::Action_2<int32_t,bool>*  WhenElementUpdated;

/// @brief Field _elements, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__elements, put=__cordl_internal_set__elements)) ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::ListLayout_ListElement*>*  _elements;

/// @brief Field _moveElement, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__moveElement, put=__cordl_internal_set__moveElement)) int32_t  _moveElement;

/// @brief Field _root, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__root, put=__cordl_internal_set__root)) ::Oculus::Interaction::ListLayout_ListElement*  _root;

/// @brief Field _size, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__size, put=__cordl_internal_set__size)) float_t  _size;

/// @brief Field _sizeUpdate, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__sizeUpdate, put=__cordl_internal_set__sizeUpdate)) bool  _sizeUpdate;

/// @brief Method AddElement, addr 0xa45fcc0, size 0x1b0, virtual false, abstract: false, final false
inline void AddElement(int32_t  id, float_t  size, float_t  target) ;

/// @brief Method GetElementPosition, addr 0xa460430, size 0x80, virtual false, abstract: false, final false
inline float_t GetElementPosition(int32_t  id) ;

/// @brief Method GetElementSize, addr 0xa4604b0, size 0x84, virtual false, abstract: false, final false
inline float_t GetElementSize(int32_t  id) ;

/// @brief Method GetTargetPosition, addr 0xa460534, size 0xd4, virtual false, abstract: false, final false
inline float_t GetTargetPosition(int32_t  id, float_t  target, float_t  size) ;

/// @brief Method MoveElement, addr 0xa45ff0c, size 0x11c, virtual false, abstract: false, final false
inline void MoveElement(int32_t  id, float_t  target) ;

static inline ::Oculus::Interaction::ListLayout* New_ctor() ;

/// @brief Method RemoveElement, addr 0xa460098, size 0x140, virtual false, abstract: false, final false
inline void RemoveElement(int32_t  id) ;

/// @brief Method SwapWithNext, addr 0xa460228, size 0x140, virtual false, abstract: false, final false
inline void SwapWithNext(::Oculus::Interaction::ListLayout_ListElement*  element) ;

/// @brief Method SwapWithPrev, addr 0xa460368, size 0x14, virtual false, abstract: false, final false
inline void SwapWithPrev(::Oculus::Interaction::ListLayout_ListElement*  element) ;

/// @brief Method UpdateElementSize, addr 0xa46037c, size 0xb4, virtual false, abstract: false, final false
inline void UpdateElementSize(int32_t  id, float_t  size) ;

/// @brief Method UpdatePos, addr 0xa460028, size 0x70, virtual false, abstract: false, final false
inline void UpdatePos(::Oculus::Interaction::ListLayout_ListElement*  element, float_t  pos, bool  force) ;

/// @brief Method UpdatePositionsFromRoot, addr 0xa45fecc, size 0x40, virtual false, abstract: false, final false
inline void UpdatePositionsFromRoot() ;

/// @brief Method UpdatePositionsRight, addr 0xa4601d8, size 0x50, virtual false, abstract: false, final false
inline void UpdatePositionsRight(::Oculus::Interaction::ListLayout_ListElement*  current) ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_WhenElementAdded() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_WhenElementAdded() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_WhenElementRemoved() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_WhenElementRemoved() ;

constexpr ::System::Action_2<int32_t,bool>* const& __cordl_internal_get_WhenElementUpdated() const;

constexpr ::System::Action_2<int32_t,bool>*& __cordl_internal_get_WhenElementUpdated() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::ListLayout_ListElement*>* const& __cordl_internal_get__elements() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::ListLayout_ListElement*>*& __cordl_internal_get__elements() ;

constexpr int32_t const& __cordl_internal_get__moveElement() const;

constexpr int32_t& __cordl_internal_get__moveElement() ;

constexpr ::Oculus::Interaction::ListLayout_ListElement* const& __cordl_internal_get__root() const;

constexpr ::Oculus::Interaction::ListLayout_ListElement*& __cordl_internal_get__root() ;

constexpr float_t const& __cordl_internal_get__size() const;

constexpr float_t& __cordl_internal_get__size() ;

constexpr bool const& __cordl_internal_get__sizeUpdate() const;

constexpr bool& __cordl_internal_get__sizeUpdate() ;

constexpr void __cordl_internal_set_WhenElementAdded(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_WhenElementRemoved(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_WhenElementUpdated(::System::Action_2<int32_t,bool>*  value) ;

constexpr void __cordl_internal_set__elements(::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::ListLayout_ListElement*>*  value) ;

constexpr void __cordl_internal_set__moveElement(int32_t  value) ;

constexpr void __cordl_internal_set__root(::Oculus::Interaction::ListLayout_ListElement*  value) ;

constexpr void __cordl_internal_set__size(float_t  value) ;

constexpr void __cordl_internal_set__sizeUpdate(bool  value) ;

/// @brief Method .ctor, addr 0xa45fa38, size 0x288, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Size, addr 0xa45fa30, size 0x8, virtual false, abstract: false, final false
inline float_t get_Size() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListLayout() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListLayout", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListLayout(ListLayout && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListLayout", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListLayout(ListLayout const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15873};

/// @brief Field _root, offset: 0x10, size: 0x8, def value: None
 ::Oculus::Interaction::ListLayout_ListElement*  ____root;

/// @brief Field _elements, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::Oculus::Interaction::ListLayout_ListElement*>*  ____elements;

/// @brief Field WhenElementAdded, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___WhenElementAdded;

/// @brief Field WhenElementUpdated, offset: 0x28, size: 0x8, def value: None
 ::System::Action_2<int32_t,bool>*  ___WhenElementUpdated;

/// @brief Field WhenElementRemoved, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___WhenElementRemoved;

/// @brief Field _sizeUpdate, offset: 0x38, size: 0x1, def value: None
 bool  ____sizeUpdate;

/// @brief Field _moveElement, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____moveElement;

/// @brief Field _size, offset: 0x40, size: 0x4, def value: None
 float_t  ____size;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ListLayout, ____root) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ListLayout, ____elements) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ListLayout, ___WhenElementAdded) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ListLayout, ___WhenElementUpdated) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ListLayout, ___WhenElementRemoved) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ListLayout, ____sizeUpdate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ListLayout, ____moveElement) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ListLayout, ____size) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ListLayout) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ListLayout/<>c
class CORDL_TYPE ListLayout___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::ListLayout___c*  __9;

/// @brief Field <>9__11_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_0, put=setStaticF___9__11_0)) ::System::Action_1<int32_t>*  __9__11_0;

/// @brief Field <>9__11_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_1, put=setStaticF___9__11_1)) ::System::Action_2<int32_t,bool>*  __9__11_1;

/// @brief Field <>9__11_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_2, put=setStaticF___9__11_2)) ::System::Action_1<int32_t>*  __9__11_2;

static inline ::Oculus::Interaction::ListLayout___c* New_ctor() ;

/// @brief Method <.ctor>b__11_0, addr 0xa460678, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__11_0(int32_t  _p0_) ;

/// @brief Method <.ctor>b__11_1, addr 0xa46067c, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__11_1(int32_t  _p0_, bool  _p1_) ;

/// @brief Method <.ctor>b__11_2, addr 0xa460680, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__11_2(int32_t  _p0_) ;

/// @brief Method .ctor, addr 0xa460670, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::ListLayout___c* getStaticF___9() ;

static inline ::System::Action_1<int32_t>* getStaticF___9__11_0() ;

static inline ::System::Action_2<int32_t,bool>* getStaticF___9__11_1() ;

static inline ::System::Action_1<int32_t>* getStaticF___9__11_2() ;

static inline void setStaticF___9(::Oculus::Interaction::ListLayout___c*  value) ;

static inline void setStaticF___9__11_0(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF___9__11_1(::System::Action_2<int32_t,bool>*  value) ;

static inline void setStaticF___9__11_2(::System::Action_1<int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListLayout___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListLayout___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListLayout___c(ListLayout___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListLayout___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListLayout___c(ListLayout___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15872};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::ListLayout___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ListLayout/ListElement
class CORDL_TYPE ListLayout_ListElement : public ::System::Object {
public:
// Declarations
/// @brief Field halfSize, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_halfSize, put=__cordl_internal_set_halfSize)) float_t  halfSize;

/// @brief Field id, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) int32_t  id;

/// @brief Field next, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_next, put=__cordl_internal_set_next)) ::Oculus::Interaction::ListLayout_ListElement*  next;

/// @brief Field pos, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_pos, put=__cordl_internal_set_pos)) float_t  pos;

/// @brief Field prev, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_prev, put=__cordl_internal_set_prev)) ::Oculus::Interaction::ListLayout_ListElement*  prev;

static inline ::Oculus::Interaction::ListLayout_ListElement* New_ctor(int32_t  id, float_t  size) ;

constexpr float_t const& __cordl_internal_get_halfSize() const;

constexpr float_t& __cordl_internal_get_halfSize() ;

constexpr int32_t const& __cordl_internal_get_id() const;

constexpr int32_t& __cordl_internal_get_id() ;

constexpr ::Oculus::Interaction::ListLayout_ListElement* const& __cordl_internal_get_next() const;

constexpr ::Oculus::Interaction::ListLayout_ListElement*& __cordl_internal_get_next() ;

constexpr float_t const& __cordl_internal_get_pos() const;

constexpr float_t& __cordl_internal_get_pos() ;

constexpr ::Oculus::Interaction::ListLayout_ListElement* const& __cordl_internal_get_prev() const;

constexpr ::Oculus::Interaction::ListLayout_ListElement*& __cordl_internal_get_prev() ;

constexpr void __cordl_internal_set_halfSize(float_t  value) ;

constexpr void __cordl_internal_set_id(int32_t  value) ;

constexpr void __cordl_internal_set_next(::Oculus::Interaction::ListLayout_ListElement*  value) ;

constexpr void __cordl_internal_set_pos(float_t  value) ;

constexpr void __cordl_internal_set_prev(::Oculus::Interaction::ListLayout_ListElement*  value) ;

/// @brief Method .ctor, addr 0xa45fe70, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(int32_t  id, float_t  size) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListLayout_ListElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListLayout_ListElement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListLayout_ListElement(ListLayout_ListElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListLayout_ListElement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListLayout_ListElement(ListLayout_ListElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15871};

/// @brief Field id, offset: 0x10, size: 0x4, def value: None
 int32_t  ___id;

/// @brief Field pos, offset: 0x14, size: 0x4, def value: None
 float_t  ___pos;

/// @brief Field halfSize, offset: 0x18, size: 0x4, def value: None
 float_t  ___halfSize;

/// @brief Field prev, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::ListLayout_ListElement*  ___prev;

/// @brief Field next, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::ListLayout_ListElement*  ___next;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ListLayout_ListElement, ___id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ListLayout_ListElement, ___pos) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ListLayout_ListElement, ___halfSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ListLayout_ListElement, ___prev) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ListLayout_ListElement, ___next) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ListLayout_ListElement) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
