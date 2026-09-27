#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ModfileObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__DownloadObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__FilehashObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModfilePlatformObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModfileObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__DownloadObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__FilehashObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModfilePlatformObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::ModfileObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::ModfileObject::*)(int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, ::StringW, int64_t, int64_t, ::Modio::API::SchemaDefinitions::FilehashObject, ::StringW, ::StringW, ::StringW, ::StringW, ::Modio::API::SchemaDefinitions::DownloadObject, ::ArrayW<::Modio::API::SchemaDefinitions::ModfilePlatformObject>)>(&::Modio::API::SchemaDefinitions::ModfileObject::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9fed4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ModfileObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::FilehashObject>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::DownloadObject>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::ModfilePlatformObject>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::ModfileObject::_ctor(int64_t  id, int64_t  mod_id, int64_t  date_added, int64_t  date_updated, int64_t  date_scanned, int64_t  virus_status, int64_t  virus_positive, ::StringW  virustotal_hash, int64_t  filesize, int64_t  filesize_uncompressed, ::Modio::API::SchemaDefinitions::FilehashObject  filehash, ::StringW  filename, ::StringW  version, ::StringW  changelog, ::StringW  metadata_blob, ::Modio::API::SchemaDefinitions::DownloadObject  download, ::ArrayW<::Modio::API::SchemaDefinitions::ModfilePlatformObject>  platforms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ModfileObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::FilehashObject>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::DownloadObject>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::ModfilePlatformObject>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, mod_id, date_added, date_updated, date_scanned, virus_status, virus_positive, virustotal_hash, filesize, filesize_uncompressed, filehash, filename, version, changelog, metadata_blob, download, platforms);
}
// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ModId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateUpdated", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateScanned", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "VirusStatus", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "VirusPositive", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "VirustotalHash", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Filesize", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FilesizeUncompressed", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Filehash", ty: "::Modio::API::SchemaDefinitions::FilehashObject", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Filename", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Version", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Changelog", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MetadataBlob", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Download", ty: "::Modio::API::SchemaDefinitions::DownloadObject", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Platforms", ty: "::ArrayW<::Modio::API::SchemaDefinitions::ModfilePlatformObject>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::ModfileObject::ModfileObject(int64_t  Id, int64_t  ModId, int64_t  DateAdded, int64_t  DateUpdated, int64_t  DateScanned, int64_t  VirusStatus, int64_t  VirusPositive, ::StringW  VirustotalHash, int64_t  Filesize, int64_t  FilesizeUncompressed, ::Modio::API::SchemaDefinitions::FilehashObject  Filehash, ::StringW  Filename, ::StringW  Version, ::StringW  Changelog, ::StringW  MetadataBlob, ::Modio::API::SchemaDefinitions::DownloadObject  Download, ::ArrayW<::Modio::API::SchemaDefinitions::ModfilePlatformObject>  Platforms) noexcept  {
this->Id = Id;
this->ModId = ModId;
this->DateAdded = DateAdded;
this->DateUpdated = DateUpdated;
this->DateScanned = DateScanned;
this->VirusStatus = VirusStatus;
this->VirusPositive = VirusPositive;
this->VirustotalHash = VirustotalHash;
this->Filesize = Filesize;
this->FilesizeUncompressed = FilesizeUncompressed;
this->Filehash = Filehash;
this->Filename = Filename;
this->Version = Version;
this->Changelog = Changelog;
this->MetadataBlob = MetadataBlob;
this->Download = Download;
this->Platforms = Platforms;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::ModfileObject::ModfileObject()   {
}
