#pragma once
// IWYU pragma private; include "GorillaNetworking/FeatureFlagData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaNetworking/zzzz__FeatureFlagData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::FeatureFlagData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::FeatureFlagData::*)()>(&::GorillaNetworking::FeatureFlagData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c90440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::FeatureFlagData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::FeatureFlagData::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& GorillaNetworking::FeatureFlagData::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void GorillaNetworking::FeatureFlagData::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr int32_t& GorillaNetworking::FeatureFlagData::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr int32_t const& GorillaNetworking::FeatureFlagData::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void GorillaNetworking::FeatureFlagData::__cordl_internal_set_value(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
constexpr ::StringW& GorillaNetworking::FeatureFlagData::__cordl_internal_get_valueType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valueType;
}
constexpr ::StringW const& GorillaNetworking::FeatureFlagData::__cordl_internal_get_valueType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valueType;
}
constexpr void GorillaNetworking::FeatureFlagData::__cordl_internal_set_valueType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___valueType = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GorillaNetworking::FeatureFlagData::__cordl_internal_get_alwaysOnForUsers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysOnForUsers;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GorillaNetworking::FeatureFlagData::__cordl_internal_get_alwaysOnForUsers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysOnForUsers;
}
constexpr void GorillaNetworking::FeatureFlagData::__cordl_internal_set_alwaysOnForUsers(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alwaysOnForUsers = value;
}
inline void GorillaNetworking::FeatureFlagData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::FeatureFlagData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::FeatureFlagData* GorillaNetworking::FeatureFlagData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::FeatureFlagData*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::FeatureFlagData::FeatureFlagData()   {
}
