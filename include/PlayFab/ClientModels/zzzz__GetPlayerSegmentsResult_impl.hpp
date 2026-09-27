#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerSegmentsResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayerSegmentsResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetSegmentResult_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPlayerSegmentsResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPlayerSegmentsResult::*)()>(&::PlayFab::ClientModels::GetPlayerSegmentsResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dcf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerSegmentsResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GetSegmentResult*>*& PlayFab::ClientModels::GetPlayerSegmentsResult::__cordl_internal_get_Segments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Segments;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GetSegmentResult*>* const& PlayFab::ClientModels::GetPlayerSegmentsResult::__cordl_internal_get_Segments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Segments;
}
constexpr void PlayFab::ClientModels::GetPlayerSegmentsResult::__cordl_internal_set_Segments(::System::Collections::Generic::List_1<::PlayFab::ClientModels::GetSegmentResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Segments = value;
}
inline void PlayFab::ClientModels::GetPlayerSegmentsResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerSegmentsResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPlayerSegmentsResult* PlayFab::ClientModels::GetPlayerSegmentsResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPlayerSegmentsResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPlayerSegmentsResult::GetPlayerSegmentsResult()   {
}
