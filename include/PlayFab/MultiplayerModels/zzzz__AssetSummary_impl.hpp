#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/AssetSummary.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__AssetSummary_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::AssetSummary._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::AssetSummary::*)()>(&::PlayFab::MultiplayerModels::AssetSummary::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8407a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::AssetSummary*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::AssetSummary::__cordl_internal_get_FileName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileName;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::AssetSummary::__cordl_internal_get_FileName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileName;
}
constexpr void PlayFab::MultiplayerModels::AssetSummary::__cordl_internal_set_FileName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FileName = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& PlayFab::MultiplayerModels::AssetSummary::__cordl_internal_get_Metadata()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Metadata;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& PlayFab::MultiplayerModels::AssetSummary::__cordl_internal_get_Metadata() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Metadata;
}
constexpr void PlayFab::MultiplayerModels::AssetSummary::__cordl_internal_set_Metadata(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Metadata = value;
}
inline void PlayFab::MultiplayerModels::AssetSummary::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::AssetSummary*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::AssetSummary* PlayFab::MultiplayerModels::AssetSummary::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::AssetSummary*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::AssetSummary::AssetSummary()   {
}
