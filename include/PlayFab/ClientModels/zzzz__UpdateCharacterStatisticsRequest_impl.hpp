#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UpdateCharacterStatisticsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UpdateCharacterStatisticsRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UpdateCharacterStatisticsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UpdateCharacterStatisticsRequest::*)()>(&::PlayFab::ClientModels::UpdateCharacterStatisticsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UpdateCharacterStatisticsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UpdateCharacterStatisticsRequest::__cordl_internal_get_CharacterId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr ::StringW const& PlayFab::ClientModels::UpdateCharacterStatisticsRequest::__cordl_internal_get_CharacterId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr void PlayFab::ClientModels::UpdateCharacterStatisticsRequest::__cordl_internal_set_CharacterId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterId = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& PlayFab::ClientModels::UpdateCharacterStatisticsRequest::__cordl_internal_get_CharacterStatistics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterStatistics;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& PlayFab::ClientModels::UpdateCharacterStatisticsRequest::__cordl_internal_get_CharacterStatistics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterStatistics;
}
constexpr void PlayFab::ClientModels::UpdateCharacterStatisticsRequest::__cordl_internal_set_CharacterStatistics(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterStatistics = value;
}
inline void PlayFab::ClientModels::UpdateCharacterStatisticsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UpdateCharacterStatisticsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UpdateCharacterStatisticsRequest* PlayFab::ClientModels::UpdateCharacterStatisticsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UpdateCharacterStatisticsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UpdateCharacterStatisticsRequest::UpdateCharacterStatisticsRequest()   {
}
