#pragma once
// IWYU pragma private; include "System/ComponentModel/Component.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/ComponentModel/zzzz__Component_def.hpp"
#include "System/ComponentModel/zzzz__EventHandlerList_def.hpp"
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
#include "System/ComponentModel/zzzz__IContainer_def.hpp"
#include "System/ComponentModel/zzzz__ISite_def.hpp"
#include "System/zzzz__EventHandler_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Component.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Component::*)()>(&::System::ComponentModel::Component::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xad6dc98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::Component*>(),
                    {::i2c::class_of<::System::ComponentModel::Component*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Component.get_CanRaiseEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::Component::*)()>(&::System::ComponentModel::Component::get_CanRaiseEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad6dd2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::Component*>(),
                    {::i2c::class_of<::System::ComponentModel::Component*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Component.get_CanRaiseEventsInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::Component::*)()>(&::System::ComponentModel::Component::get_CanRaiseEventsInternal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xad6dd34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Component*>(),
                        {"get_CanRaiseEventsInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Component.add_Disposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Component::*)(::System::EventHandler*)>(&::System::ComponentModel::Component::add_Disposed)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xad6dd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Component*>(),
                        {"add_Disposed", {}, {::i2c::type_of<::System::EventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Component.remove_Disposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Component::*)(::System::EventHandler*)>(&::System::ComponentModel::Component::remove_Disposed)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xad6de44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Component*>(),
                        {"remove_Disposed", {}, {::i2c::type_of<::System::EventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Component.get_Events
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventHandlerList* (::System::ComponentModel::Component::*)()>(&::System::ComponentModel::Component::get_Events)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xad6ddcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Component*>(),
                        {"get_Events", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Component.get_Site
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ISite* (::System::ComponentModel::Component::*)()>(&::System::ComponentModel::Component::get_Site)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad6ded0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::Component*>(),
                    {::i2c::class_of<::System::ComponentModel::Component*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Component.set_Site
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Component::*)(::System::ComponentModel::ISite*)>(&::System::ComponentModel::Component::set_Site)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad6ded8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::Component*>(),
                    {::i2c::class_of<::System::ComponentModel::Component*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Component.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Component::*)()>(&::System::ComponentModel::Component::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xad6dee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Component*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Component.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Component::*)(bool)>(&::System::ComponentModel::Component::Dispose)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0xad6df50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::Component*>(),
                    {::i2c::class_of<::System::ComponentModel::Component*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Component.get_Container
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::IContainer* (::System::ComponentModel::Component::*)()>(&::System::ComponentModel::Component::get_Container)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xad6e264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Component*>(),
                        {"get_Container", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Component.GetService
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::Component::*)(::System::Type*)>(&::System::ComponentModel::Component::GetService)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xad6e314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::Component*>(),
                    {::i2c::class_of<::System::ComponentModel::Component*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Component.get_DesignMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::Component::*)()>(&::System::ComponentModel::Component::get_DesignMode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xad6e3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Component*>(),
                        {"get_DesignMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Component.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::Component::*)()>(&::System::ComponentModel::Component::ToString)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xad6e478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::Component*>(),
                    {::i2c::class_of<::System::ComponentModel::Component*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Component._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Component::*)()>(&::System::ComponentModel::Component::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad6e5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Component*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::ISite*& System::ComponentModel::Component::__cordl_internal_get_site()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___site;
}
constexpr ::System::ComponentModel::ISite* const& System::ComponentModel::Component::__cordl_internal_get_site() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___site;
}
constexpr void System::ComponentModel::Component::__cordl_internal_set_site(::System::ComponentModel::ISite*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___site = value;
}
constexpr ::System::ComponentModel::EventHandlerList*& System::ComponentModel::Component::__cordl_internal_get_events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
constexpr ::System::ComponentModel::EventHandlerList* const& System::ComponentModel::Component::__cordl_internal_get_events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
constexpr void System::ComponentModel::Component::__cordl_internal_set_events(::System::ComponentModel::EventHandlerList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___events = value;
}
inline void System::ComponentModel::Component::setStaticF_EventDisposed(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "EventDisposed", ::System::ComponentModel::Component*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::ComponentModel::Component::getStaticF_EventDisposed()  {
return ::cordl_internals::getStaticField<::System::Object*, "EventDisposed", ::System::ComponentModel::Component*>();
}
inline void System::ComponentModel::Component::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::Component*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::ComponentModel::Component::get_CanRaiseEvents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::Component*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::ComponentModel::Component::get_CanRaiseEventsInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Component*>(),
                        {"get_CanRaiseEventsInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::ComponentModel::Component::add_Disposed(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Component*>(),
                        {"add_Disposed", {}, {::i2c::type_of<::System::EventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::ComponentModel::Component::remove_Disposed(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Component*>(),
                        {"remove_Disposed", {}, {::i2c::type_of<::System::EventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::ComponentModel::EventHandlerList* System::ComponentModel::Component::get_Events()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Component*>(),
                        {"get_Events", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventHandlerList*>(this, ___internal_method);
}
inline ::System::ComponentModel::ISite* System::ComponentModel::Component::get_Site()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::Component*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ISite*>(this, ___internal_method);
}
inline void System::ComponentModel::Component::set_Site(::System::ComponentModel::ISite*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::Component*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::ComponentModel::Component::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Component*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::Component::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::Component*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::ComponentModel::IContainer* System::ComponentModel::Component::get_Container()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Component*>(),
                        {"get_Container", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IContainer*>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::Component::GetService(::System::Type*  service)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::Component*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, service);
}
inline bool System::ComponentModel::Component::get_DesignMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Component*>(),
                        {"get_DesignMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::Component::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::Component*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::ComponentModel::Component::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Component*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::Component* System::ComponentModel::Component::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::Component*>());
}
/// @brief Convert operator to "::System::ComponentModel::IComponent"
constexpr  System::ComponentModel::Component::operator ::System::ComponentModel::IComponent*() noexcept {
return static_cast<::System::ComponentModel::IComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::IComponent"
constexpr ::System::ComponentModel::IComponent* System::ComponentModel::Component::i___System__ComponentModel__IComponent() noexcept {
return static_cast<::System::ComponentModel::IComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::ComponentModel::Component::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::ComponentModel::Component::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::Component::Component()   {
}
