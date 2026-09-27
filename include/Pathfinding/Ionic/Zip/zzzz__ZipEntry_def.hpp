#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Ionic/Zip/zzzz__EncryptionAlgorithm_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ExtractExistingFileAction_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipEntrySource_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipEntryTimestamp_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipErrorAction_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipOption_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionLevel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZipEntry)
namespace Pathfinding::Ionic::Crc {
class CrcCalculatorStream;
}
namespace Pathfinding::Ionic::Zip {
class CloseDelegate;
}
namespace Pathfinding::Ionic::Zip {
struct CompressionMethod;
}
namespace Pathfinding::Ionic::Zip {
class CountingStream;
}
namespace Pathfinding::Ionic::Zip {
struct EncryptionAlgorithm;
}
namespace Pathfinding::Ionic::Zip {
struct ExtractExistingFileAction;
}
namespace Pathfinding::Ionic::Zip {
class OpenDelegate;
}
namespace Pathfinding::Ionic::Zip {
class SetCompressionCallback;
}
namespace Pathfinding::Ionic::Zip {
class WriteDelegate;
}
namespace Pathfinding::Ionic::Zip {
class ZipContainer;
}
namespace Pathfinding::Ionic::Zip {
class ZipCrypto;
}
namespace Pathfinding::Ionic::Zip {
struct ZipEntrySource;
}
namespace Pathfinding::Ionic::Zip {
class ZipEntry_CopyHelper;
}
namespace Pathfinding::Ionic::Zip {
struct ZipErrorAction;
}
namespace Pathfinding::Ionic::Zip {
class ZipFile;
}
namespace Pathfinding::Ionic::Zip {
struct ZipOption;
}
namespace Pathfinding::Ionic::Zlib {
struct CompressionLevel;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::IO {
class Stream;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System::Text {
class Encoding;
}
namespace System {
struct DateTime;
}
namespace System {
class Exception;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
class ZipEntry;
}
namespace Pathfinding::Ionic::Zip {
class ZipEntry_CopyHelper;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::ZipEntry*);
MARK_REF_T(::Pathfinding::Ionic::Zip::ZipEntry_CopyHelper*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::ZipEntry*, "Pathfinding.Ionic.Zip", "ZipEntry");
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::ZipEntry_CopyHelper*, "Pathfinding.Ionic.Zip", "ZipEntry/CopyHelper");
// [ClassInterface((System.Runtime.InteropServices.ClassInterfaceType)1)]
// [ComVisible(true)]
// [Guid("ebc25cf6-9120-4283-b972-0e5520d00004")]
// Dependencies Pathfinding.Ionic.Zip.EncryptionAlgorithm, Pathfinding.Ionic.Zip.ExtractExistingFileAction, Pathfinding.Ionic.Zip.ZipEntrySource, Pathfinding.Ionic.Zip.ZipEntryTimestamp, Pathfinding.Ionic.Zip.ZipErrorAction, Pathfinding.Ionic.Zip.ZipOption, Pathfinding.Ionic.Zlib.CompressionLevel, System.DateTime, System.Nullable`1<T>, System.Object
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.ZipEntry
class CORDL_TYPE ZipEntry : public ::System::Object {
public:
// Declarations
using CopyHelper = ::Pathfinding::Ionic::Zip::ZipEntry_CopyHelper;

 __declspec(property(put=set_AccessedTime)) ::System::DateTime  AccessedTime;

 __declspec(property(get=get_AlternateEncoding, put=set_AlternateEncoding)) ::System::Text::Encoding*  AlternateEncoding;

 __declspec(property(get=get_AlternateEncodingUsage, put=set_AlternateEncodingUsage)) ::Pathfinding::Ionic::Zip::ZipOption  AlternateEncodingUsage;

 __declspec(property(get=get_ArchiveStream)) ::System::IO::Stream*  ArchiveStream;

 __declspec(property(get=get_AttributesIndicateDirectory)) bool  AttributesIndicateDirectory;

 __declspec(property(get=get_BufferSize)) int32_t  BufferSize;

 __declspec(property(get=get_Comment)) ::StringW  Comment;

 __declspec(property(get=get_CompressedSize)) int64_t  CompressedSize;

 __declspec(property(get=get_CompressionLevel, put=set_CompressionLevel)) ::Pathfinding::Ionic::Zlib::CompressionLevel  CompressionLevel;

 __declspec(property(get=get_CompressionMethod, put=set_CompressionMethod)) ::Pathfinding::Ionic::Zip::CompressionMethod  CompressionMethod;

 __declspec(property(put=set_CreationTime)) ::System::DateTime  CreationTime;

 __declspec(property(put=set_EmitTimesInUnixFormatWhenSaving)) bool  EmitTimesInUnixFormatWhenSaving;

 __declspec(property(put=set_EmitTimesInWindowsFormatWhenSaving)) bool  EmitTimesInWindowsFormatWhenSaving;

 __declspec(property(get=get_Encryption, put=set_Encryption)) ::Pathfinding::Ionic::Zip::EncryptionAlgorithm  Encryption;

 __declspec(property(get=get_ExtractExistingFile, put=set_ExtractExistingFile)) ::Pathfinding::Ionic::Zip::ExtractExistingFileAction  ExtractExistingFile;

 __declspec(property(get=get_FileDataPosition)) int64_t  FileDataPosition;

 __declspec(property(get=get_FileName)) ::StringW  FileName;

 __declspec(property(get=get_IncludedInMostRecentSave)) bool  IncludedInMostRecentSave;

 __declspec(property(get=get_IsDirectory)) bool  IsDirectory;

 __declspec(property(put=set_IsText)) bool  IsText;

 __declspec(property(get=get_LastModified, put=set_LastModified)) ::System::DateTime  LastModified;

 __declspec(property(get=get_LengthOfHeader)) int32_t  LengthOfHeader;

 __declspec(property(get=get_LocalFileName)) ::StringW  LocalFileName;

 __declspec(property(put=set_ModifiedTime)) ::System::DateTime  ModifiedTime;

 __declspec(property(get=get_OutputUsedZip64)) ::System::Nullable_1<bool>  OutputUsedZip64;

 __declspec(property(put=set_Password)) ::StringW  Password;

 __declspec(property(get=get_SetCompression, put=set_SetCompression)) ::Pathfinding::Ionic::Zip::SetCompressionCallback*  SetCompression;

 __declspec(property(get=get_UncompressedSize)) int64_t  UncompressedSize;

 __declspec(property(get=get_UnsupportedAlgorithm)) ::StringW  UnsupportedAlgorithm;

 __declspec(property(get=get_UnsupportedCompressionMethod)) ::StringW  UnsupportedCompressionMethod;

 __declspec(property(get=get_VersionNeeded)) int16_t  VersionNeeded;

 __declspec(property(get=get_ZipErrorAction, put=set_ZipErrorAction)) ::Pathfinding::Ionic::Zip::ZipErrorAction  ZipErrorAction;

/// @brief Field <AlternateEncodingUsage>k__BackingField, offset 0x1c0, size 0x4 
 __declspec(property(get=__cordl_internal_get__AlternateEncodingUsage_k__BackingField, put=__cordl_internal_set__AlternateEncodingUsage_k__BackingField)) ::Pathfinding::Ionic::Zip::ZipOption  _AlternateEncodingUsage_k__BackingField;

/// @brief Field <AlternateEncoding>k__BackingField, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get__AlternateEncoding_k__BackingField, put=__cordl_internal_set__AlternateEncoding_k__BackingField)) ::System::Text::Encoding*  _AlternateEncoding_k__BackingField;

/// @brief Field _Atime, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__Atime, put=__cordl_internal_set__Atime)) ::System::DateTime  _Atime;

/// @brief Field _BitField, offset 0x7a, size 0x2 
 __declspec(property(get=__cordl_internal_get__BitField, put=__cordl_internal_set__BitField)) int16_t  _BitField;

/// @brief Field _CloseDelegate, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get__CloseDelegate, put=__cordl_internal_set__CloseDelegate)) ::Pathfinding::Ionic::Zip::CloseDelegate*  _CloseDelegate;

/// @brief Field _Comment, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__Comment, put=__cordl_internal_set__Comment)) ::StringW  _Comment;

/// @brief Field _CommentBytes, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__CommentBytes, put=__cordl_internal_set__CommentBytes)) ::ArrayW<uint8_t>  _CommentBytes;

/// @brief Field _CompressedFileDataSize, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__CompressedFileDataSize, put=__cordl_internal_set__CompressedFileDataSize)) int64_t  _CompressedFileDataSize;

/// @brief Field _CompressedSize, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__CompressedSize, put=__cordl_internal_set__CompressedSize)) int64_t  _CompressedSize;

/// @brief Field _CompressionLevel, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__CompressionLevel, put=__cordl_internal_set__CompressionLevel)) ::Pathfinding::Ionic::Zlib::CompressionLevel  _CompressionLevel;

/// @brief Field _CompressionMethod, offset 0x7c, size 0x2 
 __declspec(property(get=__cordl_internal_get__CompressionMethod, put=__cordl_internal_set__CompressionMethod)) int16_t  _CompressionMethod;

/// @brief Field _CompressionMethod_FromZipFile, offset 0x7e, size 0x2 
 __declspec(property(get=__cordl_internal_get__CompressionMethod_FromZipFile, put=__cordl_internal_set__CompressionMethod_FromZipFile)) int16_t  _CompressionMethod_FromZipFile;

/// @brief Field _Crc32, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__Crc32, put=__cordl_internal_set__Crc32)) int32_t  _Crc32;

/// @brief Field _Ctime, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__Ctime, put=__cordl_internal_set__Ctime)) ::System::DateTime  _Ctime;

/// @brief Field _Encryption, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Encryption, put=__cordl_internal_set__Encryption)) ::Pathfinding::Ionic::Zip::EncryptionAlgorithm  _Encryption;

/// @brief Field _Encryption_FromZipFile, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get__Encryption_FromZipFile, put=__cordl_internal_set__Encryption_FromZipFile)) ::Pathfinding::Ionic::Zip::EncryptionAlgorithm  _Encryption_FromZipFile;

/// @brief Field _EntryHeader, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__EntryHeader, put=__cordl_internal_set__EntryHeader)) ::ArrayW<uint8_t>  _EntryHeader;

/// @brief Field _ExternalFileAttrs, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__ExternalFileAttrs, put=__cordl_internal_set__ExternalFileAttrs)) int32_t  _ExternalFileAttrs;

/// @brief Field _Extra, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__Extra, put=__cordl_internal_set__Extra)) ::ArrayW<uint8_t>  _Extra;

/// @brief Field <ExtractExistingFile>k__BackingField, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get__ExtractExistingFile_k__BackingField, put=__cordl_internal_set__ExtractExistingFile_k__BackingField)) ::Pathfinding::Ionic::Zip::ExtractExistingFileAction  _ExtractExistingFile_k__BackingField;

/// @brief Field _FileNameInArchive, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__FileNameInArchive, put=__cordl_internal_set__FileNameInArchive)) ::StringW  _FileNameInArchive;

/// @brief Field _InputUsesZip64, offset 0x118, size 0x1 
 __declspec(property(get=__cordl_internal_get__InputUsesZip64, put=__cordl_internal_set__InputUsesZip64)) bool  _InputUsesZip64;

/// @brief Field _InternalFileAttrs, offset 0x12, size 0x2 
 __declspec(property(get=__cordl_internal_get__InternalFileAttrs, put=__cordl_internal_set__InternalFileAttrs)) int16_t  _InternalFileAttrs;

/// @brief Field _IsDirectory, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsDirectory, put=__cordl_internal_set__IsDirectory)) bool  _IsDirectory;

/// @brief Field _IsText, offset 0x188, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsText, put=__cordl_internal_set__IsText)) bool  _IsText;

/// @brief Field _LastModified, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__LastModified, put=__cordl_internal_set__LastModified)) ::System::DateTime  _LastModified;

/// @brief Field _LengthOfHeader, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get__LengthOfHeader, put=__cordl_internal_set__LengthOfHeader)) int32_t  _LengthOfHeader;

/// @brief Field _LengthOfTrailer, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get__LengthOfTrailer, put=__cordl_internal_set__LengthOfTrailer)) int32_t  _LengthOfTrailer;

/// @brief Field _LocalFileName, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__LocalFileName, put=__cordl_internal_set__LocalFileName)) ::StringW  _LocalFileName;

/// @brief Field _Mtime, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Mtime, put=__cordl_internal_set__Mtime)) ::System::DateTime  _Mtime;

/// @brief Field _OpenDelegate, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get__OpenDelegate, put=__cordl_internal_set__OpenDelegate)) ::Pathfinding::Ionic::Zip::OpenDelegate*  _OpenDelegate;

/// @brief Field _OutputUsesZip64, offset 0x178, size 0x10 
 __declspec(property(get=__cordl_internal_get__OutputUsesZip64, put=__cordl_internal_set__OutputUsesZip64)) ::System::Nullable_1<bool>  _OutputUsesZip64;

/// @brief Field _Password, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__Password, put=__cordl_internal_set__Password)) ::StringW  _Password;

/// @brief Field _RelativeOffsetOfLocalHeader, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__RelativeOffsetOfLocalHeader, put=__cordl_internal_set__RelativeOffsetOfLocalHeader)) int64_t  _RelativeOffsetOfLocalHeader;

/// @brief Field <SetCompression>k__BackingField, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get__SetCompression_k__BackingField, put=__cordl_internal_set__SetCompression_k__BackingField)) ::Pathfinding::Ionic::Zip::SetCompressionCallback*  _SetCompression_k__BackingField;

/// @brief Field _Source, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get__Source, put=__cordl_internal_set__Source)) ::Pathfinding::Ionic::Zip::ZipEntrySource  _Source;

/// @brief Field _TimeBlob, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__TimeBlob, put=__cordl_internal_set__TimeBlob)) int32_t  _TimeBlob;

/// @brief Field _TotalEntrySize, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__TotalEntrySize, put=__cordl_internal_set__TotalEntrySize)) int64_t  _TotalEntrySize;

/// @brief Field _TrimVolumeFromFullyQualifiedPaths, offset 0x63, size 0x1 
 __declspec(property(get=__cordl_internal_get__TrimVolumeFromFullyQualifiedPaths, put=__cordl_internal_set__TrimVolumeFromFullyQualifiedPaths)) bool  _TrimVolumeFromFullyQualifiedPaths;

/// @brief Field _UncompressedSize, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__UncompressedSize, put=__cordl_internal_set__UncompressedSize)) int64_t  _UncompressedSize;

/// @brief Field _UnsupportedAlgorithmId, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get__UnsupportedAlgorithmId, put=__cordl_internal_set__UnsupportedAlgorithmId)) uint32_t  _UnsupportedAlgorithmId;

/// @brief Field _VersionMadeBy, offset 0x10, size 0x2 
 __declspec(property(get=__cordl_internal_get__VersionMadeBy, put=__cordl_internal_set__VersionMadeBy)) int16_t  _VersionMadeBy;

/// @brief Field _VersionNeeded, offset 0x78, size 0x2 
 __declspec(property(get=__cordl_internal_get__VersionNeeded, put=__cordl_internal_set__VersionNeeded)) int16_t  _VersionNeeded;

/// @brief Field _WeakEncryptionHeader, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__WeakEncryptionHeader, put=__cordl_internal_set__WeakEncryptionHeader)) ::ArrayW<uint8_t>  _WeakEncryptionHeader;

/// @brief Field _WriteDelegate, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get__WriteDelegate, put=__cordl_internal_set__WriteDelegate)) ::Pathfinding::Ionic::Zip::WriteDelegate*  _WriteDelegate;

/// @brief Field <ZipErrorAction>k__BackingField, offset 0x1ac, size 0x4 
 __declspec(property(get=__cordl_internal_get__ZipErrorAction_k__BackingField, put=__cordl_internal_set__ZipErrorAction_k__BackingField)) ::Pathfinding::Ionic::Zip::ZipErrorAction  _ZipErrorAction_k__BackingField;

/// @brief Field __FileDataPosition, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get___FileDataPosition, put=__cordl_internal_set___FileDataPosition)) int64_t  __FileDataPosition;

/// @brief Field _actualEncoding, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__actualEncoding, put=__cordl_internal_set__actualEncoding)) ::System::Text::Encoding*  _actualEncoding;

/// @brief Field _archiveStream, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__archiveStream, put=__cordl_internal_set__archiveStream)) ::System::IO::Stream*  _archiveStream;

/// @brief Field _commentLength, offset 0x1c, size 0x2 
 __declspec(property(get=__cordl_internal_get__commentLength, put=__cordl_internal_set__commentLength)) int16_t  _commentLength;

/// @brief Field _container, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__container, put=__cordl_internal_set__container)) ::Pathfinding::Ionic::Zip::ZipContainer*  _container;

/// @brief Field _crcCalculated, offset 0xbc, size 0x1 
 __declspec(property(get=__cordl_internal_get__crcCalculated, put=__cordl_internal_set__crcCalculated)) bool  _crcCalculated;

/// @brief Field _diskNumber, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get__diskNumber, put=__cordl_internal_set__diskNumber)) uint32_t  _diskNumber;

/// @brief Field _emitNtfsTimes, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__emitNtfsTimes, put=__cordl_internal_set__emitNtfsTimes)) bool  _emitNtfsTimes;

/// @brief Field _emitUnixTimes, offset 0x62, size 0x1 
 __declspec(property(get=__cordl_internal_get__emitUnixTimes, put=__cordl_internal_set__emitUnixTimes)) bool  _emitUnixTimes;

/// @brief Field _entryRequiresZip64, offset 0x168, size 0x10 
 __declspec(property(get=__cordl_internal_get__entryRequiresZip64, put=__cordl_internal_set__entryRequiresZip64)) ::System::Nullable_1<bool>  _entryRequiresZip64;

/// @brief Field _extraFieldLength, offset 0x1a, size 0x2 
 __declspec(property(get=__cordl_internal_get__extraFieldLength, put=__cordl_internal_set__extraFieldLength)) int16_t  _extraFieldLength;

/// @brief Field _filenameLength, offset 0x18, size 0x2 
 __declspec(property(get=__cordl_internal_get__filenameLength, put=__cordl_internal_set__filenameLength)) int16_t  _filenameLength;

/// @brief Field _future_ROLH, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__future_ROLH, put=__cordl_internal_set__future_ROLH)) int64_t  _future_ROLH;

/// @brief Field _inputDecryptorStream, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputDecryptorStream, put=__cordl_internal_set__inputDecryptorStream)) ::System::IO::Stream*  _inputDecryptorStream;

/// @brief Field _ioOperationCanceled, offset 0x160, size 0x1 
 __declspec(property(get=__cordl_internal_get__ioOperationCanceled, put=__cordl_internal_set__ioOperationCanceled)) bool  _ioOperationCanceled;

/// @brief Field _metadataChanged, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get__metadataChanged, put=__cordl_internal_set__metadataChanged)) bool  _metadataChanged;

/// @brief Field _ntfsTimesAreSet, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__ntfsTimesAreSet, put=__cordl_internal_set__ntfsTimesAreSet)) bool  _ntfsTimesAreSet;

/// @brief Field _outputLock, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputLock, put=__cordl_internal_set__outputLock)) ::System::Object*  _outputLock;

/// @brief Field _presumeZip64, offset 0x161, size 0x1 
 __declspec(property(get=__cordl_internal_get__presumeZip64, put=__cordl_internal_set__presumeZip64)) bool  _presumeZip64;

/// @brief Field _restreamRequiredOnSave, offset 0xd1, size 0x1 
 __declspec(property(get=__cordl_internal_get__restreamRequiredOnSave, put=__cordl_internal_set__restreamRequiredOnSave)) bool  _restreamRequiredOnSave;

/// @brief Field _skippedDuringSave, offset 0xd3, size 0x1 
 __declspec(property(get=__cordl_internal_get__skippedDuringSave, put=__cordl_internal_set__skippedDuringSave)) bool  _skippedDuringSave;

/// @brief Field _sourceIsEncrypted, offset 0xd2, size 0x1 
 __declspec(property(get=__cordl_internal_get__sourceIsEncrypted, put=__cordl_internal_set__sourceIsEncrypted)) bool  _sourceIsEncrypted;

/// @brief Field _sourceStream, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__sourceStream, put=__cordl_internal_set__sourceStream)) ::System::IO::Stream*  _sourceStream;

/// @brief Field _sourceStreamOriginalPosition, offset 0x150, size 0x10 
 __declspec(property(get=__cordl_internal_get__sourceStreamOriginalPosition, put=__cordl_internal_set__sourceStreamOriginalPosition)) ::System::Nullable_1<int64_t>  _sourceStreamOriginalPosition;

/// @brief Field _timestamp, offset 0x18c, size 0x4 
 __declspec(property(get=__cordl_internal_get__timestamp, put=__cordl_internal_set__timestamp)) ::Pathfinding::Ionic::Zip::ZipEntryTimestamp  _timestamp;

/// @brief Field _unixEpoch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__unixEpoch, put=setStaticF__unixEpoch)) ::System::DateTime  _unixEpoch;

/// @brief Field _win32Epoch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__win32Epoch, put=setStaticF__win32Epoch)) ::System::DateTime  _win32Epoch;

/// @brief Field _zeroHour, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__zeroHour, put=setStaticF__zeroHour)) ::System::DateTime  _zeroHour;

/// @brief Field _zipCrypto_forExtract, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__zipCrypto_forExtract, put=__cordl_internal_set__zipCrypto_forExtract)) ::Pathfinding::Ionic::Zip::ZipCrypto*  _zipCrypto_forExtract;

/// @brief Field _zipCrypto_forWrite, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__zipCrypto_forWrite, put=__cordl_internal_set__zipCrypto_forWrite)) ::Pathfinding::Ionic::Zip::ZipCrypto*  _zipCrypto_forWrite;

/// @brief Field ibm437, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ibm437, put=setStaticF_ibm437)) ::System::Text::Encoding*  ibm437;

/// @brief Method CheckExtractExistingFile, addr 0xa6920c8, size 0x1ec, virtual false, abstract: false, final false
inline int32_t CheckExtractExistingFile(::StringW  baseDir, ::StringW  targetFileName) ;

/// @brief Method ConstructExtraField, addr 0xa69499c, size 0x7fc, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ConstructExtraField(bool  forCentralDirectory) ;

/// @brief Method CopyMetaData, addr 0xa6962a8, size 0x84, virtual false, abstract: false, final false
inline void CopyMetaData(::Pathfinding::Ionic::Zip::ZipEntry*  source) ;

/// @brief Method CopyThroughOneEntry, addr 0xa698188, size 0x234, virtual false, abstract: false, final false
inline void CopyThroughOneEntry(::System::IO::Stream*  outStream) ;

/// @brief Method CopyThroughWithNoChange, addr 0xa698a30, size 0x1c0, virtual false, abstract: false, final false
inline void CopyThroughWithNoChange(::System::IO::Stream*  outstream) ;

/// @brief Method CopyThroughWithRecompute, addr 0xa6985e0, size 0x450, virtual false, abstract: false, final false
inline void CopyThroughWithRecompute(::System::IO::Stream*  outstream) ;

/// @brief Method Create, addr 0xa69920c, size 0x498, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zip::ZipEntry* Create(::StringW  nameInArchive, ::Pathfinding::Ionic::Zip::ZipEntrySource  source, ::System::Object*  arg1, ::System::Object*  arg2) ;

/// @brief Method CreateForStream, addr 0xa6991a0, size 0x6c, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zip::ZipEntry* CreateForStream(::StringW  entryName, ::System::IO::Stream*  s) ;

/// @brief Method Extract, addr 0xa690740, size 0x10, virtual false, abstract: false, final false
inline void Extract(::System::IO::Stream*  stream) ;

/// @brief Method ExtractOne, addr 0xa6922b4, size 0x40c, virtual false, abstract: false, final false
inline int32_t ExtractOne(::System::IO::Stream*  output) ;

/// @brief Method FigureCrc32, addr 0xa695f2c, size 0x1cc, virtual false, abstract: false, final false
inline int32_t FigureCrc32() ;

/// @brief Method FinishOutputStream, addr 0xa696e54, size 0x158, virtual false, abstract: false, final false
inline void FinishOutputStream(::System::IO::Stream*  s, ::Pathfinding::Ionic::Zip::CountingStream*  entryCounter, ::System::IO::Stream*  encryptor, ::System::IO::Stream*  compressor, ::Pathfinding::Ionic::Crc::CrcCalculatorStream*  output) ;

/// @brief Method GetEncodedFileNameBytes, addr 0xa6945f0, size 0x3ac, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetEncodedFileNameBytes() ;

/// @brief Method GetExtractDecompressor, addr 0xa6913fc, size 0x84, virtual false, abstract: false, final false
inline ::System::IO::Stream* GetExtractDecompressor(::System::IO::Stream*  input2) ;

/// @brief Method GetExtractDecryptor, addr 0xa691384, size 0x78, virtual false, abstract: false, final false
inline ::System::IO::Stream* GetExtractDecryptor(::System::IO::Stream*  input) ;

/// @brief Method GetLengthOfCryptoHeaderBytes, addr 0xa698bf0, size 0x5c, virtual false, abstract: false, final false
static inline int32_t GetLengthOfCryptoHeaderBytes(::Pathfinding::Ionic::Zip::EncryptionAlgorithm  a) ;

/// @brief Method HandlePK00Prefix, addr 0xa69390c, size 0x94, virtual false, abstract: false, final false
static inline void HandlePK00Prefix(::System::IO::Stream*  s) ;

/// @brief Method HandleUnexpectedDataDescriptor, addr 0xa6939a0, size 0x108, virtual false, abstract: false, final false
static inline void HandleUnexpectedDataDescriptor(::Pathfinding::Ionic::Zip::ZipEntry*  entry) ;

/// @brief Method InternalExtract, addr 0xa690750, size 0x7f4, virtual false, abstract: false, final false
inline void InternalExtract(::StringW  baseDir, ::System::IO::Stream*  outstream, ::StringW  password) ;

/// @brief Method InternalOpenReader, addr 0xa690f44, size 0x174, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Crc::CrcCalculatorStream* InternalOpenReader(::StringW  password) ;

/// @brief Method IsNotValidSig, addr 0xa693568, size 0x14, virtual false, abstract: false, final false
static inline bool IsNotValidSig(int32_t  signature) ;

/// @brief Method IsNotValidZipDirEntrySig, addr 0xa69013c, size 0x14, virtual false, abstract: false, final false
static inline bool IsNotValidZipDirEntrySig(int32_t  signature) ;

/// @brief Method MarkAsDirectory, addr 0xa6904b0, size 0x8c, virtual false, abstract: false, final false
inline void MarkAsDirectory() ;

/// @brief Method MaybeApplyCompression, addr 0xa696bc0, size 0x294, virtual false, abstract: false, final false
inline ::System::IO::Stream* MaybeApplyCompression(::System::IO::Stream*  s, int64_t  streamLength) ;

/// @brief Method MaybeApplyEncryption, addr 0xa696b48, size 0x78, virtual false, abstract: false, final false
inline ::System::IO::Stream* MaybeApplyEncryption(::System::IO::Stream*  s) ;

/// @brief Method MaybeUnsetCompressionMethodForWriting, addr 0xa695418, size 0x110, virtual false, abstract: false, final false
inline void MaybeUnsetCompressionMethodForWriting(int32_t  cycle) ;

static inline ::Pathfinding::Ionic::Zip::ZipEntry* New_ctor() ;

/// @brief Method NormalizeFileName, addr 0xa695198, size 0x1f8, virtual false, abstract: false, final false
inline ::StringW NormalizeFileName() ;

/// @brief Method NotifySaveComplete, addr 0xa69859c, size 0x20, virtual false, abstract: false, final false
inline void NotifySaveComplete() ;

/// @brief Method OnAfterExtract, addr 0xa6916b8, size 0x38, virtual false, abstract: false, final false
inline void OnAfterExtract(::StringW  path) ;

/// @brief Method OnBeforeExtract, addr 0xa69157c, size 0x44, virtual false, abstract: false, final false
inline void OnBeforeExtract(::StringW  path) ;

/// @brief Method OnExtractExisting, addr 0xa6916f0, size 0x38, virtual false, abstract: false, final false
inline void OnExtractExisting(::StringW  path) ;

/// @brief Method OnExtractProgress, addr 0xa691480, size 0x3c, virtual false, abstract: false, final false
inline void OnExtractProgress(int64_t  bytesWritten, int64_t  totalBytesToWrite) ;

/// @brief Method OnWriteBlock, addr 0xa6963e0, size 0x3c, virtual false, abstract: false, final false
inline void OnWriteBlock(int64_t  bytesXferred, int64_t  totalBytesToXfer) ;

/// @brief Method OnZipErrorWhileSaving, addr 0xa697ab8, size 0x38, virtual false, abstract: false, final false
inline void OnZipErrorWhileSaving(::System::Exception*  e) ;

/// @brief Method PostProcessOutput, addr 0xa696fac, size 0x9c8, virtual false, abstract: false, final false
inline void PostProcessOutput(::System::IO::Stream*  s) ;

/// @brief Method PrepOutputStream, addr 0xa697980, size 0x138, virtual false, abstract: false, final false
inline void PrepOutputStream(::System::IO::Stream*  s, int64_t  streamLength, ::by_ref<::Pathfinding::Ionic::Zip::CountingStream*>  outputCounter, ::by_ref<::System::IO::Stream*>  encryptor, ::by_ref<::System::IO::Stream*>  compressor, ::by_ref<::Pathfinding::Ionic::Crc::CrcCalculatorStream*>  output) ;

/// @brief Method PrepSourceStream, addr 0xa6960f8, size 0x1b0, virtual false, abstract: false, final false
inline void PrepSourceStream() ;

/// @brief Method ProcessExtraField, addr 0xa69053c, size 0x204, virtual false, abstract: false, final false
inline int32_t ProcessExtraField(::System::IO::Stream*  s, int16_t  extraFieldLength) ;

/// @brief Method ProcessExtraFieldInfoZipTimes, addr 0xa693d58, size 0x1b4, virtual false, abstract: false, final false
inline int32_t ProcessExtraFieldInfoZipTimes(::ArrayW<uint8_t>  buffer, int32_t  j, int16_t  dataSize, int64_t  posn) ;

/// @brief Method ProcessExtraFieldPkwareStrongEncryption, addr 0xa693fbc, size 0x5c, virtual false, abstract: false, final false
inline int32_t ProcessExtraFieldPkwareStrongEncryption(::ArrayW<uint8_t>  Buffer, int32_t  j) ;

/// @brief Method ProcessExtraFieldUnixTimes, addr 0xa693c9c, size 0xbc, virtual false, abstract: false, final false
inline int32_t ProcessExtraFieldUnixTimes(::ArrayW<uint8_t>  buffer, int32_t  j, int16_t  dataSize, int64_t  posn) ;

/// @brief Method ProcessExtraFieldWindowsTimes, addr 0xa693aa8, size 0x1f4, virtual false, abstract: false, final false
inline int32_t ProcessExtraFieldWindowsTimes(::ArrayW<uint8_t>  buffer, int32_t  j, int16_t  dataSize, int64_t  posn) ;

/// @brief Method ProcessExtraFieldZip64, addr 0xa693f0c, size 0xb0, virtual false, abstract: false, final false
inline int32_t ProcessExtraFieldZip64(::ArrayW<uint8_t>  buffer, int32_t  j, int16_t  dataSize, int64_t  posn) ;

/// @brief Method ReadDirEntry, addr 0xa68f870, size 0x868, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zip::ZipEntry* ReadDirEntry(::Pathfinding::Ionic::Zip::ZipFile*  zf, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  previouslySeen) ;

/// @brief Method ReadEntry, addr 0xa693644, size 0x194, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zip::ZipEntry* ReadEntry(::Pathfinding::Ionic::Zip::ZipContainer*  zc, bool  first) ;

/// @brief Method ReadHeader, addr 0xa692cdc, size 0x88c, virtual false, abstract: false, final false
static inline bool ReadHeader(::Pathfinding::Ionic::Zip::ZipEntry*  ze, ::System::Text::Encoding*  defaultEncoding) ;

/// @brief Method ReadWeakEncryptionHeader, addr 0xa68ec98, size 0xcc, virtual false, abstract: false, final false
static inline int32_t ReadWeakEncryptionHeader(::System::IO::Stream*  s, ::ArrayW<uint8_t>  buffer) ;

/// @brief Method ReallyDelete, addr 0xa6917e0, size 0x8, virtual false, abstract: false, final false
static inline void ReallyDelete(::StringW  fileName) ;

/// @brief Method ResetDirEntry, addr 0xa68f860, size 0x10, virtual false, abstract: false, final false
inline void ResetDirEntry() ;

/// @brief Method SetEntryTimes, addr 0xa698d7c, size 0x314, virtual false, abstract: false, final false
inline void SetEntryTimes(::System::DateTime  created, ::System::DateTime  accessed, ::System::DateTime  modified) ;

/// @brief Method SetFdpLoh, addr 0xa69972c, size 0x2ec, virtual false, abstract: false, final false
inline void SetFdpLoh() ;

/// @brief Method SetInputAndFigureFileLength, addr 0xa6968d4, size 0x274, virtual false, abstract: false, final false
inline int64_t SetInputAndFigureFileLength(::by_ref<::System::IO::Stream*>  input) ;

/// @brief Method SetZip64Flags, addr 0xa695d70, size 0x164, virtual false, abstract: false, final false
inline void SetZip64Flags() ;

/// @brief Method SetupCryptoForExtract, addr 0xa691214, size 0xd8, virtual false, abstract: false, final false
inline void SetupCryptoForExtract(::StringW  password) ;

/// @brief Method StoreRelativeOffset, addr 0xa697974, size 0xc, virtual false, abstract: false, final false
inline void StoreRelativeOffset() ;

/// @brief Method ToString, addr 0xa6996ac, size 0x4c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ValidateCompression, addr 0xa6910b8, size 0xac, virtual false, abstract: false, final false
inline void ValidateCompression() ;

/// @brief Method ValidateEncryption, addr 0xa691164, size 0xb0, virtual false, abstract: false, final false
inline void ValidateEncryption() ;

/// @brief Method ValidateOutput, addr 0xa691e40, size 0x288, virtual false, abstract: false, final false
inline bool ValidateOutput(::StringW  basedir, ::System::IO::Stream*  outstream, ::by_ref<::StringW>  outFileName) ;

/// @brief Method VerifyCrcAfterExtract, addr 0xa6926c0, size 0xc0, virtual false, abstract: false, final false
inline void VerifyCrcAfterExtract(int32_t  actualCrc32) ;

/// @brief Method WantReadAgain, addr 0xa695390, size 0x88, virtual false, abstract: false, final false
inline bool WantReadAgain() ;

/// @brief Method Write, addr 0xa697bf8, size 0x590, virtual false, abstract: false, final false
inline void Write(::System::IO::Stream*  s) ;

/// @brief Method WriteCentralDirectoryEntry, addr 0xa694018, size 0x5d8, virtual false, abstract: false, final false
inline void WriteCentralDirectoryEntry(::System::IO::Stream*  s) ;

/// @brief Method WriteHeader, addr 0xa6955a4, size 0x6e8, virtual false, abstract: false, final false
inline void WriteHeader(::System::IO::Stream*  s, int32_t  cycle) ;

/// @brief Method WriteSecurityMetadata, addr 0xa6983bc, size 0x1e0, virtual false, abstract: false, final false
inline void WriteSecurityMetadata(::System::IO::Stream*  outstream) ;

/// @brief Method WriteStatus, addr 0xa6917e8, size 0x34, virtual false, abstract: false, final false
inline void WriteStatus(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method _CheckRead, addr 0xa6928b8, size 0x64, virtual false, abstract: false, final false
inline void _CheckRead(int32_t  nbytes) ;

/// @brief Method _SetTimes, addr 0xa692780, size 0x4, virtual false, abstract: false, final false
inline void _SetTimes(::StringW  fileOrDirectory, bool  isFile) ;

/// @brief Method _WriteEntryData, addr 0xa6964dc, size 0x3f8, virtual false, abstract: false, final false
inline void _WriteEntryData(::System::IO::Stream*  s) ;

constexpr ::Pathfinding::Ionic::Zip::ZipOption const& __cordl_internal_get__AlternateEncodingUsage_k__BackingField() const;

constexpr ::Pathfinding::Ionic::Zip::ZipOption& __cordl_internal_get__AlternateEncodingUsage_k__BackingField() ;

constexpr ::System::Text::Encoding* const& __cordl_internal_get__AlternateEncoding_k__BackingField() const;

constexpr ::System::Text::Encoding*& __cordl_internal_get__AlternateEncoding_k__BackingField() ;

constexpr ::System::DateTime const& __cordl_internal_get__Atime() const;

constexpr ::System::DateTime& __cordl_internal_get__Atime() ;

constexpr int16_t const& __cordl_internal_get__BitField() const;

constexpr int16_t& __cordl_internal_get__BitField() ;

constexpr ::Pathfinding::Ionic::Zip::CloseDelegate* const& __cordl_internal_get__CloseDelegate() const;

constexpr ::Pathfinding::Ionic::Zip::CloseDelegate*& __cordl_internal_get__CloseDelegate() ;

constexpr ::StringW const& __cordl_internal_get__Comment() const;

constexpr ::StringW& __cordl_internal_get__Comment() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__CommentBytes() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__CommentBytes() ;

constexpr int64_t const& __cordl_internal_get__CompressedFileDataSize() const;

constexpr int64_t& __cordl_internal_get__CompressedFileDataSize() ;

constexpr int64_t const& __cordl_internal_get__CompressedSize() const;

constexpr int64_t& __cordl_internal_get__CompressedSize() ;

constexpr ::Pathfinding::Ionic::Zlib::CompressionLevel const& __cordl_internal_get__CompressionLevel() const;

constexpr ::Pathfinding::Ionic::Zlib::CompressionLevel& __cordl_internal_get__CompressionLevel() ;

constexpr int16_t const& __cordl_internal_get__CompressionMethod() const;

constexpr int16_t& __cordl_internal_get__CompressionMethod() ;

constexpr int16_t const& __cordl_internal_get__CompressionMethod_FromZipFile() const;

constexpr int16_t& __cordl_internal_get__CompressionMethod_FromZipFile() ;

constexpr int32_t const& __cordl_internal_get__Crc32() const;

constexpr int32_t& __cordl_internal_get__Crc32() ;

constexpr ::System::DateTime const& __cordl_internal_get__Ctime() const;

constexpr ::System::DateTime& __cordl_internal_get__Ctime() ;

constexpr ::Pathfinding::Ionic::Zip::EncryptionAlgorithm const& __cordl_internal_get__Encryption() const;

constexpr ::Pathfinding::Ionic::Zip::EncryptionAlgorithm& __cordl_internal_get__Encryption() ;

constexpr ::Pathfinding::Ionic::Zip::EncryptionAlgorithm const& __cordl_internal_get__Encryption_FromZipFile() const;

constexpr ::Pathfinding::Ionic::Zip::EncryptionAlgorithm& __cordl_internal_get__Encryption_FromZipFile() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__EntryHeader() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__EntryHeader() ;

constexpr int32_t const& __cordl_internal_get__ExternalFileAttrs() const;

constexpr int32_t& __cordl_internal_get__ExternalFileAttrs() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__Extra() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__Extra() ;

constexpr ::Pathfinding::Ionic::Zip::ExtractExistingFileAction const& __cordl_internal_get__ExtractExistingFile_k__BackingField() const;

constexpr ::Pathfinding::Ionic::Zip::ExtractExistingFileAction& __cordl_internal_get__ExtractExistingFile_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__FileNameInArchive() const;

constexpr ::StringW& __cordl_internal_get__FileNameInArchive() ;

constexpr bool const& __cordl_internal_get__InputUsesZip64() const;

constexpr bool& __cordl_internal_get__InputUsesZip64() ;

constexpr int16_t const& __cordl_internal_get__InternalFileAttrs() const;

constexpr int16_t& __cordl_internal_get__InternalFileAttrs() ;

constexpr bool const& __cordl_internal_get__IsDirectory() const;

constexpr bool& __cordl_internal_get__IsDirectory() ;

constexpr bool const& __cordl_internal_get__IsText() const;

constexpr bool& __cordl_internal_get__IsText() ;

constexpr ::System::DateTime const& __cordl_internal_get__LastModified() const;

constexpr ::System::DateTime& __cordl_internal_get__LastModified() ;

constexpr int32_t const& __cordl_internal_get__LengthOfHeader() const;

constexpr int32_t& __cordl_internal_get__LengthOfHeader() ;

constexpr int32_t const& __cordl_internal_get__LengthOfTrailer() const;

constexpr int32_t& __cordl_internal_get__LengthOfTrailer() ;

constexpr ::StringW const& __cordl_internal_get__LocalFileName() const;

constexpr ::StringW& __cordl_internal_get__LocalFileName() ;

constexpr ::System::DateTime const& __cordl_internal_get__Mtime() const;

constexpr ::System::DateTime& __cordl_internal_get__Mtime() ;

constexpr ::Pathfinding::Ionic::Zip::OpenDelegate* const& __cordl_internal_get__OpenDelegate() const;

constexpr ::Pathfinding::Ionic::Zip::OpenDelegate*& __cordl_internal_get__OpenDelegate() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__OutputUsesZip64() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__OutputUsesZip64() ;

constexpr ::StringW const& __cordl_internal_get__Password() const;

constexpr ::StringW& __cordl_internal_get__Password() ;

constexpr int64_t const& __cordl_internal_get__RelativeOffsetOfLocalHeader() const;

constexpr int64_t& __cordl_internal_get__RelativeOffsetOfLocalHeader() ;

constexpr ::Pathfinding::Ionic::Zip::SetCompressionCallback* const& __cordl_internal_get__SetCompression_k__BackingField() const;

constexpr ::Pathfinding::Ionic::Zip::SetCompressionCallback*& __cordl_internal_get__SetCompression_k__BackingField() ;

constexpr ::Pathfinding::Ionic::Zip::ZipEntrySource const& __cordl_internal_get__Source() const;

constexpr ::Pathfinding::Ionic::Zip::ZipEntrySource& __cordl_internal_get__Source() ;

constexpr int32_t const& __cordl_internal_get__TimeBlob() const;

constexpr int32_t& __cordl_internal_get__TimeBlob() ;

constexpr int64_t const& __cordl_internal_get__TotalEntrySize() const;

constexpr int64_t& __cordl_internal_get__TotalEntrySize() ;

constexpr bool const& __cordl_internal_get__TrimVolumeFromFullyQualifiedPaths() const;

constexpr bool& __cordl_internal_get__TrimVolumeFromFullyQualifiedPaths() ;

constexpr int64_t const& __cordl_internal_get__UncompressedSize() const;

constexpr int64_t& __cordl_internal_get__UncompressedSize() ;

constexpr uint32_t const& __cordl_internal_get__UnsupportedAlgorithmId() const;

constexpr uint32_t& __cordl_internal_get__UnsupportedAlgorithmId() ;

constexpr int16_t const& __cordl_internal_get__VersionMadeBy() const;

constexpr int16_t& __cordl_internal_get__VersionMadeBy() ;

constexpr int16_t const& __cordl_internal_get__VersionNeeded() const;

constexpr int16_t& __cordl_internal_get__VersionNeeded() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__WeakEncryptionHeader() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__WeakEncryptionHeader() ;

constexpr ::Pathfinding::Ionic::Zip::WriteDelegate* const& __cordl_internal_get__WriteDelegate() const;

constexpr ::Pathfinding::Ionic::Zip::WriteDelegate*& __cordl_internal_get__WriteDelegate() ;

constexpr ::Pathfinding::Ionic::Zip::ZipErrorAction const& __cordl_internal_get__ZipErrorAction_k__BackingField() const;

constexpr ::Pathfinding::Ionic::Zip::ZipErrorAction& __cordl_internal_get__ZipErrorAction_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get___FileDataPosition() const;

constexpr int64_t& __cordl_internal_get___FileDataPosition() ;

constexpr ::System::Text::Encoding* const& __cordl_internal_get__actualEncoding() const;

constexpr ::System::Text::Encoding*& __cordl_internal_get__actualEncoding() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__archiveStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__archiveStream() ;

constexpr int16_t const& __cordl_internal_get__commentLength() const;

constexpr int16_t& __cordl_internal_get__commentLength() ;

constexpr ::Pathfinding::Ionic::Zip::ZipContainer* const& __cordl_internal_get__container() const;

constexpr ::Pathfinding::Ionic::Zip::ZipContainer*& __cordl_internal_get__container() ;

constexpr bool const& __cordl_internal_get__crcCalculated() const;

constexpr bool& __cordl_internal_get__crcCalculated() ;

constexpr uint32_t const& __cordl_internal_get__diskNumber() const;

constexpr uint32_t& __cordl_internal_get__diskNumber() ;

constexpr bool const& __cordl_internal_get__emitNtfsTimes() const;

constexpr bool& __cordl_internal_get__emitNtfsTimes() ;

constexpr bool const& __cordl_internal_get__emitUnixTimes() const;

constexpr bool& __cordl_internal_get__emitUnixTimes() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__entryRequiresZip64() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__entryRequiresZip64() ;

constexpr int16_t const& __cordl_internal_get__extraFieldLength() const;

constexpr int16_t& __cordl_internal_get__extraFieldLength() ;

constexpr int16_t const& __cordl_internal_get__filenameLength() const;

constexpr int16_t& __cordl_internal_get__filenameLength() ;

constexpr int64_t const& __cordl_internal_get__future_ROLH() const;

constexpr int64_t& __cordl_internal_get__future_ROLH() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__inputDecryptorStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__inputDecryptorStream() ;

constexpr bool const& __cordl_internal_get__ioOperationCanceled() const;

constexpr bool& __cordl_internal_get__ioOperationCanceled() ;

constexpr bool const& __cordl_internal_get__metadataChanged() const;

constexpr bool& __cordl_internal_get__metadataChanged() ;

constexpr bool const& __cordl_internal_get__ntfsTimesAreSet() const;

constexpr bool& __cordl_internal_get__ntfsTimesAreSet() ;

constexpr ::System::Object* const& __cordl_internal_get__outputLock() const;

constexpr ::System::Object*& __cordl_internal_get__outputLock() ;

constexpr bool const& __cordl_internal_get__presumeZip64() const;

constexpr bool& __cordl_internal_get__presumeZip64() ;

constexpr bool const& __cordl_internal_get__restreamRequiredOnSave() const;

constexpr bool& __cordl_internal_get__restreamRequiredOnSave() ;

constexpr bool const& __cordl_internal_get__skippedDuringSave() const;

constexpr bool& __cordl_internal_get__skippedDuringSave() ;

constexpr bool const& __cordl_internal_get__sourceIsEncrypted() const;

constexpr bool& __cordl_internal_get__sourceIsEncrypted() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__sourceStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__sourceStream() ;

constexpr ::System::Nullable_1<int64_t> const& __cordl_internal_get__sourceStreamOriginalPosition() const;

constexpr ::System::Nullable_1<int64_t>& __cordl_internal_get__sourceStreamOriginalPosition() ;

constexpr ::Pathfinding::Ionic::Zip::ZipEntryTimestamp const& __cordl_internal_get__timestamp() const;

constexpr ::Pathfinding::Ionic::Zip::ZipEntryTimestamp& __cordl_internal_get__timestamp() ;

constexpr ::Pathfinding::Ionic::Zip::ZipCrypto* const& __cordl_internal_get__zipCrypto_forExtract() const;

constexpr ::Pathfinding::Ionic::Zip::ZipCrypto*& __cordl_internal_get__zipCrypto_forExtract() ;

constexpr ::Pathfinding::Ionic::Zip::ZipCrypto* const& __cordl_internal_get__zipCrypto_forWrite() const;

constexpr ::Pathfinding::Ionic::Zip::ZipCrypto*& __cordl_internal_get__zipCrypto_forWrite() ;

constexpr void __cordl_internal_set__AlternateEncodingUsage_k__BackingField(::Pathfinding::Ionic::Zip::ZipOption  value) ;

constexpr void __cordl_internal_set__AlternateEncoding_k__BackingField(::System::Text::Encoding*  value) ;

constexpr void __cordl_internal_set__Atime(::System::DateTime  value) ;

constexpr void __cordl_internal_set__BitField(int16_t  value) ;

constexpr void __cordl_internal_set__CloseDelegate(::Pathfinding::Ionic::Zip::CloseDelegate*  value) ;

constexpr void __cordl_internal_set__Comment(::StringW  value) ;

constexpr void __cordl_internal_set__CommentBytes(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__CompressedFileDataSize(int64_t  value) ;

constexpr void __cordl_internal_set__CompressedSize(int64_t  value) ;

constexpr void __cordl_internal_set__CompressionLevel(::Pathfinding::Ionic::Zlib::CompressionLevel  value) ;

constexpr void __cordl_internal_set__CompressionMethod(int16_t  value) ;

constexpr void __cordl_internal_set__CompressionMethod_FromZipFile(int16_t  value) ;

constexpr void __cordl_internal_set__Crc32(int32_t  value) ;

constexpr void __cordl_internal_set__Ctime(::System::DateTime  value) ;

constexpr void __cordl_internal_set__Encryption(::Pathfinding::Ionic::Zip::EncryptionAlgorithm  value) ;

constexpr void __cordl_internal_set__Encryption_FromZipFile(::Pathfinding::Ionic::Zip::EncryptionAlgorithm  value) ;

constexpr void __cordl_internal_set__EntryHeader(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__ExternalFileAttrs(int32_t  value) ;

constexpr void __cordl_internal_set__Extra(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__ExtractExistingFile_k__BackingField(::Pathfinding::Ionic::Zip::ExtractExistingFileAction  value) ;

constexpr void __cordl_internal_set__FileNameInArchive(::StringW  value) ;

constexpr void __cordl_internal_set__InputUsesZip64(bool  value) ;

constexpr void __cordl_internal_set__InternalFileAttrs(int16_t  value) ;

constexpr void __cordl_internal_set__IsDirectory(bool  value) ;

constexpr void __cordl_internal_set__IsText(bool  value) ;

constexpr void __cordl_internal_set__LastModified(::System::DateTime  value) ;

constexpr void __cordl_internal_set__LengthOfHeader(int32_t  value) ;

constexpr void __cordl_internal_set__LengthOfTrailer(int32_t  value) ;

constexpr void __cordl_internal_set__LocalFileName(::StringW  value) ;

constexpr void __cordl_internal_set__Mtime(::System::DateTime  value) ;

constexpr void __cordl_internal_set__OpenDelegate(::Pathfinding::Ionic::Zip::OpenDelegate*  value) ;

constexpr void __cordl_internal_set__OutputUsesZip64(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set__Password(::StringW  value) ;

constexpr void __cordl_internal_set__RelativeOffsetOfLocalHeader(int64_t  value) ;

constexpr void __cordl_internal_set__SetCompression_k__BackingField(::Pathfinding::Ionic::Zip::SetCompressionCallback*  value) ;

constexpr void __cordl_internal_set__Source(::Pathfinding::Ionic::Zip::ZipEntrySource  value) ;

constexpr void __cordl_internal_set__TimeBlob(int32_t  value) ;

constexpr void __cordl_internal_set__TotalEntrySize(int64_t  value) ;

constexpr void __cordl_internal_set__TrimVolumeFromFullyQualifiedPaths(bool  value) ;

constexpr void __cordl_internal_set__UncompressedSize(int64_t  value) ;

constexpr void __cordl_internal_set__UnsupportedAlgorithmId(uint32_t  value) ;

constexpr void __cordl_internal_set__VersionMadeBy(int16_t  value) ;

constexpr void __cordl_internal_set__VersionNeeded(int16_t  value) ;

constexpr void __cordl_internal_set__WeakEncryptionHeader(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__WriteDelegate(::Pathfinding::Ionic::Zip::WriteDelegate*  value) ;

constexpr void __cordl_internal_set__ZipErrorAction_k__BackingField(::Pathfinding::Ionic::Zip::ZipErrorAction  value) ;

constexpr void __cordl_internal_set___FileDataPosition(int64_t  value) ;

constexpr void __cordl_internal_set__actualEncoding(::System::Text::Encoding*  value) ;

constexpr void __cordl_internal_set__archiveStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__commentLength(int16_t  value) ;

constexpr void __cordl_internal_set__container(::Pathfinding::Ionic::Zip::ZipContainer*  value) ;

constexpr void __cordl_internal_set__crcCalculated(bool  value) ;

constexpr void __cordl_internal_set__diskNumber(uint32_t  value) ;

constexpr void __cordl_internal_set__emitNtfsTimes(bool  value) ;

constexpr void __cordl_internal_set__emitUnixTimes(bool  value) ;

constexpr void __cordl_internal_set__entryRequiresZip64(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set__extraFieldLength(int16_t  value) ;

constexpr void __cordl_internal_set__filenameLength(int16_t  value) ;

constexpr void __cordl_internal_set__future_ROLH(int64_t  value) ;

constexpr void __cordl_internal_set__inputDecryptorStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__ioOperationCanceled(bool  value) ;

constexpr void __cordl_internal_set__metadataChanged(bool  value) ;

constexpr void __cordl_internal_set__ntfsTimesAreSet(bool  value) ;

constexpr void __cordl_internal_set__outputLock(::System::Object*  value) ;

constexpr void __cordl_internal_set__presumeZip64(bool  value) ;

constexpr void __cordl_internal_set__restreamRequiredOnSave(bool  value) ;

constexpr void __cordl_internal_set__skippedDuringSave(bool  value) ;

constexpr void __cordl_internal_set__sourceIsEncrypted(bool  value) ;

constexpr void __cordl_internal_set__sourceStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__sourceStreamOriginalPosition(::System::Nullable_1<int64_t>  value) ;

constexpr void __cordl_internal_set__timestamp(::Pathfinding::Ionic::Zip::ZipEntryTimestamp  value) ;

constexpr void __cordl_internal_set__zipCrypto_forExtract(::Pathfinding::Ionic::Zip::ZipCrypto*  value) ;

constexpr void __cordl_internal_set__zipCrypto_forWrite(::Pathfinding::Ionic::Zip::ZipCrypto*  value) ;

/// @brief Method .ctor, addr 0xa68f674, size 0xb4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::DateTime getStaticF__unixEpoch() ;

static inline ::System::DateTime getStaticF__win32Epoch() ;

static inline ::System::DateTime getStaticF__zeroHour() ;

static inline ::System::Text::Encoding* getStaticF_ibm437() ;

/// [CompilerGenerated]
/// @brief Method get_AlternateEncoding, addr 0xa699178, size 0x8, virtual false, abstract: false, final false
inline ::System::Text::Encoding* get_AlternateEncoding() ;

/// [CompilerGenerated]
/// @brief Method get_AlternateEncodingUsage, addr 0xa699190, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::ZipOption get_AlternateEncodingUsage() ;

/// @brief Method get_ArchiveStream, addr 0xa6912ec, size 0x70, virtual false, abstract: false, final false
inline ::System::IO::Stream* get_ArchiveStream() ;

/// @brief Method get_AttributesIndicateDirectory, addr 0xa68f844, size 0x1c, virtual false, abstract: false, final false
inline bool get_AttributesIndicateDirectory() ;

/// @brief Method get_BufferSize, addr 0xa69291c, size 0x18, virtual false, abstract: false, final false
inline int32_t get_BufferSize() ;

/// @brief Method get_Comment, addr 0xa6990e4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Comment() ;

/// @brief Method get_CompressedSize, addr 0xa699110, size 0x8, virtual false, abstract: false, final false
inline int64_t get_CompressedSize() ;

/// @brief Method get_CompressionLevel, addr 0xa699108, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zlib::CompressionLevel get_CompressionLevel() ;

/// @brief Method get_CompressionMethod, addr 0xa6990f4, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::CompressionMethod get_CompressionMethod() ;

/// @brief Method get_Encryption, addr 0xa699128, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::EncryptionAlgorithm get_Encryption() ;

/// [CompilerGenerated]
/// @brief Method get_ExtractExistingFile, addr 0xa699130, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::ExtractExistingFileAction get_ExtractExistingFile() ;

/// @brief Method get_FileDataPosition, addr 0xa69135c, size 0x28, virtual false, abstract: false, final false
inline int64_t get_FileDataPosition() ;

/// @brief Method get_FileName, addr 0xa6990d4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_FileName() ;

/// @brief Method get_IncludedInMostRecentSave, addr 0xa699150, size 0x10, virtual false, abstract: false, final false
inline bool get_IncludedInMostRecentSave() ;

/// @brief Method get_IsDirectory, addr 0xa699120, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDirectory() ;

/// @brief Method get_LastModified, addr 0xa695ed4, size 0x58, virtual false, abstract: false, final false
inline ::System::DateTime get_LastModified() ;

/// @brief Method get_LengthOfHeader, addr 0xa6985bc, size 0x24, virtual false, abstract: false, final false
inline int32_t get_LengthOfHeader() ;

/// @brief Method get_LocalFileName, addr 0xa6990cc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_LocalFileName() ;

/// @brief Method get_OutputUsedZip64, addr 0xa6990ec, size 0x8, virtual false, abstract: false, final false
inline ::System::Nullable_1<bool> get_OutputUsedZip64() ;

/// [CompilerGenerated]
/// @brief Method get_SetCompression, addr 0xa699160, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::SetCompressionCallback* get_SetCompression() ;

/// @brief Method get_UncompressedSize, addr 0xa699118, size 0x8, virtual false, abstract: false, final false
inline int64_t get_UncompressedSize() ;

/// @brief Method get_UnsupportedAlgorithm, addr 0xa692934, size 0x224, virtual false, abstract: false, final false
inline ::StringW get_UnsupportedAlgorithm() ;

/// @brief Method get_UnsupportedCompressionMethod, addr 0xa692b58, size 0x184, virtual false, abstract: false, final false
inline ::StringW get_UnsupportedCompressionMethod() ;

/// @brief Method get_VersionNeeded, addr 0xa6990dc, size 0x8, virtual false, abstract: false, final false
inline int16_t get_VersionNeeded() ;

/// [CompilerGenerated]
/// @brief Method get_ZipErrorAction, addr 0xa699140, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::ZipErrorAction get_ZipErrorAction() ;

static inline void setStaticF__unixEpoch(::System::DateTime  value) ;

static inline void setStaticF__win32Epoch(::System::DateTime  value) ;

static inline void setStaticF__zeroHour(::System::DateTime  value) ;

static inline void setStaticF_ibm437(::System::Text::Encoding*  value) ;

/// @brief Method set_AccessedTime, addr 0xa699090, size 0x14, virtual false, abstract: false, final false
inline void set_AccessedTime(::System::DateTime  value) ;

/// [CompilerGenerated]
/// @brief Method set_AlternateEncoding, addr 0xa699180, size 0x10, virtual false, abstract: false, final false
inline void set_AlternateEncoding(::System::Text::Encoding*  value) ;

/// [CompilerGenerated]
/// @brief Method set_AlternateEncodingUsage, addr 0xa699198, size 0x8, virtual false, abstract: false, final false
inline void set_AlternateEncodingUsage(::Pathfinding::Ionic::Zip::ZipOption  value) ;

/// @brief Method set_CompressionLevel, addr 0xa695528, size 0x7c, virtual false, abstract: false, final false
inline void set_CompressionLevel(::Pathfinding::Ionic::Zlib::CompressionLevel  value) ;

/// @brief Method set_CompressionMethod, addr 0xa69632c, size 0xb4, virtual false, abstract: false, final false
inline void set_CompressionMethod(::Pathfinding::Ionic::Zip::CompressionMethod  value) ;

/// @brief Method set_CreationTime, addr 0xa6990a4, size 0x8, virtual false, abstract: false, final false
inline void set_CreationTime(::System::DateTime  value) ;

/// @brief Method set_EmitTimesInUnixFormatWhenSaving, addr 0xa6990bc, size 0x10, virtual false, abstract: false, final false
inline void set_EmitTimesInUnixFormatWhenSaving(bool  value) ;

/// @brief Method set_EmitTimesInWindowsFormatWhenSaving, addr 0xa6990ac, size 0x10, virtual false, abstract: false, final false
inline void set_EmitTimesInWindowsFormatWhenSaving(bool  value) ;

/// @brief Method set_Encryption, addr 0xa695c8c, size 0x8c, virtual false, abstract: false, final false
inline void set_Encryption(::Pathfinding::Ionic::Zip::EncryptionAlgorithm  value) ;

/// [CompilerGenerated]
/// @brief Method set_ExtractExistingFile, addr 0xa699138, size 0x8, virtual false, abstract: false, final false
inline void set_ExtractExistingFile(::Pathfinding::Ionic::Zip::ExtractExistingFileAction  value) ;

/// @brief Method set_IsText, addr 0xa6996a4, size 0x8, virtual false, abstract: false, final false
inline void set_IsText(bool  value) ;

/// @brief Method set_LastModified, addr 0xa698c4c, size 0x120, virtual false, abstract: false, final false
inline void set_LastModified(::System::DateTime  value) ;

/// @brief Method set_ModifiedTime, addr 0xa698d6c, size 0x10, virtual false, abstract: false, final false
inline void set_ModifiedTime(::System::DateTime  value) ;

/// @brief Method set_Password, addr 0xa695d18, size 0x58, virtual false, abstract: false, final false
inline void set_Password(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_SetCompression, addr 0xa699168, size 0x10, virtual false, abstract: false, final false
inline void set_SetCompression(::Pathfinding::Ionic::Zip::SetCompressionCallback*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ZipErrorAction, addr 0xa699148, size 0x8, virtual false, abstract: false, final false
inline void set_ZipErrorAction(::Pathfinding::Ionic::Zip::ZipErrorAction  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28161};

/// @brief Field _VersionMadeBy, offset: 0x10, size: 0x2, def value: None
 int16_t  ____VersionMadeBy;

/// @brief Field _InternalFileAttrs, offset: 0x12, size: 0x2, def value: None
 int16_t  ____InternalFileAttrs;

/// @brief Field _ExternalFileAttrs, offset: 0x14, size: 0x4, def value: None
 int32_t  ____ExternalFileAttrs;

/// @brief Field _filenameLength, offset: 0x18, size: 0x2, def value: None
 int16_t  ____filenameLength;

/// @brief Field _extraFieldLength, offset: 0x1a, size: 0x2, def value: None
 int16_t  ____extraFieldLength;

/// @brief Field _commentLength, offset: 0x1c, size: 0x2, def value: None
 int16_t  ____commentLength;

/// @brief Field _inputDecryptorStream, offset: 0x20, size: 0x8, def value: None
 ::System::IO::Stream*  ____inputDecryptorStream;

/// @brief Field _outputLock, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  ____outputLock;

/// @brief Field _zipCrypto_forExtract, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zip::ZipCrypto*  ____zipCrypto_forExtract;

/// @brief Field _zipCrypto_forWrite, offset: 0x38, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zip::ZipCrypto*  ____zipCrypto_forWrite;

/// @brief Field _LastModified, offset: 0x40, size: 0x8, def value: None
 ::System::DateTime  ____LastModified;

/// @brief Field _Mtime, offset: 0x48, size: 0x8, def value: None
 ::System::DateTime  ____Mtime;

/// @brief Field _Atime, offset: 0x50, size: 0x8, def value: None
 ::System::DateTime  ____Atime;

/// @brief Field _Ctime, offset: 0x58, size: 0x8, def value: None
 ::System::DateTime  ____Ctime;

/// @brief Field _ntfsTimesAreSet, offset: 0x60, size: 0x1, def value: None
 bool  ____ntfsTimesAreSet;

/// @brief Field _emitNtfsTimes, offset: 0x61, size: 0x1, def value: None
 bool  ____emitNtfsTimes;

/// @brief Field _emitUnixTimes, offset: 0x62, size: 0x1, def value: None
 bool  ____emitUnixTimes;

/// @brief Field _TrimVolumeFromFullyQualifiedPaths, offset: 0x63, size: 0x1, def value: None
 bool  ____TrimVolumeFromFullyQualifiedPaths;

/// @brief Field _LocalFileName, offset: 0x68, size: 0x8, def value: None
 ::StringW  ____LocalFileName;

/// @brief Field _FileNameInArchive, offset: 0x70, size: 0x8, def value: None
 ::StringW  ____FileNameInArchive;

/// @brief Field _VersionNeeded, offset: 0x78, size: 0x2, def value: None
 int16_t  ____VersionNeeded;

/// @brief Field _BitField, offset: 0x7a, size: 0x2, def value: None
 int16_t  ____BitField;

/// @brief Field _CompressionMethod, offset: 0x7c, size: 0x2, def value: None
 int16_t  ____CompressionMethod;

/// @brief Field _CompressionMethod_FromZipFile, offset: 0x7e, size: 0x2, def value: None
 int16_t  ____CompressionMethod_FromZipFile;

/// @brief Field _CompressionLevel, offset: 0x80, size: 0x4, def value: None
 ::Pathfinding::Ionic::Zlib::CompressionLevel  ____CompressionLevel;

/// @brief Field _Comment, offset: 0x88, size: 0x8, def value: None
 ::StringW  ____Comment;

/// @brief Field _IsDirectory, offset: 0x90, size: 0x1, def value: None
 bool  ____IsDirectory;

/// @brief Field _CommentBytes, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____CommentBytes;

/// @brief Field _CompressedSize, offset: 0xa0, size: 0x8, def value: None
 int64_t  ____CompressedSize;

/// @brief Field _CompressedFileDataSize, offset: 0xa8, size: 0x8, def value: None
 int64_t  ____CompressedFileDataSize;

/// @brief Field _UncompressedSize, offset: 0xb0, size: 0x8, def value: None
 int64_t  ____UncompressedSize;

/// @brief Field _TimeBlob, offset: 0xb8, size: 0x4, def value: None
 int32_t  ____TimeBlob;

/// @brief Field _crcCalculated, offset: 0xbc, size: 0x1, def value: None
 bool  ____crcCalculated;

/// @brief Field _Crc32, offset: 0xc0, size: 0x4, def value: None
 int32_t  ____Crc32;

/// @brief Field _Extra, offset: 0xc8, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____Extra;

/// @brief Field _metadataChanged, offset: 0xd0, size: 0x1, def value: None
 bool  ____metadataChanged;

/// @brief Field _restreamRequiredOnSave, offset: 0xd1, size: 0x1, def value: None
 bool  ____restreamRequiredOnSave;

/// @brief Field _sourceIsEncrypted, offset: 0xd2, size: 0x1, def value: None
 bool  ____sourceIsEncrypted;

/// @brief Field _skippedDuringSave, offset: 0xd3, size: 0x1, def value: None
 bool  ____skippedDuringSave;

/// @brief Field _diskNumber, offset: 0xd4, size: 0x4, def value: None
 uint32_t  ____diskNumber;

/// @brief Field _actualEncoding, offset: 0xd8, size: 0x8, def value: None
 ::System::Text::Encoding*  ____actualEncoding;

/// @brief Field _container, offset: 0xe0, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zip::ZipContainer*  ____container;

/// @brief Field __FileDataPosition, offset: 0xe8, size: 0x8, def value: None
 int64_t  _____FileDataPosition;

/// @brief Field _EntryHeader, offset: 0xf0, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____EntryHeader;

/// @brief Field _RelativeOffsetOfLocalHeader, offset: 0xf8, size: 0x8, def value: None
 int64_t  ____RelativeOffsetOfLocalHeader;

/// @brief Field _future_ROLH, offset: 0x100, size: 0x8, def value: None
 int64_t  ____future_ROLH;

/// @brief Field _TotalEntrySize, offset: 0x108, size: 0x8, def value: None
 int64_t  ____TotalEntrySize;

/// @brief Field _LengthOfHeader, offset: 0x110, size: 0x4, def value: None
 int32_t  ____LengthOfHeader;

/// @brief Field _LengthOfTrailer, offset: 0x114, size: 0x4, def value: None
 int32_t  ____LengthOfTrailer;

/// @brief Field _InputUsesZip64, offset: 0x118, size: 0x1, def value: None
 bool  ____InputUsesZip64;

/// @brief Field _UnsupportedAlgorithmId, offset: 0x11c, size: 0x4, def value: None
 uint32_t  ____UnsupportedAlgorithmId;

/// @brief Field _Password, offset: 0x120, size: 0x8, def value: None
 ::StringW  ____Password;

/// @brief Field _Source, offset: 0x128, size: 0x4, def value: None
 ::Pathfinding::Ionic::Zip::ZipEntrySource  ____Source;

/// @brief Field _Encryption, offset: 0x12c, size: 0x4, def value: None
 ::Pathfinding::Ionic::Zip::EncryptionAlgorithm  ____Encryption;

/// @brief Field _Encryption_FromZipFile, offset: 0x130, size: 0x4, def value: None
 ::Pathfinding::Ionic::Zip::EncryptionAlgorithm  ____Encryption_FromZipFile;

/// @brief Field _WeakEncryptionHeader, offset: 0x138, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____WeakEncryptionHeader;

/// @brief Field _archiveStream, offset: 0x140, size: 0x8, def value: None
 ::System::IO::Stream*  ____archiveStream;

/// @brief Field _sourceStream, offset: 0x148, size: 0x8, def value: None
 ::System::IO::Stream*  ____sourceStream;

/// @brief Field _sourceStreamOriginalPosition, offset: 0x150, size: 0x10, def value: None
 ::System::Nullable_1<int64_t>  ____sourceStreamOriginalPosition;

/// @brief Field _ioOperationCanceled, offset: 0x160, size: 0x1, def value: None
 bool  ____ioOperationCanceled;

/// @brief Field _presumeZip64, offset: 0x161, size: 0x1, def value: None
 bool  ____presumeZip64;

/// @brief Field _entryRequiresZip64, offset: 0x168, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ____entryRequiresZip64;

/// @brief Field _OutputUsesZip64, offset: 0x178, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ____OutputUsesZip64;

/// @brief Field _IsText, offset: 0x188, size: 0x1, def value: None
 bool  ____IsText;

/// @brief Field _timestamp, offset: 0x18c, size: 0x4, def value: None
 ::Pathfinding::Ionic::Zip::ZipEntryTimestamp  ____timestamp;

/// @brief Field _WriteDelegate, offset: 0x190, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zip::WriteDelegate*  ____WriteDelegate;

/// @brief Field _OpenDelegate, offset: 0x198, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zip::OpenDelegate*  ____OpenDelegate;

/// @brief Field _CloseDelegate, offset: 0x1a0, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zip::CloseDelegate*  ____CloseDelegate;

/// [CompilerGenerated]
/// @brief Field <ExtractExistingFile>k__BackingField, offset: 0x1a8, size: 0x4, def value: None
 ::Pathfinding::Ionic::Zip::ExtractExistingFileAction  ____ExtractExistingFile_k__BackingField;

/// @brief Size padding 0x1a8 - 0x1c8 = 0x20, packed as 0x20
 uint8_t  _cordl_size_padding[0x20];

/// [CompilerGenerated]
/// @brief Field <ZipErrorAction>k__BackingField, offset: 0x1ac, size: 0x4, def value: None
 ::Pathfinding::Ionic::Zip::ZipErrorAction  ____ZipErrorAction_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SetCompression>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zip::SetCompressionCallback*  ____SetCompression_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AlternateEncoding>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
 ::System::Text::Encoding*  ____AlternateEncoding_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AlternateEncodingUsage>k__BackingField, offset: 0x1c0, size: 0x4, def value: None
 ::Pathfinding::Ionic::Zip::ZipOption  ____AlternateEncodingUsage_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____VersionMadeBy) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____InternalFileAttrs) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____ExternalFileAttrs) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____filenameLength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____extraFieldLength) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____commentLength) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____inputDecryptorStream) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____outputLock) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____zipCrypto_forExtract) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____zipCrypto_forWrite) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____LastModified) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____Mtime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____Atime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____Ctime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____ntfsTimesAreSet) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____emitNtfsTimes) == 0x61, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____emitUnixTimes) == 0x62, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____TrimVolumeFromFullyQualifiedPaths) == 0x63, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____LocalFileName) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____FileNameInArchive) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____VersionNeeded) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____BitField) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____CompressionMethod) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____CompressionMethod_FromZipFile) == 0x7e, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____CompressionLevel) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____Comment) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____IsDirectory) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____CommentBytes) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____CompressedSize) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____CompressedFileDataSize) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____UncompressedSize) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____TimeBlob) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____crcCalculated) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____Crc32) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____Extra) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____metadataChanged) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____restreamRequiredOnSave) == 0xd1, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____sourceIsEncrypted) == 0xd2, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____skippedDuringSave) == 0xd3, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____diskNumber) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____actualEncoding) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____container) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, _____FileDataPosition) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____EntryHeader) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____RelativeOffsetOfLocalHeader) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____future_ROLH) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____TotalEntrySize) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____LengthOfHeader) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____LengthOfTrailer) == 0x114, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____InputUsesZip64) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____UnsupportedAlgorithmId) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____Password) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____Source) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____Encryption) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____Encryption_FromZipFile) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____WeakEncryptionHeader) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____archiveStream) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____sourceStream) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____sourceStreamOriginalPosition) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____ioOperationCanceled) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____presumeZip64) == 0x161, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____entryRequiresZip64) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____OutputUsesZip64) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____IsText) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____timestamp) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____WriteDelegate) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____OpenDelegate) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____CloseDelegate) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____ExtractExistingFile_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____ZipErrorAction_k__BackingField) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____SetCompression_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____AlternateEncoding_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipEntry, ____AlternateEncodingUsage_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zip::ZipEntry) == 0x1a8, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
// Dependencies System.Object
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.ZipEntry/CopyHelper
class CORDL_TYPE ZipEntry_CopyHelper : public ::System::Object {
public:
// Declarations
/// @brief Field callCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_callCount, put=setStaticF_callCount)) int32_t  callCount;

/// @brief Field re, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_re, put=setStaticF_re)) ::System::Text::RegularExpressions::Regex*  re;

/// @brief Method AppendCopyToFileName, addr 0xa690150, size 0x360, virtual false, abstract: false, final false
static inline ::StringW AppendCopyToFileName(::StringW  f) ;

static inline int32_t getStaticF_callCount() ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF_re() ;

static inline void setStaticF_callCount(int32_t  value) ;

static inline void setStaticF_re(::System::Text::RegularExpressions::Regex*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipEntry_CopyHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipEntry_CopyHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipEntry_CopyHelper(ZipEntry_CopyHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipEntry_CopyHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipEntry_CopyHelper(ZipEntry_CopyHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28160};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Ionic::Zip::ZipEntry_CopyHelper) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
