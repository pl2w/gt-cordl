#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/JsonPropertyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Meta/WitAi/Json/zzzz__JsonPropertyAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Json::JsonPropertyAttribute.get_PropertyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Json::JsonPropertyAttribute::*)()>(&::Meta::WitAi::Json::JsonPropertyAttribute::get_PropertyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e442bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonPropertyAttribute*>(),
                        {"get_PropertyName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::JsonPropertyAttribute.set_PropertyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::JsonPropertyAttribute::*)(::StringW)>(&::Meta::WitAi::Json::JsonPropertyAttribute::set_PropertyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e442c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonPropertyAttribute*>(),
                        {"set_PropertyName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::JsonPropertyAttribute.set_DefaultValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::JsonPropertyAttribute::*)(::System::Object*)>(&::Meta::WitAi::Json::JsonPropertyAttribute::set_DefaultValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e442cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonPropertyAttribute*>(),
                        {"set_DefaultValue", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::JsonPropertyAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::JsonPropertyAttribute::*)()>(&::Meta::WitAi::Json::JsonPropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9e442d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonPropertyAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::JsonPropertyAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::JsonPropertyAttribute::*)(::StringW)>(&::Meta::WitAi::Json::JsonPropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9e44308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonPropertyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::Json::JsonPropertyAttribute::__cordl_internal_get__PropertyName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PropertyName_k__BackingField;
}
constexpr ::StringW const& Meta::WitAi::Json::JsonPropertyAttribute::__cordl_internal_get__PropertyName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PropertyName_k__BackingField;
}
constexpr void Meta::WitAi::Json::JsonPropertyAttribute::__cordl_internal_set__PropertyName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PropertyName_k__BackingField = value;
}
constexpr ::System::Object*& Meta::WitAi::Json::JsonPropertyAttribute::__cordl_internal_get__DefaultValue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultValue_k__BackingField;
}
constexpr ::System::Object* const& Meta::WitAi::Json::JsonPropertyAttribute::__cordl_internal_get__DefaultValue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultValue_k__BackingField;
}
constexpr void Meta::WitAi::Json::JsonPropertyAttribute::__cordl_internal_set__DefaultValue_k__BackingField(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DefaultValue_k__BackingField = value;
}
inline ::StringW Meta::WitAi::Json::JsonPropertyAttribute::get_PropertyName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonPropertyAttribute*>(),
                        {"get_PropertyName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::Json::JsonPropertyAttribute::set_PropertyName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonPropertyAttribute*>(),
                        {"set_PropertyName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Json::JsonPropertyAttribute::set_DefaultValue(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonPropertyAttribute*>(),
                        {"set_DefaultValue", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Json::JsonPropertyAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonPropertyAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Json::JsonPropertyAttribute::_ctor(::StringW  propertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonPropertyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName);
}
inline ::Meta::WitAi::Json::JsonPropertyAttribute* Meta::WitAi::Json::JsonPropertyAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Json::JsonPropertyAttribute*>());
}
inline ::Meta::WitAi::Json::JsonPropertyAttribute* Meta::WitAi::Json::JsonPropertyAttribute::New_ctor(::StringW  propertyName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Json::JsonPropertyAttribute*>(propertyName));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Json::JsonPropertyAttribute::JsonPropertyAttribute()   {
}
