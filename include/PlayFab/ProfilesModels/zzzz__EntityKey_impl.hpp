#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/EntityKey.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityKey_def.hpp"
//  Writing Method size for method: ::PlayFab::ProfilesModels::EntityKey._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ProfilesModels::EntityKey::*)()>(&::PlayFab::ProfilesModels::EntityKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8406f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::EntityKey*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ProfilesModels::EntityKey::__cordl_internal_get_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr ::StringW const& PlayFab::ProfilesModels::EntityKey::__cordl_internal_get_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr void PlayFab::ProfilesModels::EntityKey::__cordl_internal_set_Id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Id = value;
}
constexpr ::StringW& PlayFab::ProfilesModels::EntityKey::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::StringW const& PlayFab::ProfilesModels::EntityKey::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void PlayFab::ProfilesModels::EntityKey::__cordl_internal_set_Type(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
inline void PlayFab::ProfilesModels::EntityKey::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::EntityKey*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ProfilesModels::EntityKey* PlayFab::ProfilesModels::EntityKey::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ProfilesModels::EntityKey*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ProfilesModels::EntityKey::EntityKey()   {
}
