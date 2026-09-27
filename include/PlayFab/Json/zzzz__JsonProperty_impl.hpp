#pragma once
// IWYU pragma private; include "PlayFab/Json/JsonProperty.hpp"
#include "PlayFab/Json/zzzz__NullValueHandling_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "PlayFab/Json/zzzz__JsonProperty_def.hpp"
//  Writing Method size for method: ::PlayFab::Json::JsonProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Json::JsonProperty::*)()>(&::PlayFab::Json::JsonProperty::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7dfc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::JsonProperty*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::Json::JsonProperty::__cordl_internal_get_PropertyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PropertyName;
}
constexpr ::StringW const& PlayFab::Json::JsonProperty::__cordl_internal_get_PropertyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PropertyName;
}
constexpr void PlayFab::Json::JsonProperty::__cordl_internal_set_PropertyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PropertyName = value;
}
constexpr ::PlayFab::Json::NullValueHandling& PlayFab::Json::JsonProperty::__cordl_internal_get_NullValueHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NullValueHandling;
}
constexpr ::PlayFab::Json::NullValueHandling const& PlayFab::Json::JsonProperty::__cordl_internal_get_NullValueHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NullValueHandling;
}
constexpr void PlayFab::Json::JsonProperty::__cordl_internal_set_NullValueHandling(::PlayFab::Json::NullValueHandling  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NullValueHandling = value;
}
inline void PlayFab::Json::JsonProperty::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::JsonProperty*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::Json::JsonProperty* PlayFab::Json::JsonProperty::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Json::JsonProperty*>());
}
// Ctor Parameters []
constexpr ::PlayFab::Json::JsonProperty::JsonProperty()   {
}
