#pragma once
// IWYU pragma private; include "System/ComponentModel/Container.hpp"
#include "System/ComponentModel/zzzz__ISite_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__Container_def.hpp"
#include "System/ComponentModel/zzzz__ComponentCollection_def.hpp"
#include "System/ComponentModel/zzzz__ContainerFilterService_def.hpp"
#include "System/ComponentModel/zzzz__Container_def.hpp"
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
#include "System/ComponentModel/zzzz__IContainer_def.hpp"
#include "System/ComponentModel/zzzz__ISite_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IServiceProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Container.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Container::*)()>(&::System::ComponentModel::Container::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xad6e768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::Container*>(),
                    {::i2c::class_of<::System::ComponentModel::Container*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Container.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Container::*)(::System::ComponentModel::IComponent*)>(&::System::ComponentModel::Container::Add)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xad6e7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::Container*>(),
                    {::i2c::class_of<::System::ComponentModel::Container*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Container.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Container::*)(::System::ComponentModel::IComponent*, ::StringW)>(&::System::ComponentModel::Container::Add)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0xad6e808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::Container*>(),
                    {::i2c::class_of<::System::ComponentModel::Container*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Container.CreateSite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ISite* (::System::ComponentModel::Container::*)(::System::ComponentModel::IComponent*, ::StringW)>(&::System::ComponentModel::Container::CreateSite)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xad6ec9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::Container*>(),
                    {::i2c::class_of<::System::ComponentModel::Container*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Container.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Container::*)()>(&::System::ComponentModel::Container::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xad6ed6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Container*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Container.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Container::*)(bool)>(&::System::ComponentModel::Container::Dispose)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0xad6edd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::Container*>(),
                    {::i2c::class_of<::System::ComponentModel::Container*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Container.GetService
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::Container::*)(::System::Type*)>(&::System::ComponentModel::Container::GetService)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xad6f100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::Container*>(),
                    {::i2c::class_of<::System::ComponentModel::Container*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Container.get_Components
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ComponentCollection* (::System::ComponentModel::Container::*)()>(&::System::ComponentModel::Container::get_Components)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0xad6f18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::Container*>(),
                    {::i2c::class_of<::System::ComponentModel::Container*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Container.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Container::*)(::System::ComponentModel::IComponent*)>(&::System::ComponentModel::Container::Remove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad6f558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::Container*>(),
                    {::i2c::class_of<::System::ComponentModel::Container*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Container.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Container::*)(::System::ComponentModel::IComponent*, bool)>(&::System::ComponentModel::Container::Remove)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0xad6f560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Container*>(),
                        {"Remove", {}, {::i2c::type_of<::System::ComponentModel::IComponent*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Container.RemoveWithoutUnsiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Container::*)(::System::ComponentModel::IComponent*)>(&::System::ComponentModel::Container::RemoveWithoutUnsiting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad6f858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Container*>(),
                        {"RemoveWithoutUnsiting", {}, {::i2c::type_of<::System::ComponentModel::IComponent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Container.ValidateName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Container::*)(::System::ComponentModel::IComponent*, ::StringW)>(&::System::ComponentModel::Container::ValidateName)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0xad6f860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::Container*>(),
                    {::i2c::class_of<::System::ComponentModel::Container*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Container._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Container::*)()>(&::System::ComponentModel::Container::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xad6fccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Container*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::ComponentModel::ISite*>& System::ComponentModel::Container::__cordl_internal_get_sites()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sites;
}
constexpr ::ArrayW<::System::ComponentModel::ISite*> const& System::ComponentModel::Container::__cordl_internal_get_sites() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sites;
}
constexpr void System::ComponentModel::Container::__cordl_internal_set_sites(::ArrayW<::System::ComponentModel::ISite*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sites = value;
}
constexpr int32_t& System::ComponentModel::Container::__cordl_internal_get_siteCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___siteCount;
}
constexpr int32_t const& System::ComponentModel::Container::__cordl_internal_get_siteCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___siteCount;
}
constexpr void System::ComponentModel::Container::__cordl_internal_set_siteCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___siteCount = value;
}
constexpr ::System::ComponentModel::ComponentCollection*& System::ComponentModel::Container::__cordl_internal_get_components()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___components;
}
constexpr ::System::ComponentModel::ComponentCollection* const& System::ComponentModel::Container::__cordl_internal_get_components() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___components;
}
constexpr void System::ComponentModel::Container::__cordl_internal_set_components(::System::ComponentModel::ComponentCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___components = value;
}
constexpr ::System::ComponentModel::ContainerFilterService*& System::ComponentModel::Container::__cordl_internal_get_filter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter;
}
constexpr ::System::ComponentModel::ContainerFilterService* const& System::ComponentModel::Container::__cordl_internal_get_filter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter;
}
constexpr void System::ComponentModel::Container::__cordl_internal_set_filter(::System::ComponentModel::ContainerFilterService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filter = value;
}
constexpr bool& System::ComponentModel::Container::__cordl_internal_get_checkedFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkedFilter;
}
constexpr bool const& System::ComponentModel::Container::__cordl_internal_get_checkedFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkedFilter;
}
constexpr void System::ComponentModel::Container::__cordl_internal_set_checkedFilter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkedFilter = value;
}
constexpr ::System::Object*& System::ComponentModel::Container::__cordl_internal_get_syncObj()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncObj;
}
constexpr ::System::Object* const& System::ComponentModel::Container::__cordl_internal_get_syncObj() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncObj;
}
constexpr void System::ComponentModel::Container::__cordl_internal_set_syncObj(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncObj = value;
}
inline void System::ComponentModel::Container::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::Container*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::Container::Add(::System::ComponentModel::IComponent*  component)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::Container*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline void System::ComponentModel::Container::Add(::System::ComponentModel::IComponent*  component, ::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::Container*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, name);
}
inline ::System::ComponentModel::ISite* System::ComponentModel::Container::CreateSite(::System::ComponentModel::IComponent*  component, ::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::Container*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ISite*>(this, ___internal_method, component, name);
}
inline void System::ComponentModel::Container::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Container*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::Container::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::Container*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Object* System::ComponentModel::Container::GetService(::System::Type*  service)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::Container*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, service);
}
inline ::System::ComponentModel::ComponentCollection* System::ComponentModel::Container::get_Components()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::Container*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ComponentCollection*>(this, ___internal_method);
}
inline void System::ComponentModel::Container::Remove(::System::ComponentModel::IComponent*  component)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::Container*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline void System::ComponentModel::Container::Remove(::System::ComponentModel::IComponent*  component, bool  preserveSite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Container*>(),
                        {"Remove", {}, {::i2c::type_of<::System::ComponentModel::IComponent*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, preserveSite);
}
inline void System::ComponentModel::Container::RemoveWithoutUnsiting(::System::ComponentModel::IComponent*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Container*>(),
                        {"RemoveWithoutUnsiting", {}, {::i2c::type_of<::System::ComponentModel::IComponent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline void System::ComponentModel::Container::ValidateName(::System::ComponentModel::IComponent*  component, ::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::Container*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, name);
}
inline void System::ComponentModel::Container::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Container*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::Container* System::ComponentModel::Container::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::Container*>());
}
/// @brief Convert operator to "::System::ComponentModel::IContainer"
constexpr  System::ComponentModel::Container::operator ::System::ComponentModel::IContainer*() noexcept {
return static_cast<::System::ComponentModel::IContainer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::IContainer"
constexpr ::System::ComponentModel::IContainer* System::ComponentModel::Container::i___System__ComponentModel__IContainer() noexcept {
return static_cast<::System::ComponentModel::IContainer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::ComponentModel::Container::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::ComponentModel::Container::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::Container::Container()   {
}
//  Writing Method size for method: ::System::ComponentModel::Container_Site._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Container_Site::*)(::System::ComponentModel::IComponent*, ::System::ComponentModel::Container*, ::StringW)>(&::System::ComponentModel::Container_Site::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xad6ed0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Container_Site*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::IComponent*>(), ::i2c::type_of<::System::ComponentModel::Container*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Container_Site.get_Component
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::IComponent* (::System::ComponentModel::Container_Site::*)()>(&::System::ComponentModel::Container_Site::get_Component)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad6fd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Container_Site*>(),
                        {"get_Component", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Container_Site.get_Container
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::IContainer* (::System::ComponentModel::Container_Site::*)()>(&::System::ComponentModel::Container_Site::get_Container)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad6fd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Container_Site*>(),
                        {"get_Container", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Container_Site.GetService
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::Container_Site::*)(::System::Type*)>(&::System::ComponentModel::Container_Site::GetService)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xad6fd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Container_Site*>(),
                        {"GetService", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Container_Site.get_DesignMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::Container_Site::*)()>(&::System::ComponentModel::Container_Site::get_DesignMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad6fe00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Container_Site*>(),
                        {"get_DesignMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Container_Site.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::Container_Site::*)()>(&::System::ComponentModel::Container_Site::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad6fe08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Container_Site*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Container_Site.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Container_Site::*)(::StringW)>(&::System::ComponentModel::Container_Site::set_Name)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xad6fe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Container_Site*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::IComponent*& System::ComponentModel::Container_Site::__cordl_internal_get_component()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___component;
}
constexpr ::System::ComponentModel::IComponent* const& System::ComponentModel::Container_Site::__cordl_internal_get_component() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___component;
}
constexpr void System::ComponentModel::Container_Site::__cordl_internal_set_component(::System::ComponentModel::IComponent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___component = value;
}
constexpr ::System::ComponentModel::Container*& System::ComponentModel::Container_Site::__cordl_internal_get_container()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___container;
}
constexpr ::System::ComponentModel::Container* const& System::ComponentModel::Container_Site::__cordl_internal_get_container() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___container;
}
constexpr void System::ComponentModel::Container_Site::__cordl_internal_set_container(::System::ComponentModel::Container*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___container = value;
}
constexpr ::StringW& System::ComponentModel::Container_Site::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& System::ComponentModel::Container_Site::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void System::ComponentModel::Container_Site::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
inline void System::ComponentModel::Container_Site::_ctor(::System::ComponentModel::IComponent*  component, ::System::ComponentModel::Container*  container, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Container_Site*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::IComponent*>(), ::i2c::type_of<::System::ComponentModel::Container*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, container, name);
}
inline ::System::ComponentModel::IComponent* System::ComponentModel::Container_Site::get_Component()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Container_Site*>(),
                        {"get_Component", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IComponent*>(this, ___internal_method);
}
inline ::System::ComponentModel::IContainer* System::ComponentModel::Container_Site::get_Container()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Container_Site*>(),
                        {"get_Container", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IContainer*>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::Container_Site::GetService(::System::Type*  service)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Container_Site*>(),
                        {"GetService", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, service);
}
inline bool System::ComponentModel::Container_Site::get_DesignMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Container_Site*>(),
                        {"get_DesignMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::Container_Site::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Container_Site*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::ComponentModel::Container_Site::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Container_Site*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::ComponentModel::Container_Site* System::ComponentModel::Container_Site::New_ctor(::System::ComponentModel::IComponent*  component, ::System::ComponentModel::Container*  container, ::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::Container_Site*>(component, container, name));
}
/// @brief Convert operator to "::System::ComponentModel::ISite"
constexpr  System::ComponentModel::Container_Site::operator ::System::ComponentModel::ISite*() noexcept {
return static_cast<::System::ComponentModel::ISite*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::ISite"
constexpr ::System::ComponentModel::ISite* System::ComponentModel::Container_Site::i___System__ComponentModel__ISite() noexcept {
return static_cast<::System::ComponentModel::ISite*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IServiceProvider"
constexpr  System::ComponentModel::Container_Site::operator ::System::IServiceProvider*() noexcept {
return static_cast<::System::IServiceProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IServiceProvider"
constexpr ::System::IServiceProvider* System::ComponentModel::Container_Site::i___System__IServiceProvider() noexcept {
return static_cast<::System::IServiceProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::Container_Site::Container_Site()   {
}
