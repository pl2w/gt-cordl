#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/GroupRole.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/GroupsModels/zzzz__GroupRole_def.hpp"
//  Writing Method size for method: ::PlayFab::GroupsModels::GroupRole._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::GroupsModels::GroupRole::*)()>(&::PlayFab::GroupsModels::GroupRole::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::GroupRole*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::GroupsModels::GroupRole::__cordl_internal_get_RoleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleId;
}
constexpr ::StringW const& PlayFab::GroupsModels::GroupRole::__cordl_internal_get_RoleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleId;
}
constexpr void PlayFab::GroupsModels::GroupRole::__cordl_internal_set_RoleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoleId = value;
}
constexpr ::StringW& PlayFab::GroupsModels::GroupRole::__cordl_internal_get_RoleName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleName;
}
constexpr ::StringW const& PlayFab::GroupsModels::GroupRole::__cordl_internal_get_RoleName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoleName;
}
constexpr void PlayFab::GroupsModels::GroupRole::__cordl_internal_set_RoleName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoleName = value;
}
inline void PlayFab::GroupsModels::GroupRole::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::GroupsModels::GroupRole*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::GroupsModels::GroupRole* PlayFab::GroupsModels::GroupRole::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::GroupsModels::GroupRole*>());
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::GroupRole::GroupRole()   {
}
