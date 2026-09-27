#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UpdateSharedGroupDataRequest.hpp"
#include "PlayFab/ClientModels/zzzz__UserDataPermission_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UpdateSharedGroupDataRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UpdateSharedGroupDataRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UpdateSharedGroupDataRequest::*)()>(&::PlayFab::ClientModels::UpdateSharedGroupDataRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UpdateSharedGroupDataRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& PlayFab::ClientModels::UpdateSharedGroupDataRequest::__cordl_internal_get_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& PlayFab::ClientModels::UpdateSharedGroupDataRequest::__cordl_internal_get_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr void PlayFab::ClientModels::UpdateSharedGroupDataRequest::__cordl_internal_set_Data(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Data = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::UpdateSharedGroupDataRequest::__cordl_internal_get_KeysToRemove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeysToRemove;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::UpdateSharedGroupDataRequest::__cordl_internal_get_KeysToRemove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeysToRemove;
}
constexpr void PlayFab::ClientModels::UpdateSharedGroupDataRequest::__cordl_internal_set_KeysToRemove(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KeysToRemove = value;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission>& PlayFab::ClientModels::UpdateSharedGroupDataRequest::__cordl_internal_get_Permission()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Permission;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission> const& PlayFab::ClientModels::UpdateSharedGroupDataRequest::__cordl_internal_get_Permission() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Permission;
}
constexpr void PlayFab::ClientModels::UpdateSharedGroupDataRequest::__cordl_internal_set_Permission(::System::Nullable_1<::PlayFab::ClientModels::UserDataPermission>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Permission = value;
}
constexpr ::StringW& PlayFab::ClientModels::UpdateSharedGroupDataRequest::__cordl_internal_get_SharedGroupId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SharedGroupId;
}
constexpr ::StringW const& PlayFab::ClientModels::UpdateSharedGroupDataRequest::__cordl_internal_get_SharedGroupId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SharedGroupId;
}
constexpr void PlayFab::ClientModels::UpdateSharedGroupDataRequest::__cordl_internal_set_SharedGroupId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SharedGroupId = value;
}
inline void PlayFab::ClientModels::UpdateSharedGroupDataRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UpdateSharedGroupDataRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UpdateSharedGroupDataRequest* PlayFab::ClientModels::UpdateSharedGroupDataRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UpdateSharedGroupDataRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UpdateSharedGroupDataRequest::UpdateSharedGroupDataRequest()   {
}
