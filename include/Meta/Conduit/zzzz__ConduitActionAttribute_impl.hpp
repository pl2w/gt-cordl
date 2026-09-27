#pragma once
// IWYU pragma private; include "Meta/Conduit/ConduitActionAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Meta/Conduit/zzzz__ConduitActionAttribute_def.hpp"
//  Writing Method size for method: ::Meta::Conduit::ConduitActionAttribute.get_Intent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Conduit::ConduitActionAttribute::*)()>(&::Meta::Conduit::ConduitActionAttribute::get_Intent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1b7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitActionAttribute*>(),
                        {"get_Intent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ConduitActionAttribute.get_MinConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::Conduit::ConduitActionAttribute::*)()>(&::Meta::Conduit::ConduitActionAttribute::get_MinConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1b7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitActionAttribute*>(),
                        {"get_MinConfidence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ConduitActionAttribute.get_MaxConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::Conduit::ConduitActionAttribute::*)()>(&::Meta::Conduit::ConduitActionAttribute::get_MaxConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1b7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitActionAttribute*>(),
                        {"get_MaxConfidence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ConduitActionAttribute.get_ValidatePartial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::ConduitActionAttribute::*)()>(&::Meta::Conduit::ConduitActionAttribute::get_ValidatePartial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1b7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitActionAttribute*>(),
                        {"get_ValidatePartial", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::Conduit::ConduitActionAttribute::__cordl_internal_get__Intent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Intent_k__BackingField;
}
constexpr ::StringW const& Meta::Conduit::ConduitActionAttribute::__cordl_internal_get__Intent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Intent_k__BackingField;
}
constexpr void Meta::Conduit::ConduitActionAttribute::__cordl_internal_set__Intent_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Intent_k__BackingField = value;
}
constexpr float_t& Meta::Conduit::ConduitActionAttribute::__cordl_internal_get__MinConfidence_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MinConfidence_k__BackingField;
}
constexpr float_t const& Meta::Conduit::ConduitActionAttribute::__cordl_internal_get__MinConfidence_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MinConfidence_k__BackingField;
}
constexpr void Meta::Conduit::ConduitActionAttribute::__cordl_internal_set__MinConfidence_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MinConfidence_k__BackingField = value;
}
constexpr float_t& Meta::Conduit::ConduitActionAttribute::__cordl_internal_get__MaxConfidence_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxConfidence_k__BackingField;
}
constexpr float_t const& Meta::Conduit::ConduitActionAttribute::__cordl_internal_get__MaxConfidence_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxConfidence_k__BackingField;
}
constexpr void Meta::Conduit::ConduitActionAttribute::__cordl_internal_set__MaxConfidence_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaxConfidence_k__BackingField = value;
}
constexpr bool& Meta::Conduit::ConduitActionAttribute::__cordl_internal_get__ValidatePartial_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ValidatePartial_k__BackingField;
}
constexpr bool const& Meta::Conduit::ConduitActionAttribute::__cordl_internal_get__ValidatePartial_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ValidatePartial_k__BackingField;
}
constexpr void Meta::Conduit::ConduitActionAttribute::__cordl_internal_set__ValidatePartial_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ValidatePartial_k__BackingField = value;
}
inline ::StringW Meta::Conduit::ConduitActionAttribute::get_Intent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitActionAttribute*>(),
                        {"get_Intent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline float_t Meta::Conduit::ConduitActionAttribute::get_MinConfidence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitActionAttribute*>(),
                        {"get_MinConfidence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Meta::Conduit::ConduitActionAttribute::get_MaxConfidence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitActionAttribute*>(),
                        {"get_MaxConfidence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Meta::Conduit::ConduitActionAttribute::get_ValidatePartial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitActionAttribute*>(),
                        {"get_ValidatePartial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Meta::Conduit::ConduitActionAttribute::ConduitActionAttribute()   {
}
