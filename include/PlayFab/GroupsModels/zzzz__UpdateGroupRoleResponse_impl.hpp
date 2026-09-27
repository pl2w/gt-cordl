#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/UpdateGroupRoleResponse.hpp"
#include "PlayFab/GroupsModels/zzzz__OperationTypes_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__UpdateGroupRoleResponse_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::UpdateGroupRoleResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::UpdateGroupRoleResponse::*)()>(&::PlayFab::GroupsModels::UpdateGroupRoleResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::UpdateGroupRoleResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::GroupsModels::UpdateGroupRoleResponse::__cordl_internal_get_OperationReason()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationReason;
}
constexpr ::StringW const& PlayFab::GroupsModels::UpdateGroupRoleResponse::__cordl_internal_get_OperationReason() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationReason;
}
constexpr void PlayFab::GroupsModels::UpdateGroupRoleResponse::__cordl_internal_set_OperationReason(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OperationReason = value;
}
constexpr int32_t& PlayFab::GroupsModels::UpdateGroupRoleResponse::__cordl_internal_get_ProfileVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileVersion;
}
constexpr int32_t const& PlayFab::GroupsModels::UpdateGroupRoleResponse::__cordl_internal_get_ProfileVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProfileVersion;
}
constexpr void PlayFab::GroupsModels::UpdateGroupRoleResponse::__cordl_internal_set_ProfileVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProfileVersion = value;
}
constexpr ::System::Nullable_1<::PlayFab::GroupsModels::OperationTypes>& PlayFab::GroupsModels::UpdateGroupRoleResponse::__cordl_internal_get_SetResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetResult;
}
constexpr ::System::Nullable_1<::PlayFab::GroupsModels::OperationTypes> const& PlayFab::GroupsModels::UpdateGroupRoleResponse::__cordl_internal_get_SetResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetResult;
}
constexpr void PlayFab::GroupsModels::UpdateGroupRoleResponse::__cordl_internal_set_SetResult(::System::Nullable_1<::PlayFab::GroupsModels::OperationTypes>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SetResult = value;
}
inline void PlayFab::GroupsModels::UpdateGroupRoleResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::UpdateGroupRoleResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::UpdateGroupRoleResponse* PlayFab::GroupsModels::UpdateGroupRoleResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::UpdateGroupRoleResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::UpdateGroupRoleResponse::UpdateGroupRoleResponse()   {
}
