#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ModfileObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__DownloadObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__FilehashObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModfilePlatformObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModfileObject)
namespace Modio::API::SchemaDefinitions {
struct DownloadObject;
}
namespace Modio::API::SchemaDefinitions {
struct FilehashObject;
}
namespace Modio::API::SchemaDefinitions {
struct ModfilePlatformObject;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct ModfileObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::ModfileObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::ModfileObject, "Modio.API.SchemaDefinitions", "ModfileObject");
// [IsReadOnly]
// [JsonObject((Newtonsoft.Json.MemberSerialization)2)]
// Dependencies Modio.API.SchemaDefinitions.DownloadObject, Modio.API.SchemaDefinitions.FilehashObject, Modio.API.SchemaDefinitions.ModfilePlatformObject
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.ModfileObject
struct CORDL_TYPE ModfileObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fed4e4, size 0xe8, virtual false, abstract: false, final false
inline void _ctor(int64_t  id, int64_t  mod_id, int64_t  date_added, int64_t  date_updated, int64_t  date_scanned, int64_t  virus_status, int64_t  virus_positive, ::StringW  virustotal_hash, int64_t  filesize, int64_t  filesize_uncompressed, ::Modio::API::SchemaDefinitions::FilehashObject  filehash, ::StringW  filename, ::StringW  version, ::StringW  changelog, ::StringW  metadata_blob, ::Modio::API::SchemaDefinitions::DownloadObject  download, ::ArrayW<::Modio::API::SchemaDefinitions::ModfilePlatformObject>  platforms) ;

// Ctor Parameters []
// @brief default ctor
constexpr ModfileObject() ;

// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ModId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateUpdated", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateScanned", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "VirusStatus", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "VirusPositive", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "VirustotalHash", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Filesize", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "FilesizeUncompressed", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Filehash", ty: "::Modio::API::SchemaDefinitions::FilehashObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "Filename", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Version", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Changelog", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "MetadataBlob", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Download", ty: "::Modio::API::SchemaDefinitions::DownloadObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "Platforms", ty: "::ArrayW<::Modio::API::SchemaDefinitions::ModfilePlatformObject>", modifiers: "", def_value: None, comment: None }]
constexpr ModfileObject(int64_t  Id, int64_t  ModId, int64_t  DateAdded, int64_t  DateUpdated, int64_t  DateScanned, int64_t  VirusStatus, int64_t  VirusPositive, ::StringW  VirustotalHash, int64_t  Filesize, int64_t  FilesizeUncompressed, ::Modio::API::SchemaDefinitions::FilehashObject  Filehash, ::StringW  Filename, ::StringW  Version, ::StringW  Changelog, ::StringW  MetadataBlob, ::Modio::API::SchemaDefinitions::DownloadObject  Download, ::ArrayW<::Modio::API::SchemaDefinitions::ModfilePlatformObject>  Platforms) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18149};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field Id, offset: 0x0, size: 0x8, def value: None
 int64_t  Id;

/// @brief Field ModId, offset: 0x8, size: 0x8, def value: None
 int64_t  ModId;

/// @brief Field DateAdded, offset: 0x10, size: 0x8, def value: None
 int64_t  DateAdded;

/// @brief Field DateUpdated, offset: 0x18, size: 0x8, def value: None
 int64_t  DateUpdated;

/// @brief Field DateScanned, offset: 0x20, size: 0x8, def value: None
 int64_t  DateScanned;

/// @brief Field VirusStatus, offset: 0x28, size: 0x8, def value: None
 int64_t  VirusStatus;

/// @brief Field VirusPositive, offset: 0x30, size: 0x8, def value: None
 int64_t  VirusPositive;

/// @brief Field VirustotalHash, offset: 0x38, size: 0x8, def value: None
 ::StringW  VirustotalHash;

/// @brief Field Filesize, offset: 0x40, size: 0x8, def value: None
 int64_t  Filesize;

/// @brief Field FilesizeUncompressed, offset: 0x48, size: 0x8, def value: None
 int64_t  FilesizeUncompressed;

/// @brief Field Filehash, offset: 0x50, size: 0x8, def value: None
 ::Modio::API::SchemaDefinitions::FilehashObject  Filehash;

/// @brief Field Filename, offset: 0x58, size: 0x8, def value: None
 ::StringW  Filename;

/// @brief Field Version, offset: 0x60, size: 0x8, def value: None
 ::StringW  Version;

/// @brief Field Changelog, offset: 0x68, size: 0x8, def value: None
 ::StringW  Changelog;

/// @brief Field MetadataBlob, offset: 0x70, size: 0x8, def value: None
 ::StringW  MetadataBlob;

/// @brief Field Download, offset: 0x78, size: 0x10, def value: None
 ::Modio::API::SchemaDefinitions::DownloadObject  Download;

/// @brief Field Platforms, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::Modio::API::SchemaDefinitions::ModfilePlatformObject>  Platforms;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::ModfileObject, Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModfileObject, ModId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModfileObject, DateAdded) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModfileObject, DateUpdated) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModfileObject, DateScanned) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModfileObject, VirusStatus) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModfileObject, VirusPositive) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModfileObject, VirustotalHash) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModfileObject, Filesize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModfileObject, FilesizeUncompressed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModfileObject, Filehash) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModfileObject, Filename) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModfileObject, Version) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModfileObject, Changelog) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModfileObject, MetadataBlob) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModfileObject, Download) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModfileObject, Platforms) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::ModfileObject) == 0x90, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
