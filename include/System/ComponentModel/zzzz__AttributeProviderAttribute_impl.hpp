#pragma once
// IWYU pragma private; include "System/ComponentModel/AttributeProviderAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__AttributeProviderAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::AttributeProviderAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AttributeProviderAttribute::*)(::StringW)>(&::System::ComponentModel::AttributeProviderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xad4a23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeProviderAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeProviderAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AttributeProviderAttribute::*)(::StringW, ::StringW)>(&::System::ComponentModel::AttributeProviderAttribute::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xad4a2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeProviderAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeProviderAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AttributeProviderAttribute::*)(::System::Type*)>(&::System::ComponentModel::AttributeProviderAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xad4a36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeProviderAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeProviderAttribute.get_TypeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::AttributeProviderAttribute::*)()>(&::System::ComponentModel::AttributeProviderAttribute::get_TypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad4a42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeProviderAttribute*>(),
                        {"get_TypeName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeProviderAttribute.get_PropertyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::AttributeProviderAttribute::*)()>(&::System::ComponentModel::AttributeProviderAttribute::get_PropertyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad4a434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeProviderAttribute*>(),
                        {"get_PropertyName", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::AttributeProviderAttribute::__cordl_internal_get__TypeName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TypeName_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::AttributeProviderAttribute::__cordl_internal_get__TypeName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TypeName_k__BackingField;
}
constexpr void System::ComponentModel::AttributeProviderAttribute::__cordl_internal_set__TypeName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TypeName_k__BackingField = value;
}
constexpr ::StringW& System::ComponentModel::AttributeProviderAttribute::__cordl_internal_get__PropertyName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PropertyName_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::AttributeProviderAttribute::__cordl_internal_get__PropertyName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PropertyName_k__BackingField;
}
constexpr void System::ComponentModel::AttributeProviderAttribute::__cordl_internal_set__PropertyName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PropertyName_k__BackingField = value;
}
inline void System::ComponentModel::AttributeProviderAttribute::_ctor(::StringW  typeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeProviderAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeName);
}
inline void System::ComponentModel::AttributeProviderAttribute::_ctor(::StringW  typeName, ::StringW  propertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeProviderAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeName, propertyName);
}
inline void System::ComponentModel::AttributeProviderAttribute::_ctor(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeProviderAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::StringW System::ComponentModel::AttributeProviderAttribute::get_TypeName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeProviderAttribute*>(),
                        {"get_TypeName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::AttributeProviderAttribute::get_PropertyName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeProviderAttribute*>(),
                        {"get_PropertyName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::ComponentModel::AttributeProviderAttribute* System::ComponentModel::AttributeProviderAttribute::New_ctor(::StringW  typeName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::AttributeProviderAttribute*>(typeName));
}
inline ::System::ComponentModel::AttributeProviderAttribute* System::ComponentModel::AttributeProviderAttribute::New_ctor(::StringW  typeName, ::StringW  propertyName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::AttributeProviderAttribute*>(typeName, propertyName));
}
inline ::System::ComponentModel::AttributeProviderAttribute* System::ComponentModel::AttributeProviderAttribute::New_ctor(::System::Type*  type)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::AttributeProviderAttribute*>(type));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::AttributeProviderAttribute::AttributeProviderAttribute()   {
}
