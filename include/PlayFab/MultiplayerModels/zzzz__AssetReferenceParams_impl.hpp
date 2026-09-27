#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/AssetReferenceParams.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__AssetReferenceParams_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::AssetReferenceParams._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::AssetReferenceParams::*)()>(&::PlayFab::MultiplayerModels::AssetReferenceParams::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8407a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::AssetReferenceParams*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::AssetReferenceParams::__cordl_internal_get_FileName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileName;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::AssetReferenceParams::__cordl_internal_get_FileName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileName;
}
constexpr void PlayFab::MultiplayerModels::AssetReferenceParams::__cordl_internal_set_FileName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FileName = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::AssetReferenceParams::__cordl_internal_get_MountPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MountPath;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::AssetReferenceParams::__cordl_internal_get_MountPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MountPath;
}
constexpr void PlayFab::MultiplayerModels::AssetReferenceParams::__cordl_internal_set_MountPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MountPath = value;
}
inline void PlayFab::MultiplayerModels::AssetReferenceParams::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::AssetReferenceParams*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::AssetReferenceParams* PlayFab::MultiplayerModels::AssetReferenceParams::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::AssetReferenceParams*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::AssetReferenceParams::AssetReferenceParams()   {
}
