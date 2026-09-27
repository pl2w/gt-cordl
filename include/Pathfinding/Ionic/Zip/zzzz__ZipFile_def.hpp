#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipFile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Ionic/Zip/zzzz__CompressionMethod_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__EncryptionAlgorithm_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ExtractExistingFileAction_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__Zip64Option_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipErrorAction_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipOption_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionLevel_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionStrategy_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary`2_ValueCollection_Enumerator_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZipFile)
namespace Pathfinding::Ionic::Zip {
class AddProgressEventArgs;
}
namespace Pathfinding::Ionic::Zip {
struct CompressionMethod;
}
namespace Pathfinding::Ionic::Zip {
struct EncryptionAlgorithm;
}
namespace Pathfinding::Ionic::Zip {
struct ExtractExistingFileAction;
}
namespace Pathfinding::Ionic::Zip {
class ExtractProgressEventArgs;
}
namespace Pathfinding::Ionic::Zip {
class ReadProgressEventArgs;
}
namespace Pathfinding::Ionic::Zip {
class SaveProgressEventArgs;
}
namespace Pathfinding::Ionic::Zip {
class SetCompressionCallback;
}
namespace Pathfinding::Ionic::Zip {
struct Zip64Option;
}
namespace Pathfinding::Ionic::Zip {
class ZipEntry;
}
namespace Pathfinding::Ionic::Zip {
struct ZipErrorAction;
}
namespace Pathfinding::Ionic::Zip {
class ZipErrorEventArgs;
}
namespace Pathfinding::Ionic::Zip {
class ZipFile__GetEnumerator_c__Iterator0;
}
namespace Pathfinding::Ionic::Zip {
struct ZipOption;
}
namespace Pathfinding::Ionic::Zip {
struct ZipProgressEventType;
}
namespace Pathfinding::Ionic::Zlib {
struct CompressionLevel;
}
namespace Pathfinding::Ionic::Zlib {
struct CompressionStrategy;
}
namespace Pathfinding::Ionic::Zlib {
class ParallelDeflateOutputStream;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
class TextWriter;
}
namespace System::Text {
class Encoding;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System {
class Exception;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
class ZipFile;
}
namespace Pathfinding::Ionic::Zip {
class ZipFile__GetEnumerator_c__Iterator0;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::ZipFile*);
MARK_REF_T(::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::ZipFile*, "Pathfinding.Ionic.Zip", "ZipFile");
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0*, "Pathfinding.Ionic.Zip", "ZipFile/<GetEnumerator>c__Iterator0");
// [Guid("ebc25cf6-9120-4283-b972-0e5520d00005")]
// [DefaultMember("Item")]
// [ClassInterface((System.Runtime.InteropServices.ClassInterfaceType)1)]
// [ComVisible(true)]
// Dependencies Pathfinding.Ionic.Zip.CompressionMethod, Pathfinding.Ionic.Zip.EncryptionAlgorithm, Pathfinding.Ionic.Zip.ExtractExistingFileAction, Pathfinding.Ionic.Zip.Zip64Option, Pathfinding.Ionic.Zip.ZipErrorAction, Pathfinding.Ionic.Zip.ZipOption, Pathfinding.Ionic.Zlib.CompressionLevel, Pathfinding.Ionic.Zlib.CompressionStrategy, System.Nullable`1<T>, System.Object
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.ZipFile
class CORDL_TYPE ZipFile : public ::System::Object {
public:
// Declarations
using _GetEnumerator_c__Iterator0 = ::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0;

 __declspec(property(put=set_AddDirectoryWillTraverseReparsePoints)) bool  AddDirectoryWillTraverseReparsePoints;

/// @brief Field AddProgress, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_AddProgress, put=__cordl_internal_set_AddProgress)) ::System::EventHandler_1<::Pathfinding::Ionic::Zip::AddProgressEventArgs*>*  AddProgress;

 __declspec(property(get=get_AlternateEncoding, put=set_AlternateEncoding)) ::System::Text::Encoding*  AlternateEncoding;

 __declspec(property(get=get_AlternateEncodingUsage, put=set_AlternateEncodingUsage)) ::Pathfinding::Ionic::Zip::ZipOption  AlternateEncodingUsage;

 __declspec(property(get=get_ArchiveNameForEvent)) ::StringW  ArchiveNameForEvent;

 __declspec(property(get=get_BufferSize)) int32_t  BufferSize;

/// @brief Field BufferSizeDefault, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_BufferSizeDefault, put=setStaticF_BufferSizeDefault)) int32_t  BufferSizeDefault;

 __declspec(property(get=get_CaseSensitiveRetrieval)) bool  CaseSensitiveRetrieval;

 __declspec(property(get=get_CodecBufferSize)) int32_t  CodecBufferSize;

 __declspec(property(get=get_Comment, put=set_Comment)) ::StringW  Comment;

 __declspec(property(get=get_CompressionLevel, put=set_CompressionLevel)) ::Pathfinding::Ionic::Zlib::CompressionLevel  CompressionLevel;

 __declspec(property(get=get_CompressionMethod)) ::Pathfinding::Ionic::Zip::CompressionMethod  CompressionMethod;

 __declspec(property(get=get_Encryption)) ::Pathfinding::Ionic::Zip::EncryptionAlgorithm  Encryption;

 __declspec(property(get=get_Entries)) ::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>*  Entries;

 __declspec(property(get=get_EntriesSorted)) ::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>*  EntriesSorted;

 __declspec(property(get=get_ExtractExistingFile)) ::Pathfinding::Ionic::Zip::ExtractExistingFileAction  ExtractExistingFile;

/// @brief Field ExtractProgress, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_ExtractProgress, put=__cordl_internal_set_ExtractProgress)) ::System::EventHandler_1<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>*  ExtractProgress;

 __declspec(property(get=get_FlattenFoldersOnExtract)) bool  FlattenFoldersOnExtract;

 __declspec(property(get=get_FullScan)) bool  FullScan;

 __declspec(property(get=get_Item)) ::Pathfinding::Ionic::Zip::ZipEntry*  Item[];

/// @brief Field LOCK, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_LOCK, put=__cordl_internal_set_LOCK)) ::System::Object*  LOCK;

 __declspec(property(get=get_LengthOfReadStream)) int64_t  LengthOfReadStream;

 __declspec(property(get=get_MaxOutputSegmentSize)) int32_t  MaxOutputSegmentSize;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ParallelDeflateMaxBufferPairs)) int32_t  ParallelDeflateMaxBufferPairs;

 __declspec(property(get=get_ParallelDeflateThreshold, put=set_ParallelDeflateThreshold)) int64_t  ParallelDeflateThreshold;

/// @brief Field ParallelDeflater, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_ParallelDeflater, put=__cordl_internal_set_ParallelDeflater)) ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*  ParallelDeflater;

/// @brief Field ReadProgress, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_ReadProgress, put=__cordl_internal_set_ReadProgress)) ::System::EventHandler_1<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>*  ReadProgress;

 __declspec(property(get=get_ReadStream)) ::System::IO::Stream*  ReadStream;

/// @brief Field SaveProgress, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_SaveProgress, put=__cordl_internal_set_SaveProgress)) ::System::EventHandler_1<::Pathfinding::Ionic::Zip::SaveProgressEventArgs*>*  SaveProgress;

 __declspec(property(get=get_SetCompression)) ::Pathfinding::Ionic::Zip::SetCompressionCallback*  SetCompression;

 __declspec(property(get=get_SortEntriesBeforeSaving)) bool  SortEntriesBeforeSaving;

 __declspec(property(get=get_StatusMessageTextWriter)) ::System::IO::TextWriter*  StatusMessageTextWriter;

 __declspec(property(get=get_Strategy)) ::Pathfinding::Ionic::Zlib::CompressionStrategy  Strategy;

 __declspec(property(get=get_TempFileFolder)) ::StringW  TempFileFolder;

 __declspec(property(get=get_UseZip64WhenSaving, put=set_UseZip64WhenSaving)) ::Pathfinding::Ionic::Zip::Zip64Option  UseZip64WhenSaving;

 __declspec(property(get=get_Verbose)) bool  Verbose;

 __declspec(property(get=get_WriteStream)) ::System::IO::Stream*  WriteStream;

/// @brief Field ZipError, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_ZipError, put=__cordl_internal_set_ZipError)) ::System::EventHandler_1<::Pathfinding::Ionic::Zip::ZipErrorEventArgs*>*  ZipError;

 __declspec(property(get=get_ZipErrorAction)) ::Pathfinding::Ionic::Zip::ZipErrorAction  ZipErrorAction;

/// @brief Field <AddDirectoryWillTraverseReparsePoints>k__BackingField, offset 0x152, size 0x1 
 __declspec(property(get=__cordl_internal_get__AddDirectoryWillTraverseReparsePoints_k__BackingField, put=__cordl_internal_set__AddDirectoryWillTraverseReparsePoints_k__BackingField)) bool  _AddDirectoryWillTraverseReparsePoints_k__BackingField;

/// @brief Field _BufferSize, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get__BufferSize, put=__cordl_internal_set__BufferSize)) int32_t  _BufferSize;

/// @brief Field _CaseSensitiveRetrieval, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__CaseSensitiveRetrieval, put=__cordl_internal_set__CaseSensitiveRetrieval)) bool  _CaseSensitiveRetrieval;

/// @brief Field <CodecBufferSize>k__BackingField, offset 0x154, size 0x4 
 __declspec(property(get=__cordl_internal_get__CodecBufferSize_k__BackingField, put=__cordl_internal_set__CodecBufferSize_k__BackingField)) int32_t  _CodecBufferSize_k__BackingField;

/// @brief Field _Comment, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__Comment, put=__cordl_internal_set__Comment)) ::StringW  _Comment;

/// @brief Field <CompressionLevel>k__BackingField, offset 0x15c, size 0x4 
 __declspec(property(get=__cordl_internal_get__CompressionLevel_k__BackingField, put=__cordl_internal_set__CompressionLevel_k__BackingField)) ::Pathfinding::Ionic::Zlib::CompressionLevel  _CompressionLevel_k__BackingField;

/// @brief Field _Encryption, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get__Encryption, put=__cordl_internal_set__Encryption)) ::Pathfinding::Ionic::Zip::EncryptionAlgorithm  _Encryption;

/// @brief Field <ExtractExistingFile>k__BackingField, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get__ExtractExistingFile_k__BackingField, put=__cordl_internal_set__ExtractExistingFile_k__BackingField)) ::Pathfinding::Ionic::Zip::ExtractExistingFileAction  _ExtractExistingFile_k__BackingField;

/// @brief Field <FlattenFoldersOnExtract>k__BackingField, offset 0x158, size 0x1 
 __declspec(property(get=__cordl_internal_get__FlattenFoldersOnExtract_k__BackingField, put=__cordl_internal_set__FlattenFoldersOnExtract_k__BackingField)) bool  _FlattenFoldersOnExtract_k__BackingField;

/// @brief Field <FullScan>k__BackingField, offset 0x150, size 0x1 
 __declspec(property(get=__cordl_internal_get__FullScan_k__BackingField, put=__cordl_internal_set__FullScan_k__BackingField)) bool  _FullScan_k__BackingField;

/// @brief Field _JustSaved, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get__JustSaved, put=__cordl_internal_set__JustSaved)) bool  _JustSaved;

/// @brief Field _OffsetOfCentralDirectory, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get__OffsetOfCentralDirectory, put=__cordl_internal_set__OffsetOfCentralDirectory)) uint32_t  _OffsetOfCentralDirectory;

/// @brief Field _OffsetOfCentralDirectory64, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__OffsetOfCentralDirectory64, put=__cordl_internal_set__OffsetOfCentralDirectory64)) int64_t  _OffsetOfCentralDirectory64;

/// @brief Field _OutputUsesZip64, offset 0xe0, size 0x10 
 __declspec(property(get=__cordl_internal_get__OutputUsesZip64, put=__cordl_internal_set__OutputUsesZip64)) ::System::Nullable_1<bool>  _OutputUsesZip64;

/// @brief Field _ParallelDeflateThreshold, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__ParallelDeflateThreshold, put=__cordl_internal_set__ParallelDeflateThreshold)) int64_t  _ParallelDeflateThreshold;

/// @brief Field _Password, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__Password, put=__cordl_internal_set__Password)) ::StringW  _Password;

/// @brief Field _ReadStreamIsOurs, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__ReadStreamIsOurs, put=__cordl_internal_set__ReadStreamIsOurs)) bool  _ReadStreamIsOurs;

/// @brief Field _SavingSfx, offset 0x120, size 0x1 
 __declspec(property(get=__cordl_internal_get__SavingSfx, put=__cordl_internal_set__SavingSfx)) bool  _SavingSfx;

/// @brief Field <SetCompression>k__BackingField, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get__SetCompression_k__BackingField, put=__cordl_internal_set__SetCompression_k__BackingField)) ::Pathfinding::Ionic::Zip::SetCompressionCallback*  _SetCompression_k__BackingField;

/// @brief Field <SortEntriesBeforeSaving>k__BackingField, offset 0x151, size 0x1 
 __declspec(property(get=__cordl_internal_get__SortEntriesBeforeSaving_k__BackingField, put=__cordl_internal_set__SortEntriesBeforeSaving_k__BackingField)) bool  _SortEntriesBeforeSaving_k__BackingField;

/// @brief Field _StatusMessageTextWriter, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__StatusMessageTextWriter, put=__cordl_internal_set__StatusMessageTextWriter)) ::System::IO::TextWriter*  _StatusMessageTextWriter;

/// @brief Field _Strategy, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__Strategy, put=__cordl_internal_set__Strategy)) ::Pathfinding::Ionic::Zlib::CompressionStrategy  _Strategy;

/// @brief Field _TempFileFolder, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__TempFileFolder, put=__cordl_internal_set__TempFileFolder)) ::StringW  _TempFileFolder;

/// @brief Field _addOperationCanceled, offset 0xba, size 0x1 
 __declspec(property(get=__cordl_internal_get__addOperationCanceled, put=__cordl_internal_set__addOperationCanceled)) bool  _addOperationCanceled;

/// @brief Field _alternateEncoding, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__alternateEncoding, put=__cordl_internal_set__alternateEncoding)) ::System::Text::Encoding*  _alternateEncoding;

/// @brief Field _alternateEncodingUsage, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get__alternateEncodingUsage, put=__cordl_internal_set__alternateEncodingUsage)) ::Pathfinding::Ionic::Zip::ZipOption  _alternateEncodingUsage;

/// @brief Field _compressionMethod, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__compressionMethod, put=__cordl_internal_set__compressionMethod)) ::Pathfinding::Ionic::Zip::CompressionMethod  _compressionMethod;

/// @brief Field _contentsChanged, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__contentsChanged, put=__cordl_internal_set__contentsChanged)) bool  _contentsChanged;

/// @brief Field _defaultEncoding, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__defaultEncoding, put=setStaticF__defaultEncoding)) ::System::Text::Encoding*  _defaultEncoding;

/// @brief Field _diskNumberWithCd, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__diskNumberWithCd, put=__cordl_internal_set__diskNumberWithCd)) uint32_t  _diskNumberWithCd;

/// @brief Field _disposed, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field _emitNtfsTimes, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__emitNtfsTimes, put=__cordl_internal_set__emitNtfsTimes)) bool  _emitNtfsTimes;

/// @brief Field _emitUnixTimes, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get__emitUnixTimes, put=__cordl_internal_set__emitUnixTimes)) bool  _emitUnixTimes;

/// @brief Field _entries, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__entries, put=__cordl_internal_set__entries)) ::System::Collections::Generic::Dictionary_2<::StringW,::Pathfinding::Ionic::Zip::ZipEntry*>*  _entries;

/// @brief Field _extractOperationCanceled, offset 0xb9, size 0x1 
 __declspec(property(get=__cordl_internal_get__extractOperationCanceled, put=__cordl_internal_set__extractOperationCanceled)) bool  _extractOperationCanceled;

/// @brief Field _fileAlreadyExists, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get__fileAlreadyExists, put=__cordl_internal_set__fileAlreadyExists)) bool  _fileAlreadyExists;

/// @brief Field _hasBeenSaved, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasBeenSaved, put=__cordl_internal_set__hasBeenSaved)) bool  _hasBeenSaved;

/// @brief Field _inExtractAll, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get__inExtractAll, put=__cordl_internal_set__inExtractAll)) bool  _inExtractAll;

/// @brief Field _lengthOfReadStream, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__lengthOfReadStream, put=__cordl_internal_set__lengthOfReadStream)) int64_t  _lengthOfReadStream;

/// @brief Field _locEndOfCDS, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__locEndOfCDS, put=__cordl_internal_set__locEndOfCDS)) int64_t  _locEndOfCDS;

/// @brief Field _maxBufferPairs, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxBufferPairs, put=__cordl_internal_set__maxBufferPairs)) int32_t  _maxBufferPairs;

/// @brief Field _maxOutputSegmentSize, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxOutputSegmentSize, put=__cordl_internal_set__maxOutputSegmentSize)) int32_t  _maxOutputSegmentSize;

/// @brief Field _name, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _numberOfSegmentsForMostRecentSave, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__numberOfSegmentsForMostRecentSave, put=__cordl_internal_set__numberOfSegmentsForMostRecentSave)) uint32_t  _numberOfSegmentsForMostRecentSave;

/// @brief Field _readName, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__readName, put=__cordl_internal_set__readName)) ::StringW  _readName;

/// @brief Field _readstream, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__readstream, put=__cordl_internal_set__readstream)) ::System::IO::Stream*  _readstream;

/// @brief Field _saveOperationCanceled, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get__saveOperationCanceled, put=__cordl_internal_set__saveOperationCanceled)) bool  _saveOperationCanceled;

/// @brief Field _temporaryFileName, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__temporaryFileName, put=__cordl_internal_set__temporaryFileName)) ::StringW  _temporaryFileName;

/// @brief Field _versionMadeBy, offset 0x38, size 0x2 
 __declspec(property(get=__cordl_internal_get__versionMadeBy, put=__cordl_internal_set__versionMadeBy)) uint16_t  _versionMadeBy;

/// @brief Field _versionNeededToExtract, offset 0x3a, size 0x2 
 __declspec(property(get=__cordl_internal_get__versionNeededToExtract, put=__cordl_internal_set__versionNeededToExtract)) uint16_t  _versionNeededToExtract;

/// @brief Field _writestream, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__writestream, put=__cordl_internal_set__writestream)) ::System::IO::Stream*  _writestream;

/// @brief Field _zip64, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get__zip64, put=__cordl_internal_set__zip64)) ::Pathfinding::Ionic::Zip::Zip64Option  _zip64;

/// @brief Field _zipEntriesAsList, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__zipEntriesAsList, put=__cordl_internal_set__zipEntriesAsList)) ::System::Collections::Generic::List_1<::Pathfinding::Ionic::Zip::ZipEntry*>*  _zipEntriesAsList;

/// @brief Field _zipErrorAction, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__zipErrorAction, put=__cordl_internal_set__zipErrorAction)) ::Pathfinding::Ionic::Zip::ZipErrorAction  _zipErrorAction;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Ionic::Zip::ZipEntry*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Ionic::Zip::ZipEntry*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AddEntry, addr 0xa69a2c4, size 0xd4, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::ZipEntry* AddEntry(::StringW  entryName, ::ArrayW<uint8_t>  byteContent) ;

/// @brief Method AddEntry, addr 0xa699f04, size 0x110, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::ZipEntry* AddEntry(::StringW  entryName, ::System::IO::Stream*  stream) ;

/// @brief Method AfterAddEntry, addr 0xa69a1e0, size 0xe4, virtual false, abstract: false, final false
inline void AfterAddEntry(::Pathfinding::Ionic::Zip::ZipEntry*  entry) ;

/// @brief Method CleanupAfterSaveOperation, addr 0xa69d3e8, size 0xe0, virtual false, abstract: false, final false
inline void CleanupAfterSaveOperation() ;

/// @brief Method DeleteFileWithRetry, addr 0xa69bea8, size 0x104, virtual false, abstract: false, final false
inline void DeleteFileWithRetry(::StringW  filename) ;

/// @brief Method Dispose, addr 0xa69d948, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xa69d9b4, size 0xb4, virtual true, abstract: false, final false
inline void Dispose(bool  disposeManagedResources) ;

/// [DebuggerHidden]
/// @brief Method GetEnumerator, addr 0xa699e94, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Ionic::Zip::ZipEntry*>* GetEnumerator() ;

/// @brief Method InternalAddEntry, addr 0xa69a15c, size 0x84, virtual false, abstract: false, final false
inline void InternalAddEntry(::StringW  name, ::Pathfinding::Ionic::Zip::ZipEntry*  entry) ;

static inline ::Pathfinding::Ionic::Zip::ZipFile* New_ctor() ;

/// @brief Method NotifyEntriesSaveComplete, addr 0xa69d034, size 0x2b8, virtual false, abstract: false, final false
static inline void NotifyEntriesSaveComplete(::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>*  c) ;

/// @brief Method NotifyEntryChanged, addr 0xa6990fc, size 0xc, virtual false, abstract: false, final false
inline void NotifyEntryChanged() ;

/// @brief Method OnExtractBlock, addr 0xa6914bc, size 0xc0, virtual false, abstract: false, final false
inline bool OnExtractBlock(::Pathfinding::Ionic::Zip::ZipEntry*  entry, int64_t  bytesWritten, int64_t  totalBytesToWrite) ;

/// @brief Method OnExtractExisting, addr 0xa691728, size 0xb8, virtual false, abstract: false, final false
inline bool OnExtractExisting(::Pathfinding::Ionic::Zip::ZipEntry*  entry, ::StringW  path) ;

/// @brief Method OnReadBytes, addr 0xa69357c, size 0xc8, virtual false, abstract: false, final false
inline void OnReadBytes(::Pathfinding::Ionic::Zip::ZipEntry*  entry) ;

/// @brief Method OnReadCompleted, addr 0xa69a7a4, size 0x88, virtual false, abstract: false, final false
inline void OnReadCompleted() ;

/// @brief Method OnReadEntry, addr 0xa6937d8, size 0x134, virtual false, abstract: false, final false
inline void OnReadEntry(bool  before, ::Pathfinding::Ionic::Zip::ZipEntry*  entry) ;

/// @brief Method OnReadStarted, addr 0xa69a71c, size 0x88, virtual false, abstract: false, final false
inline void OnReadStarted() ;

/// @brief Method OnSaveBlock, addr 0xa69641c, size 0xc0, virtual false, abstract: false, final false
inline bool OnSaveBlock(::Pathfinding::Ionic::Zip::ZipEntry*  entry, int64_t  bytesXferred, int64_t  totalBytesToXfer) ;

/// @brief Method OnSaveCompleted, addr 0xa69a694, size 0x88, virtual false, abstract: false, final false
inline void OnSaveCompleted() ;

/// @brief Method OnSaveEntry, addr 0xa69a3e8, size 0x134, virtual false, abstract: false, final false
inline void OnSaveEntry(int32_t  current, ::Pathfinding::Ionic::Zip::ZipEntry*  entry, bool  before) ;

/// @brief Method OnSaveEvent, addr 0xa69a51c, size 0xdc, virtual false, abstract: false, final false
inline void OnSaveEvent(::Pathfinding::Ionic::Zip::ZipProgressEventType  eventFlavor) ;

/// @brief Method OnSaveStarted, addr 0xa69a5f8, size 0x9c, virtual false, abstract: false, final false
inline void OnSaveStarted() ;

/// @brief Method OnSingleEntryExtract, addr 0xa6915c0, size 0xf8, virtual false, abstract: false, final false
inline bool OnSingleEntryExtract(::Pathfinding::Ionic::Zip::ZipEntry*  entry, ::StringW  path, bool  before) ;

/// @brief Method OnZipErrorSaving, addr 0xa697af0, size 0x108, virtual false, abstract: false, final false
inline bool OnZipErrorSaving(::Pathfinding::Ionic::Zip::ZipEntry*  entry, ::System::Exception*  exc) ;

/// @brief Method Read, addr 0xa69a8a8, size 0x60, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zip::ZipFile* Read(::System::IO::Stream*  zipStream) ;

/// @brief Method Read, addr 0xa69a908, size 0x1f4, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zip::ZipFile* Read(::System::IO::Stream*  zipStream, ::System::IO::TextWriter*  statusMessageWriter, ::System::Text::Encoding*  encoding, ::System::EventHandler_1<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>*  readProgress) ;

/// @brief Method ReadCentralDirectory, addr 0xa69b6e4, size 0x2c8, virtual false, abstract: false, final false
static inline void ReadCentralDirectory(::Pathfinding::Ionic::Zip::ZipFile*  zf) ;

/// @brief Method ReadCentralDirectoryFooter, addr 0xa69b9ac, size 0x3b0, virtual false, abstract: false, final false
static inline void ReadCentralDirectoryFooter(::Pathfinding::Ionic::Zip::ZipFile*  zf) ;

/// @brief Method ReadFirstFourBytes, addr 0xa69b420, size 0x54, virtual false, abstract: false, final false
static inline uint32_t ReadFirstFourBytes(::System::IO::Stream*  s) ;

/// @brief Method ReadIntoInstance, addr 0xa69aafc, size 0x4e8, virtual false, abstract: false, final false
static inline void ReadIntoInstance(::Pathfinding::Ionic::Zip::ZipFile*  zf) ;

/// @brief Method ReadIntoInstance_Orig, addr 0xa69afe4, size 0x43c, virtual false, abstract: false, final false
static inline void ReadIntoInstance_Orig(::Pathfinding::Ionic::Zip::ZipFile*  zf) ;

/// @brief Method ReadZipFileComment, addr 0xa69bd5c, size 0x128, virtual false, abstract: false, final false
static inline void ReadZipFileComment(::Pathfinding::Ionic::Zip::ZipFile*  zf) ;

/// @brief Method RemoveTempFile, addr 0xa69d2ec, size 0xfc, virtual false, abstract: false, final false
inline void RemoveTempFile() ;

/// @brief Method Reset, addr 0xa69182c, size 0x614, virtual false, abstract: false, final false
inline void Reset(bool  whileSaving) ;

/// @brief Method Save, addr 0xa69bfac, size 0xbd4, virtual false, abstract: false, final false
inline void Save() ;

/// @brief Method Save, addr 0xa69d4c8, size 0x130, virtual false, abstract: false, final false
inline void Save(::System::IO::Stream*  outputStream) ;

/// @brief Method StreamForDiskNumber, addr 0xa6996f8, size 0x34, virtual false, abstract: false, final false
inline ::System::IO::Stream* StreamForDiskNumber(uint32_t  diskNumber) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xa699e90, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToString, addr 0xa69d790, size 0x4c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Zip64SeekToCentralDirectory, addr 0xa69b474, size 0x270, virtual false, abstract: false, final false
static inline void Zip64SeekToCentralDirectory(::Pathfinding::Ionic::Zip::ZipFile*  zf) ;

/// @brief Method _InitInstance, addr 0xa699bc0, size 0xe8, virtual false, abstract: false, final false
inline void _InitInstance(::StringW  zipFileName, ::System::IO::TextWriter*  statusMessageWriter) ;

/// @brief Method _InternalAddEntry, addr 0xa69a014, size 0x128, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::ZipEntry* _InternalAddEntry(::Pathfinding::Ionic::Zip::ZipEntry*  ze) ;

constexpr ::System::EventHandler_1<::Pathfinding::Ionic::Zip::AddProgressEventArgs*>* const& __cordl_internal_get_AddProgress() const;

constexpr ::System::EventHandler_1<::Pathfinding::Ionic::Zip::AddProgressEventArgs*>*& __cordl_internal_get_AddProgress() ;

constexpr ::System::EventHandler_1<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>* const& __cordl_internal_get_ExtractProgress() const;

constexpr ::System::EventHandler_1<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>*& __cordl_internal_get_ExtractProgress() ;

constexpr ::System::Object* const& __cordl_internal_get_LOCK() const;

constexpr ::System::Object*& __cordl_internal_get_LOCK() ;

constexpr ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream* const& __cordl_internal_get_ParallelDeflater() const;

constexpr ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*& __cordl_internal_get_ParallelDeflater() ;

constexpr ::System::EventHandler_1<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>* const& __cordl_internal_get_ReadProgress() const;

constexpr ::System::EventHandler_1<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>*& __cordl_internal_get_ReadProgress() ;

constexpr ::System::EventHandler_1<::Pathfinding::Ionic::Zip::SaveProgressEventArgs*>* const& __cordl_internal_get_SaveProgress() const;

constexpr ::System::EventHandler_1<::Pathfinding::Ionic::Zip::SaveProgressEventArgs*>*& __cordl_internal_get_SaveProgress() ;

constexpr ::System::EventHandler_1<::Pathfinding::Ionic::Zip::ZipErrorEventArgs*>* const& __cordl_internal_get_ZipError() const;

constexpr ::System::EventHandler_1<::Pathfinding::Ionic::Zip::ZipErrorEventArgs*>*& __cordl_internal_get_ZipError() ;

constexpr bool const& __cordl_internal_get__AddDirectoryWillTraverseReparsePoints_k__BackingField() const;

constexpr bool& __cordl_internal_get__AddDirectoryWillTraverseReparsePoints_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__BufferSize() const;

constexpr int32_t& __cordl_internal_get__BufferSize() ;

constexpr bool const& __cordl_internal_get__CaseSensitiveRetrieval() const;

constexpr bool& __cordl_internal_get__CaseSensitiveRetrieval() ;

constexpr int32_t const& __cordl_internal_get__CodecBufferSize_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CodecBufferSize_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Comment() const;

constexpr ::StringW& __cordl_internal_get__Comment() ;

constexpr ::Pathfinding::Ionic::Zlib::CompressionLevel const& __cordl_internal_get__CompressionLevel_k__BackingField() const;

constexpr ::Pathfinding::Ionic::Zlib::CompressionLevel& __cordl_internal_get__CompressionLevel_k__BackingField() ;

constexpr ::Pathfinding::Ionic::Zip::EncryptionAlgorithm const& __cordl_internal_get__Encryption() const;

constexpr ::Pathfinding::Ionic::Zip::EncryptionAlgorithm& __cordl_internal_get__Encryption() ;

constexpr ::Pathfinding::Ionic::Zip::ExtractExistingFileAction const& __cordl_internal_get__ExtractExistingFile_k__BackingField() const;

constexpr ::Pathfinding::Ionic::Zip::ExtractExistingFileAction& __cordl_internal_get__ExtractExistingFile_k__BackingField() ;

constexpr bool const& __cordl_internal_get__FlattenFoldersOnExtract_k__BackingField() const;

constexpr bool& __cordl_internal_get__FlattenFoldersOnExtract_k__BackingField() ;

constexpr bool const& __cordl_internal_get__FullScan_k__BackingField() const;

constexpr bool& __cordl_internal_get__FullScan_k__BackingField() ;

constexpr bool const& __cordl_internal_get__JustSaved() const;

constexpr bool& __cordl_internal_get__JustSaved() ;

constexpr uint32_t const& __cordl_internal_get__OffsetOfCentralDirectory() const;

constexpr uint32_t& __cordl_internal_get__OffsetOfCentralDirectory() ;

constexpr int64_t const& __cordl_internal_get__OffsetOfCentralDirectory64() const;

constexpr int64_t& __cordl_internal_get__OffsetOfCentralDirectory64() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__OutputUsesZip64() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__OutputUsesZip64() ;

constexpr int64_t const& __cordl_internal_get__ParallelDeflateThreshold() const;

constexpr int64_t& __cordl_internal_get__ParallelDeflateThreshold() ;

constexpr ::StringW const& __cordl_internal_get__Password() const;

constexpr ::StringW& __cordl_internal_get__Password() ;

constexpr bool const& __cordl_internal_get__ReadStreamIsOurs() const;

constexpr bool& __cordl_internal_get__ReadStreamIsOurs() ;

constexpr bool const& __cordl_internal_get__SavingSfx() const;

constexpr bool& __cordl_internal_get__SavingSfx() ;

constexpr ::Pathfinding::Ionic::Zip::SetCompressionCallback* const& __cordl_internal_get__SetCompression_k__BackingField() const;

constexpr ::Pathfinding::Ionic::Zip::SetCompressionCallback*& __cordl_internal_get__SetCompression_k__BackingField() ;

constexpr bool const& __cordl_internal_get__SortEntriesBeforeSaving_k__BackingField() const;

constexpr bool& __cordl_internal_get__SortEntriesBeforeSaving_k__BackingField() ;

constexpr ::System::IO::TextWriter* const& __cordl_internal_get__StatusMessageTextWriter() const;

constexpr ::System::IO::TextWriter*& __cordl_internal_get__StatusMessageTextWriter() ;

constexpr ::Pathfinding::Ionic::Zlib::CompressionStrategy const& __cordl_internal_get__Strategy() const;

constexpr ::Pathfinding::Ionic::Zlib::CompressionStrategy& __cordl_internal_get__Strategy() ;

constexpr ::StringW const& __cordl_internal_get__TempFileFolder() const;

constexpr ::StringW& __cordl_internal_get__TempFileFolder() ;

constexpr bool const& __cordl_internal_get__addOperationCanceled() const;

constexpr bool& __cordl_internal_get__addOperationCanceled() ;

constexpr ::System::Text::Encoding* const& __cordl_internal_get__alternateEncoding() const;

constexpr ::System::Text::Encoding*& __cordl_internal_get__alternateEncoding() ;

constexpr ::Pathfinding::Ionic::Zip::ZipOption const& __cordl_internal_get__alternateEncodingUsage() const;

constexpr ::Pathfinding::Ionic::Zip::ZipOption& __cordl_internal_get__alternateEncodingUsage() ;

constexpr ::Pathfinding::Ionic::Zip::CompressionMethod const& __cordl_internal_get__compressionMethod() const;

constexpr ::Pathfinding::Ionic::Zip::CompressionMethod& __cordl_internal_get__compressionMethod() ;

constexpr bool const& __cordl_internal_get__contentsChanged() const;

constexpr bool& __cordl_internal_get__contentsChanged() ;

constexpr uint32_t const& __cordl_internal_get__diskNumberWithCd() const;

constexpr uint32_t& __cordl_internal_get__diskNumberWithCd() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr bool const& __cordl_internal_get__emitNtfsTimes() const;

constexpr bool& __cordl_internal_get__emitNtfsTimes() ;

constexpr bool const& __cordl_internal_get__emitUnixTimes() const;

constexpr bool& __cordl_internal_get__emitUnixTimes() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Pathfinding::Ionic::Zip::ZipEntry*>* const& __cordl_internal_get__entries() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Pathfinding::Ionic::Zip::ZipEntry*>*& __cordl_internal_get__entries() ;

constexpr bool const& __cordl_internal_get__extractOperationCanceled() const;

constexpr bool& __cordl_internal_get__extractOperationCanceled() ;

constexpr bool const& __cordl_internal_get__fileAlreadyExists() const;

constexpr bool& __cordl_internal_get__fileAlreadyExists() ;

constexpr bool const& __cordl_internal_get__hasBeenSaved() const;

constexpr bool& __cordl_internal_get__hasBeenSaved() ;

constexpr bool const& __cordl_internal_get__inExtractAll() const;

constexpr bool& __cordl_internal_get__inExtractAll() ;

constexpr int64_t const& __cordl_internal_get__lengthOfReadStream() const;

constexpr int64_t& __cordl_internal_get__lengthOfReadStream() ;

constexpr int64_t const& __cordl_internal_get__locEndOfCDS() const;

constexpr int64_t& __cordl_internal_get__locEndOfCDS() ;

constexpr int32_t const& __cordl_internal_get__maxBufferPairs() const;

constexpr int32_t& __cordl_internal_get__maxBufferPairs() ;

constexpr int32_t const& __cordl_internal_get__maxOutputSegmentSize() const;

constexpr int32_t& __cordl_internal_get__maxOutputSegmentSize() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr uint32_t const& __cordl_internal_get__numberOfSegmentsForMostRecentSave() const;

constexpr uint32_t& __cordl_internal_get__numberOfSegmentsForMostRecentSave() ;

constexpr ::StringW const& __cordl_internal_get__readName() const;

constexpr ::StringW& __cordl_internal_get__readName() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__readstream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__readstream() ;

constexpr bool const& __cordl_internal_get__saveOperationCanceled() const;

constexpr bool& __cordl_internal_get__saveOperationCanceled() ;

constexpr ::StringW const& __cordl_internal_get__temporaryFileName() const;

constexpr ::StringW& __cordl_internal_get__temporaryFileName() ;

constexpr uint16_t const& __cordl_internal_get__versionMadeBy() const;

constexpr uint16_t& __cordl_internal_get__versionMadeBy() ;

constexpr uint16_t const& __cordl_internal_get__versionNeededToExtract() const;

constexpr uint16_t& __cordl_internal_get__versionNeededToExtract() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__writestream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__writestream() ;

constexpr ::Pathfinding::Ionic::Zip::Zip64Option const& __cordl_internal_get__zip64() const;

constexpr ::Pathfinding::Ionic::Zip::Zip64Option& __cordl_internal_get__zip64() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Ionic::Zip::ZipEntry*>* const& __cordl_internal_get__zipEntriesAsList() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Ionic::Zip::ZipEntry*>*& __cordl_internal_get__zipEntriesAsList() ;

constexpr ::Pathfinding::Ionic::Zip::ZipErrorAction const& __cordl_internal_get__zipErrorAction() const;

constexpr ::Pathfinding::Ionic::Zip::ZipErrorAction& __cordl_internal_get__zipErrorAction() ;

constexpr void __cordl_internal_set_AddProgress(::System::EventHandler_1<::Pathfinding::Ionic::Zip::AddProgressEventArgs*>*  value) ;

constexpr void __cordl_internal_set_ExtractProgress(::System::EventHandler_1<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>*  value) ;

constexpr void __cordl_internal_set_LOCK(::System::Object*  value) ;

constexpr void __cordl_internal_set_ParallelDeflater(::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*  value) ;

constexpr void __cordl_internal_set_ReadProgress(::System::EventHandler_1<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>*  value) ;

constexpr void __cordl_internal_set_SaveProgress(::System::EventHandler_1<::Pathfinding::Ionic::Zip::SaveProgressEventArgs*>*  value) ;

constexpr void __cordl_internal_set_ZipError(::System::EventHandler_1<::Pathfinding::Ionic::Zip::ZipErrorEventArgs*>*  value) ;

constexpr void __cordl_internal_set__AddDirectoryWillTraverseReparsePoints_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__BufferSize(int32_t  value) ;

constexpr void __cordl_internal_set__CaseSensitiveRetrieval(bool  value) ;

constexpr void __cordl_internal_set__CodecBufferSize_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Comment(::StringW  value) ;

constexpr void __cordl_internal_set__CompressionLevel_k__BackingField(::Pathfinding::Ionic::Zlib::CompressionLevel  value) ;

constexpr void __cordl_internal_set__Encryption(::Pathfinding::Ionic::Zip::EncryptionAlgorithm  value) ;

constexpr void __cordl_internal_set__ExtractExistingFile_k__BackingField(::Pathfinding::Ionic::Zip::ExtractExistingFileAction  value) ;

constexpr void __cordl_internal_set__FlattenFoldersOnExtract_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__FullScan_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__JustSaved(bool  value) ;

constexpr void __cordl_internal_set__OffsetOfCentralDirectory(uint32_t  value) ;

constexpr void __cordl_internal_set__OffsetOfCentralDirectory64(int64_t  value) ;

constexpr void __cordl_internal_set__OutputUsesZip64(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set__ParallelDeflateThreshold(int64_t  value) ;

constexpr void __cordl_internal_set__Password(::StringW  value) ;

constexpr void __cordl_internal_set__ReadStreamIsOurs(bool  value) ;

constexpr void __cordl_internal_set__SavingSfx(bool  value) ;

constexpr void __cordl_internal_set__SetCompression_k__BackingField(::Pathfinding::Ionic::Zip::SetCompressionCallback*  value) ;

constexpr void __cordl_internal_set__SortEntriesBeforeSaving_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__StatusMessageTextWriter(::System::IO::TextWriter*  value) ;

constexpr void __cordl_internal_set__Strategy(::Pathfinding::Ionic::Zlib::CompressionStrategy  value) ;

constexpr void __cordl_internal_set__TempFileFolder(::StringW  value) ;

constexpr void __cordl_internal_set__addOperationCanceled(bool  value) ;

constexpr void __cordl_internal_set__alternateEncoding(::System::Text::Encoding*  value) ;

constexpr void __cordl_internal_set__alternateEncodingUsage(::Pathfinding::Ionic::Zip::ZipOption  value) ;

constexpr void __cordl_internal_set__compressionMethod(::Pathfinding::Ionic::Zip::CompressionMethod  value) ;

constexpr void __cordl_internal_set__contentsChanged(bool  value) ;

constexpr void __cordl_internal_set__diskNumberWithCd(uint32_t  value) ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set__emitNtfsTimes(bool  value) ;

constexpr void __cordl_internal_set__emitUnixTimes(bool  value) ;

constexpr void __cordl_internal_set__entries(::System::Collections::Generic::Dictionary_2<::StringW,::Pathfinding::Ionic::Zip::ZipEntry*>*  value) ;

constexpr void __cordl_internal_set__extractOperationCanceled(bool  value) ;

constexpr void __cordl_internal_set__fileAlreadyExists(bool  value) ;

constexpr void __cordl_internal_set__hasBeenSaved(bool  value) ;

constexpr void __cordl_internal_set__inExtractAll(bool  value) ;

constexpr void __cordl_internal_set__lengthOfReadStream(int64_t  value) ;

constexpr void __cordl_internal_set__locEndOfCDS(int64_t  value) ;

constexpr void __cordl_internal_set__maxBufferPairs(int32_t  value) ;

constexpr void __cordl_internal_set__maxOutputSegmentSize(int32_t  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__numberOfSegmentsForMostRecentSave(uint32_t  value) ;

constexpr void __cordl_internal_set__readName(::StringW  value) ;

constexpr void __cordl_internal_set__readstream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__saveOperationCanceled(bool  value) ;

constexpr void __cordl_internal_set__temporaryFileName(::StringW  value) ;

constexpr void __cordl_internal_set__versionMadeBy(uint16_t  value) ;

constexpr void __cordl_internal_set__versionNeededToExtract(uint16_t  value) ;

constexpr void __cordl_internal_set__writestream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__zip64(::Pathfinding::Ionic::Zip::Zip64Option  value) ;

constexpr void __cordl_internal_set__zipEntriesAsList(::System::Collections::Generic::List_1<::Pathfinding::Ionic::Zip::ZipEntry*>*  value) ;

constexpr void __cordl_internal_set__zipErrorAction(::Pathfinding::Ionic::Zip::ZipErrorAction  value) ;

/// @brief Method .ctor, addr 0xa699ac4, size 0xfc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method _initEntriesDictionary, addr 0xa69d7dc, size 0x16c, virtual false, abstract: false, final false
inline void _initEntriesDictionary() ;

/// @brief Method add_ReadProgress, addr 0xa699d18, size 0xbc, virtual false, abstract: false, final false
inline void add_ReadProgress(::System::EventHandler_1<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>*  value) ;

static inline int32_t getStaticF_BufferSizeDefault() ;

static inline ::System::Text::Encoding* getStaticF__defaultEncoding() ;

/// @brief Method get_AlternateEncoding, addr 0xa69d670, size 0x8, virtual false, abstract: false, final false
inline ::System::Text::Encoding* get_AlternateEncoding() ;

/// @brief Method get_AlternateEncodingUsage, addr 0xa69d680, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::ZipOption get_AlternateEncodingUsage() ;

/// @brief Method get_ArchiveNameForEvent, addr 0xa69a398, size 0x50, virtual false, abstract: false, final false
inline ::StringW get_ArchiveNameForEvent() ;

/// @brief Method get_BufferSize, addr 0xa69d610, size 0x8, virtual false, abstract: false, final false
inline int32_t get_BufferSize() ;

/// @brief Method get_CaseSensitiveRetrieval, addr 0xa69d658, size 0x8, virtual false, abstract: false, final false
inline bool get_CaseSensitiveRetrieval() ;

/// [CompilerGenerated]
/// @brief Method get_CodecBufferSize, addr 0xa69d618, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CodecBufferSize() ;

/// @brief Method get_Comment, addr 0xa69d650, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Comment() ;

/// [CompilerGenerated]
/// @brief Method get_CompressionLevel, addr 0xa69d638, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zlib::CompressionLevel get_CompressionLevel() ;

/// @brief Method get_CompressionMethod, addr 0xa69d648, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::CompressionMethod get_CompressionMethod() ;

/// @brief Method get_DefaultEncoding, addr 0xa69d690, size 0x58, virtual false, abstract: false, final false
static inline ::System::Text::Encoding* get_DefaultEncoding() ;

/// @brief Method get_Encryption, addr 0xa69d700, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::EncryptionAlgorithm get_Encryption() ;

/// @brief Method get_Entries, addr 0xa69cfe4, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>* get_Entries() ;

/// @brief Method get_EntriesSorted, addr 0xa69cc6c, size 0x378, virtual false, abstract: false, final false
inline ::System::Collections::Generic::ICollection_1<::Pathfinding::Ionic::Zip::ZipEntry*>* get_EntriesSorted() ;

/// [CompilerGenerated]
/// @brief Method get_ExtractExistingFile, addr 0xa69d6f8, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::ExtractExistingFileAction get_ExtractExistingFile() ;

/// [CompilerGenerated]
/// @brief Method get_FlattenFoldersOnExtract, addr 0xa69d620, size 0x8, virtual false, abstract: false, final false
inline bool get_FlattenFoldersOnExtract() ;

/// [CompilerGenerated]
/// @brief Method get_FullScan, addr 0xa69d5f8, size 0x8, virtual false, abstract: false, final false
inline bool get_FullScan() ;

/// @brief Method get_Item, addr 0xa692784, size 0x134, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::ZipEntry* get_Item(::StringW  fileName) ;

/// @brief Method get_LengthOfReadStream, addr 0xa69a82c, size 0x7c, virtual false, abstract: false, final false
inline int64_t get_LengthOfReadStream() ;

/// @brief Method get_MaxOutputSegmentSize, addr 0xa69d710, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxOutputSegmentSize() ;

/// @brief Method get_Name, addr 0xa69d630, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ParallelDeflateMaxBufferPairs, addr 0xa69d788, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ParallelDeflateMaxBufferPairs() ;

/// @brief Method get_ParallelDeflateThreshold, addr 0xa69d780, size 0x8, virtual false, abstract: false, final false
inline int64_t get_ParallelDeflateThreshold() ;

/// @brief Method get_ReadStream, addr 0xa6900d8, size 0x64, virtual false, abstract: false, final false
inline ::System::IO::Stream* get_ReadStream() ;

/// [CompilerGenerated]
/// @brief Method get_SetCompression, addr 0xa69d708, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::SetCompressionCallback* get_SetCompression() ;

/// [CompilerGenerated]
/// @brief Method get_SortEntriesBeforeSaving, addr 0xa69d600, size 0x8, virtual false, abstract: false, final false
inline bool get_SortEntriesBeforeSaving() ;

/// @brief Method get_StatusMessageTextWriter, addr 0xa69d6e8, size 0x8, virtual false, abstract: false, final false
inline ::System::IO::TextWriter* get_StatusMessageTextWriter() ;

/// @brief Method get_Strategy, addr 0xa69d628, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zlib::CompressionStrategy get_Strategy() ;

/// @brief Method get_TempFileFolder, addr 0xa69d6f0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_TempFileFolder() ;

/// @brief Method get_UseZip64WhenSaving, addr 0xa69d660, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::Zip64Option get_UseZip64WhenSaving() ;

/// @brief Method get_Verbose, addr 0xa69181c, size 0x10, virtual false, abstract: false, final false
inline bool get_Verbose() ;

/// @brief Method get_WriteStream, addr 0xa69cb80, size 0xec, virtual false, abstract: false, final false
inline ::System::IO::Stream* get_WriteStream() ;

/// @brief Method get_ZipErrorAction, addr 0xa69a13c, size 0x20, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::ZipErrorAction get_ZipErrorAction() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Ionic::Zip::ZipEntry*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Ionic::Zip::ZipEntry*>* i___System__Collections__Generic__IEnumerable_1___Pathfinding__Ionic__Zip__ZipEntry__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method remove_ReadProgress, addr 0xa699dd4, size 0xbc, virtual false, abstract: false, final false
inline void remove_ReadProgress(::System::EventHandler_1<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>*  value) ;

static inline void setStaticF_BufferSizeDefault(int32_t  value) ;

static inline void setStaticF__defaultEncoding(::System::Text::Encoding*  value) ;

/// [CompilerGenerated]
/// @brief Method set_AddDirectoryWillTraverseReparsePoints, addr 0xa69d608, size 0x8, virtual false, abstract: false, final false
inline void set_AddDirectoryWillTraverseReparsePoints(bool  value) ;

/// @brief Method set_AlternateEncoding, addr 0xa69d678, size 0x8, virtual false, abstract: false, final false
inline void set_AlternateEncoding(::System::Text::Encoding*  value) ;

/// @brief Method set_AlternateEncodingUsage, addr 0xa69d688, size 0x8, virtual false, abstract: false, final false
inline void set_AlternateEncodingUsage(::Pathfinding::Ionic::Zip::ZipOption  value) ;

/// @brief Method set_Comment, addr 0xa69be84, size 0x24, virtual false, abstract: false, final false
inline void set_Comment(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_CompressionLevel, addr 0xa69d640, size 0x8, virtual false, abstract: false, final false
inline void set_CompressionLevel(::Pathfinding::Ionic::Zlib::CompressionLevel  value) ;

/// @brief Method set_ParallelDeflateThreshold, addr 0xa69d718, size 0x68, virtual false, abstract: false, final false
inline void set_ParallelDeflateThreshold(int64_t  value) ;

/// @brief Method set_UseZip64WhenSaving, addr 0xa69d668, size 0x8, virtual false, abstract: false, final false
inline void set_UseZip64WhenSaving(::Pathfinding::Ionic::Zip::Zip64Option  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipFile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipFile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipFile(ZipFile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipFile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipFile(ZipFile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28167};

/// @brief Field _lengthOfReadStream, offset: 0x10, size: 0x8, def value: None
 int64_t  ____lengthOfReadStream;

/// @brief Field _StatusMessageTextWriter, offset: 0x18, size: 0x8, def value: None
 ::System::IO::TextWriter*  ____StatusMessageTextWriter;

/// @brief Field _CaseSensitiveRetrieval, offset: 0x20, size: 0x1, def value: None
 bool  ____CaseSensitiveRetrieval;

/// @brief Field _readstream, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Stream*  ____readstream;

/// @brief Field _writestream, offset: 0x30, size: 0x8, def value: None
 ::System::IO::Stream*  ____writestream;

/// @brief Field _versionMadeBy, offset: 0x38, size: 0x2, def value: None
 uint16_t  ____versionMadeBy;

/// @brief Field _versionNeededToExtract, offset: 0x3a, size: 0x2, def value: None
 uint16_t  ____versionNeededToExtract;

/// @brief Field _diskNumberWithCd, offset: 0x3c, size: 0x4, def value: None
 uint32_t  ____diskNumberWithCd;

/// @brief Field _maxOutputSegmentSize, offset: 0x40, size: 0x4, def value: None
 int32_t  ____maxOutputSegmentSize;

/// @brief Field _numberOfSegmentsForMostRecentSave, offset: 0x44, size: 0x4, def value: None
 uint32_t  ____numberOfSegmentsForMostRecentSave;

/// @brief Field _zipErrorAction, offset: 0x48, size: 0x4, def value: None
 ::Pathfinding::Ionic::Zip::ZipErrorAction  ____zipErrorAction;

/// @brief Field _disposed, offset: 0x4c, size: 0x1, def value: None
 bool  ____disposed;

/// @brief Field _entries, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Pathfinding::Ionic::Zip::ZipEntry*>*  ____entries;

/// @brief Field _zipEntriesAsList, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::Ionic::Zip::ZipEntry*>*  ____zipEntriesAsList;

/// @brief Field _name, offset: 0x60, size: 0x8, def value: None
 ::StringW  ____name;

/// @brief Field _readName, offset: 0x68, size: 0x8, def value: None
 ::StringW  ____readName;

/// @brief Field _Comment, offset: 0x70, size: 0x8, def value: None
 ::StringW  ____Comment;

/// @brief Field _Password, offset: 0x78, size: 0x8, def value: None
 ::StringW  ____Password;

/// @brief Field _emitNtfsTimes, offset: 0x80, size: 0x1, def value: None
 bool  ____emitNtfsTimes;

/// @brief Field _emitUnixTimes, offset: 0x81, size: 0x1, def value: None
 bool  ____emitUnixTimes;

/// @brief Field _Strategy, offset: 0x84, size: 0x4, def value: None
 ::Pathfinding::Ionic::Zlib::CompressionStrategy  ____Strategy;

/// @brief Field _compressionMethod, offset: 0x88, size: 0x4, def value: None
 ::Pathfinding::Ionic::Zip::CompressionMethod  ____compressionMethod;

/// @brief Field _fileAlreadyExists, offset: 0x8c, size: 0x1, def value: None
 bool  ____fileAlreadyExists;

/// @brief Field _temporaryFileName, offset: 0x90, size: 0x8, def value: None
 ::StringW  ____temporaryFileName;

/// @brief Field _contentsChanged, offset: 0x98, size: 0x1, def value: None
 bool  ____contentsChanged;

/// @brief Field _hasBeenSaved, offset: 0x99, size: 0x1, def value: None
 bool  ____hasBeenSaved;

/// @brief Field _TempFileFolder, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ____TempFileFolder;

/// @brief Field _ReadStreamIsOurs, offset: 0xa8, size: 0x1, def value: None
 bool  ____ReadStreamIsOurs;

/// @brief Field LOCK, offset: 0xb0, size: 0x8, def value: None
 ::System::Object*  ___LOCK;

/// @brief Field _saveOperationCanceled, offset: 0xb8, size: 0x1, def value: None
 bool  ____saveOperationCanceled;

/// @brief Field _extractOperationCanceled, offset: 0xb9, size: 0x1, def value: None
 bool  ____extractOperationCanceled;

/// @brief Field _addOperationCanceled, offset: 0xba, size: 0x1, def value: None
 bool  ____addOperationCanceled;

/// @brief Field _Encryption, offset: 0xbc, size: 0x4, def value: None
 ::Pathfinding::Ionic::Zip::EncryptionAlgorithm  ____Encryption;

/// @brief Field _JustSaved, offset: 0xc0, size: 0x1, def value: None
 bool  ____JustSaved;

/// @brief Field _locEndOfCDS, offset: 0xc8, size: 0x8, def value: None
 int64_t  ____locEndOfCDS;

/// @brief Field _OffsetOfCentralDirectory, offset: 0xd0, size: 0x4, def value: None
 uint32_t  ____OffsetOfCentralDirectory;

/// @brief Field _OffsetOfCentralDirectory64, offset: 0xd8, size: 0x8, def value: None
 int64_t  ____OffsetOfCentralDirectory64;

/// @brief Field _OutputUsesZip64, offset: 0xe0, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ____OutputUsesZip64;

/// @brief Field _inExtractAll, offset: 0xf0, size: 0x1, def value: None
 bool  ____inExtractAll;

/// @brief Field _alternateEncoding, offset: 0xf8, size: 0x8, def value: None
 ::System::Text::Encoding*  ____alternateEncoding;

/// @brief Field _alternateEncodingUsage, offset: 0x100, size: 0x4, def value: None
 ::Pathfinding::Ionic::Zip::ZipOption  ____alternateEncodingUsage;

/// @brief Field _BufferSize, offset: 0x104, size: 0x4, def value: None
 int32_t  ____BufferSize;

/// @brief Field ParallelDeflater, offset: 0x108, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*  ___ParallelDeflater;

/// @brief Field _ParallelDeflateThreshold, offset: 0x110, size: 0x8, def value: None
 int64_t  ____ParallelDeflateThreshold;

/// @brief Field _maxBufferPairs, offset: 0x118, size: 0x4, def value: None
 int32_t  ____maxBufferPairs;

/// @brief Field _zip64, offset: 0x11c, size: 0x4, def value: None
 ::Pathfinding::Ionic::Zip::Zip64Option  ____zip64;

/// @brief Field _SavingSfx, offset: 0x120, size: 0x1, def value: None
 bool  ____SavingSfx;

/// @brief Field SaveProgress, offset: 0x128, size: 0x8, def value: None
 ::System::EventHandler_1<::Pathfinding::Ionic::Zip::SaveProgressEventArgs*>*  ___SaveProgress;

/// @brief Field ReadProgress, offset: 0x130, size: 0x8, def value: None
 ::System::EventHandler_1<::Pathfinding::Ionic::Zip::ReadProgressEventArgs*>*  ___ReadProgress;

/// @brief Field ExtractProgress, offset: 0x138, size: 0x8, def value: None
 ::System::EventHandler_1<::Pathfinding::Ionic::Zip::ExtractProgressEventArgs*>*  ___ExtractProgress;

/// @brief Field AddProgress, offset: 0x140, size: 0x8, def value: None
 ::System::EventHandler_1<::Pathfinding::Ionic::Zip::AddProgressEventArgs*>*  ___AddProgress;

/// @brief Field ZipError, offset: 0x148, size: 0x8, def value: None
 ::System::EventHandler_1<::Pathfinding::Ionic::Zip::ZipErrorEventArgs*>*  ___ZipError;

/// [CompilerGenerated]
/// @brief Field <FullScan>k__BackingField, offset: 0x150, size: 0x1, def value: None
 bool  ____FullScan_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SortEntriesBeforeSaving>k__BackingField, offset: 0x151, size: 0x1, def value: None
 bool  ____SortEntriesBeforeSaving_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AddDirectoryWillTraverseReparsePoints>k__BackingField, offset: 0x152, size: 0x1, def value: None
 bool  ____AddDirectoryWillTraverseReparsePoints_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CodecBufferSize>k__BackingField, offset: 0x154, size: 0x4, def value: None
 int32_t  ____CodecBufferSize_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FlattenFoldersOnExtract>k__BackingField, offset: 0x158, size: 0x1, def value: None
 bool  ____FlattenFoldersOnExtract_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CompressionLevel>k__BackingField, offset: 0x15c, size: 0x4, def value: None
 ::Pathfinding::Ionic::Zlib::CompressionLevel  ____CompressionLevel_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ExtractExistingFile>k__BackingField, offset: 0x160, size: 0x4, def value: None
 ::Pathfinding::Ionic::Zip::ExtractExistingFileAction  ____ExtractExistingFile_k__BackingField;

/// @brief Size padding 0x160 - 0x170 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// [CompilerGenerated]
/// @brief Field <SetCompression>k__BackingField, offset: 0x168, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zip::SetCompressionCallback*  ____SetCompression_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____lengthOfReadStream) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____StatusMessageTextWriter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____CaseSensitiveRetrieval) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____readstream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____writestream) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____versionMadeBy) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____versionNeededToExtract) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____diskNumberWithCd) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____maxOutputSegmentSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____numberOfSegmentsForMostRecentSave) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____zipErrorAction) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____disposed) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____entries) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____zipEntriesAsList) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____name) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____readName) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____Comment) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____Password) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____emitNtfsTimes) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____emitUnixTimes) == 0x81, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____Strategy) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____compressionMethod) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____fileAlreadyExists) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____temporaryFileName) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____contentsChanged) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____hasBeenSaved) == 0x99, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____TempFileFolder) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____ReadStreamIsOurs) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ___LOCK) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____saveOperationCanceled) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____extractOperationCanceled) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____addOperationCanceled) == 0xba, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____Encryption) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____JustSaved) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____locEndOfCDS) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____OffsetOfCentralDirectory) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____OffsetOfCentralDirectory64) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____OutputUsesZip64) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____inExtractAll) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____alternateEncoding) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____alternateEncodingUsage) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____BufferSize) == 0x104, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ___ParallelDeflater) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____ParallelDeflateThreshold) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____maxBufferPairs) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____zip64) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____SavingSfx) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ___SaveProgress) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ___ReadProgress) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ___ExtractProgress) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ___AddProgress) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ___ZipError) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____FullScan_k__BackingField) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____SortEntriesBeforeSaving_k__BackingField) == 0x151, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____AddDirectoryWillTraverseReparsePoints_k__BackingField) == 0x152, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____CodecBufferSize_k__BackingField) == 0x154, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____FlattenFoldersOnExtract_k__BackingField) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____CompressionLevel_k__BackingField) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____ExtractExistingFile_k__BackingField) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile, ____SetCompression_k__BackingField) == 0x168, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zip::ZipFile) == 0x160, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
// [CompilerGenerated]
// Dependencies System.Collections.Generic.Dictionary`2::ValueCollection::Enumerator<TKey, TValue>, System.Object
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator0
class CORDL_TYPE ZipFile__GetEnumerator_c__Iterator0 : public ::System::Object {
public:
// Declarations
/// @brief Field $PC, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_$PC, put=__cordl_internal_set_$PC)) int32_t  $PC;

/// @brief Field $current, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_$current, put=__cordl_internal_set_$current)) ::Pathfinding::Ionic::Zip::ZipEntry*  $current;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Pathfinding_Ionic_Zip_ZipEntry__get_Current)) ::Pathfinding::Ionic::Zip::ZipEntry*  System_Collections_Generic_IEnumerator_Pathfinding_Ionic_Zip_ZipEntry__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <<$$>>__0, offset 0x10, size 0x18 
 __declspec(property(get=__cordl_internal_get___$$____0, put=__cordl_internal_set___$$____0)) ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::StringW,::Pathfinding::Ionic::Zip::ZipEntry*>  __$$____0;

/// @brief Field <>f__this, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___f__this, put=__cordl_internal_set___f__this)) ::Pathfinding::Ionic::Zip::ZipFile*  __f__this;

/// @brief Field <e>__1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__e___1, put=__cordl_internal_set__e___1)) ::Pathfinding::Ionic::Zip::ZipEntry*  _e___1;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Ionic::Zip::ZipEntry*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Ionic::Zip::ZipEntry*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// [DebuggerHidden]
/// @brief Method Dispose, addr 0xa69dc8c, size 0x68, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0xa69da80, size 0x20c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0* New_ctor() ;

/// [DebuggerHidden]
/// @brief Method Reset, addr 0xa69dcf4, size 0x38, virtual true, abstract: false, final true
inline void Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Pathfinding.Ionic.Zip.ZipEntry>.get_Current, addr 0xa69da70, size 0x8, virtual true, abstract: false, final true
inline ::Pathfinding::Ionic::Zip::ZipEntry* System_Collections_Generic_IEnumerator_Pathfinding_Ionic_Zip_ZipEntry__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa69da78, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

constexpr int32_t const& __cordl_internal_get_$PC() const;

constexpr int32_t& __cordl_internal_get_$PC() ;

constexpr ::Pathfinding::Ionic::Zip::ZipEntry* const& __cordl_internal_get_$current() const;

constexpr ::Pathfinding::Ionic::Zip::ZipEntry*& __cordl_internal_get_$current() ;

constexpr ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::StringW,::Pathfinding::Ionic::Zip::ZipEntry*> const& __cordl_internal_get___$$____0() const;

constexpr ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::StringW,::Pathfinding::Ionic::Zip::ZipEntry*>& __cordl_internal_get___$$____0() ;

constexpr ::Pathfinding::Ionic::Zip::ZipFile* const& __cordl_internal_get___f__this() const;

constexpr ::Pathfinding::Ionic::Zip::ZipFile*& __cordl_internal_get___f__this() ;

constexpr ::Pathfinding::Ionic::Zip::ZipEntry* const& __cordl_internal_get__e___1() const;

constexpr ::Pathfinding::Ionic::Zip::ZipEntry*& __cordl_internal_get__e___1() ;

constexpr void __cordl_internal_set_$PC(int32_t  value) ;

constexpr void __cordl_internal_set_$current(::Pathfinding::Ionic::Zip::ZipEntry*  value) ;

constexpr void __cordl_internal_set___$$____0(::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::StringW,::Pathfinding::Ionic::Zip::ZipEntry*>  value) ;

constexpr void __cordl_internal_set___f__this(::Pathfinding::Ionic::Zip::ZipFile*  value) ;

constexpr void __cordl_internal_set__e___1(::Pathfinding::Ionic::Zip::ZipEntry*  value) ;

/// @brief Method .ctor, addr 0xa69da68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Ionic::Zip::ZipEntry*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Ionic::Zip::ZipEntry*>* i___System__Collections__Generic__IEnumerator_1___Pathfinding__Ionic__Zip__ZipEntry__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipFile__GetEnumerator_c__Iterator0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipFile__GetEnumerator_c__Iterator0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipFile__GetEnumerator_c__Iterator0(ZipFile__GetEnumerator_c__Iterator0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipFile__GetEnumerator_c__Iterator0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipFile__GetEnumerator_c__Iterator0(ZipFile__GetEnumerator_c__Iterator0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28166};

/// @brief Field <<$$>>__0, offset: 0x10, size: 0x18, def value: None
 ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::StringW,::Pathfinding::Ionic::Zip::ZipEntry*>  _____$$____0;

/// @brief Field <e>__1, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zip::ZipEntry*  ____e___1;

/// @brief Field $PC, offset: 0x30, size: 0x4, def value: None
 int32_t  ___$PC;

/// @brief Field $current, offset: 0x38, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zip::ZipEntry*  ___$current;

/// @brief Field <>f__this, offset: 0x40, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zip::ZipFile*  _____f__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0, _____$$____0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0, ____e___1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0, ___$PC) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0, ___$current) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0, _____f__this) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zip::ZipFile__GetEnumerator_c__Iterator0) == 0x48, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
