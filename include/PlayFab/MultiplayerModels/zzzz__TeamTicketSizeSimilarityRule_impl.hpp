#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/TeamTicketSizeSimilarityRule.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__TeamTicketSizeSimilarityRule_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule::*)()>(&::PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr ::System::Nullable_1<uint32_t>& PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule::__cordl_internal_get_SecondsUntilOptional()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsUntilOptional;
}
constexpr ::System::Nullable_1<uint32_t> const& PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule::__cordl_internal_get_SecondsUntilOptional() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsUntilOptional;
}
constexpr void PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule::__cordl_internal_set_SecondsUntilOptional(::System::Nullable_1<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondsUntilOptional = value;
}
inline void PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule* PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule::TeamTicketSizeSimilarityRule()   {
}
