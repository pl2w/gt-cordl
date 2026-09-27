#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/SharedGroupDataRecord.hpp"
#include "PlayFab/ClientModels/zzzz__UserDataPermission_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__SharedGroupDataRecord_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::SharedGroupDataRecord._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::SharedGroupDataRecord::*)()>(&::PlayFab::ClientModels::SharedGroupDataRecord::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::SharedGroupDataRecord*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& PlayFab::ClientModels::SharedGroupDataRecord::__cordl_internal_get_LastUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastUpdated;
}
constexpr ::System::DateTime const& PlayFab::ClientModels::SharedGroupDataRecord::__cordl_internal_get_LastUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastUpdated;
}
constexpr void PlayFab::ClientModels::SharedGroupDataRecord::__cordl_internal_set_LastUpdated(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastUpdated = value;
}
constexpr ::StringW& PlayFab::ClientModels::SharedGroupDataRecord::__cordl_internal_get_LastUpdatedBy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastUpdatedBy;
}
constexpr ::StringW const& PlayFab::ClientModels::SharedGroupDataRecord::__cordl_internal_get_LastUpdatedBy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastUpdatedBy;
}
constexpr void PlayFab::ClientModels::SharedGroupDataRecord::__cordl_internal_set_LastUpdatedBy(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastUpdatedBy = value;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission>& PlayFab::ClientModels::SharedGroupDataRecord::__cordl_internal_get_Permission()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Permission;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission> const& PlayFab::ClientModels::SharedGroupDataRecord::__cordl_internal_get_Permission() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Permission;
}
constexpr void PlayFab::ClientModels::SharedGroupDataRecord::__cordl_internal_set_Permission(::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Permission = value;
}
constexpr ::StringW& PlayFab::ClientModels::SharedGroupDataRecord::__cordl_internal_get_Value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr ::StringW const& PlayFab::ClientModels::SharedGroupDataRecord::__cordl_internal_get_Value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr void PlayFab::ClientModels::SharedGroupDataRecord::__cordl_internal_set_Value(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Value = value;
}
inline void PlayFab::ClientModels::SharedGroupDataRecord::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::SharedGroupDataRecord*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::SharedGroupDataRecord* PlayFab::ClientModels::SharedGroupDataRecord::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::SharedGroupDataRecord*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::SharedGroupDataRecord::SharedGroupDataRecord()   {
}
