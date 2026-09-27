#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ListUsersCharactersResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__ListUsersCharactersResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__CharacterResult_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::ListUsersCharactersResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::ListUsersCharactersResult::*)()>(&::PlayFab::ClientModels::ListUsersCharactersResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ListUsersCharactersResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterResult*>*& PlayFab::ClientModels::ListUsersCharactersResult::__cordl_internal_get_Characters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Characters;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterResult*>* const& PlayFab::ClientModels::ListUsersCharactersResult::__cordl_internal_get_Characters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Characters;
}
constexpr void PlayFab::ClientModels::ListUsersCharactersResult::__cordl_internal_set_Characters(::System::Collections::Generic::List_1<::PlayFab::ClientModels::CharacterResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Characters = value;
}
inline void PlayFab::ClientModels::ListUsersCharactersResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ListUsersCharactersResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::ListUsersCharactersResult* PlayFab::ClientModels::ListUsersCharactersResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::ListUsersCharactersResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::ListUsersCharactersResult::ListUsersCharactersResult()   {
}
