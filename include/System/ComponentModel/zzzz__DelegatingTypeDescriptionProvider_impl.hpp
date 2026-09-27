#pragma once
// IWYU pragma private; include "System/ComponentModel/DelegatingTypeDescriptionProvider.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_impl.hpp"
#include "System/ComponentModel/zzzz__DelegatingTypeDescriptionProvider_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/ComponentModel/zzzz__ICustomTypeDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__IExtenderProvider_def.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_def.hpp"
#include "System/zzzz__IServiceProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::DelegatingTypeDescriptionProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::DelegatingTypeDescriptionProvider::*)(::System::Type*)>(&::System::ComponentModel::DelegatingTypeDescriptionProvider::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xad54288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DelegatingTypeDescriptionProvider.get_Provider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeDescriptionProvider* (::System::ComponentModel::DelegatingTypeDescriptionProvider::*)()>(&::System::ComponentModel::DelegatingTypeDescriptionProvider::get_Provider)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xad542b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(),
                        {"get_Provider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DelegatingTypeDescriptionProvider.CreateInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::DelegatingTypeDescriptionProvider::*)(::System::IServiceProvider*, ::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::System::Object*>)>(&::System::ComponentModel::DelegatingTypeDescriptionProvider::CreateInstance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xad54314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(),
                    {::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DelegatingTypeDescriptionProvider.GetCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (::System::ComponentModel::DelegatingTypeDescriptionProvider::*)(::System::Object*)>(&::System::ComponentModel::DelegatingTypeDescriptionProvider::GetCache)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xad54364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(),
                    {::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DelegatingTypeDescriptionProvider.GetFullComponentName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::DelegatingTypeDescriptionProvider::*)(::System::Object*)>(&::System::ComponentModel::DelegatingTypeDescriptionProvider::GetFullComponentName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xad5438c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(),
                    {::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DelegatingTypeDescriptionProvider.GetExtendedTypeDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (::System::ComponentModel::DelegatingTypeDescriptionProvider::*)(::System::Object*)>(&::System::ComponentModel::DelegatingTypeDescriptionProvider::GetExtendedTypeDescriptor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xad543b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(),
                    {::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DelegatingTypeDescriptionProvider.GetExtenderProviders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::ComponentModel::IExtenderProvider*> (::System::ComponentModel::DelegatingTypeDescriptionProvider::*)(::System::Object*)>(&::System::ComponentModel::DelegatingTypeDescriptionProvider::GetExtenderProviders)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xad543dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(),
                    {::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DelegatingTypeDescriptionProvider.GetReflectionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::DelegatingTypeDescriptionProvider::*)(::System::Type*, ::System::Object*)>(&::System::ComponentModel::DelegatingTypeDescriptionProvider::GetReflectionType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xad54404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(),
                    {::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DelegatingTypeDescriptionProvider.GetRuntimeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::DelegatingTypeDescriptionProvider::*)(::System::Type*)>(&::System::ComponentModel::DelegatingTypeDescriptionProvider::GetRuntimeType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xad5443c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(),
                    {::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DelegatingTypeDescriptionProvider.GetTypeDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (::System::ComponentModel::DelegatingTypeDescriptionProvider::*)(::System::Type*, ::System::Object*)>(&::System::ComponentModel::DelegatingTypeDescriptionProvider::GetTypeDescriptor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xad54464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(),
                    {::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DelegatingTypeDescriptionProvider.IsSupportedType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::DelegatingTypeDescriptionProvider::*)(::System::Type*)>(&::System::ComponentModel::DelegatingTypeDescriptionProvider::IsSupportedType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xad5449c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(),
                    {::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(), 12}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::ComponentModel::DelegatingTypeDescriptionProvider::__cordl_internal_get__type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type;
}
constexpr ::System::Type* const& System::ComponentModel::DelegatingTypeDescriptionProvider::__cordl_internal_get__type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type;
}
constexpr void System::ComponentModel::DelegatingTypeDescriptionProvider::__cordl_internal_set__type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____type = value;
}
inline void System::ComponentModel::DelegatingTypeDescriptionProvider::_ctor(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::System::ComponentModel::TypeDescriptionProvider* System::ComponentModel::DelegatingTypeDescriptionProvider::get_Provider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(),
                        {"get_Provider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptionProvider*>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::DelegatingTypeDescriptionProvider::CreateInstance(::System::IServiceProvider*  provider, ::System::Type*  objectType, ::ArrayW<::System::Type*>  argTypes, ::ArrayW<::System::Object*>  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, provider, objectType, argTypes, args);
}
inline ::System::Collections::IDictionary* System::ComponentModel::DelegatingTypeDescriptionProvider::GetCache(::System::Object*  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method, instance);
}
inline ::StringW System::ComponentModel::DelegatingTypeDescriptionProvider::GetFullComponentName(::System::Object*  component)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, component);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::DelegatingTypeDescriptionProvider::GetExtendedTypeDescriptor(::System::Object*  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*>(this, ___internal_method, instance);
}
inline ::ArrayW<::System::ComponentModel::IExtenderProvider*> System::ComponentModel::DelegatingTypeDescriptionProvider::GetExtenderProviders(::System::Object*  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::ComponentModel::IExtenderProvider*>>(this, ___internal_method, instance);
}
inline ::System::Type* System::ComponentModel::DelegatingTypeDescriptionProvider::GetReflectionType(::System::Type*  objectType, ::System::Object*  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, objectType, instance);
}
inline ::System::Type* System::ComponentModel::DelegatingTypeDescriptionProvider::GetRuntimeType(::System::Type*  objectType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, objectType);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::DelegatingTypeDescriptionProvider::GetTypeDescriptor(::System::Type*  objectType, ::System::Object*  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*>(this, ___internal_method, objectType, instance);
}
inline bool System::ComponentModel::DelegatingTypeDescriptionProvider::IsSupportedType(::System::Type*  type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline ::System::ComponentModel::DelegatingTypeDescriptionProvider* System::ComponentModel::DelegatingTypeDescriptionProvider::New_ctor(::System::Type*  type)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::DelegatingTypeDescriptionProvider*>(type));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::DelegatingTypeDescriptionProvider::DelegatingTypeDescriptionProvider()   {
}
