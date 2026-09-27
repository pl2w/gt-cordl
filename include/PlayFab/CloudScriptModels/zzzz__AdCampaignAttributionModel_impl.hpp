#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/AdCampaignAttributionModel.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "PlayFab/CloudScriptModels/zzzz__AdCampaignAttributionModel_def.hpp"
//  Writing Method size for method: ::PlayFab::CloudScriptModels::AdCampaignAttributionModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::CloudScriptModels::AdCampaignAttributionModel::*)()>(&::PlayFab::CloudScriptModels::AdCampaignAttributionModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::AdCampaignAttributionModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& PlayFab::CloudScriptModels::AdCampaignAttributionModel::__cordl_internal_get_AttributedAt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AttributedAt;
}
constexpr ::System::DateTime const& PlayFab::CloudScriptModels::AdCampaignAttributionModel::__cordl_internal_get_AttributedAt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AttributedAt;
}
constexpr void PlayFab::CloudScriptModels::AdCampaignAttributionModel::__cordl_internal_set_AttributedAt(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AttributedAt = value;
}
constexpr ::StringW& PlayFab::CloudScriptModels::AdCampaignAttributionModel::__cordl_internal_get_CampaignId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CampaignId;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::AdCampaignAttributionModel::__cordl_internal_get_CampaignId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CampaignId;
}
constexpr void PlayFab::CloudScriptModels::AdCampaignAttributionModel::__cordl_internal_set_CampaignId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CampaignId = value;
}
constexpr ::StringW& PlayFab::CloudScriptModels::AdCampaignAttributionModel::__cordl_internal_get_Platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Platform;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::AdCampaignAttributionModel::__cordl_internal_get_Platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Platform;
}
constexpr void PlayFab::CloudScriptModels::AdCampaignAttributionModel::__cordl_internal_set_Platform(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Platform = value;
}
inline void PlayFab::CloudScriptModels::AdCampaignAttributionModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::AdCampaignAttributionModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::CloudScriptModels::AdCampaignAttributionModel* PlayFab::CloudScriptModels::AdCampaignAttributionModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::CloudScriptModels::AdCampaignAttributionModel*>());
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::AdCampaignAttributionModel::AdCampaignAttributionModel()   {
}
