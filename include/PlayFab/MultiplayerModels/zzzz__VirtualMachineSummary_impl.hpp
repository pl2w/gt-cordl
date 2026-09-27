#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/VirtualMachineSummary.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__VirtualMachineSummary_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::VirtualMachineSummary._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::VirtualMachineSummary::*)()>(&::PlayFab::MultiplayerModels::VirtualMachineSummary::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::VirtualMachineSummary*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::VirtualMachineSummary::__cordl_internal_get_HealthStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HealthStatus;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::VirtualMachineSummary::__cordl_internal_get_HealthStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HealthStatus;
}
constexpr void PlayFab::MultiplayerModels::VirtualMachineSummary::__cordl_internal_set_HealthStatus(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HealthStatus = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::VirtualMachineSummary::__cordl_internal_get_State()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___State;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::VirtualMachineSummary::__cordl_internal_get_State() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___State;
}
constexpr void PlayFab::MultiplayerModels::VirtualMachineSummary::__cordl_internal_set_State(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___State = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::VirtualMachineSummary::__cordl_internal_get_VmId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VmId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::VirtualMachineSummary::__cordl_internal_get_VmId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VmId;
}
constexpr void PlayFab::MultiplayerModels::VirtualMachineSummary::__cordl_internal_set_VmId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VmId = value;
}
inline void PlayFab::MultiplayerModels::VirtualMachineSummary::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::VirtualMachineSummary*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::VirtualMachineSummary* PlayFab::MultiplayerModels::VirtualMachineSummary::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::VirtualMachineSummary*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::VirtualMachineSummary::VirtualMachineSummary()   {
}
