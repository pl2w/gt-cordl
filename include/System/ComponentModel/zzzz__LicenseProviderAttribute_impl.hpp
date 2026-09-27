#pragma once
// IWYU pragma private; include "System/ComponentModel/LicenseProviderAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__LicenseProviderAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::LicenseProviderAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::LicenseProviderAttribute::*)()>(&::System::ComponentModel::LicenseProviderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xad5ab94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseProviderAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseProviderAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::LicenseProviderAttribute::*)(::StringW)>(&::System::ComponentModel::LicenseProviderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xad5abb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseProviderAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseProviderAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::LicenseProviderAttribute::*)(::System::Type*)>(&::System::ComponentModel::LicenseProviderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xad5abe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseProviderAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseProviderAttribute.get_LicenseProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::LicenseProviderAttribute::*)()>(&::System::ComponentModel::LicenseProviderAttribute::get_LicenseProvider)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xad5a8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseProviderAttribute*>(),
                        {"get_LicenseProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseProviderAttribute.get_TypeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::LicenseProviderAttribute::*)()>(&::System::ComponentModel::LicenseProviderAttribute::get_TypeId)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xad5ac18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::LicenseProviderAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::LicenseProviderAttribute*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseProviderAttribute.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::LicenseProviderAttribute::*)(::System::Object*)>(&::System::ComponentModel::LicenseProviderAttribute::Equals)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xad5acb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::LicenseProviderAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::LicenseProviderAttribute*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseProviderAttribute.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::LicenseProviderAttribute::*)()>(&::System::ComponentModel::LicenseProviderAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad5adbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::LicenseProviderAttribute*>(),
                    {::i2c::class_of<::System::ComponentModel::LicenseProviderAttribute*>(), 2}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::ComponentModel::LicenseProviderAttribute::__cordl_internal_get__licenseProviderType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____licenseProviderType;
}
constexpr ::System::Type* const& System::ComponentModel::LicenseProviderAttribute::__cordl_internal_get__licenseProviderType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____licenseProviderType;
}
constexpr void System::ComponentModel::LicenseProviderAttribute::__cordl_internal_set__licenseProviderType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____licenseProviderType = value;
}
constexpr ::StringW& System::ComponentModel::LicenseProviderAttribute::__cordl_internal_get__licenseProviderName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____licenseProviderName;
}
constexpr ::StringW const& System::ComponentModel::LicenseProviderAttribute::__cordl_internal_get__licenseProviderName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____licenseProviderName;
}
constexpr void System::ComponentModel::LicenseProviderAttribute::__cordl_internal_set__licenseProviderName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____licenseProviderName = value;
}
inline void System::ComponentModel::LicenseProviderAttribute::setStaticF_Default(::System::ComponentModel::LicenseProviderAttribute*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::LicenseProviderAttribute*, "Default", ::System::ComponentModel::LicenseProviderAttribute*>(std::forward<::System::ComponentModel::LicenseProviderAttribute*>(value));
}
inline ::System::ComponentModel::LicenseProviderAttribute* System::ComponentModel::LicenseProviderAttribute::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::LicenseProviderAttribute*, "Default", ::System::ComponentModel::LicenseProviderAttribute*>();
}
inline void System::ComponentModel::LicenseProviderAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseProviderAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::LicenseProviderAttribute::_ctor(::StringW  typeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseProviderAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeName);
}
inline void System::ComponentModel::LicenseProviderAttribute::_ctor(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseProviderAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::System::Type* System::ComponentModel::LicenseProviderAttribute::get_LicenseProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseProviderAttribute*>(),
                        {"get_LicenseProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::LicenseProviderAttribute::get_TypeId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::LicenseProviderAttribute*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::ComponentModel::LicenseProviderAttribute::Equals(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::LicenseProviderAttribute*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline int32_t System::ComponentModel::LicenseProviderAttribute::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::LicenseProviderAttribute*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::ComponentModel::LicenseProviderAttribute* System::ComponentModel::LicenseProviderAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::LicenseProviderAttribute*>());
}
inline ::System::ComponentModel::LicenseProviderAttribute* System::ComponentModel::LicenseProviderAttribute::New_ctor(::StringW  typeName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::LicenseProviderAttribute*>(typeName));
}
inline ::System::ComponentModel::LicenseProviderAttribute* System::ComponentModel::LicenseProviderAttribute::New_ctor(::System::Type*  type)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::LicenseProviderAttribute*>(type));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::LicenseProviderAttribute::LicenseProviderAttribute()   {
}
