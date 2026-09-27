#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CoreCapacity.hpp"
#include "PlayFab/MultiplayerModels/zzzz__AzureVmFamily_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CoreCapacity_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::CoreCapacity._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::CoreCapacity::*)()>(&::PlayFab::MultiplayerModels::CoreCapacity::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CoreCapacity*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PlayFab::MultiplayerModels::CoreCapacity::__cordl_internal_get_Available()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Available;
}
constexpr int32_t const& PlayFab::MultiplayerModels::CoreCapacity::__cordl_internal_get_Available() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Available;
}
constexpr void PlayFab::MultiplayerModels::CoreCapacity::__cordl_internal_set_Available(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Available = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::CoreCapacity::__cordl_internal_get_Region()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::CoreCapacity::__cordl_internal_get_Region() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Region;
}
constexpr void PlayFab::MultiplayerModels::CoreCapacity::__cordl_internal_set_Region(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Region = value;
}
constexpr int32_t& PlayFab::MultiplayerModels::CoreCapacity::__cordl_internal_get_Total()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Total;
}
constexpr int32_t const& PlayFab::MultiplayerModels::CoreCapacity::__cordl_internal_get_Total() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Total;
}
constexpr void PlayFab::MultiplayerModels::CoreCapacity::__cordl_internal_set_Total(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Total = value;
}
constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmFamily>& PlayFab::MultiplayerModels::CoreCapacity::__cordl_internal_get_VmFamily()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VmFamily;
}
constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmFamily> const& PlayFab::MultiplayerModels::CoreCapacity::__cordl_internal_get_VmFamily() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VmFamily;
}
constexpr void PlayFab::MultiplayerModels::CoreCapacity::__cordl_internal_set_VmFamily(::System::Nullable_1<::PlayFab::MultiplayerModels::AzureVmFamily>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VmFamily = value;
}
inline void PlayFab::MultiplayerModels::CoreCapacity::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CoreCapacity*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::CoreCapacity* PlayFab::MultiplayerModels::CoreCapacity::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::CoreCapacity*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::CoreCapacity::CoreCapacity()   {
}
