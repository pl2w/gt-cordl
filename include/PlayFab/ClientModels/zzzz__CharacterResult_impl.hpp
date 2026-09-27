#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CharacterResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__CharacterResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::CharacterResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::CharacterResult::*)()>(&::PlayFab::ClientModels::CharacterResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CharacterResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::CharacterResult::__cordl_internal_get_CharacterId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr ::StringW const& PlayFab::ClientModels::CharacterResult::__cordl_internal_get_CharacterId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr void PlayFab::ClientModels::CharacterResult::__cordl_internal_set_CharacterId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterId = value;
}
constexpr ::StringW& PlayFab::ClientModels::CharacterResult::__cordl_internal_get_CharacterName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterName;
}
constexpr ::StringW const& PlayFab::ClientModels::CharacterResult::__cordl_internal_get_CharacterName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterName;
}
constexpr void PlayFab::ClientModels::CharacterResult::__cordl_internal_set_CharacterName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterName = value;
}
constexpr ::StringW& PlayFab::ClientModels::CharacterResult::__cordl_internal_get_CharacterType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterType;
}
constexpr ::StringW const& PlayFab::ClientModels::CharacterResult::__cordl_internal_get_CharacterType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterType;
}
constexpr void PlayFab::ClientModels::CharacterResult::__cordl_internal_set_CharacterType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterType = value;
}
inline void PlayFab::ClientModels::CharacterResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CharacterResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::CharacterResult* PlayFab::ClientModels::CharacterResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::CharacterResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::CharacterResult::CharacterResult()   {
}
