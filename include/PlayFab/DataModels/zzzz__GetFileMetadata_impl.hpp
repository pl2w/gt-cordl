#pragma once
// IWYU pragma private; include "PlayFab/DataModels/GetFileMetadata.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "PlayFab/DataModels/zzzz__GetFileMetadata_def.hpp"
//  Writing Method size for method: ::PlayFab::DataModels::GetFileMetadata._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::DataModels::GetFileMetadata::*)()>(&::PlayFab::DataModels::GetFileMetadata::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::GetFileMetadata*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::DataModels::GetFileMetadata::__cordl_internal_get_Checksum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Checksum;
}
constexpr ::StringW const& PlayFab::DataModels::GetFileMetadata::__cordl_internal_get_Checksum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Checksum;
}
constexpr void PlayFab::DataModels::GetFileMetadata::__cordl_internal_set_Checksum(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Checksum = value;
}
constexpr ::StringW& PlayFab::DataModels::GetFileMetadata::__cordl_internal_get_DownloadUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DownloadUrl;
}
constexpr ::StringW const& PlayFab::DataModels::GetFileMetadata::__cordl_internal_get_DownloadUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DownloadUrl;
}
constexpr void PlayFab::DataModels::GetFileMetadata::__cordl_internal_set_DownloadUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DownloadUrl = value;
}
constexpr ::StringW& PlayFab::DataModels::GetFileMetadata::__cordl_internal_get_FileName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileName;
}
constexpr ::StringW const& PlayFab::DataModels::GetFileMetadata::__cordl_internal_get_FileName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileName;
}
constexpr void PlayFab::DataModels::GetFileMetadata::__cordl_internal_set_FileName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FileName = value;
}
constexpr ::System::DateTime& PlayFab::DataModels::GetFileMetadata::__cordl_internal_get_LastModified()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastModified;
}
constexpr ::System::DateTime const& PlayFab::DataModels::GetFileMetadata::__cordl_internal_get_LastModified() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastModified;
}
constexpr void PlayFab::DataModels::GetFileMetadata::__cordl_internal_set_LastModified(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastModified = value;
}
constexpr int32_t& PlayFab::DataModels::GetFileMetadata::__cordl_internal_get_Size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Size;
}
constexpr int32_t const& PlayFab::DataModels::GetFileMetadata::__cordl_internal_get_Size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Size;
}
constexpr void PlayFab::DataModels::GetFileMetadata::__cordl_internal_set_Size(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Size = value;
}
inline void PlayFab::DataModels::GetFileMetadata::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::DataModels::GetFileMetadata*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::DataModels::GetFileMetadata* PlayFab::DataModels::GetFileMetadata::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::DataModels::GetFileMetadata*>());
}
// Ctor Parameters []
constexpr ::PlayFab::DataModels::GetFileMetadata::GetFileMetadata()   {
}
