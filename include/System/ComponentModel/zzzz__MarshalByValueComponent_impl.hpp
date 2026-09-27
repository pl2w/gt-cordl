#pragma once
// IWYU pragma private; include "System/ComponentModel/MarshalByValueComponent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__MarshalByValueComponent_def.hpp"
#include "System/ComponentModel/zzzz__EventHandlerList_def.hpp"
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
#include "System/ComponentModel/zzzz__IContainer_def.hpp"
#include "System/ComponentModel/zzzz__ISite_def.hpp"
#include "System/zzzz__EventHandler_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IServiceProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::MarshalByValueComponent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::MarshalByValueComponent::*)()>(&::System::ComponentModel::MarshalByValueComponent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad5bb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MarshalByValueComponent.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::MarshalByValueComponent::*)()>(&::System::ComponentModel::MarshalByValueComponent::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xad5bb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(),
                    {::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MarshalByValueComponent.add_Disposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::MarshalByValueComponent::*)(::System::EventHandler*)>(&::System::ComponentModel::MarshalByValueComponent::add_Disposed)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xad5bbe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(),
                        {"add_Disposed", {}, {::i2c::type_of<::System::EventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MarshalByValueComponent.remove_Disposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::MarshalByValueComponent::*)(::System::EventHandler*)>(&::System::ComponentModel::MarshalByValueComponent::remove_Disposed)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xad5bce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(),
                        {"remove_Disposed", {}, {::i2c::type_of<::System::EventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MarshalByValueComponent.get_Events
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventHandlerList* (::System::ComponentModel::MarshalByValueComponent::*)()>(&::System::ComponentModel::MarshalByValueComponent::get_Events)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xad5bc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(),
                        {"get_Events", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MarshalByValueComponent.get_Site
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ISite* (::System::ComponentModel::MarshalByValueComponent::*)()>(&::System::ComponentModel::MarshalByValueComponent::get_Site)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad5bd6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(),
                    {::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MarshalByValueComponent.set_Site
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::MarshalByValueComponent::*)(::System::ComponentModel::ISite*)>(&::System::ComponentModel::MarshalByValueComponent::set_Site)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad5bd74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(),
                    {::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MarshalByValueComponent.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::MarshalByValueComponent::*)()>(&::System::ComponentModel::MarshalByValueComponent::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xad5bd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MarshalByValueComponent.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::MarshalByValueComponent::*)(bool)>(&::System::ComponentModel::MarshalByValueComponent::Dispose)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xad5bde8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(),
                    {::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MarshalByValueComponent.get_Container
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::IContainer* (::System::ComponentModel::MarshalByValueComponent::*)()>(&::System::ComponentModel::MarshalByValueComponent::get_Container)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xad5c084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(),
                    {::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MarshalByValueComponent.GetService
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::MarshalByValueComponent::*)(::System::Type*)>(&::System::ComponentModel::MarshalByValueComponent::GetService)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xad5c134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(),
                    {::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MarshalByValueComponent.get_DesignMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::MarshalByValueComponent::*)()>(&::System::ComponentModel::MarshalByValueComponent::get_DesignMode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xad5c1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(),
                    {::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MarshalByValueComponent.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::MarshalByValueComponent::*)()>(&::System::ComponentModel::MarshalByValueComponent::ToString)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xad5c298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(),
                    {::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::ISite*& System::ComponentModel::MarshalByValueComponent::__cordl_internal_get__site()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____site;
}
constexpr ::System::ComponentModel::ISite* const& System::ComponentModel::MarshalByValueComponent::__cordl_internal_get__site() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____site;
}
constexpr void System::ComponentModel::MarshalByValueComponent::__cordl_internal_set__site(::System::ComponentModel::ISite*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____site = value;
}
constexpr ::System::ComponentModel::EventHandlerList*& System::ComponentModel::MarshalByValueComponent::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::System::ComponentModel::EventHandlerList* const& System::ComponentModel::MarshalByValueComponent::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void System::ComponentModel::MarshalByValueComponent::__cordl_internal_set__events(::System::ComponentModel::EventHandlerList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
inline void System::ComponentModel::MarshalByValueComponent::setStaticF_s_eventDisposed(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "s_eventDisposed", ::System::ComponentModel::MarshalByValueComponent*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::ComponentModel::MarshalByValueComponent::getStaticF_s_eventDisposed()  {
return ::cordl_internals::getStaticField<::System::Object*, "s_eventDisposed", ::System::ComponentModel::MarshalByValueComponent*>();
}
inline void System::ComponentModel::MarshalByValueComponent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::MarshalByValueComponent::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::MarshalByValueComponent::add_Disposed(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(),
                        {"add_Disposed", {}, {::i2c::type_of<::System::EventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::ComponentModel::MarshalByValueComponent::remove_Disposed(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(),
                        {"remove_Disposed", {}, {::i2c::type_of<::System::EventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::ComponentModel::EventHandlerList* System::ComponentModel::MarshalByValueComponent::get_Events()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(),
                        {"get_Events", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventHandlerList*>(this, ___internal_method);
}
inline ::System::ComponentModel::ISite* System::ComponentModel::MarshalByValueComponent::get_Site()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ISite*>(this, ___internal_method);
}
inline void System::ComponentModel::MarshalByValueComponent::set_Site(::System::ComponentModel::ISite*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::ComponentModel::MarshalByValueComponent::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::MarshalByValueComponent::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::ComponentModel::IContainer* System::ComponentModel::MarshalByValueComponent::get_Container()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IContainer*>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::MarshalByValueComponent::GetService(::System::Type*  service)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, service);
}
inline bool System::ComponentModel::MarshalByValueComponent::get_DesignMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::MarshalByValueComponent::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::MarshalByValueComponent*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::ComponentModel::MarshalByValueComponent* System::ComponentModel::MarshalByValueComponent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::MarshalByValueComponent*>());
}
/// @brief Convert operator to "::System::ComponentModel::IComponent"
constexpr  System::ComponentModel::MarshalByValueComponent::operator ::System::ComponentModel::IComponent*() noexcept {
return static_cast<::System::ComponentModel::IComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::IComponent"
constexpr ::System::ComponentModel::IComponent* System::ComponentModel::MarshalByValueComponent::i___System__ComponentModel__IComponent() noexcept {
return static_cast<::System::ComponentModel::IComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::ComponentModel::MarshalByValueComponent::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::ComponentModel::MarshalByValueComponent::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IServiceProvider"
constexpr  System::ComponentModel::MarshalByValueComponent::operator ::System::IServiceProvider*() noexcept {
return static_cast<::System::IServiceProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IServiceProvider"
constexpr ::System::IServiceProvider* System::ComponentModel::MarshalByValueComponent::i___System__IServiceProvider() noexcept {
return static_cast<::System::IServiceProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::MarshalByValueComponent::MarshalByValueComponent()   {
}
