#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/EntityStatisticChildValue.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityStatisticChildValue_def.hpp"
//  Writing Method size for method: ::PlayFab::ProfilesModels::EntityStatisticChildValue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ProfilesModels::EntityStatisticChildValue::*)()>(&::PlayFab::ProfilesModels::EntityStatisticChildValue::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::EntityStatisticChildValue*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ProfilesModels::EntityStatisticChildValue::__cordl_internal_get_ChildName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChildName;
}
constexpr ::StringW const& PlayFab::ProfilesModels::EntityStatisticChildValue::__cordl_internal_get_ChildName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChildName;
}
constexpr void PlayFab::ProfilesModels::EntityStatisticChildValue::__cordl_internal_set_ChildName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ChildName = value;
}
constexpr ::StringW& PlayFab::ProfilesModels::EntityStatisticChildValue::__cordl_internal_get_Metadata()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Metadata;
}
constexpr ::StringW const& PlayFab::ProfilesModels::EntityStatisticChildValue::__cordl_internal_get_Metadata() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Metadata;
}
constexpr void PlayFab::ProfilesModels::EntityStatisticChildValue::__cordl_internal_set_Metadata(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Metadata = value;
}
constexpr int32_t& PlayFab::ProfilesModels::EntityStatisticChildValue::__cordl_internal_get_Value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr int32_t const& PlayFab::ProfilesModels::EntityStatisticChildValue::__cordl_internal_get_Value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr void PlayFab::ProfilesModels::EntityStatisticChildValue::__cordl_internal_set_Value(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Value = value;
}
inline void PlayFab::ProfilesModels::EntityStatisticChildValue::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::EntityStatisticChildValue*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ProfilesModels::EntityStatisticChildValue* PlayFab::ProfilesModels::EntityStatisticChildValue::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ProfilesModels::EntityStatisticChildValue*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ProfilesModels::EntityStatisticChildValue::EntityStatisticChildValue()   {
}
