#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CatalogItemConsumableInfo.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__CatalogItemConsumableInfo_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::CatalogItemConsumableInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::CatalogItemConsumableInfo::*)()>(&::PlayFab::ClientModels::CatalogItemConsumableInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84daa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CatalogItemConsumableInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<uint32_t>& PlayFab::ClientModels::CatalogItemConsumableInfo::__cordl_internal_get_UsageCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UsageCount;
}
constexpr ::System::Nullable_1<uint32_t> const& PlayFab::ClientModels::CatalogItemConsumableInfo::__cordl_internal_get_UsageCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UsageCount;
}
constexpr void PlayFab::ClientModels::CatalogItemConsumableInfo::__cordl_internal_set_UsageCount(::System::Nullable_1<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UsageCount = value;
}
constexpr ::System::Nullable_1<uint32_t>& PlayFab::ClientModels::CatalogItemConsumableInfo::__cordl_internal_get_UsagePeriod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UsagePeriod;
}
constexpr ::System::Nullable_1<uint32_t> const& PlayFab::ClientModels::CatalogItemConsumableInfo::__cordl_internal_get_UsagePeriod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UsagePeriod;
}
constexpr void PlayFab::ClientModels::CatalogItemConsumableInfo::__cordl_internal_set_UsagePeriod(::System::Nullable_1<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UsagePeriod = value;
}
constexpr ::StringW& PlayFab::ClientModels::CatalogItemConsumableInfo::__cordl_internal_get_UsagePeriodGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UsagePeriodGroup;
}
constexpr ::StringW const& PlayFab::ClientModels::CatalogItemConsumableInfo::__cordl_internal_get_UsagePeriodGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UsagePeriodGroup;
}
constexpr void PlayFab::ClientModels::CatalogItemConsumableInfo::__cordl_internal_set_UsagePeriodGroup(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UsagePeriodGroup = value;
}
inline void PlayFab::ClientModels::CatalogItemConsumableInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CatalogItemConsumableInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::CatalogItemConsumableInfo* PlayFab::ClientModels::CatalogItemConsumableInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::CatalogItemConsumableInfo*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::CatalogItemConsumableInfo::CatalogItemConsumableInfo()   {
}
