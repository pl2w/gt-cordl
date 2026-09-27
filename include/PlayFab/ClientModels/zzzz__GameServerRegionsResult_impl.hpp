#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GameServerRegionsResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GameServerRegionsResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__RegionInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GameServerRegionsResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GameServerRegionsResult::*)()>(&::PlayFab::ClientModels::GameServerRegionsResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GameServerRegionsResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::RegionInfo*>*& PlayFab::ClientModels::GameServerRegionsResult::__cordl_internal_get_Regions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Regions;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::RegionInfo*>* const& PlayFab::ClientModels::GameServerRegionsResult::__cordl_internal_get_Regions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Regions;
}
constexpr void PlayFab::ClientModels::GameServerRegionsResult::__cordl_internal_set_Regions(::System::Collections::Generic::List_1<::PlayFab::ClientModels::RegionInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Regions = value;
}
inline void PlayFab::ClientModels::GameServerRegionsResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GameServerRegionsResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GameServerRegionsResult* PlayFab::ClientModels::GameServerRegionsResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GameServerRegionsResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GameServerRegionsResult::GameServerRegionsResult()   {
}
