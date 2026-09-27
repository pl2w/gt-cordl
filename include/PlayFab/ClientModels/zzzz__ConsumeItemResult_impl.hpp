#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ConsumeItemResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__ConsumeItemResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::ConsumeItemResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::ConsumeItemResult::*)()>(&::PlayFab::ClientModels::ConsumeItemResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ConsumeItemResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::ConsumeItemResult::__cordl_internal_get_ItemInstanceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemInstanceId;
}
constexpr ::StringW const& PlayFab::ClientModels::ConsumeItemResult::__cordl_internal_get_ItemInstanceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemInstanceId;
}
constexpr void PlayFab::ClientModels::ConsumeItemResult::__cordl_internal_set_ItemInstanceId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ItemInstanceId = value;
}
constexpr int32_t& PlayFab::ClientModels::ConsumeItemResult::__cordl_internal_get_RemainingUses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RemainingUses;
}
constexpr int32_t const& PlayFab::ClientModels::ConsumeItemResult::__cordl_internal_get_RemainingUses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RemainingUses;
}
constexpr void PlayFab::ClientModels::ConsumeItemResult::__cordl_internal_set_RemainingUses(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RemainingUses = value;
}
inline void PlayFab::ClientModels::ConsumeItemResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ConsumeItemResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::ConsumeItemResult* PlayFab::ClientModels::ConsumeItemResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::ConsumeItemResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::ConsumeItemResult::ConsumeItemResult()   {
}
