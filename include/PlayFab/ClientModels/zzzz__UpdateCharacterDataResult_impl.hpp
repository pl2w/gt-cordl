#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UpdateCharacterDataResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UpdateCharacterDataResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UpdateCharacterDataResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UpdateCharacterDataResult::*)()>(&::PlayFab::ClientModels::UpdateCharacterDataResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UpdateCharacterDataResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& PlayFab::ClientModels::UpdateCharacterDataResult::__cordl_internal_get_DataVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataVersion;
}
constexpr uint32_t const& PlayFab::ClientModels::UpdateCharacterDataResult::__cordl_internal_get_DataVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataVersion;
}
constexpr void PlayFab::ClientModels::UpdateCharacterDataResult::__cordl_internal_set_DataVersion(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DataVersion = value;
}
inline void PlayFab::ClientModels::UpdateCharacterDataResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UpdateCharacterDataResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UpdateCharacterDataResult* PlayFab::ClientModels::UpdateCharacterDataResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UpdateCharacterDataResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UpdateCharacterDataResult::UpdateCharacterDataResult()   {
}
