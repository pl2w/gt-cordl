#pragma once
// IWYU pragma private; include "System/ComponentModel/NestedContainer.hpp"
#include "System/ComponentModel/zzzz__Container_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__NestedContainer_def.hpp"
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
#include "System/ComponentModel/zzzz__IContainer_def.hpp"
#include "System/ComponentModel/zzzz__INestedContainer_def.hpp"
#include "System/ComponentModel/zzzz__INestedSite_def.hpp"
#include "System/ComponentModel/zzzz__ISite_def.hpp"
#include "System/ComponentModel/zzzz__NestedContainer_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IServiceProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::NestedContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::NestedContainer::*)(::System::ComponentModel::IComponent*)>(&::System::ComponentModel::NestedContainer::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xad61224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::NestedContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::IComponent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::NestedContainer.get_Owner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::IComponent* (::System::ComponentModel::NestedContainer::*)()>(&::System::ComponentModel::NestedContainer::get_Owner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad61388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::NestedContainer*>(),
                        {"get_Owner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::NestedContainer.get_OwnerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::NestedContainer::*)()>(&::System::ComponentModel::NestedContainer::get_OwnerName)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xad61390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::NestedContainer*>(),
                    {::i2c::class_of<::System::ComponentModel::NestedContainer*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::NestedContainer.CreateSite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ISite* (::System::ComponentModel::NestedContainer::*)(::System::ComponentModel::IComponent*, ::StringW)>(&::System::ComponentModel::NestedContainer::CreateSite)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xad615f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::NestedContainer*>(),
                    {::i2c::class_of<::System::ComponentModel::NestedContainer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::NestedContainer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::NestedContainer::*)(bool)>(&::System::ComponentModel::NestedContainer::Dispose)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xad61710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::NestedContainer*>(),
                    {::i2c::class_of<::System::ComponentModel::NestedContainer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::NestedContainer.GetService
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::NestedContainer::*)(::System::Type*)>(&::System::ComponentModel::NestedContainer::GetService)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xad6181c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::NestedContainer*>(),
                    {::i2c::class_of<::System::ComponentModel::NestedContainer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::NestedContainer.OnOwnerDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::NestedContainer::*)(::System::Object*, ::System::EventArgs*)>(&::System::ComponentModel::NestedContainer::OnOwnerDisposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad618c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::NestedContainer*>(),
                        {"OnOwnerDisposed", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::IComponent*& System::ComponentModel::NestedContainer::__cordl_internal_get__Owner_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Owner_k__BackingField;
}
constexpr ::System::ComponentModel::IComponent* const& System::ComponentModel::NestedContainer::__cordl_internal_get__Owner_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Owner_k__BackingField;
}
constexpr void System::ComponentModel::NestedContainer::__cordl_internal_set__Owner_k__BackingField(::System::ComponentModel::IComponent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Owner_k__BackingField = value;
}
inline void System::ComponentModel::NestedContainer::_ctor(::System::ComponentModel::IComponent*  owner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::NestedContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::IComponent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline ::System::ComponentModel::IComponent* System::ComponentModel::NestedContainer::get_Owner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::NestedContainer*>(),
                        {"get_Owner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IComponent*>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::NestedContainer::get_OwnerName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::NestedContainer*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::ComponentModel::ISite* System::ComponentModel::NestedContainer::CreateSite(::System::ComponentModel::IComponent*  component, ::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::NestedContainer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ISite*>(this, ___internal_method, component, name);
}
inline void System::ComponentModel::NestedContainer::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::NestedContainer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Object* System::ComponentModel::NestedContainer::GetService(::System::Type*  service)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::NestedContainer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, service);
}
inline void System::ComponentModel::NestedContainer::OnOwnerDisposed(::System::Object*  sender, ::System::EventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::NestedContainer*>(),
                        {"OnOwnerDisposed", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::ComponentModel::NestedContainer* System::ComponentModel::NestedContainer::New_ctor(::System::ComponentModel::IComponent*  owner)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::NestedContainer*>(owner));
}
/// @brief Convert operator to "::System::ComponentModel::INestedContainer"
constexpr  System::ComponentModel::NestedContainer::operator ::System::ComponentModel::INestedContainer*() noexcept {
return static_cast<::System::ComponentModel::INestedContainer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::INestedContainer"
constexpr ::System::ComponentModel::INestedContainer* System::ComponentModel::NestedContainer::i___System__ComponentModel__INestedContainer() noexcept {
return static_cast<::System::ComponentModel::INestedContainer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ComponentModel::IContainer"
constexpr  System::ComponentModel::NestedContainer::operator ::System::ComponentModel::IContainer*() noexcept {
return static_cast<::System::ComponentModel::IContainer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::IContainer"
constexpr ::System::ComponentModel::IContainer* System::ComponentModel::NestedContainer::i___System__ComponentModel__IContainer() noexcept {
return static_cast<::System::ComponentModel::IContainer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::ComponentModel::NestedContainer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::ComponentModel::NestedContainer::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::NestedContainer::NestedContainer()   {
}
//  Writing Method size for method: ::System::ComponentModel::NestedContainer_Site._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::NestedContainer_Site::*)(::System::ComponentModel::IComponent*, ::System::ComponentModel::NestedContainer*, ::StringW)>(&::System::ComponentModel::NestedContainer_Site::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xad616b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::NestedContainer_Site*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::IComponent*>(), ::i2c::type_of<::System::ComponentModel::NestedContainer*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::NestedContainer_Site.get_Component
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::IComponent* (::System::ComponentModel::NestedContainer_Site::*)()>(&::System::ComponentModel::NestedContainer_Site::get_Component)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad618cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::NestedContainer_Site*>(),
                        {"get_Component", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::NestedContainer_Site.get_Container
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::IContainer* (::System::ComponentModel::NestedContainer_Site::*)()>(&::System::ComponentModel::NestedContainer_Site::get_Container)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad618d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::NestedContainer_Site*>(),
                        {"get_Container", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::NestedContainer_Site.GetService
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::NestedContainer_Site::*)(::System::Type*)>(&::System::ComponentModel::NestedContainer_Site::GetService)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xad618dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::NestedContainer_Site*>(),
                        {"GetService", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::NestedContainer_Site.get_DesignMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::NestedContainer_Site::*)()>(&::System::ComponentModel::NestedContainer_Site::get_DesignMode)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xad619d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::NestedContainer_Site*>(),
                        {"get_DesignMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::NestedContainer_Site.get_FullName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::NestedContainer_Site::*)()>(&::System::ComponentModel::NestedContainer_Site::get_FullName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xad61ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::NestedContainer_Site*>(),
                        {"get_FullName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::NestedContainer_Site.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::NestedContainer_Site::*)()>(&::System::ComponentModel::NestedContainer_Site::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad61ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::NestedContainer_Site*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::NestedContainer_Site.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::NestedContainer_Site::*)(::StringW)>(&::System::ComponentModel::NestedContainer_Site::set_Name)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xad61cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::NestedContainer_Site*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::NestedContainer_Site::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& System::ComponentModel::NestedContainer_Site::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void System::ComponentModel::NestedContainer_Site::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
constexpr ::System::ComponentModel::IComponent*& System::ComponentModel::NestedContainer_Site::__cordl_internal_get__Component_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Component_k__BackingField;
}
constexpr ::System::ComponentModel::IComponent* const& System::ComponentModel::NestedContainer_Site::__cordl_internal_get__Component_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Component_k__BackingField;
}
constexpr void System::ComponentModel::NestedContainer_Site::__cordl_internal_set__Component_k__BackingField(::System::ComponentModel::IComponent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Component_k__BackingField = value;
}
constexpr ::System::ComponentModel::IContainer*& System::ComponentModel::NestedContainer_Site::__cordl_internal_get__Container_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Container_k__BackingField;
}
constexpr ::System::ComponentModel::IContainer* const& System::ComponentModel::NestedContainer_Site::__cordl_internal_get__Container_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Container_k__BackingField;
}
constexpr void System::ComponentModel::NestedContainer_Site::__cordl_internal_set__Container_k__BackingField(::System::ComponentModel::IContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Container_k__BackingField = value;
}
inline void System::ComponentModel::NestedContainer_Site::_ctor(::System::ComponentModel::IComponent*  component, ::System::ComponentModel::NestedContainer*  container, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::NestedContainer_Site*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::IComponent*>(), ::i2c::type_of<::System::ComponentModel::NestedContainer*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, container, name);
}
inline ::System::ComponentModel::IComponent* System::ComponentModel::NestedContainer_Site::get_Component()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::NestedContainer_Site*>(),
                        {"get_Component", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IComponent*>(this, ___internal_method);
}
inline ::System::ComponentModel::IContainer* System::ComponentModel::NestedContainer_Site::get_Container()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::NestedContainer_Site*>(),
                        {"get_Container", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IContainer*>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::NestedContainer_Site::GetService(::System::Type*  service)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::NestedContainer_Site*>(),
                        {"GetService", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, service);
}
inline bool System::ComponentModel::NestedContainer_Site::get_DesignMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::NestedContainer_Site*>(),
                        {"get_DesignMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::NestedContainer_Site::get_FullName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::NestedContainer_Site*>(),
                        {"get_FullName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::NestedContainer_Site::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::NestedContainer_Site*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::ComponentModel::NestedContainer_Site::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::NestedContainer_Site*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::ComponentModel::NestedContainer_Site* System::ComponentModel::NestedContainer_Site::New_ctor(::System::ComponentModel::IComponent*  component, ::System::ComponentModel::NestedContainer*  container, ::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::NestedContainer_Site*>(component, container, name));
}
/// @brief Convert operator to "::System::ComponentModel::INestedSite"
constexpr  System::ComponentModel::NestedContainer_Site::operator ::System::ComponentModel::INestedSite*() noexcept {
return static_cast<::System::ComponentModel::INestedSite*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::INestedSite"
constexpr ::System::ComponentModel::INestedSite* System::ComponentModel::NestedContainer_Site::i___System__ComponentModel__INestedSite() noexcept {
return static_cast<::System::ComponentModel::INestedSite*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ComponentModel::ISite"
constexpr  System::ComponentModel::NestedContainer_Site::operator ::System::ComponentModel::ISite*() noexcept {
return static_cast<::System::ComponentModel::ISite*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::ISite"
constexpr ::System::ComponentModel::ISite* System::ComponentModel::NestedContainer_Site::i___System__ComponentModel__ISite() noexcept {
return static_cast<::System::ComponentModel::ISite*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IServiceProvider"
constexpr  System::ComponentModel::NestedContainer_Site::operator ::System::IServiceProvider*() noexcept {
return static_cast<::System::IServiceProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IServiceProvider"
constexpr ::System::IServiceProvider* System::ComponentModel::NestedContainer_Site::i___System__IServiceProvider() noexcept {
return static_cast<::System::IServiceProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::NestedContainer_Site::NestedContainer_Site()   {
}
