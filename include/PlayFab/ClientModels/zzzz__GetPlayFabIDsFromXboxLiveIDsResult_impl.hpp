#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayFabIDsFromXboxLiveIDsResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayFabIDsFromXboxLiveIDsResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__XboxLiveAccountPlayFabIdPair_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsResult::*)()>(&::PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dde8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::XboxLiveAccountPlayFabIdPair*>*& PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsResult::__cordl_internal_get_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::XboxLiveAccountPlayFabIdPair*>* const& PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsResult::__cordl_internal_get_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr void PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsResult::__cordl_internal_set_Data(::System::Collections::Generic::List_1<::PlayFab::ClientModels::XboxLiveAccountPlayFabIdPair*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Data = value;
}
inline void PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsResult* PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsResult::GetPlayFabIDsFromXboxLiveIDsResult()   {
}
