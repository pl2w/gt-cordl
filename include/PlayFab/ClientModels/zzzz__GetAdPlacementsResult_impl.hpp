#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetAdPlacementsResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetAdPlacementsResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__AdPlacementDetails_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetAdPlacementsResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetAdPlacementsResult::*)()>(&::PlayFab::ClientModels::GetAdPlacementsResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetAdPlacementsResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::AdPlacementDetails*>*& PlayFab::ClientModels::GetAdPlacementsResult::__cordl_internal_get_AdPlacements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdPlacements;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::AdPlacementDetails*>* const& PlayFab::ClientModels::GetAdPlacementsResult::__cordl_internal_get_AdPlacements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AdPlacements;
}
constexpr void PlayFab::ClientModels::GetAdPlacementsResult::__cordl_internal_set_AdPlacements(::System::Collections::Generic::List_1<::PlayFab::ClientModels::AdPlacementDetails*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AdPlacements = value;
}
inline void PlayFab::ClientModels::GetAdPlacementsResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetAdPlacementsResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetAdPlacementsResult* PlayFab::ClientModels::GetAdPlacementsResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetAdPlacementsResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetAdPlacementsResult::GetAdPlacementsResult()   {
}
