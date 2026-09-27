#pragma once
// IWYU pragma private; include "System/ComponentModel/EventHandlerList.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__EventHandlerList_def.hpp"
#include "System/ComponentModel/zzzz__Component_def.hpp"
#include "System/ComponentModel/zzzz__EventHandlerList_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::EventHandlerList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::EventHandlerList::*)(::System::ComponentModel::Component*)>(&::System::ComponentModel::EventHandlerList::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xad47564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventHandlerList*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventHandlerList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::EventHandlerList::*)()>(&::System::ComponentModel::EventHandlerList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad47594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventHandlerList*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventHandlerList.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (::System::ComponentModel::EventHandlerList::*)(::System::Object*)>(&::System::ComponentModel::EventHandlerList::get_Item)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xad4759c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventHandlerList*>(),
                        {"get_Item", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventHandlerList.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::EventHandlerList::*)(::System::Object*, ::System::Delegate*)>(&::System::ComponentModel::EventHandlerList::set_Item)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xad47614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventHandlerList*>(),
                        {"set_Item", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Delegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventHandlerList.AddHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::EventHandlerList::*)(::System::Object*, ::System::Delegate*)>(&::System::ComponentModel::EventHandlerList::AddHandler)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xad47718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventHandlerList*>(),
                        {"AddHandler", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Delegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventHandlerList.AddHandlers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::EventHandlerList::*)(::System::ComponentModel::EventHandlerList*)>(&::System::ComponentModel::EventHandlerList::AddHandlers)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xad477d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventHandlerList*>(),
                        {"AddHandlers", {}, {::i2c::type_of<::System::ComponentModel::EventHandlerList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventHandlerList.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::EventHandlerList::*)()>(&::System::ComponentModel::EventHandlerList::Dispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xad4780c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventHandlerList*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventHandlerList.Find
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventHandlerList_ListEntry* (::System::ComponentModel::EventHandlerList::*)(::System::Object*)>(&::System::ComponentModel::EventHandlerList::Find)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xad475fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventHandlerList*>(),
                        {"Find", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventHandlerList.RemoveHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::EventHandlerList::*)(::System::Object*, ::System::Delegate*)>(&::System::ComponentModel::EventHandlerList::RemoveHandler)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xad47818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventHandlerList*>(),
                        {"RemoveHandler", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Delegate*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::EventHandlerList_ListEntry*& System::ComponentModel::EventHandlerList::__cordl_internal_get__head()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____head;
}
constexpr ::System::ComponentModel::EventHandlerList_ListEntry* const& System::ComponentModel::EventHandlerList::__cordl_internal_get__head() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____head;
}
constexpr void System::ComponentModel::EventHandlerList::__cordl_internal_set__head(::System::ComponentModel::EventHandlerList_ListEntry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____head = value;
}
constexpr ::System::ComponentModel::Component*& System::ComponentModel::EventHandlerList::__cordl_internal_get__parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr ::System::ComponentModel::Component* const& System::ComponentModel::EventHandlerList::__cordl_internal_get__parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr void System::ComponentModel::EventHandlerList::__cordl_internal_set__parent(::System::ComponentModel::Component*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parent = value;
}
inline void System::ComponentModel::EventHandlerList::_ctor(::System::ComponentModel::Component*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventHandlerList*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
inline void System::ComponentModel::EventHandlerList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventHandlerList*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Delegate* System::ComponentModel::EventHandlerList::get_Item(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventHandlerList*>(),
                        {"get_Item", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(this, ___internal_method, key);
}
inline void System::ComponentModel::EventHandlerList::set_Item(::System::Object*  key, ::System::Delegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventHandlerList*>(),
                        {"set_Item", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void System::ComponentModel::EventHandlerList::AddHandler(::System::Object*  key, ::System::Delegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventHandlerList*>(),
                        {"AddHandler", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void System::ComponentModel::EventHandlerList::AddHandlers(::System::ComponentModel::EventHandlerList*  listToAddFrom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventHandlerList*>(),
                        {"AddHandlers", {}, {::i2c::type_of<::System::ComponentModel::EventHandlerList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listToAddFrom);
}
inline void System::ComponentModel::EventHandlerList::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventHandlerList*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::EventHandlerList_ListEntry* System::ComponentModel::EventHandlerList::Find(::System::Object*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventHandlerList*>(),
                        {"Find", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventHandlerList_ListEntry*>(this, ___internal_method, key);
}
inline void System::ComponentModel::EventHandlerList::RemoveHandler(::System::Object*  key, ::System::Delegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventHandlerList*>(),
                        {"RemoveHandler", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline ::System::ComponentModel::EventHandlerList* System::ComponentModel::EventHandlerList::New_ctor(::System::ComponentModel::Component*  parent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::EventHandlerList*>(parent));
}
inline ::System::ComponentModel::EventHandlerList* System::ComponentModel::EventHandlerList::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::EventHandlerList*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::ComponentModel::EventHandlerList::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::ComponentModel::EventHandlerList::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::EventHandlerList::EventHandlerList()   {
}
//  Writing Method size for method: ::System::ComponentModel::EventHandlerList_ListEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::EventHandlerList_ListEntry::*)(::System::Object*, ::System::Delegate*, ::System::ComponentModel::EventHandlerList_ListEntry*)>(&::System::ComponentModel::EventHandlerList_ListEntry::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xad476b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventHandlerList_ListEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::ComponentModel::EventHandlerList_ListEntry*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::EventHandlerList_ListEntry*& System::ComponentModel::EventHandlerList_ListEntry::__cordl_internal_get__next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____next;
}
constexpr ::System::ComponentModel::EventHandlerList_ListEntry* const& System::ComponentModel::EventHandlerList_ListEntry::__cordl_internal_get__next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____next;
}
constexpr void System::ComponentModel::EventHandlerList_ListEntry::__cordl_internal_set__next(::System::ComponentModel::EventHandlerList_ListEntry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____next = value;
}
constexpr ::System::Object*& System::ComponentModel::EventHandlerList_ListEntry::__cordl_internal_get__key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____key;
}
constexpr ::System::Object* const& System::ComponentModel::EventHandlerList_ListEntry::__cordl_internal_get__key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____key;
}
constexpr void System::ComponentModel::EventHandlerList_ListEntry::__cordl_internal_set__key(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____key = value;
}
constexpr ::System::Delegate*& System::ComponentModel::EventHandlerList_ListEntry::__cordl_internal_get__handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handler;
}
constexpr ::System::Delegate* const& System::ComponentModel::EventHandlerList_ListEntry::__cordl_internal_get__handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handler;
}
constexpr void System::ComponentModel::EventHandlerList_ListEntry::__cordl_internal_set__handler(::System::Delegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handler = value;
}
inline void System::ComponentModel::EventHandlerList_ListEntry::_ctor(::System::Object*  key, ::System::Delegate*  handler, ::System::ComponentModel::EventHandlerList_ListEntry*  next)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventHandlerList_ListEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::ComponentModel::EventHandlerList_ListEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, handler, next);
}
inline ::System::ComponentModel::EventHandlerList_ListEntry* System::ComponentModel::EventHandlerList_ListEntry::New_ctor(::System::Object*  key, ::System::Delegate*  handler, ::System::ComponentModel::EventHandlerList_ListEntry*  next)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::EventHandlerList_ListEntry*>(key, handler, next));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::EventHandlerList_ListEntry::EventHandlerList_ListEntry()   {
}
