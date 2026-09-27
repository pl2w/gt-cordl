#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/BuildSummary.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__BuildSummary_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__BuildRegion_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::BuildSummary._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::BuildSummary::*)()>(&::PlayFab::MultiplayerModels::BuildSummary::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8407d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::BuildSummary*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::BuildSummary::__cordl_internal_get_BuildId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::BuildSummary::__cordl_internal_get_BuildId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildId;
}
constexpr void PlayFab::MultiplayerModels::BuildSummary::__cordl_internal_set_BuildId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildId = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::BuildSummary::__cordl_internal_get_BuildName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildName;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::BuildSummary::__cordl_internal_get_BuildName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildName;
}
constexpr void PlayFab::MultiplayerModels::BuildSummary::__cordl_internal_set_BuildName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildName = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::MultiplayerModels::BuildSummary::__cordl_internal_get_CreationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreationTime;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::MultiplayerModels::BuildSummary::__cordl_internal_get_CreationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreationTime;
}
constexpr void PlayFab::MultiplayerModels::BuildSummary::__cordl_internal_set_CreationTime(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CreationTime = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& PlayFab::MultiplayerModels::BuildSummary::__cordl_internal_get_Metadata()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Metadata;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& PlayFab::MultiplayerModels::BuildSummary::__cordl_internal_get_Metadata() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Metadata;
}
constexpr void PlayFab::MultiplayerModels::BuildSummary::__cordl_internal_set_Metadata(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Metadata = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegion*>*& PlayFab::MultiplayerModels::BuildSummary::__cordl_internal_get_RegionConfigurations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RegionConfigurations;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegion*>* const& PlayFab::MultiplayerModels::BuildSummary::__cordl_internal_get_RegionConfigurations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RegionConfigurations;
}
constexpr void PlayFab::MultiplayerModels::BuildSummary::__cordl_internal_set_RegionConfigurations(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::BuildRegion*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RegionConfigurations = value;
}
inline void PlayFab::MultiplayerModels::BuildSummary::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::BuildSummary*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::BuildSummary* PlayFab::MultiplayerModels::BuildSummary::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::BuildSummary*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::BuildSummary::BuildSummary()   {
}
