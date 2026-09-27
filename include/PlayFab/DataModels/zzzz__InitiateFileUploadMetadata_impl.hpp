#pragma once
// IWYU pragma private; include "PlayFab/DataModels/InitiateFileUploadMetadata.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/DataModels/zzzz__InitiateFileUploadMetadata_def.hpp"
//  Writing Method size for method: ::PlayFab::DataModels::InitiateFileUploadMetadata._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::DataModels::InitiateFileUploadMetadata::*)()>(&::PlayFab::DataModels::InitiateFileUploadMetadata::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::InitiateFileUploadMetadata*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::DataModels::InitiateFileUploadMetadata::__cordl_internal_get_FileName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileName;
}
constexpr ::StringW const& PlayFab::DataModels::InitiateFileUploadMetadata::__cordl_internal_get_FileName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileName;
}
constexpr void PlayFab::DataModels::InitiateFileUploadMetadata::__cordl_internal_set_FileName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FileName = value;
}
constexpr ::StringW& PlayFab::DataModels::InitiateFileUploadMetadata::__cordl_internal_get_UploadUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UploadUrl;
}
constexpr ::StringW const& PlayFab::DataModels::InitiateFileUploadMetadata::__cordl_internal_get_UploadUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UploadUrl;
}
constexpr void PlayFab::DataModels::InitiateFileUploadMetadata::__cordl_internal_set_UploadUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UploadUrl = value;
}
inline void PlayFab::DataModels::InitiateFileUploadMetadata::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::InitiateFileUploadMetadata*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::DataModels::InitiateFileUploadMetadata* PlayFab::DataModels::InitiateFileUploadMetadata::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::DataModels::InitiateFileUploadMetadata*>());
}
// Ctor Parameters []
constexpr ::PlayFab::DataModels::InitiateFileUploadMetadata::InitiateFileUploadMetadata()   {
}
