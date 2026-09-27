#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/EntityStatisticValue.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityStatisticValue_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityStatisticChildValue_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::PlayFab::ProfilesModels::EntityStatisticValue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ProfilesModels::EntityStatisticValue::*)()>(&::PlayFab::ProfilesModels::EntityStatisticValue::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::EntityStatisticValue*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityStatisticChildValue*>*& PlayFab::ProfilesModels::EntityStatisticValue::__cordl_internal_get_ChildStatistics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChildStatistics;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityStatisticChildValue*>* const& PlayFab::ProfilesModels::EntityStatisticValue::__cordl_internal_get_ChildStatistics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChildStatistics;
}
constexpr void PlayFab::ProfilesModels::EntityStatisticValue::__cordl_internal_set_ChildStatistics(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ProfilesModels::EntityStatisticChildValue*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ChildStatistics = value;
}
constexpr ::StringW& PlayFab::ProfilesModels::EntityStatisticValue::__cordl_internal_get_Metadata()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Metadata;
}
constexpr ::StringW const& PlayFab::ProfilesModels::EntityStatisticValue::__cordl_internal_get_Metadata() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Metadata;
}
constexpr void PlayFab::ProfilesModels::EntityStatisticValue::__cordl_internal_set_Metadata(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Metadata = value;
}
constexpr ::StringW& PlayFab::ProfilesModels::EntityStatisticValue::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& PlayFab::ProfilesModels::EntityStatisticValue::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void PlayFab::ProfilesModels::EntityStatisticValue::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr ::System::Nullable_1<int32_t>& PlayFab::ProfilesModels::EntityStatisticValue::__cordl_internal_get_Value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::ProfilesModels::EntityStatisticValue::__cordl_internal_get_Value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr void PlayFab::ProfilesModels::EntityStatisticValue::__cordl_internal_set_Value(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Value = value;
}
constexpr int32_t& PlayFab::ProfilesModels::EntityStatisticValue::__cordl_internal_get_Version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr int32_t const& PlayFab::ProfilesModels::EntityStatisticValue::__cordl_internal_get_Version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr void PlayFab::ProfilesModels::EntityStatisticValue::__cordl_internal_set_Version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Version = value;
}
inline void PlayFab::ProfilesModels::EntityStatisticValue::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::EntityStatisticValue*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ProfilesModels::EntityStatisticValue* PlayFab::ProfilesModels::EntityStatisticValue::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ProfilesModels::EntityStatisticValue*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ProfilesModels::EntityStatisticValue::EntityStatisticValue()   {
}
