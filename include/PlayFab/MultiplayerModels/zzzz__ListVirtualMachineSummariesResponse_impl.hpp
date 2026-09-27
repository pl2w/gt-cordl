#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListVirtualMachineSummariesResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ListVirtualMachineSummariesResponse_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__VirtualMachineSummary_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse::*)()>(&::PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse::__cordl_internal_get_PageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageSize;
}
constexpr int32_t const& PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse::__cordl_internal_get_PageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageSize;
}
constexpr void PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse::__cordl_internal_set_PageSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PageSize = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse::__cordl_internal_get_SkipToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipToken;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse::__cordl_internal_get_SkipToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipToken;
}
constexpr void PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse::__cordl_internal_set_SkipToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SkipToken = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::VirtualMachineSummary*>*& PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse::__cordl_internal_get_VirtualMachines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualMachines;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::VirtualMachineSummary*>* const& PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse::__cordl_internal_get_VirtualMachines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualMachines;
}
constexpr void PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse::__cordl_internal_set_VirtualMachines(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::VirtualMachineSummary*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VirtualMachines = value;
}
inline void PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse* PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::ListVirtualMachineSummariesResponse::ListVirtualMachineSummariesResponse()   {
}
