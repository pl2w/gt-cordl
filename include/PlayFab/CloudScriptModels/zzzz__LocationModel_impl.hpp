#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/LocationModel.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ContinentCode_impl.hpp"
#include "PlayFab/CloudScriptModels/zzzz__CountryCode_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/CloudScriptModels/zzzz__LocationModel_def.hpp"
//  Writing Method size for method: ::PlayFab::CloudScriptModels::LocationModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::CloudScriptModels::LocationModel::*)()>(&::PlayFab::CloudScriptModels::LocationModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::LocationModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::CloudScriptModels::LocationModel::__cordl_internal_get_City()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___City;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::LocationModel::__cordl_internal_get_City() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___City;
}
constexpr void PlayFab::CloudScriptModels::LocationModel::__cordl_internal_set_City(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___City = value;
}
constexpr ::System::Nullable_1<::PlayFab::CloudScriptModels::ContinentCode>& PlayFab::CloudScriptModels::LocationModel::__cordl_internal_get_ContinentCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContinentCode;
}
constexpr ::System::Nullable_1<::PlayFab::CloudScriptModels::ContinentCode> const& PlayFab::CloudScriptModels::LocationModel::__cordl_internal_get_ContinentCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContinentCode;
}
constexpr void PlayFab::CloudScriptModels::LocationModel::__cordl_internal_set_ContinentCode(::System::Nullable_1<::PlayFab::CloudScriptModels::ContinentCode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ContinentCode = value;
}
constexpr ::System::Nullable_1<::PlayFab::CloudScriptModels::CountryCode>& PlayFab::CloudScriptModels::LocationModel::__cordl_internal_get_CountryCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CountryCode;
}
constexpr ::System::Nullable_1<::PlayFab::CloudScriptModels::CountryCode> const& PlayFab::CloudScriptModels::LocationModel::__cordl_internal_get_CountryCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CountryCode;
}
constexpr void PlayFab::CloudScriptModels::LocationModel::__cordl_internal_set_CountryCode(::System::Nullable_1<::PlayFab::CloudScriptModels::CountryCode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CountryCode = value;
}
constexpr ::System::Nullable_1<double_t>& PlayFab::CloudScriptModels::LocationModel::__cordl_internal_get_Latitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Latitude;
}
constexpr ::System::Nullable_1<double_t> const& PlayFab::CloudScriptModels::LocationModel::__cordl_internal_get_Latitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Latitude;
}
constexpr void PlayFab::CloudScriptModels::LocationModel::__cordl_internal_set_Latitude(::System::Nullable_1<double_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Latitude = value;
}
constexpr ::System::Nullable_1<double_t>& PlayFab::CloudScriptModels::LocationModel::__cordl_internal_get_Longitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Longitude;
}
constexpr ::System::Nullable_1<double_t> const& PlayFab::CloudScriptModels::LocationModel::__cordl_internal_get_Longitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Longitude;
}
constexpr void PlayFab::CloudScriptModels::LocationModel::__cordl_internal_set_Longitude(::System::Nullable_1<double_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Longitude = value;
}
inline void PlayFab::CloudScriptModels::LocationModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::LocationModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::CloudScriptModels::LocationModel* PlayFab::CloudScriptModels::LocationModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::CloudScriptModels::LocationModel*>());
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::LocationModel::LocationModel()   {
}
