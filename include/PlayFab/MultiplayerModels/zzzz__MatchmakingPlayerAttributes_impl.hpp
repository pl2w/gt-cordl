#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/MatchmakingPlayerAttributes.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__MatchmakingPlayerAttributes_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes::*)()>(&::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& PlayFab::MultiplayerModels::MatchmakingPlayerAttributes::__cordl_internal_get_DataObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataObject;
}
constexpr ::System::Object* const& PlayFab::MultiplayerModels::MatchmakingPlayerAttributes::__cordl_internal_get_DataObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataObject;
}
constexpr void PlayFab::MultiplayerModels::MatchmakingPlayerAttributes::__cordl_internal_set_DataObject(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DataObject = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::MatchmakingPlayerAttributes::__cordl_internal_get_EscapedDataObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EscapedDataObject;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::MatchmakingPlayerAttributes::__cordl_internal_get_EscapedDataObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EscapedDataObject;
}
constexpr void PlayFab::MultiplayerModels::MatchmakingPlayerAttributes::__cordl_internal_set_EscapedDataObject(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EscapedDataObject = value;
}
inline void PlayFab::MultiplayerModels::MatchmakingPlayerAttributes::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes* PlayFab::MultiplayerModels::MatchmakingPlayerAttributes::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes::MatchmakingPlayerAttributes()   {
}
