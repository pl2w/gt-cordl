#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/EntityProfileFileMetadata.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityProfileFileMetadata_def.hpp"
//  Writing Method size for method: ::PlayFab::ProfilesModels::EntityProfileFileMetadata._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ProfilesModels::EntityProfileFileMetadata::*)()>(&::PlayFab::ProfilesModels::EntityProfileFileMetadata::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::EntityProfileFileMetadata*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ProfilesModels::EntityProfileFileMetadata::__cordl_internal_get_Checksum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Checksum;
}
constexpr ::StringW const& PlayFab::ProfilesModels::EntityProfileFileMetadata::__cordl_internal_get_Checksum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Checksum;
}
constexpr void PlayFab::ProfilesModels::EntityProfileFileMetadata::__cordl_internal_set_Checksum(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Checksum = value;
}
constexpr ::StringW& PlayFab::ProfilesModels::EntityProfileFileMetadata::__cordl_internal_get_FileName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileName;
}
constexpr ::StringW const& PlayFab::ProfilesModels::EntityProfileFileMetadata::__cordl_internal_get_FileName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileName;
}
constexpr void PlayFab::ProfilesModels::EntityProfileFileMetadata::__cordl_internal_set_FileName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FileName = value;
}
constexpr ::System::DateTime& PlayFab::ProfilesModels::EntityProfileFileMetadata::__cordl_internal_get_LastModified()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastModified;
}
constexpr ::System::DateTime const& PlayFab::ProfilesModels::EntityProfileFileMetadata::__cordl_internal_get_LastModified() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastModified;
}
constexpr void PlayFab::ProfilesModels::EntityProfileFileMetadata::__cordl_internal_set_LastModified(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastModified = value;
}
constexpr int32_t& PlayFab::ProfilesModels::EntityProfileFileMetadata::__cordl_internal_get_Size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Size;
}
constexpr int32_t const& PlayFab::ProfilesModels::EntityProfileFileMetadata::__cordl_internal_get_Size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Size;
}
constexpr void PlayFab::ProfilesModels::EntityProfileFileMetadata::__cordl_internal_set_Size(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Size = value;
}
inline void PlayFab::ProfilesModels::EntityProfileFileMetadata::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::EntityProfileFileMetadata*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ProfilesModels::EntityProfileFileMetadata* PlayFab::ProfilesModels::EntityProfileFileMetadata::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ProfilesModels::EntityProfileFileMetadata*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ProfilesModels::EntityProfileFileMetadata::EntityProfileFileMetadata()   {
}
