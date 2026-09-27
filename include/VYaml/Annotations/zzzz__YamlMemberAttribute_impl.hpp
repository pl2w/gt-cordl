#pragma once
// IWYU pragma private; include "VYaml/Annotations/YamlMemberAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "VYaml/Annotations/zzzz__YamlMemberAttribute_def.hpp"
//  Writing Method size for method: ::VYaml::Annotations::YamlMemberAttribute.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::VYaml::Annotations::YamlMemberAttribute::*)()>(&::VYaml::Annotations::YamlMemberAttribute::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9730c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Annotations::YamlMemberAttribute*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Annotations::YamlMemberAttribute.get_Order
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::VYaml::Annotations::YamlMemberAttribute::*)()>(&::VYaml::Annotations::YamlMemberAttribute::get_Order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9730d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Annotations::YamlMemberAttribute*>(),
                        {"get_Order", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Annotations::YamlMemberAttribute.set_Order
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Annotations::YamlMemberAttribute::*)(int32_t)>(&::VYaml::Annotations::YamlMemberAttribute::set_Order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9730d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Annotations::YamlMemberAttribute*>(),
                        {"set_Order", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Annotations::YamlMemberAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Annotations::YamlMemberAttribute::*)(::StringW)>(&::VYaml::Annotations::YamlMemberAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb9730e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Annotations::YamlMemberAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VYaml::Annotations::YamlMemberAttribute::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& VYaml::Annotations::YamlMemberAttribute::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void VYaml::Annotations::YamlMemberAttribute::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Name_k__BackingField = value;
}
constexpr int32_t& VYaml::Annotations::YamlMemberAttribute::__cordl_internal_get__Order_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Order_k__BackingField;
}
constexpr int32_t const& VYaml::Annotations::YamlMemberAttribute::__cordl_internal_get__Order_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Order_k__BackingField;
}
constexpr void VYaml::Annotations::YamlMemberAttribute::__cordl_internal_set__Order_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Order_k__BackingField = value;
}
inline ::StringW VYaml::Annotations::YamlMemberAttribute::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Annotations::YamlMemberAttribute*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t VYaml::Annotations::YamlMemberAttribute::get_Order()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Annotations::YamlMemberAttribute*>(),
                        {"get_Order", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void VYaml::Annotations::YamlMemberAttribute::set_Order(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Annotations::YamlMemberAttribute*>(),
                        {"set_Order", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void VYaml::Annotations::YamlMemberAttribute::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Annotations::YamlMemberAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::VYaml::Annotations::YamlMemberAttribute* VYaml::Annotations::YamlMemberAttribute::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Annotations::YamlMemberAttribute*>(name));
}
// Ctor Parameters []
constexpr ::VYaml::Annotations::YamlMemberAttribute::YamlMemberAttribute()   {
}
