#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/MatchmakingPlayerWithTeamAssignment.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__MatchmakingPlayerWithTeamAssignment_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__EntityKey_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__MatchmakingPlayerAttributes_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment::*)()>(&::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes*& PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment::__cordl_internal_get_Attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Attributes;
}
constexpr ::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes* const& PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment::__cordl_internal_get_Attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Attributes;
}
constexpr void PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment::__cordl_internal_set_Attributes(::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Attributes = value;
}
constexpr ::PlayFab::MultiplayerModels::EntityKey*& PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::MultiplayerModels::EntityKey* const& PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment::__cordl_internal_set_Entity(::PlayFab::MultiplayerModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment::__cordl_internal_get_TeamId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TeamId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment::__cordl_internal_get_TeamId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TeamId;
}
constexpr void PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment::__cordl_internal_set_TeamId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TeamId = value;
}
inline void PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment* PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment::MatchmakingPlayerWithTeamAssignment()   {
}
