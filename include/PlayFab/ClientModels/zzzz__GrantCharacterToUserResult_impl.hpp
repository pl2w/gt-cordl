#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GrantCharacterToUserResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GrantCharacterToUserResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GrantCharacterToUserResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GrantCharacterToUserResult::*)()>(&::PlayFab::ClientModels::GrantCharacterToUserResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GrantCharacterToUserResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GrantCharacterToUserResult::__cordl_internal_get_CharacterId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr ::StringW const& PlayFab::ClientModels::GrantCharacterToUserResult::__cordl_internal_get_CharacterId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr void PlayFab::ClientModels::GrantCharacterToUserResult::__cordl_internal_set_CharacterId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterId = value;
}
constexpr ::StringW& PlayFab::ClientModels::GrantCharacterToUserResult::__cordl_internal_get_CharacterType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterType;
}
constexpr ::StringW const& PlayFab::ClientModels::GrantCharacterToUserResult::__cordl_internal_get_CharacterType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterType;
}
constexpr void PlayFab::ClientModels::GrantCharacterToUserResult::__cordl_internal_set_CharacterType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterType = value;
}
constexpr bool& PlayFab::ClientModels::GrantCharacterToUserResult::__cordl_internal_get_Result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Result;
}
constexpr bool const& PlayFab::ClientModels::GrantCharacterToUserResult::__cordl_internal_get_Result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Result;
}
constexpr void PlayFab::ClientModels::GrantCharacterToUserResult::__cordl_internal_set_Result(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Result = value;
}
inline void PlayFab::ClientModels::GrantCharacterToUserResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GrantCharacterToUserResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GrantCharacterToUserResult* PlayFab::ClientModels::GrantCharacterToUserResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GrantCharacterToUserResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GrantCharacterToUserResult::GrantCharacterToUserResult()   {
}
