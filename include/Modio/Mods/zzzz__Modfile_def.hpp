#pragma once
// IWYU pragma private; include "Modio/Mods/Modfile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Mods/zzzz__ModFileState_def.hpp"
#include "Modio/Mods/zzzz__ModfileDownloadReference_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Modfile)
namespace Modio::API::SchemaDefinitions {
struct ModfileObject;
}
namespace Modio::Mods {
struct ModFileState;
}
namespace Modio::Mods {
struct ModfileDownloadReference;
}
namespace Modio {
class Error;
}
// Forward declare root types
namespace Modio::Mods {
class Modfile;
}
// Write type traits
MARK_REF_T(::Modio::Mods::Modfile*);
DEFINE_IL2CPP_CLASS(::Modio::Mods::Modfile*, "Modio.Mods", "Modfile");
// Dependencies Modio.Mods.ModFileState, Modio.Mods.ModfileDownloadReference, System.Object
namespace Modio::Mods {
// Is value type: false
// CS Name: Modio.Mods.Modfile
class CORDL_TYPE Modfile : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ArchiveFileSize, put=set_ArchiveFileSize)) int64_t  ArchiveFileSize;

 __declspec(property(get=get_Download, put=set_Download)) ::Modio::Mods::ModfileDownloadReference  Download;

 __declspec(property(get=get_DownloadingBytesPerSecond, put=set_DownloadingBytesPerSecond)) int64_t  DownloadingBytesPerSecond;

 __declspec(property(get=get_FileSize, put=set_FileSize)) int64_t  FileSize;

 __declspec(property(get=get_FileStateErrorCause, put=set_FileStateErrorCause)) ::Modio::Error*  FileStateErrorCause;

 __declspec(property(get=get_FileStateProgress, put=set_FileStateProgress)) float_t  FileStateProgress;

 __declspec(property(get=get_Id, put=set_Id)) int64_t  Id;

 __declspec(property(get=get_InstallLocation, put=set_InstallLocation)) ::StringW  InstallLocation;

 __declspec(property(get=get_Md5Hash, put=set_Md5Hash)) ::StringW  Md5Hash;

 __declspec(property(get=get_MetadataBlob, put=set_MetadataBlob)) ::StringW  MetadataBlob;

 __declspec(property(get=get_ModId, put=set_ModId)) int64_t  ModId;

 __declspec(property(get=get_State, put=set_State)) ::Modio::Mods::ModFileState  State;

 __declspec(property(get=get_Version, put=set_Version)) ::StringW  Version;

/// @brief Field <ArchiveFileSize>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__ArchiveFileSize_k__BackingField, put=__cordl_internal_set__ArchiveFileSize_k__BackingField)) int64_t  _ArchiveFileSize_k__BackingField;

/// @brief Field <Download>k__BackingField, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get__Download_k__BackingField, put=__cordl_internal_set__Download_k__BackingField)) ::Modio::Mods::ModfileDownloadReference  _Download_k__BackingField;

/// @brief Field <DownloadingBytesPerSecond>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__DownloadingBytesPerSecond_k__BackingField, put=__cordl_internal_set__DownloadingBytesPerSecond_k__BackingField)) int64_t  _DownloadingBytesPerSecond_k__BackingField;

/// @brief Field <FileSize>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__FileSize_k__BackingField, put=__cordl_internal_set__FileSize_k__BackingField)) int64_t  _FileSize_k__BackingField;

/// @brief Field <FileStateErrorCause>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__FileStateErrorCause_k__BackingField, put=__cordl_internal_set__FileStateErrorCause_k__BackingField)) ::Modio::Error*  _FileStateErrorCause_k__BackingField;

/// @brief Field <FileStateProgress>k__BackingField, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__FileStateProgress_k__BackingField, put=__cordl_internal_set__FileStateProgress_k__BackingField)) float_t  _FileStateProgress_k__BackingField;

/// @brief Field <Id>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Id_k__BackingField, put=__cordl_internal_set__Id_k__BackingField)) int64_t  _Id_k__BackingField;

/// @brief Field <InstallLocation>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__InstallLocation_k__BackingField, put=__cordl_internal_set__InstallLocation_k__BackingField)) ::StringW  _InstallLocation_k__BackingField;

/// @brief Field <Md5Hash>k__BackingField, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__Md5Hash_k__BackingField, put=__cordl_internal_set__Md5Hash_k__BackingField)) ::StringW  _Md5Hash_k__BackingField;

/// @brief Field <MetadataBlob>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__MetadataBlob_k__BackingField, put=__cordl_internal_set__MetadataBlob_k__BackingField)) ::StringW  _MetadataBlob_k__BackingField;

/// @brief Field <ModId>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ModId_k__BackingField, put=__cordl_internal_set__ModId_k__BackingField)) int64_t  _ModId_k__BackingField;

/// @brief Field <State>k__BackingField, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__State_k__BackingField, put=__cordl_internal_set__State_k__BackingField)) ::Modio::Mods::ModFileState  _State_k__BackingField;

/// @brief Field <Version>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Version_k__BackingField, put=__cordl_internal_set__Version_k__BackingField)) ::StringW  _Version_k__BackingField;

/// @brief Method ApplyDetailsFromModfileObject, addr 0xa029004, size 0xac, virtual false, abstract: false, final false
inline void ApplyDetailsFromModfileObject(::Modio::API::SchemaDefinitions::ModfileObject  modfileObject) ;

static inline ::Modio::Mods::Modfile* New_ctor(::Modio::API::SchemaDefinitions::ModfileObject  modfileObject) ;

constexpr int64_t const& __cordl_internal_get__ArchiveFileSize_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__ArchiveFileSize_k__BackingField() ;

constexpr ::Modio::Mods::ModfileDownloadReference const& __cordl_internal_get__Download_k__BackingField() const;

constexpr ::Modio::Mods::ModfileDownloadReference& __cordl_internal_get__Download_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__DownloadingBytesPerSecond_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__DownloadingBytesPerSecond_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__FileSize_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__FileSize_k__BackingField() ;

constexpr ::Modio::Error* const& __cordl_internal_get__FileStateErrorCause_k__BackingField() const;

constexpr ::Modio::Error*& __cordl_internal_get__FileStateErrorCause_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__FileStateProgress_k__BackingField() const;

constexpr float_t& __cordl_internal_get__FileStateProgress_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__Id_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__Id_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__InstallLocation_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__InstallLocation_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Md5Hash_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Md5Hash_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__MetadataBlob_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__MetadataBlob_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__ModId_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__ModId_k__BackingField() ;

constexpr ::Modio::Mods::ModFileState const& __cordl_internal_get__State_k__BackingField() const;

constexpr ::Modio::Mods::ModFileState& __cordl_internal_get__State_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Version_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Version_k__BackingField() ;

constexpr void __cordl_internal_set__ArchiveFileSize_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__Download_k__BackingField(::Modio::Mods::ModfileDownloadReference  value) ;

constexpr void __cordl_internal_set__DownloadingBytesPerSecond_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__FileSize_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__FileStateErrorCause_k__BackingField(::Modio::Error*  value) ;

constexpr void __cordl_internal_set__FileStateProgress_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Id_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__InstallLocation_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Md5Hash_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__MetadataBlob_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ModId_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__State_k__BackingField(::Modio::Mods::ModFileState  value) ;

constexpr void __cordl_internal_set__Version_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0xa028f60, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(::Modio::API::SchemaDefinitions::ModfileObject  modfileObject) ;

/// [CompilerGenerated]
/// @brief Method get_ArchiveFileSize, addr 0xa030b98, size 0x8, virtual false, abstract: false, final false
inline int64_t get_ArchiveFileSize() ;

/// [CompilerGenerated]
/// @brief Method get_Download, addr 0xa030c18, size 0xc, virtual false, abstract: false, final false
inline ::Modio::Mods::ModfileDownloadReference get_Download() ;

/// [CompilerGenerated]
/// @brief Method get_DownloadingBytesPerSecond, addr 0xa030c08, size 0x8, virtual false, abstract: false, final false
inline int64_t get_DownloadingBytesPerSecond() ;

/// [CompilerGenerated]
/// @brief Method get_FileSize, addr 0xa030b88, size 0x8, virtual false, abstract: false, final false
inline int64_t get_FileSize() ;

/// [CompilerGenerated]
/// @brief Method get_FileStateErrorCause, addr 0xa030be8, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Error* get_FileStateErrorCause() ;

/// [CompilerGenerated]
/// @brief Method get_FileStateProgress, addr 0xa030bf8, size 0x8, virtual false, abstract: false, final false
inline float_t get_FileStateProgress() ;

/// [CompilerGenerated]
/// @brief Method get_Id, addr 0xa030b78, size 0x8, virtual false, abstract: false, final false
inline int64_t get_Id() ;

/// [CompilerGenerated]
/// @brief Method get_InstallLocation, addr 0xa030ba8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_InstallLocation() ;

/// [CompilerGenerated]
/// @brief Method get_Md5Hash, addr 0xa030c30, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Md5Hash() ;

/// [CompilerGenerated]
/// @brief Method get_MetadataBlob, addr 0xa030bc8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_MetadataBlob() ;

/// [CompilerGenerated]
/// @brief Method get_ModId, addr 0xa030b68, size 0x8, virtual false, abstract: false, final false
inline int64_t get_ModId() ;

/// [CompilerGenerated]
/// @brief Method get_State, addr 0xa030bd8, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Mods::ModFileState get_State() ;

/// [CompilerGenerated]
/// @brief Method get_Version, addr 0xa030bb8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Version() ;

/// [CompilerGenerated]
/// @brief Method set_ArchiveFileSize, addr 0xa030ba0, size 0x8, virtual false, abstract: false, final false
inline void set_ArchiveFileSize(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Download, addr 0xa030c24, size 0xc, virtual false, abstract: false, final false
inline void set_Download(::Modio::Mods::ModfileDownloadReference  value) ;

/// [CompilerGenerated]
/// @brief Method set_DownloadingBytesPerSecond, addr 0xa030c10, size 0x8, virtual false, abstract: false, final false
inline void set_DownloadingBytesPerSecond(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_FileSize, addr 0xa030b90, size 0x8, virtual false, abstract: false, final false
inline void set_FileSize(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_FileStateErrorCause, addr 0xa030bf0, size 0x8, virtual false, abstract: false, final false
inline void set_FileStateErrorCause(::Modio::Error*  value) ;

/// [CompilerGenerated]
/// @brief Method set_FileStateProgress, addr 0xa030c00, size 0x8, virtual false, abstract: false, final false
inline void set_FileStateProgress(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Id, addr 0xa030b80, size 0x8, virtual false, abstract: false, final false
inline void set_Id(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_InstallLocation, addr 0xa030bb0, size 0x8, virtual false, abstract: false, final false
inline void set_InstallLocation(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Md5Hash, addr 0xa030c38, size 0x8, virtual false, abstract: false, final false
inline void set_Md5Hash(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_MetadataBlob, addr 0xa030bd0, size 0x8, virtual false, abstract: false, final false
inline void set_MetadataBlob(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_ModId, addr 0xa030b70, size 0x8, virtual false, abstract: false, final false
inline void set_ModId(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_State, addr 0xa030be0, size 0x8, virtual false, abstract: false, final false
inline void set_State(::Modio::Mods::ModFileState  value) ;

/// [CompilerGenerated]
/// @brief Method set_Version, addr 0xa030bc0, size 0x8, virtual false, abstract: false, final false
inline void set_Version(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Modfile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Modfile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Modfile(Modfile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Modfile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Modfile(Modfile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17589};

/// [CompilerGenerated]
/// @brief Field <ModId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 int64_t  ____ModId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Id>k__BackingField, offset: 0x18, size: 0x8, def value: None
 int64_t  ____Id_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FileSize>k__BackingField, offset: 0x20, size: 0x8, def value: None
 int64_t  ____FileSize_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ArchiveFileSize>k__BackingField, offset: 0x28, size: 0x8, def value: None
 int64_t  ____ArchiveFileSize_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <InstallLocation>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____InstallLocation_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Version>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____Version_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MetadataBlob>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____MetadataBlob_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <State>k__BackingField, offset: 0x48, size: 0x4, def value: None
 ::Modio::Mods::ModFileState  ____State_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FileStateErrorCause>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::Modio::Error*  ____FileStateErrorCause_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FileStateProgress>k__BackingField, offset: 0x58, size: 0x4, def value: None
 float_t  ____FileStateProgress_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DownloadingBytesPerSecond>k__BackingField, offset: 0x60, size: 0x8, def value: None
 int64_t  ____DownloadingBytesPerSecond_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Download>k__BackingField, offset: 0x68, size: 0x10, def value: None
 ::Modio::Mods::ModfileDownloadReference  ____Download_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Md5Hash>k__BackingField, offset: 0x78, size: 0x8, def value: None
 ::StringW  ____Md5Hash_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Mods::Modfile, ____ModId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Modfile, ____Id_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Modfile, ____FileSize_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Modfile, ____ArchiveFileSize_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Modfile, ____InstallLocation_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Modfile, ____Version_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Modfile, ____MetadataBlob_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Modfile, ____State_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Modfile, ____FileStateErrorCause_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Modfile, ____FileStateProgress_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Modfile, ____DownloadingBytesPerSecond_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Modfile, ____Download_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::Modfile, ____Md5Hash_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Modio::Mods::Modfile) == 0x80, "Size mismatch!");

} // namespace end def Modio::Mods
