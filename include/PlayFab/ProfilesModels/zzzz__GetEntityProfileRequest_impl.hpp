#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/GetEntityProfileRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ProfilesModels/zzzz__GetEntityProfileRequest_def.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityKey_def.hpp"
//  Writing Method size for method: ::PlayFab::ProfilesModels::GetEntityProfileRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ProfilesModels::GetEntityProfileRequest::*)()>(&::PlayFab::ProfilesModels::GetEntityProfileRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::GetEntityProfileRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<bool>& PlayFab::ProfilesModels::GetEntityProfileRequest::__cordl_internal_get_DataAsObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataAsObject;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ProfilesModels::GetEntityProfileRequest::__cordl_internal_get_DataAsObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataAsObject;
}
constexpr void PlayFab::ProfilesModels::GetEntityProfileRequest::__cordl_internal_set_DataAsObject(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DataAsObject = value;
}
constexpr ::PlayFab::ProfilesModels::EntityKey*& PlayFab::ProfilesModels::GetEntityProfileRequest::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::ProfilesModels::EntityKey* const& PlayFab::ProfilesModels::GetEntityProfileRequest::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::ProfilesModels::GetEntityProfileRequest::__cordl_internal_set_Entity(::PlayFab::ProfilesModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
inline void PlayFab::ProfilesModels::GetEntityProfileRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::GetEntityProfileRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ProfilesModels::GetEntityProfileRequest* PlayFab::ProfilesModels::GetEntityProfileRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ProfilesModels::GetEntityProfileRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ProfilesModels::GetEntityProfileRequest::GetEntityProfileRequest()   {
}
