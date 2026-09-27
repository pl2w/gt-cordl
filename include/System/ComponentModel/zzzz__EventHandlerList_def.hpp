#pragma once
// IWYU pragma private; include "System/ComponentModel/EventHandlerList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EventHandlerList)
namespace System::ComponentModel {
class Component;
}
namespace System::ComponentModel {
class EventHandlerList_ListEntry;
}
namespace System {
class Delegate;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class EventHandlerList;
}
namespace System::ComponentModel {
class EventHandlerList_ListEntry;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::EventHandlerList*);
MARK_REF_T(::System::ComponentModel::EventHandlerList_ListEntry*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::EventHandlerList*, "System.ComponentModel", "EventHandlerList");
DEFINE_IL2CPP_CLASS(::System::ComponentModel::EventHandlerList_ListEntry*, "System.ComponentModel", "EventHandlerList/ListEntry");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.EventHandlerList
class CORDL_TYPE EventHandlerList : public ::System::Object {
public:
// Declarations
using ListEntry = ::System::ComponentModel::EventHandlerList_ListEntry;

 __declspec(property(get=get_Item, put=set_Item)) ::System::Delegate*  Item[];

/// @brief Field _head, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__head, put=__cordl_internal_set__head)) ::System::ComponentModel::EventHandlerList_ListEntry*  _head;

/// @brief Field _parent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__parent, put=__cordl_internal_set__parent)) ::System::ComponentModel::Component*  _parent;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AddHandler, addr 0xad47718, size 0xb8, virtual false, abstract: false, final false
inline void AddHandler(::System::Object*  key, ::System::Delegate*  value) ;

/// @brief Method AddHandlers, addr 0xad477d0, size 0x3c, virtual false, abstract: false, final false
inline void AddHandlers(::System::ComponentModel::EventHandlerList*  listToAddFrom) ;

/// @brief Method Dispose, addr 0xad4780c, size 0xc, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Find, addr 0xad475fc, size 0x18, virtual false, abstract: false, final false
inline ::System::ComponentModel::EventHandlerList_ListEntry* Find(::System::Object*  key) ;

static inline ::System::ComponentModel::EventHandlerList* New_ctor() ;

static inline ::System::ComponentModel::EventHandlerList* New_ctor(::System::ComponentModel::Component*  parent) ;

/// @brief Method RemoveHandler, addr 0xad47818, size 0x4c, virtual false, abstract: false, final false
inline void RemoveHandler(::System::Object*  key, ::System::Delegate*  value) ;

constexpr ::System::ComponentModel::EventHandlerList_ListEntry* const& __cordl_internal_get__head() const;

constexpr ::System::ComponentModel::EventHandlerList_ListEntry*& __cordl_internal_get__head() ;

constexpr ::System::ComponentModel::Component* const& __cordl_internal_get__parent() const;

constexpr ::System::ComponentModel::Component*& __cordl_internal_get__parent() ;

constexpr void __cordl_internal_set__head(::System::ComponentModel::EventHandlerList_ListEntry*  value) ;

constexpr void __cordl_internal_set__parent(::System::ComponentModel::Component*  value) ;

/// @brief Method .ctor, addr 0xad47594, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xad47564, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::ComponentModel::Component*  parent) ;

/// @brief Method get_Item, addr 0xad4759c, size 0x60, virtual false, abstract: false, final false
inline ::System::Delegate* get_Item(::System::Object*  key) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_Item, addr 0xad47614, size 0xa4, virtual false, abstract: false, final false
inline void set_Item(::System::Object*  key, ::System::Delegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventHandlerList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventHandlerList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EventHandlerList(EventHandlerList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventHandlerList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventHandlerList(EventHandlerList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10101};

/// @brief Field _head, offset: 0x10, size: 0x8, def value: None
 ::System::ComponentModel::EventHandlerList_ListEntry*  ____head;

/// @brief Field _parent, offset: 0x18, size: 0x8, def value: None
 ::System::ComponentModel::Component*  ____parent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::EventHandlerList, ____head) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::EventHandlerList, ____parent) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::EventHandlerList) == 0x20, "Size mismatch!");

} // namespace end def System::ComponentModel
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.EventHandlerList/ListEntry
class CORDL_TYPE EventHandlerList_ListEntry : public ::System::Object {
public:
// Declarations
/// @brief Field _handler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__handler, put=__cordl_internal_set__handler)) ::System::Delegate*  _handler;

/// @brief Field _key, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__key, put=__cordl_internal_set__key)) ::System::Object*  _key;

/// @brief Field _next, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__next, put=__cordl_internal_set__next)) ::System::ComponentModel::EventHandlerList_ListEntry*  _next;

static inline ::System::ComponentModel::EventHandlerList_ListEntry* New_ctor(::System::Object*  key, ::System::Delegate*  handler, ::System::ComponentModel::EventHandlerList_ListEntry*  next) ;

constexpr ::System::Delegate* const& __cordl_internal_get__handler() const;

constexpr ::System::Delegate*& __cordl_internal_get__handler() ;

constexpr ::System::Object* const& __cordl_internal_get__key() const;

constexpr ::System::Object*& __cordl_internal_get__key() ;

constexpr ::System::ComponentModel::EventHandlerList_ListEntry* const& __cordl_internal_get__next() const;

constexpr ::System::ComponentModel::EventHandlerList_ListEntry*& __cordl_internal_get__next() ;

constexpr void __cordl_internal_set__handler(::System::Delegate*  value) ;

constexpr void __cordl_internal_set__key(::System::Object*  value) ;

constexpr void __cordl_internal_set__next(::System::ComponentModel::EventHandlerList_ListEntry*  value) ;

/// @brief Method .ctor, addr 0xad476b8, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  key, ::System::Delegate*  handler, ::System::ComponentModel::EventHandlerList_ListEntry*  next) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventHandlerList_ListEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventHandlerList_ListEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EventHandlerList_ListEntry(EventHandlerList_ListEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventHandlerList_ListEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventHandlerList_ListEntry(EventHandlerList_ListEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10100};

/// @brief Field _next, offset: 0x10, size: 0x8, def value: None
 ::System::ComponentModel::EventHandlerList_ListEntry*  ____next;

/// @brief Field _key, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ____key;

/// @brief Field _handler, offset: 0x20, size: 0x8, def value: None
 ::System::Delegate*  ____handler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::EventHandlerList_ListEntry, ____next) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::EventHandlerList_ListEntry, ____key) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::EventHandlerList_ListEntry, ____handler) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::EventHandlerList_ListEntry) == 0x28, "Size mismatch!");

} // namespace end def System::ComponentModel
