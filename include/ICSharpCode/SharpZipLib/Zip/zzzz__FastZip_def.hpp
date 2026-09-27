#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/FastZip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__Deflater_CompressionLevel_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__FastZip_Overwrite_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__UseZip64_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEncryptionMethod_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FastZip)
namespace GlobalNamespace {
struct Deflater_CompressionLevel;
}
namespace GlobalNamespace {
struct FastZip_Overwrite;
}
namespace GlobalNamespace {
struct ZipEntryFactory_TimeSetting;
}
namespace ICSharpCode::SharpZipLib::Core {
class DirectoryEventArgs;
}
namespace ICSharpCode::SharpZipLib::Core {
class FileSystemScanner;
}
namespace ICSharpCode::SharpZipLib::Core {
class INameTransform;
}
namespace ICSharpCode::SharpZipLib::Core {
class IScanFilter;
}
namespace ICSharpCode::SharpZipLib::Core {
class NameFilter;
}
namespace ICSharpCode::SharpZipLib::Core {
class ScanEventArgs;
}
namespace ICSharpCode::SharpZipLib::Zip {
class FastZipEvents;
}
namespace ICSharpCode::SharpZipLib::Zip {
class FastZip_ConfirmOverwriteDelegate;
}
namespace ICSharpCode::SharpZipLib::Zip {
class IEntryFactory;
}
namespace ICSharpCode::SharpZipLib::Zip {
struct UseZip64;
}
namespace ICSharpCode::SharpZipLib::Zip {
struct ZipEncryptionMethod;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipEntry;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipFile;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipOutputStream;
}
namespace System::IO {
class FileInfo;
}
namespace System::IO {
class Stream;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct DateTime;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class FastZip;
}
namespace ICSharpCode::SharpZipLib::Zip {
class FastZip_ConfirmOverwriteDelegate;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::FastZip*);
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::FastZip*, "ICSharpCode.SharpZipLib.Zip", "FastZip");
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*, "ICSharpCode.SharpZipLib.Zip", "FastZip/ConfirmOverwriteDelegate");
// Dependencies ICSharpCode.SharpZipLib.Zip.Compression.Deflater::CompressionLevel, ICSharpCode.SharpZipLib.Zip.FastZip::Overwrite, ICSharpCode.SharpZipLib.Zip.UseZip64, ICSharpCode.SharpZipLib.Zip.ZipEncryptionMethod, System.Object
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.FastZip
class CORDL_TYPE FastZip : public ::System::Object {
public:
// Declarations
using Overwrite = ::GlobalNamespace::FastZip_Overwrite;

using ConfirmOverwriteDelegate = ::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate;

 __declspec(property(get=get_CompressionLevel, put=set_CompressionLevel)) ::GlobalNamespace::Deflater_CompressionLevel  CompressionLevel;

 __declspec(property(get=get_CreateEmptyDirectories, put=set_CreateEmptyDirectories)) bool  CreateEmptyDirectories;

 __declspec(property(get=get_EntryEncryptionMethod, put=set_EntryEncryptionMethod)) ::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod  EntryEncryptionMethod;

 __declspec(property(get=get_EntryFactory, put=set_EntryFactory)) ::ICSharpCode::SharpZipLib::Zip::IEntryFactory*  EntryFactory;

 __declspec(property(get=get_NameTransform, put=set_NameTransform)) ::ICSharpCode::SharpZipLib::Core::INameTransform*  NameTransform;

 __declspec(property(get=get_Password, put=set_Password)) ::StringW  Password;

 __declspec(property(get=get_RestoreAttributesOnExtract, put=set_RestoreAttributesOnExtract)) bool  RestoreAttributesOnExtract;

 __declspec(property(get=get_RestoreDateTimeOnExtract, put=set_RestoreDateTimeOnExtract)) bool  RestoreDateTimeOnExtract;

 __declspec(property(get=get_UseZip64, put=set_UseZip64)) ::ICSharpCode::SharpZipLib::Zip::UseZip64  UseZip64;

/// @brief Field <EntryEncryptionMethod>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__EntryEncryptionMethod_k__BackingField, put=__cordl_internal_set__EntryEncryptionMethod_k__BackingField)) ::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod  _EntryEncryptionMethod_k__BackingField;

/// @brief Field buffer_, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer_, put=__cordl_internal_set_buffer_)) ::ArrayW<uint8_t>  buffer_;

/// @brief Field compressionLevel_, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_compressionLevel_, put=__cordl_internal_set_compressionLevel_)) ::GlobalNamespace::Deflater_CompressionLevel  compressionLevel_;

/// @brief Field confirmDelegate_, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_confirmDelegate_, put=__cordl_internal_set_confirmDelegate_)) ::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*  confirmDelegate_;

/// @brief Field continueRunning_, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_continueRunning_, put=__cordl_internal_set_continueRunning_)) bool  continueRunning_;

/// @brief Field createEmptyDirectories_, offset 0x5a, size 0x1 
 __declspec(property(get=__cordl_internal_get_createEmptyDirectories_, put=__cordl_internal_set_createEmptyDirectories_)) bool  createEmptyDirectories_;

/// @brief Field directoryFilter_, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_directoryFilter_, put=__cordl_internal_set_directoryFilter_)) ::ICSharpCode::SharpZipLib::Core::NameFilter*  directoryFilter_;

/// @brief Field entryFactory_, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_entryFactory_, put=__cordl_internal_set_entryFactory_)) ::ICSharpCode::SharpZipLib::Zip::IEntryFactory*  entryFactory_;

/// @brief Field events_, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_events_, put=__cordl_internal_set_events_)) ::ICSharpCode::SharpZipLib::Zip::FastZipEvents*  events_;

/// @brief Field extractNameTransform_, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_extractNameTransform_, put=__cordl_internal_set_extractNameTransform_)) ::ICSharpCode::SharpZipLib::Core::INameTransform*  extractNameTransform_;

/// @brief Field fileFilter_, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_fileFilter_, put=__cordl_internal_set_fileFilter_)) ::ICSharpCode::SharpZipLib::Core::NameFilter*  fileFilter_;

/// @brief Field outputStream_, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputStream_, put=__cordl_internal_set_outputStream_)) ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*  outputStream_;

/// @brief Field overwrite_, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_overwrite_, put=__cordl_internal_set_overwrite_)) ::GlobalNamespace::FastZip_Overwrite  overwrite_;

/// @brief Field password_, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_password_, put=__cordl_internal_set_password_)) ::StringW  password_;

/// @brief Field restoreAttributesOnExtract_, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_restoreAttributesOnExtract_, put=__cordl_internal_set_restoreAttributesOnExtract_)) bool  restoreAttributesOnExtract_;

/// @brief Field restoreDateTimeOnExtract_, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_restoreDateTimeOnExtract_, put=__cordl_internal_set_restoreDateTimeOnExtract_)) bool  restoreDateTimeOnExtract_;

/// @brief Field sourceDirectory_, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceDirectory_, put=__cordl_internal_set_sourceDirectory_)) ::StringW  sourceDirectory_;

/// @brief Field useZip64_, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_useZip64_, put=__cordl_internal_set_useZip64_)) ::ICSharpCode::SharpZipLib::Zip::UseZip64  useZip64_;

/// @brief Field zipFile_, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_zipFile_, put=__cordl_internal_set_zipFile_)) ::ICSharpCode::SharpZipLib::Zip::ZipFile*  zipFile_;

/// @brief Method AddFileContents, addr 0x9f7dc64, size 0x124, virtual false, abstract: false, final false
inline void AddFileContents(::StringW  name, ::System::IO::Stream*  stream) ;

/// @brief Method ConfigureEntryEncryption, addr 0x9f7dc08, size 0x5c, virtual false, abstract: false, final false
inline void ConfigureEntryEncryption(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// @brief Method CreateZip, addr 0x9f7c720, size 0xa4, virtual false, abstract: false, final false
inline void CreateZip(::System::IO::Stream*  outputStream, ::StringW  sourceDirectory, bool  recurse, ::ICSharpCode::SharpZipLib::Core::IScanFilter*  fileFilter, ::ICSharpCode::SharpZipLib::Core::IScanFilter*  directoryFilter, bool  leaveOpen) ;

/// @brief Method CreateZip, addr 0x9f7c154, size 0x8, virtual false, abstract: false, final false
inline void CreateZip(::System::IO::Stream*  outputStream, ::StringW  sourceDirectory, bool  recurse, ::StringW  fileFilter, ::StringW  directoryFilter) ;

/// @brief Method CreateZip, addr 0x9f7c1b0, size 0xa4, virtual false, abstract: false, final false
inline void CreateZip(::System::IO::Stream*  outputStream, ::StringW  sourceDirectory, bool  recurse, ::StringW  fileFilter, ::StringW  directoryFilter, bool  leaveOpen) ;

/// @brief Method CreateZip, addr 0x9f7c254, size 0x474, virtual false, abstract: false, final false
inline void CreateZip(::System::IO::Stream*  outputStream, ::StringW  sourceDirectory, bool  recurse, ::ICSharpCode::SharpZipLib::Core::FileSystemScanner*  scanner, bool  leaveOpen) ;

/// @brief Method CreateZip, addr 0x9f7c6c8, size 0x58, virtual false, abstract: false, final false
inline void CreateZip(::StringW  zipFileName, ::StringW  sourceDirectory, bool  recurse, ::ICSharpCode::SharpZipLib::Core::IScanFilter*  fileFilter, ::ICSharpCode::SharpZipLib::Core::IScanFilter*  directoryFilter) ;

/// @brief Method CreateZip, addr 0x9f7c15c, size 0x54, virtual false, abstract: false, final false
inline void CreateZip(::StringW  zipFileName, ::StringW  sourceDirectory, bool  recurse, ::StringW  fileFilter) ;

/// @brief Method CreateZip, addr 0x9f7c0fc, size 0x58, virtual false, abstract: false, final false
inline void CreateZip(::StringW  zipFileName, ::StringW  sourceDirectory, bool  recurse, ::StringW  fileFilter, ::StringW  directoryFilter) ;

/// @brief Method ExtractEntry, addr 0x9f7d294, size 0x520, virtual false, abstract: false, final false
inline void ExtractEntry(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// @brief Method ExtractFileEntry, addr 0x9f7de2c, size 0x6b8, virtual false, abstract: false, final false
inline void ExtractFileEntry(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry, ::StringW  targetName) ;

/// @brief Method ExtractZip, addr 0x9f7c8dc, size 0x520, virtual false, abstract: false, final false
inline void ExtractZip(::System::IO::Stream*  inputStream, ::StringW  targetDirectory, ::GlobalNamespace::FastZip_Overwrite  overwrite, ::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*  confirmDelegate, ::StringW  fileFilter, ::StringW  directoryFilter, bool  restoreDateTime, bool  isStreamOwner, bool  allowParentTraversal) ;

/// @brief Method ExtractZip, addr 0x9f7c7c4, size 0x7c, virtual false, abstract: false, final false
inline void ExtractZip(::StringW  zipFileName, ::StringW  targetDirectory, ::StringW  fileFilter) ;

/// @brief Method ExtractZip, addr 0x9f7c840, size 0x9c, virtual false, abstract: false, final false
inline void ExtractZip(::StringW  zipFileName, ::StringW  targetDirectory, ::GlobalNamespace::FastZip_Overwrite  overwrite, ::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*  confirmDelegate, ::StringW  fileFilter, ::StringW  directoryFilter, bool  restoreDateTime, bool  allowParentTraversal) ;

/// @brief Method MakeExternalAttributes, addr 0x9f7e6b0, size 0x14, virtual false, abstract: false, final false
static inline int32_t MakeExternalAttributes(::System::IO::FileInfo*  info) ;

/// @brief Method NameIsValid, addr 0x9f7e6c4, size 0x8c, virtual false, abstract: false, final false
static inline bool NameIsValid(::StringW  name) ;

static inline ::ICSharpCode::SharpZipLib::Zip::FastZip* New_ctor() ;

static inline ::ICSharpCode::SharpZipLib::Zip::FastZip* New_ctor(::ICSharpCode::SharpZipLib::Zip::FastZipEvents*  events) ;

static inline ::ICSharpCode::SharpZipLib::Zip::FastZip* New_ctor(::System::DateTime  time) ;

static inline ::ICSharpCode::SharpZipLib::Zip::FastZip* New_ctor(::GlobalNamespace::ZipEntryFactory_TimeSetting  timeSetting) ;

/// @brief Method ProcessDirectory, addr 0x9f7d84c, size 0xc4, virtual false, abstract: false, final false
inline void ProcessDirectory(::System::Object*  sender, ::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*  e) ;

/// @brief Method ProcessFile, addr 0x9f7d910, size 0x2f8, virtual false, abstract: false, final false
inline void ProcessFile(::System::Object*  sender, ::ICSharpCode::SharpZipLib::Core::ScanEventArgs*  e) ;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod const& __cordl_internal_get__EntryEncryptionMethod_k__BackingField() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod& __cordl_internal_get__EntryEncryptionMethod_k__BackingField() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_buffer_() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_buffer_() ;

constexpr ::GlobalNamespace::Deflater_CompressionLevel const& __cordl_internal_get_compressionLevel_() const;

constexpr ::GlobalNamespace::Deflater_CompressionLevel& __cordl_internal_get_compressionLevel_() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate* const& __cordl_internal_get_confirmDelegate_() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*& __cordl_internal_get_confirmDelegate_() ;

constexpr bool const& __cordl_internal_get_continueRunning_() const;

constexpr bool& __cordl_internal_get_continueRunning_() ;

constexpr bool const& __cordl_internal_get_createEmptyDirectories_() const;

constexpr bool& __cordl_internal_get_createEmptyDirectories_() ;

constexpr ::ICSharpCode::SharpZipLib::Core::NameFilter* const& __cordl_internal_get_directoryFilter_() const;

constexpr ::ICSharpCode::SharpZipLib::Core::NameFilter*& __cordl_internal_get_directoryFilter_() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::IEntryFactory* const& __cordl_internal_get_entryFactory_() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::IEntryFactory*& __cordl_internal_get_entryFactory_() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::FastZipEvents* const& __cordl_internal_get_events_() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::FastZipEvents*& __cordl_internal_get_events_() ;

constexpr ::ICSharpCode::SharpZipLib::Core::INameTransform* const& __cordl_internal_get_extractNameTransform_() const;

constexpr ::ICSharpCode::SharpZipLib::Core::INameTransform*& __cordl_internal_get_extractNameTransform_() ;

constexpr ::ICSharpCode::SharpZipLib::Core::NameFilter* const& __cordl_internal_get_fileFilter_() const;

constexpr ::ICSharpCode::SharpZipLib::Core::NameFilter*& __cordl_internal_get_fileFilter_() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream* const& __cordl_internal_get_outputStream_() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*& __cordl_internal_get_outputStream_() ;

constexpr ::GlobalNamespace::FastZip_Overwrite const& __cordl_internal_get_overwrite_() const;

constexpr ::GlobalNamespace::FastZip_Overwrite& __cordl_internal_get_overwrite_() ;

constexpr ::StringW const& __cordl_internal_get_password_() const;

constexpr ::StringW& __cordl_internal_get_password_() ;

constexpr bool const& __cordl_internal_get_restoreAttributesOnExtract_() const;

constexpr bool& __cordl_internal_get_restoreAttributesOnExtract_() ;

constexpr bool const& __cordl_internal_get_restoreDateTimeOnExtract_() const;

constexpr bool& __cordl_internal_get_restoreDateTimeOnExtract_() ;

constexpr ::StringW const& __cordl_internal_get_sourceDirectory_() const;

constexpr ::StringW& __cordl_internal_get_sourceDirectory_() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::UseZip64 const& __cordl_internal_get_useZip64_() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::UseZip64& __cordl_internal_get_useZip64_() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile* const& __cordl_internal_get_zipFile_() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile*& __cordl_internal_get_zipFile_() ;

constexpr void __cordl_internal_set__EntryEncryptionMethod_k__BackingField(::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod  value) ;

constexpr void __cordl_internal_set_buffer_(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_compressionLevel_(::GlobalNamespace::Deflater_CompressionLevel  value) ;

constexpr void __cordl_internal_set_confirmDelegate_(::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*  value) ;

constexpr void __cordl_internal_set_continueRunning_(bool  value) ;

constexpr void __cordl_internal_set_createEmptyDirectories_(bool  value) ;

constexpr void __cordl_internal_set_directoryFilter_(::ICSharpCode::SharpZipLib::Core::NameFilter*  value) ;

constexpr void __cordl_internal_set_entryFactory_(::ICSharpCode::SharpZipLib::Zip::IEntryFactory*  value) ;

constexpr void __cordl_internal_set_events_(::ICSharpCode::SharpZipLib::Zip::FastZipEvents*  value) ;

constexpr void __cordl_internal_set_extractNameTransform_(::ICSharpCode::SharpZipLib::Core::INameTransform*  value) ;

constexpr void __cordl_internal_set_fileFilter_(::ICSharpCode::SharpZipLib::Core::NameFilter*  value) ;

constexpr void __cordl_internal_set_outputStream_(::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*  value) ;

constexpr void __cordl_internal_set_overwrite_(::GlobalNamespace::FastZip_Overwrite  value) ;

constexpr void __cordl_internal_set_password_(::StringW  value) ;

constexpr void __cordl_internal_set_restoreAttributesOnExtract_(bool  value) ;

constexpr void __cordl_internal_set_restoreDateTimeOnExtract_(bool  value) ;

constexpr void __cordl_internal_set_sourceDirectory_(::StringW  value) ;

constexpr void __cordl_internal_set_useZip64_(::ICSharpCode::SharpZipLib::Zip::UseZip64  value) ;

constexpr void __cordl_internal_set_zipFile_(::ICSharpCode::SharpZipLib::Zip::ZipFile*  value) ;

/// @brief Method .ctor, addr 0x9f7bafc, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9f7be38, size 0x98, virtual false, abstract: false, final false
inline void _ctor(::ICSharpCode::SharpZipLib::Zip::FastZipEvents*  events) ;

/// @brief Method .ctor, addr 0x9f7bd38, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::System::DateTime  time) ;

/// @brief Method .ctor, addr 0x9f7bc54, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::ZipEntryFactory_TimeSetting  timeSetting) ;

/// @brief Method get_CompressionLevel, addr 0x9f7c0ec, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Deflater_CompressionLevel get_CompressionLevel() ;

/// @brief Method get_CreateEmptyDirectories, addr 0x9f7bed0, size 0x8, virtual false, abstract: false, final false
inline bool get_CreateEmptyDirectories() ;

/// [CompilerGenerated]
/// @brief Method get_EntryEncryptionMethod, addr 0x9f7bef0, size 0x8, virtual false, abstract: false, final false
inline ::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod get_EntryEncryptionMethod() ;

/// @brief Method get_EntryFactory, addr 0x9f7c050, size 0x8, virtual false, abstract: false, final false
inline ::ICSharpCode::SharpZipLib::Zip::IEntryFactory* get_EntryFactory() ;

/// @brief Method get_NameTransform, addr 0x9f7bf00, size 0xa4, virtual false, abstract: false, final false
inline ::ICSharpCode::SharpZipLib::Core::INameTransform* get_NameTransform() ;

/// @brief Method get_Password, addr 0x9f7bee0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Password() ;

/// @brief Method get_RestoreAttributesOnExtract, addr 0x9f7c0dc, size 0x8, virtual false, abstract: false, final false
inline bool get_RestoreAttributesOnExtract() ;

/// @brief Method get_RestoreDateTimeOnExtract, addr 0x9f7c0cc, size 0x8, virtual false, abstract: false, final false
inline bool get_RestoreDateTimeOnExtract() ;

/// @brief Method get_UseZip64, addr 0x9f7c0bc, size 0x8, virtual false, abstract: false, final false
inline ::ICSharpCode::SharpZipLib::Zip::UseZip64 get_UseZip64() ;

/// @brief Method set_CompressionLevel, addr 0x9f7c0f4, size 0x8, virtual false, abstract: false, final false
inline void set_CompressionLevel(::GlobalNamespace::Deflater_CompressionLevel  value) ;

/// @brief Method set_CreateEmptyDirectories, addr 0x9f7bed8, size 0x8, virtual false, abstract: false, final false
inline void set_CreateEmptyDirectories(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_EntryEncryptionMethod, addr 0x9f7bef8, size 0x8, virtual false, abstract: false, final false
inline void set_EntryEncryptionMethod(::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod  value) ;

/// @brief Method set_EntryFactory, addr 0x9f7c058, size 0x64, virtual false, abstract: false, final false
inline void set_EntryFactory(::ICSharpCode::SharpZipLib::Zip::IEntryFactory*  value) ;

/// @brief Method set_NameTransform, addr 0x9f7bfa4, size 0xac, virtual false, abstract: false, final false
inline void set_NameTransform(::ICSharpCode::SharpZipLib::Core::INameTransform*  value) ;

/// @brief Method set_Password, addr 0x9f7bee8, size 0x8, virtual false, abstract: false, final false
inline void set_Password(::StringW  value) ;

/// @brief Method set_RestoreAttributesOnExtract, addr 0x9f7c0e4, size 0x8, virtual false, abstract: false, final false
inline void set_RestoreAttributesOnExtract(bool  value) ;

/// @brief Method set_RestoreDateTimeOnExtract, addr 0x9f7c0d4, size 0x8, virtual false, abstract: false, final false
inline void set_RestoreDateTimeOnExtract(bool  value) ;

/// @brief Method set_UseZip64, addr 0x9f7c0c4, size 0x8, virtual false, abstract: false, final false
inline void set_UseZip64(::ICSharpCode::SharpZipLib::Zip::UseZip64  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FastZip() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FastZip", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FastZip(FastZip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FastZip", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FastZip(FastZip const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17314};

/// [CompilerGenerated]
/// @brief Field <EntryEncryptionMethod>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::ICSharpCode::SharpZipLib::Zip::ZipEncryptionMethod  ____EntryEncryptionMethod_k__BackingField;

/// @brief Field continueRunning_, offset: 0x14, size: 0x1, def value: None
 bool  ___continueRunning_;

/// @brief Field buffer_, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___buffer_;

/// @brief Field outputStream_, offset: 0x20, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*  ___outputStream_;

/// @brief Field zipFile_, offset: 0x28, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::ZipFile*  ___zipFile_;

/// @brief Field sourceDirectory_, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___sourceDirectory_;

/// @brief Field fileFilter_, offset: 0x38, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Core::NameFilter*  ___fileFilter_;

/// @brief Field directoryFilter_, offset: 0x40, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Core::NameFilter*  ___directoryFilter_;

/// @brief Field overwrite_, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::FastZip_Overwrite  ___overwrite_;

/// @brief Field confirmDelegate_, offset: 0x50, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*  ___confirmDelegate_;

/// @brief Field restoreDateTimeOnExtract_, offset: 0x58, size: 0x1, def value: None
 bool  ___restoreDateTimeOnExtract_;

/// @brief Field restoreAttributesOnExtract_, offset: 0x59, size: 0x1, def value: None
 bool  ___restoreAttributesOnExtract_;

/// @brief Field createEmptyDirectories_, offset: 0x5a, size: 0x1, def value: None
 bool  ___createEmptyDirectories_;

/// @brief Field events_, offset: 0x60, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::FastZipEvents*  ___events_;

/// @brief Field entryFactory_, offset: 0x68, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::IEntryFactory*  ___entryFactory_;

/// @brief Field extractNameTransform_, offset: 0x70, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Core::INameTransform*  ___extractNameTransform_;

/// @brief Field useZip64_, offset: 0x78, size: 0x4, def value: None
 ::ICSharpCode::SharpZipLib::Zip::UseZip64  ___useZip64_;

/// @brief Field compressionLevel_, offset: 0x7c, size: 0x4, def value: None
 ::GlobalNamespace::Deflater_CompressionLevel  ___compressionLevel_;

/// @brief Field password_, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___password_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZip, ____EntryEncryptionMethod_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZip, ___continueRunning_) == 0x14, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZip, ___buffer_) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZip, ___outputStream_) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZip, ___zipFile_) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZip, ___sourceDirectory_) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZip, ___fileFilter_) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZip, ___directoryFilter_) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZip, ___overwrite_) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZip, ___confirmDelegate_) == 0x50, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZip, ___restoreDateTimeOnExtract_) == 0x58, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZip, ___restoreAttributesOnExtract_) == 0x59, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZip, ___createEmptyDirectories_) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZip, ___events_) == 0x60, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZip, ___entryFactory_) == 0x68, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZip, ___extractNameTransform_) == 0x70, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZip, ___useZip64_) == 0x78, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZip, ___compressionLevel_) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::FastZip, ___password_) == 0x80, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::FastZip) == 0x88, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
// Dependencies System.MulticastDelegate
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.FastZip/ConfirmOverwriteDelegate
class CORDL_TYPE FastZip_ConfirmOverwriteDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f7e814, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  fileName, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f7e834, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f7e800, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(::StringW  fileName) ;

static inline ::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f7e750, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FastZip_ConfirmOverwriteDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FastZip_ConfirmOverwriteDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FastZip_ConfirmOverwriteDelegate(FastZip_ConfirmOverwriteDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FastZip_ConfirmOverwriteDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FastZip_ConfirmOverwriteDelegate(FastZip_ConfirmOverwriteDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17313};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate) == 0x80, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
