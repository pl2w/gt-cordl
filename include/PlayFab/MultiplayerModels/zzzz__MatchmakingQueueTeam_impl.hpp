#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/MatchmakingQueueTeam.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__MatchmakingQueueTeam_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::MatchmakingQueueTeam._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::MatchmakingQueueTeam::*)()>(&::PlayFab::MultiplayerModels::MatchmakingQueueTeam::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::MatchmakingQueueTeam*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& PlayFab::MultiplayerModels::MatchmakingQueueTeam::__cordl_internal_get_MaxTeamSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxTeamSize;
}
constexpr uint32_t const& PlayFab::MultiplayerModels::MatchmakingQueueTeam::__cordl_internal_get_MaxTeamSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxTeamSize;
}
constexpr void PlayFab::MultiplayerModels::MatchmakingQueueTeam::__cordl_internal_set_MaxTeamSize(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxTeamSize = value;
}
constexpr uint32_t& PlayFab::MultiplayerModels::MatchmakingQueueTeam::__cordl_internal_get_MinTeamSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinTeamSize;
}
constexpr uint32_t const& PlayFab::MultiplayerModels::MatchmakingQueueTeam::__cordl_internal_get_MinTeamSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinTeamSize;
}
constexpr void PlayFab::MultiplayerModels::MatchmakingQueueTeam::__cordl_internal_set_MinTeamSize(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinTeamSize = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::MatchmakingQueueTeam::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::MatchmakingQueueTeam::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void PlayFab::MultiplayerModels::MatchmakingQueueTeam::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
inline void PlayFab::MultiplayerModels::MatchmakingQueueTeam::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::MatchmakingQueueTeam*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::MatchmakingQueueTeam* PlayFab::MultiplayerModels::MatchmakingQueueTeam::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::MatchmakingQueueTeam*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::MatchmakingQueueTeam::MatchmakingQueueTeam()   {
}
