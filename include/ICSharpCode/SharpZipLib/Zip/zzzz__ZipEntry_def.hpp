#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/Zip/zzzz__CompressionMethod_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEntry_Known_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZipEntry)
namespace GlobalNamespace {
struct ZipEntry_Known;
}
namespace ICSharpCode::SharpZipLib::Zip {
struct CompressionMethod;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipExtraData;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class ZipEntry;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::ZipEntry*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ZipEntry*, "ICSharpCode.SharpZipLib.Zip", "ZipEntry");
// Dependencies ICSharpCode.SharpZipLib.Zip.CompressionMethod, ICSharpCode.SharpZipLib.Zip.ZipEntry::Known, System.DateTime, System.Object
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipEntry
class CORDL_TYPE ZipEntry : public ::System::Object {
public:
// Declarations
using Known = ::GlobalNamespace::ZipEntry_Known;

 __declspec(property(get=get_AESEncryptionStrength)) uint8_t  AESEncryptionStrength;

 __declspec(property(get=get_AESKeySize, put=set_AESKeySize)) int32_t  AESKeySize;

 __declspec(property(get=get_AESOverheadSize)) int32_t  AESOverheadSize;

 __declspec(property(get=get_AESSaltLen)) int32_t  AESSaltLen;

 __declspec(property(get=get_CanDecompress)) bool  CanDecompress;

 __declspec(property(get=get_CentralHeaderRequiresZip64)) bool  CentralHeaderRequiresZip64;

 __declspec(property(get=get_Comment, put=set_Comment)) ::StringW  Comment;

 __declspec(property(get=get_CompressedSize, put=set_CompressedSize)) int64_t  CompressedSize;

 __declspec(property(get=get_CompressionMethod, put=set_CompressionMethod)) ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  CompressionMethod;

 __declspec(property(get=get_CompressionMethodForHeader)) ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  CompressionMethodForHeader;

 __declspec(property(get=get_Crc, put=set_Crc)) int64_t  Crc;

 __declspec(property(get=get_CryptoCheckValue, put=set_CryptoCheckValue)) uint8_t  CryptoCheckValue;

 __declspec(property(get=get_DateTime, put=set_DateTime)) ::System::DateTime  DateTime;

 __declspec(property(get=get_DosTime, put=set_DosTime)) int64_t  DosTime;

 __declspec(property(get=get_EncryptionOverheadSize)) int32_t  EncryptionOverheadSize;

 __declspec(property(get=get_ExternalFileAttributes, put=set_ExternalFileAttributes)) int32_t  ExternalFileAttributes;

 __declspec(property(get=get_ExtraData, put=set_ExtraData)) ::ArrayW<uint8_t>  ExtraData;

 __declspec(property(get=get_Flags, put=set_Flags)) int32_t  Flags;

 __declspec(property(get=get_HasCrc)) bool  HasCrc;

 __declspec(property(get=get_HostSystem, put=set_HostSystem)) int32_t  HostSystem;

 __declspec(property(get=get_IsCrypted, put=set_IsCrypted)) bool  IsCrypted;

 __declspec(property(get=get_IsDOSEntry)) bool  IsDOSEntry;

 __declspec(property(get=get_IsDirectory)) bool  IsDirectory;

 __declspec(property(get=get_IsFile)) bool  IsFile;

 __declspec(property(get=get_IsUnicodeText, put=set_IsUnicodeText)) bool  IsUnicodeText;

 __declspec(property(get=get_LocalHeaderRequiresZip64)) bool  LocalHeaderRequiresZip64;

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

 __declspec(property(get=get_Offset, put=set_Offset)) int64_t  Offset;

 __declspec(property(get=get_Size, put=set_Size)) int64_t  Size;

 __declspec(property(get=get_Version)) int32_t  Version;

 __declspec(property(get=get_VersionMadeBy)) int32_t  VersionMadeBy;

 __declspec(property(get=get_ZipFileIndex, put=set_ZipFileIndex)) int64_t  ZipFileIndex;

/// @brief Field _aesEncryptionStrength, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__aesEncryptionStrength, put=__cordl_internal_set__aesEncryptionStrength)) int32_t  _aesEncryptionStrength;

/// @brief Field _aesVer, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__aesVer, put=__cordl_internal_set__aesVer)) int32_t  _aesVer;

/// @brief Field comment, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_comment, put=__cordl_internal_set_comment)) ::StringW  comment;

/// @brief Field compressedSize, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_compressedSize, put=__cordl_internal_set_compressedSize)) uint64_t  compressedSize;

/// @brief Field crc, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_crc, put=__cordl_internal_set_crc)) uint32_t  crc;

/// @brief Field cryptoCheckValue_, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_cryptoCheckValue_, put=__cordl_internal_set_cryptoCheckValue_)) uint8_t  cryptoCheckValue_;

/// @brief Field dateTime, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_dateTime, put=__cordl_internal_set_dateTime)) ::System::DateTime  dateTime;

/// @brief Field externalFileAttributes, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_externalFileAttributes, put=__cordl_internal_set_externalFileAttributes)) int32_t  externalFileAttributes;

/// @brief Field extra, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_extra, put=__cordl_internal_set_extra)) ::ArrayW<uint8_t>  extra;

/// @brief Field flags, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_flags, put=__cordl_internal_set_flags)) int32_t  flags;

/// @brief Field forceZip64_, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_forceZip64_, put=__cordl_internal_set_forceZip64_)) bool  forceZip64_;

/// @brief Field known, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_known, put=__cordl_internal_set_known)) ::GlobalNamespace::ZipEntry_Known  known;

/// @brief Field method, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_method, put=__cordl_internal_set_method)) ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  method;

/// @brief Field name, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field offset, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) int64_t  offset;

/// @brief Field size, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) uint64_t  size;

/// @brief Field versionMadeBy, offset 0x18, size 0x2 
 __declspec(property(get=__cordl_internal_get_versionMadeBy, put=__cordl_internal_set_versionMadeBy)) uint16_t  versionMadeBy;

/// @brief Field versionToExtract, offset 0x38, size 0x2 
 __declspec(property(get=__cordl_internal_get_versionToExtract, put=__cordl_internal_set_versionToExtract)) uint16_t  versionToExtract;

/// @brief Field zipFileIndex, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_zipFileIndex, put=__cordl_internal_set_zipFileIndex)) int64_t  zipFileIndex;

/// @brief Method CleanName, addr 0x9f80a1c, size 0x140, virtual false, abstract: false, final false
static inline ::StringW CleanName(::StringW  name) ;

/// @brief Method Clone, addr 0x9f80924, size 0xf0, virtual false, abstract: false, final false
inline ::System::Object* Clone() ;

/// @brief Method ForceZip64, addr 0x9f7fd24, size 0xc, virtual false, abstract: false, final false
inline void ForceZip64() ;

/// @brief Method GetDateTime, addr 0x9f805ec, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::System::DateTime> GetDateTime(::ICSharpCode::SharpZipLib::Zip::ZipExtraData*  extraData) ;

/// @brief Method HasDosAttributes, addr 0x9f7facc, size 0x38, virtual false, abstract: false, final false
inline bool HasDosAttributes(int32_t  attributes) ;

/// @brief Method IsCompressionMethodSupported, addr 0x9f7e694, size 0x1c, virtual false, abstract: false, final false
inline bool IsCompressionMethodSupported() ;

/// @brief Method IsCompressionMethodSupported, addr 0x9f8090c, size 0x18, virtual false, abstract: false, final false
static inline bool IsCompressionMethodSupported(::ICSharpCode::SharpZipLib::Zip::CompressionMethod  method) ;

/// @brief Method IsZip64Forced, addr 0x9f7fd30, size 0x8, virtual false, abstract: false, final false
inline bool IsZip64Forced() ;

/// @brief [Obsolete("Use Clone instead")]
static inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* New_ctor(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* New_ctor(::StringW  name) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* New_ctor(::StringW  name, int32_t  versionRequiredToExtract) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* New_ctor(::StringW  name, int32_t  versionRequiredToExtract, int32_t  madeByInfo, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  method) ;

/// @brief Method ProcessAESExtraData, addr 0x9f80688, size 0x144, virtual false, abstract: false, final false
inline void ProcessAESExtraData(::ICSharpCode::SharpZipLib::Zip::ZipExtraData*  extraData) ;

/// @brief Method ProcessExtraData, addr 0x9f802ac, size 0x1dc, virtual false, abstract: false, final false
inline void ProcessExtraData(bool  localHeader) ;

/// @brief Method ToString, addr 0x9f80a14, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get__aesEncryptionStrength() const;

constexpr int32_t& __cordl_internal_get__aesEncryptionStrength() ;

constexpr int32_t const& __cordl_internal_get__aesVer() const;

constexpr int32_t& __cordl_internal_get__aesVer() ;

constexpr ::StringW const& __cordl_internal_get_comment() const;

constexpr ::StringW& __cordl_internal_get_comment() ;

constexpr uint64_t const& __cordl_internal_get_compressedSize() const;

constexpr uint64_t& __cordl_internal_get_compressedSize() ;

constexpr uint32_t const& __cordl_internal_get_crc() const;

constexpr uint32_t& __cordl_internal_get_crc() ;

constexpr uint8_t const& __cordl_internal_get_cryptoCheckValue_() const;

constexpr uint8_t& __cordl_internal_get_cryptoCheckValue_() ;

constexpr ::System::DateTime const& __cordl_internal_get_dateTime() const;

constexpr ::System::DateTime& __cordl_internal_get_dateTime() ;

constexpr int32_t const& __cordl_internal_get_externalFileAttributes() const;

constexpr int32_t& __cordl_internal_get_externalFileAttributes() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_extra() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_extra() ;

constexpr int32_t const& __cordl_internal_get_flags() const;

constexpr int32_t& __cordl_internal_get_flags() ;

constexpr bool const& __cordl_internal_get_forceZip64_() const;

constexpr bool& __cordl_internal_get_forceZip64_() ;

constexpr ::GlobalNamespace::ZipEntry_Known const& __cordl_internal_get_known() const;

constexpr ::GlobalNamespace::ZipEntry_Known& __cordl_internal_get_known() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::CompressionMethod const& __cordl_internal_get_method() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::CompressionMethod& __cordl_internal_get_method() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr int64_t const& __cordl_internal_get_offset() const;

constexpr int64_t& __cordl_internal_get_offset() ;

constexpr uint64_t const& __cordl_internal_get_size() const;

constexpr uint64_t& __cordl_internal_get_size() ;

constexpr uint16_t const& __cordl_internal_get_versionMadeBy() const;

constexpr uint16_t& __cordl_internal_get_versionMadeBy() ;

constexpr uint16_t const& __cordl_internal_get_versionToExtract() const;

constexpr uint16_t& __cordl_internal_get_versionToExtract() ;

constexpr int64_t const& __cordl_internal_get_zipFileIndex() const;

constexpr int64_t& __cordl_internal_get_zipFileIndex() ;

constexpr void __cordl_internal_set__aesEncryptionStrength(int32_t  value) ;

constexpr void __cordl_internal_set__aesVer(int32_t  value) ;

constexpr void __cordl_internal_set_comment(::StringW  value) ;

constexpr void __cordl_internal_set_compressedSize(uint64_t  value) ;

constexpr void __cordl_internal_set_crc(uint32_t  value) ;

constexpr void __cordl_internal_set_cryptoCheckValue_(uint8_t  value) ;

constexpr void __cordl_internal_set_dateTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_externalFileAttributes(int32_t  value) ;

constexpr void __cordl_internal_set_extra(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_flags(int32_t  value) ;

constexpr void __cordl_internal_set_forceZip64_(bool  value) ;

constexpr void __cordl_internal_set_known(::GlobalNamespace::ZipEntry_Known  value) ;

constexpr void __cordl_internal_set_method(::ICSharpCode::SharpZipLib::Zip::CompressionMethod  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_offset(int64_t  value) ;

constexpr void __cordl_internal_set_size(uint64_t  value) ;

constexpr void __cordl_internal_set_versionMadeBy(uint16_t  value) ;

constexpr void __cordl_internal_set_versionToExtract(uint16_t  value) ;

constexpr void __cordl_internal_set_zipFileIndex(int64_t  value) ;

/// [Obsolete("Use Clone instead")]
/// @brief Method .ctor, addr 0x9f7f850, size 0x180, virtual false, abstract: false, final false
inline void _ctor(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// @brief Method .ctor, addr 0x9f7f62c, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method .ctor, addr 0x9f7f824, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, int32_t  versionRequiredToExtract) ;

/// @brief Method .ctor, addr 0x9f7f63c, size 0x1e8, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, int32_t  versionRequiredToExtract, int32_t  madeByInfo, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  method) ;

/// @brief Method get_AESEncryptionStrength, addr 0x9f7dd88, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_AESEncryptionStrength() ;

/// @brief Method get_AESKeySize, addr 0x9f7fbd8, size 0x80, virtual false, abstract: false, final false
inline int32_t get_AESKeySize() ;

/// @brief Method get_AESOverheadSize, addr 0x9f80288, size 0x24, virtual false, abstract: false, final false
inline int32_t get_AESOverheadSize() ;

/// @brief Method get_AESSaltLen, addr 0x9f80268, size 0x20, virtual false, abstract: false, final false
inline int32_t get_AESSaltLen() ;

/// @brief Method get_CanDecompress, addr 0x9f7fc88, size 0x9c, virtual false, abstract: false, final false
inline bool get_CanDecompress() ;

/// @brief Method get_CentralHeaderRequiresZip64, addr 0x9f7fc58, size 0x30, virtual false, abstract: false, final false
inline bool get_CentralHeaderRequiresZip64() ;

/// @brief Method get_Comment, addr 0x9f80888, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Comment() ;

/// @brief Method get_CompressedSize, addr 0x9f800ec, size 0x18, virtual false, abstract: false, final false
inline int64_t get_CompressedSize() ;

/// @brief Method get_CompressionMethod, addr 0x9f80144, size 0x8, virtual false, abstract: false, final false
inline ::ICSharpCode::SharpZipLib::Zip::CompressionMethod get_CompressionMethod() ;

/// @brief Method get_CompressionMethodForHeader, addr 0x9f80154, size 0x28, virtual false, abstract: false, final false
inline ::ICSharpCode::SharpZipLib::Zip::CompressionMethod get_CompressionMethodForHeader() ;

/// @brief Method get_Crc, addr 0x9f80118, size 0x18, virtual false, abstract: false, final false
inline int64_t get_Crc() ;

/// @brief Method get_CryptoCheckValue, addr 0x9f7fa68, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_CryptoCheckValue() ;

/// @brief Method get_DateTime, addr 0x9f800c0, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_DateTime() ;

/// @brief Method get_DosTime, addr 0x9f7fe00, size 0x160, virtual false, abstract: false, final false
inline int64_t get_DosTime() ;

/// @brief Method get_EncryptionOverheadSize, addr 0x9f7fdb4, size 0x4c, virtual false, abstract: false, final false
inline int32_t get_EncryptionOverheadSize() ;

/// @brief Method get_ExternalFileAttributes, addr 0x9f7e67c, size 0x18, virtual false, abstract: false, final false
inline int32_t get_ExternalFileAttributes() ;

/// @brief Method get_ExtraData, addr 0x9f8017c, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_ExtraData() ;

/// @brief Method get_Flags, addr 0x9f7fa78, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Flags() ;

/// @brief Method get_HasCrc, addr 0x9f7f9d0, size 0xc, virtual false, abstract: false, final false
inline bool get_HasCrc() ;

/// @brief Method get_HostSystem, addr 0x9f7fac4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_HostSystem() ;

/// @brief Method get_IsCrypted, addr 0x9f7f9dc, size 0x18, virtual false, abstract: false, final false
inline bool get_IsCrypted() ;

/// @brief Method get_IsDOSEntry, addr 0x9f7e660, size 0x1c, virtual false, abstract: false, final false
inline bool get_IsDOSEntry() ;

/// @brief Method get_IsDirectory, addr 0x9f7d7b4, size 0x98, virtual false, abstract: false, final false
inline bool get_IsDirectory() ;

/// @brief Method get_IsFile, addr 0x9f7d240, size 0x54, virtual false, abstract: false, final false
inline bool get_IsFile() ;

/// @brief Method get_IsUnicodeText, addr 0x9f7fa50, size 0x18, virtual false, abstract: false, final false
inline bool get_IsUnicodeText() ;

/// @brief Method get_LocalHeaderRequiresZip64, addr 0x9f7fd38, size 0x7c, virtual false, abstract: false, final false
inline bool get_LocalHeaderRequiresZip64() ;

/// @brief Method get_Name, addr 0x9f800c8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Offset, addr 0x9f7fa98, size 0x8, virtual false, abstract: false, final false
inline int64_t get_Offset() ;

/// @brief Method get_Size, addr 0x9f7e644, size 0x18, virtual false, abstract: false, final false
inline int64_t get_Size() ;

/// @brief Method get_Version, addr 0x9f7fb0c, size 0xcc, virtual false, abstract: false, final false
inline int32_t get_Version() ;

/// @brief Method get_VersionMadeBy, addr 0x9f7fabc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_VersionMadeBy() ;

/// @brief Method get_ZipFileIndex, addr 0x9f7fa88, size 0x8, virtual false, abstract: false, final false
inline int64_t get_ZipFileIndex() ;

/// @brief Method set_AESKeySize, addr 0x9f7dd90, size 0x9c, virtual false, abstract: false, final false
inline void set_AESKeySize(int32_t  value) ;

/// @brief Method set_Comment, addr 0x9f80890, size 0x7c, virtual false, abstract: false, final false
inline void set_Comment(::StringW  value) ;

/// @brief Method set_CompressedSize, addr 0x9f80104, size 0x14, virtual false, abstract: false, final false
inline void set_CompressedSize(int64_t  value) ;

/// @brief Method set_CompressionMethod, addr 0x9f8014c, size 0x8, virtual false, abstract: false, final false
inline void set_CompressionMethod(::ICSharpCode::SharpZipLib::Zip::CompressionMethod  value) ;

/// @brief Method set_Crc, addr 0x9f80130, size 0x14, virtual false, abstract: false, final false
inline void set_Crc(int64_t  value) ;

/// @brief Method set_CryptoCheckValue, addr 0x9f7fa70, size 0x8, virtual false, abstract: false, final false
inline void set_CryptoCheckValue(uint8_t  value) ;

/// @brief Method set_DateTime, addr 0x9f7f830, size 0x14, virtual false, abstract: false, final false
inline void set_DateTime(::System::DateTime  value) ;

/// @brief Method set_DosTime, addr 0x9f7ff60, size 0x160, virtual false, abstract: false, final false
inline void set_DosTime(int64_t  value) ;

/// @brief Method set_ExternalFileAttributes, addr 0x9f7faa8, size 0x14, virtual false, abstract: false, final false
inline void set_ExternalFileAttributes(int32_t  value) ;

/// @brief Method set_ExtraData, addr 0x9f80184, size 0xe4, virtual false, abstract: false, final false
inline void set_ExtraData(::ArrayW<uint8_t>  value) ;

/// @brief Method set_Flags, addr 0x9f7fa80, size 0x8, virtual false, abstract: false, final false
inline void set_Flags(int32_t  value) ;

/// @brief Method set_HostSystem, addr 0x9f7fb04, size 0x8, virtual false, abstract: false, final false
inline void set_HostSystem(int32_t  value) ;

/// @brief Method set_IsCrypted, addr 0x9f7fa10, size 0xc, virtual false, abstract: false, final false
inline void set_IsCrypted(bool  value) ;

/// @brief Method set_IsUnicodeText, addr 0x9f7f844, size 0xc, virtual false, abstract: false, final false
inline void set_IsUnicodeText(bool  value) ;

/// @brief Method set_Name, addr 0x9f800d0, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

/// @brief Method set_Offset, addr 0x9f7faa0, size 0x8, virtual false, abstract: false, final false
inline void set_Offset(int64_t  value) ;

/// @brief Method set_Size, addr 0x9f800d8, size 0x14, virtual false, abstract: false, final false
inline void set_Size(int64_t  value) ;

/// @brief Method set_ZipFileIndex, addr 0x9f7fa90, size 0x8, virtual false, abstract: false, final false
inline void set_ZipFileIndex(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipEntry(ZipEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipEntry(ZipEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17325};

/// @brief Field known, offset: 0x10, size: 0x1, def value: None
 ::GlobalNamespace::ZipEntry_Known  ___known;

/// @brief Field externalFileAttributes, offset: 0x14, size: 0x4, def value: None
 int32_t  ___externalFileAttributes;

/// @brief Field versionMadeBy, offset: 0x18, size: 0x2, def value: None
 uint16_t  ___versionMadeBy;

/// @brief Field name, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field size, offset: 0x28, size: 0x8, def value: None
 uint64_t  ___size;

/// @brief Field compressedSize, offset: 0x30, size: 0x8, def value: None
 uint64_t  ___compressedSize;

/// @brief Field versionToExtract, offset: 0x38, size: 0x2, def value: None
 uint16_t  ___versionToExtract;

/// @brief Field crc, offset: 0x3c, size: 0x4, def value: None
 uint32_t  ___crc;

/// @brief Field dateTime, offset: 0x40, size: 0x8, def value: None
 ::System::DateTime  ___dateTime;

/// @brief Field method, offset: 0x48, size: 0x4, def value: None
 ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  ___method;

/// @brief Field extra, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___extra;

/// @brief Field comment, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___comment;

/// @brief Field flags, offset: 0x60, size: 0x4, def value: None
 int32_t  ___flags;

/// @brief Field zipFileIndex, offset: 0x68, size: 0x8, def value: None
 int64_t  ___zipFileIndex;

/// @brief Field offset, offset: 0x70, size: 0x8, def value: None
 int64_t  ___offset;

/// @brief Field forceZip64_, offset: 0x78, size: 0x1, def value: None
 bool  ___forceZip64_;

/// @brief Field cryptoCheckValue_, offset: 0x79, size: 0x1, def value: None
 uint8_t  ___cryptoCheckValue_;

/// @brief Field _aesVer, offset: 0x7c, size: 0x4, def value: None
 int32_t  ____aesVer;

/// @brief Field _aesEncryptionStrength, offset: 0x80, size: 0x4, def value: None
 int32_t  ____aesEncryptionStrength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntry, ___known) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntry, ___externalFileAttributes) == 0x14, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntry, ___versionMadeBy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntry, ___name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntry, ___size) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntry, ___compressedSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntry, ___versionToExtract) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntry, ___crc) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntry, ___dateTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntry, ___method) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntry, ___extra) == 0x50, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntry, ___comment) == 0x58, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntry, ___flags) == 0x60, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntry, ___zipFileIndex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntry, ___offset) == 0x70, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntry, ___forceZip64_) == 0x78, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntry, ___cryptoCheckValue_) == 0x79, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntry, ____aesVer) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipEntry, ____aesEncryptionStrength) == 0x80, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::ZipEntry) == 0x88, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
