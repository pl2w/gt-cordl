#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/GetEntityProfilesRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ProfilesModels/zzzz__GetEntityProfilesRequest_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityKey_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ProfilesModels::GetEntityProfilesRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ProfilesModels::GetEntityProfilesRequest::*)()>(&::PlayFab::ProfilesModels::GetEntityProfilesRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::GetEntityProfilesRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<bool>& PlayFab::ProfilesModels::GetEntityProfilesRequest::__cordl_internal_get_DataAsObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataAsObject;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ProfilesModels::GetEntityProfilesRequest::__cordl_internal_get_DataAsObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataAsObject;
}
constexpr void PlayFab::ProfilesModels::GetEntityProfilesRequest::__cordl_internal_set_DataAsObject(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DataAsObject = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityKey*>*& PlayFab::ProfilesModels::GetEntityProfilesRequest::__cordl_internal_get_Entities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entities;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityKey*>* const& PlayFab::ProfilesModels::GetEntityProfilesRequest::__cordl_internal_get_Entities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entities;
}
constexpr void PlayFab::ProfilesModels::GetEntityProfilesRequest::__cordl_internal_set_Entities(::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityKey*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entities = value;
}
inline void PlayFab::ProfilesModels::GetEntityProfilesRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::GetEntityProfilesRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ProfilesModels::GetEntityProfilesRequest* PlayFab::ProfilesModels::GetEntityProfilesRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ProfilesModels::GetEntityProfilesRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ProfilesModels::GetEntityProfilesRequest::GetEntityProfilesRequest()   {
}
