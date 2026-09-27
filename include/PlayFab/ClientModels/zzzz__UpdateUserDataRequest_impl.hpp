#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UpdateUserDataRequest.hpp"
#include "PlayFab/ClientModels/zzzz__UserDataPermission_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UpdateUserDataRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UpdateUserDataRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UpdateUserDataRequest::*)()>(&::PlayFab::ClientModels::UpdateUserDataRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UpdateUserDataRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& PlayFab::ClientModels::UpdateUserDataRequest::__cordl_internal_get_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& PlayFab::ClientModels::UpdateUserDataRequest::__cordl_internal_get_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr void PlayFab::ClientModels::UpdateUserDataRequest::__cordl_internal_set_Data(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Data = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::UpdateUserDataRequest::__cordl_internal_get_KeysToRemove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeysToRemove;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::UpdateUserDataRequest::__cordl_internal_get_KeysToRemove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeysToRemove;
}
constexpr void PlayFab::ClientModels::UpdateUserDataRequest::__cordl_internal_set_KeysToRemove(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KeysToRemove = value;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission>& PlayFab::ClientModels::UpdateUserDataRequest::__cordl_internal_get_Permission()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Permission;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission> const& PlayFab::ClientModels::UpdateUserDataRequest::__cordl_internal_get_Permission() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Permission;
}
constexpr void PlayFab::ClientModels::UpdateUserDataRequest::__cordl_internal_set_Permission(::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Permission = value;
}
inline void PlayFab::ClientModels::UpdateUserDataRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UpdateUserDataRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UpdateUserDataRequest* PlayFab::ClientModels::UpdateUserDataRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UpdateUserDataRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UpdateUserDataRequest::UpdateUserDataRequest()   {
}
