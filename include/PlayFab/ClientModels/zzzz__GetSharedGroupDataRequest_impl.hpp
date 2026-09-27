#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetSharedGroupDataRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetSharedGroupDataRequest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetSharedGroupDataRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetSharedGroupDataRequest::*)()>(&::PlayFab::ClientModels::GetSharedGroupDataRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84de18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetSharedGroupDataRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<bool>& PlayFab::ClientModels::GetSharedGroupDataRequest::__cordl_internal_get_GetMembers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetMembers;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ClientModels::GetSharedGroupDataRequest::__cordl_internal_get_GetMembers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetMembers;
}
constexpr void PlayFab::ClientModels::GetSharedGroupDataRequest::__cordl_internal_set_GetMembers(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GetMembers = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::GetSharedGroupDataRequest::__cordl_internal_get_Keys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Keys;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::GetSharedGroupDataRequest::__cordl_internal_get_Keys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Keys;
}
constexpr void PlayFab::ClientModels::GetSharedGroupDataRequest::__cordl_internal_set_Keys(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Keys = value;
}
constexpr ::StringW& PlayFab::ClientModels::GetSharedGroupDataRequest::__cordl_internal_get_SharedGroupId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SharedGroupId;
}
constexpr ::StringW const& PlayFab::ClientModels::GetSharedGroupDataRequest::__cordl_internal_get_SharedGroupId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SharedGroupId;
}
constexpr void PlayFab::ClientModels::GetSharedGroupDataRequest::__cordl_internal_set_SharedGroupId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SharedGroupId = value;
}
inline void PlayFab::ClientModels::GetSharedGroupDataRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetSharedGroupDataRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetSharedGroupDataRequest* PlayFab::ClientModels::GetSharedGroupDataRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetSharedGroupDataRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetSharedGroupDataRequest::GetSharedGroupDataRequest()   {
}
