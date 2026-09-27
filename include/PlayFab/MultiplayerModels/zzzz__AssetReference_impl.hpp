#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/AssetReference.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__AssetReference_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::AssetReference._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::AssetReference::*)()>(&::PlayFab::MultiplayerModels::AssetReference::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::AssetReference*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::AssetReference::__cordl_internal_get_FileName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileName;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::AssetReference::__cordl_internal_get_FileName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileName;
}
constexpr void PlayFab::MultiplayerModels::AssetReference::__cordl_internal_set_FileName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FileName = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::AssetReference::__cordl_internal_get_MountPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MountPath;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::AssetReference::__cordl_internal_get_MountPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MountPath;
}
constexpr void PlayFab::MultiplayerModels::AssetReference::__cordl_internal_set_MountPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MountPath = value;
}
inline void PlayFab::MultiplayerModels::AssetReference::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::AssetReference*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::AssetReference* PlayFab::MultiplayerModels::AssetReference::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::AssetReference*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::AssetReference::AssetReference()   {
}
