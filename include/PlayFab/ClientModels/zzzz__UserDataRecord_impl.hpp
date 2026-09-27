#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserDataRecord.hpp"
#include "PlayFab/ClientModels/zzzz__UserDataPermission_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UserDataRecord_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UserDataRecord._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UserDataRecord::*)()>(&::PlayFab::ClientModels::UserDataRecord::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserDataRecord*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& PlayFab::ClientModels::UserDataRecord::__cordl_internal_get_LastUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastUpdated;
}
constexpr ::System::DateTime const& PlayFab::ClientModels::UserDataRecord::__cordl_internal_get_LastUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastUpdated;
}
constexpr void PlayFab::ClientModels::UserDataRecord::__cordl_internal_set_LastUpdated(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastUpdated = value;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission>& PlayFab::ClientModels::UserDataRecord::__cordl_internal_get_Permission()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Permission;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission> const& PlayFab::ClientModels::UserDataRecord::__cordl_internal_get_Permission() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Permission;
}
constexpr void PlayFab::ClientModels::UserDataRecord::__cordl_internal_set_Permission(::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Permission = value;
}
constexpr ::StringW& PlayFab::ClientModels::UserDataRecord::__cordl_internal_get_Value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr ::StringW const& PlayFab::ClientModels::UserDataRecord::__cordl_internal_get_Value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr void PlayFab::ClientModels::UserDataRecord::__cordl_internal_set_Value(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Value = value;
}
inline void PlayFab::ClientModels::UserDataRecord::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserDataRecord*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UserDataRecord* PlayFab::ClientModels::UserDataRecord::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UserDataRecord*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UserDataRecord::UserDataRecord()   {
}
