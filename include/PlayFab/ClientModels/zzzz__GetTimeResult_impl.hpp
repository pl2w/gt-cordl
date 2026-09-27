#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetTimeResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetTimeResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetTimeResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetTimeResult::*)()>(&::PlayFab::ClientModels::GetTimeResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84de40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetTimeResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& PlayFab::ClientModels::GetTimeResult::__cordl_internal_get_Time()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Time;
}
constexpr ::System::DateTime const& PlayFab::ClientModels::GetTimeResult::__cordl_internal_get_Time() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Time;
}
constexpr void PlayFab::ClientModels::GetTimeResult::__cordl_internal_set_Time(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Time = value;
}
inline void PlayFab::ClientModels::GetTimeResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetTimeResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetTimeResult* PlayFab::ClientModels::GetTimeResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetTimeResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetTimeResult::GetTimeResult()   {
}
