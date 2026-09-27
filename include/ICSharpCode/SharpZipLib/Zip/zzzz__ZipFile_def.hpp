#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipFile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/Zip/zzzz__UseZip64_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEntry_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipFile_UpdateCommand_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZipFile)
namespace GlobalNamespace {
struct ZipFile_HeaderTest;
}
namespace GlobalNamespace {
struct ZipFile_UpdateCommand;
}
namespace ICSharpCode::SharpZipLib::Core {
class INameTransform;
}
namespace ICSharpCode::SharpZipLib::Zip {
struct CompressionMethod;
}
namespace ICSharpCode::SharpZipLib::Zip {
class IArchiveStorage;
}
namespace ICSharpCode::SharpZipLib::Zip {
class IDynamicDataSource;
}
namespace ICSharpCode::SharpZipLib::Zip {
class IEntryFactory;
}
namespace ICSharpCode::SharpZipLib::Zip {
class IStaticDataSource;
}
namespace ICSharpCode::SharpZipLib::Zip {
class KeysRequiredEventArgs;
}
namespace ICSharpCode::SharpZipLib::Zip {
struct TestStrategy;
}
namespace ICSharpCode::SharpZipLib::Zip {
struct UseZip64;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipEntry;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipFile_KeysRequiredEventHandler;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipFile_PartialInputStream;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipFile_UncompressedStream;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipFile_UpdateComparer;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipFile_ZipEntryEnumerator;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipFile_ZipString;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipFile_ZipUpdate;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipTestResultHandler;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
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
class FileStream;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System::Security::Cryptography {
class CryptoStream;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class ZipFile;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipFile_KeysRequiredEventHandler;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipFile_PartialInputStream;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipFile_UncompressedStream;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipFile_UpdateComparer;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipFile_ZipEntryEnumerator;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipFile_ZipString;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipFile_ZipUpdate;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::ZipFile*);
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler*);
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*);
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*);
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateComparer*);
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator*);
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*);
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ZipFile*, "ICSharpCode.SharpZipLib.Zip", "ZipFile");
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler*, "ICSharpCode.SharpZipLib.Zip", "ZipFile/KeysRequiredEventHandler");
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream*, "ICSharpCode.SharpZipLib.Zip", "ZipFile/PartialInputStream");
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream*, "ICSharpCode.SharpZipLib.Zip", "ZipFile/UncompressedStream");
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateComparer*, "ICSharpCode.SharpZipLib.Zip", "ZipFile/UpdateComparer");
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator*, "ICSharpCode.SharpZipLib.Zip", "ZipFile/ZipEntryEnumerator");
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*, "ICSharpCode.SharpZipLib.Zip", "ZipFile/ZipString");
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*, "ICSharpCode.SharpZipLib.Zip", "ZipFile/ZipUpdate");
// [DefaultMember("EntryByIndex")]
// Dependencies ICSharpCode.SharpZipLib.Zip.UseZip64, ICSharpCode.SharpZipLib.Zip.ZipEntry, System.Object
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipFile
class CORDL_TYPE ZipFile : public ::System::Object {
public:
// Declarations
using HeaderTest = ::GlobalNamespace::ZipFile_HeaderTest;

using UpdateCommand = ::GlobalNamespace::ZipFile_UpdateCommand;

using KeysRequiredEventHandler = ::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler;

using PartialInputStream = ::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream;

using UncompressedStream = ::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream;

using UpdateComparer = ::ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateComparer;

using ZipEntryEnumerator = ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator;

using ZipString = ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString;

using ZipUpdate = ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate;

 __declspec(property(get=get_BufferSize, put=set_BufferSize)) int32_t  BufferSize;

 __declspec(property(get=get_Count)) int64_t  Count;

 __declspec(property(get=get_EntryByIndex)) ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  EntryByIndex[];

 __declspec(property(get=get_EntryFactory, put=set_EntryFactory)) ::ICSharpCode::SharpZipLib::Zip::IEntryFactory*  EntryFactory;

 __declspec(property(get=get_HaveKeys)) bool  HaveKeys;

 __declspec(property(get=get_IsEmbeddedArchive)) bool  IsEmbeddedArchive;

 __declspec(property(get=get_IsNewArchive)) bool  IsNewArchive;

 __declspec(property(get=get_IsStreamOwner, put=set_IsStreamOwner)) bool  IsStreamOwner;

 __declspec(property(get=get_IsUpdating)) bool  IsUpdating;

 __declspec(property(get=get_Key, put=set_Key)) ::ArrayW<uint8_t>  Key;

/// @brief Field KeysRequired, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_KeysRequired, put=__cordl_internal_set_KeysRequired)) ::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler*  KeysRequired;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NameTransform, put=set_NameTransform)) ::ICSharpCode::SharpZipLib::Core::INameTransform*  NameTransform;

 __declspec(property(put=set_Password)) ::StringW  Password;

/// @brief [Obsolete("Use the Count property instead")]
 __declspec(property(get=get_Size)) int32_t  Size;

 __declspec(property(get=get_UseZip64, put=set_UseZip64)) ::ICSharpCode::SharpZipLib::Zip::UseZip64  UseZip64;

 __declspec(property(get=get_ZipFileComment)) ::StringW  ZipFileComment;

/// @brief Field archiveStorage_, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_archiveStorage_, put=__cordl_internal_set_archiveStorage_)) ::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*  archiveStorage_;

/// @brief Field baseStream_, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseStream_, put=__cordl_internal_set_baseStream_)) ::System::IO::Stream*  baseStream_;

/// @brief Field bufferSize_, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_bufferSize_, put=__cordl_internal_set_bufferSize_)) int32_t  bufferSize_;

/// @brief Field commentEdited_, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_commentEdited_, put=__cordl_internal_set_commentEdited_)) bool  commentEdited_;

/// @brief Field comment_, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_comment_, put=__cordl_internal_set_comment_)) ::StringW  comment_;

/// @brief Field contentsEdited_, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_contentsEdited_, put=__cordl_internal_set_contentsEdited_)) bool  contentsEdited_;

/// @brief Field copyBuffer_, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_copyBuffer_, put=__cordl_internal_set_copyBuffer_)) ::ArrayW<uint8_t>  copyBuffer_;

/// @brief Field entries_, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_entries_, put=__cordl_internal_set_entries_)) ::ArrayW<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>  entries_;

/// @brief Field isDisposed_, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDisposed_, put=__cordl_internal_set_isDisposed_)) bool  isDisposed_;

/// @brief Field isNewArchive_, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_isNewArchive_, put=__cordl_internal_set_isNewArchive_)) bool  isNewArchive_;

/// @brief Field isStreamOwner, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_isStreamOwner, put=__cordl_internal_set_isStreamOwner)) bool  isStreamOwner;

/// @brief Field key, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_key, put=__cordl_internal_set_key)) ::ArrayW<uint8_t>  key;

/// @brief Field name_, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_name_, put=__cordl_internal_set_name_)) ::StringW  name_;

/// @brief Field newComment_, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_newComment_, put=__cordl_internal_set_newComment_)) ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*  newComment_;

/// @brief Field offsetOfFirstEntry, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_offsetOfFirstEntry, put=__cordl_internal_set_offsetOfFirstEntry)) int64_t  offsetOfFirstEntry;

/// @brief Field rawPassword_, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rawPassword_, put=__cordl_internal_set_rawPassword_)) ::StringW  rawPassword_;

/// @brief Field updateCount_, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_updateCount_, put=__cordl_internal_set_updateCount_)) int64_t  updateCount_;

/// @brief Field updateDataSource_, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_updateDataSource_, put=__cordl_internal_set_updateDataSource_)) ::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource*  updateDataSource_;

/// @brief Field updateEntryFactory_, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_updateEntryFactory_, put=__cordl_internal_set_updateEntryFactory_)) ::ICSharpCode::SharpZipLib::Zip::IEntryFactory*  updateEntryFactory_;

/// @brief Field updateIndex_, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_updateIndex_, put=__cordl_internal_set_updateIndex_)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  updateIndex_;

/// @brief Field updates_, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_updates_, put=__cordl_internal_set_updates_)) ::System::Collections::Generic::List_1<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>*  updates_;

/// @brief Field useZip64_, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_useZip64_, put=__cordl_internal_set_useZip64_)) ::ICSharpCode::SharpZipLib::Zip::UseZip64  useZip64_;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AbortUpdate, addr 0x9f89710, size 0x4, virtual false, abstract: false, final false
inline void AbortUpdate() ;

/// @brief Method Add, addr 0x9f8a944, size 0x134, virtual false, abstract: false, final false
inline void Add(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*  dataSource, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// @brief Method Add, addr 0x9f8a268, size 0x174, virtual false, abstract: false, final false
inline void Add(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*  dataSource, ::StringW  entryName) ;

/// @brief Method Add, addr 0x9f8a434, size 0x184, virtual false, abstract: false, final false
inline void Add(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*  dataSource, ::StringW  entryName, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  compressionMethod) ;

/// @brief Method Add, addr 0x9f8a5b8, size 0x19c, virtual false, abstract: false, final false
inline void Add(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*  dataSource, ::StringW  entryName, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  compressionMethod, bool  useUnicodeText) ;

/// @brief Method Add, addr 0x9f8a754, size 0x104, virtual false, abstract: false, final false
inline void Add(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// @brief Method Add, addr 0x9f89fac, size 0x144, virtual false, abstract: false, final false
inline void Add(::StringW  fileName) ;

/// @brief Method Add, addr 0x9f89e50, size 0x15c, virtual false, abstract: false, final false
inline void Add(::StringW  fileName, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  compressionMethod) ;

/// @brief Method Add, addr 0x9f89bdc, size 0x1b0, virtual false, abstract: false, final false
inline void Add(::StringW  fileName, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  compressionMethod, bool  useUnicodeText) ;

/// @brief Method Add, addr 0x9f8a0f0, size 0x178, virtual false, abstract: false, final false
inline void Add(::StringW  fileName, ::StringW  entryName) ;

/// @brief Method AddDirectory, addr 0x9f8aa78, size 0x148, virtual false, abstract: false, final false
inline void AddDirectory(::StringW  directoryName) ;

/// @brief Method AddEntry, addr 0x9f8c9c8, size 0x508, virtual false, abstract: false, final false
inline void AddEntry(::ICSharpCode::SharpZipLib::Zip::ZipFile*  workFile, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  update) ;

/// @brief Method AddUpdate, addr 0x9f8999c, size 0x188, virtual false, abstract: false, final false
inline void AddUpdate(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  update) ;

/// @brief Method BeginUpdate, addr 0x9f87e6c, size 0xcc, virtual false, abstract: false, final false
inline void BeginUpdate() ;

/// @brief Method BeginUpdate, addr 0x9f87df8, size 0x6c, virtual false, abstract: false, final false
inline void BeginUpdate(::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*  archiveStorage) ;

/// @brief Method BeginUpdate, addr 0x9f878a0, size 0x544, virtual false, abstract: false, final false
inline void BeginUpdate(::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*  archiveStorage, ::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource*  dataSource) ;

/// @brief Method CheckClassicPassword, addr 0x9f8db7c, size 0xdc, virtual false, abstract: false, final false
static inline void CheckClassicPassword(::System::Security::Cryptography::CryptoStream*  classicCryptoStream, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// @brief Method CheckSupportedCompressionMethod, addr 0x9f89d8c, size 0x6c, virtual false, abstract: false, final false
static inline void CheckSupportedCompressionMethod(::ICSharpCode::SharpZipLib::Zip::CompressionMethod  compressionMethod) ;

/// @brief Method CheckUpdating, addr 0x9f88260, size 0x58, virtual false, abstract: false, final false
inline void CheckUpdating() ;

/// @brief Method Close, addr 0x9f84c30, size 0x64, virtual false, abstract: false, final false
inline void Close() ;

/// @brief Method CommitUpdate, addr 0x9f87f60, size 0x300, virtual false, abstract: false, final false
inline void CommitUpdate() ;

/// @brief Method CopyBytes, addr 0x9f8bf40, size 0x274, virtual false, abstract: false, final false
inline void CopyBytes(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  update, ::System::IO::Stream*  destination, ::System::IO::Stream*  source, int64_t  bytesToCopy, bool  updateCrc) ;

/// @brief Method CopyDescriptorBytes, addr 0x9f8bd38, size 0x1b8, virtual false, abstract: false, final false
inline void CopyDescriptorBytes(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  update, ::System::IO::Stream*  dest, ::System::IO::Stream*  source) ;

/// @brief Method CopyDescriptorBytesDirect, addr 0x9f8c1b4, size 0x188, virtual false, abstract: false, final false
inline void CopyDescriptorBytesDirect(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  update, ::System::IO::Stream*  stream, ::by_ref<int64_t>  destinationPosition, int64_t  sourcePosition) ;

/// @brief Method CopyEntry, addr 0x9f8d5fc, size 0x100, virtual false, abstract: false, final false
inline void CopyEntry(::ICSharpCode::SharpZipLib::Zip::ZipFile*  workFile, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  update) ;

/// @brief Method CopyEntryDataDirect, addr 0x9f8c33c, size 0x28c, virtual false, abstract: false, final false
inline void CopyEntryDataDirect(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  update, ::System::IO::Stream*  stream, bool  updateCrc, ::by_ref<int64_t>  destinationPosition, ::by_ref<int64_t>  sourcePosition) ;

/// @brief Method CopyEntryDirect, addr 0x9f8d3cc, size 0x230, virtual false, abstract: false, final false
inline void CopyEntryDirect(::ICSharpCode::SharpZipLib::Zip::ZipFile*  workFile, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  update, ::by_ref<int64_t>  destinationPosition) ;

/// @brief Method Create, addr 0x9f84c94, size 0xe4, virtual false, abstract: false, final false
static inline ::ICSharpCode::SharpZipLib::Zip::ZipFile* Create(::StringW  fileName) ;

/// @brief Method Create, addr 0x9f84d78, size 0x148, virtual false, abstract: false, final false
static inline ::ICSharpCode::SharpZipLib::Zip::ZipFile* Create(::System::IO::Stream*  outStream) ;

/// @brief Method CreateAndInitDecryptionStream, addr 0x9f8557c, size 0x3e8, virtual false, abstract: false, final false
inline ::System::IO::Stream* CreateAndInitDecryptionStream(::System::IO::Stream*  baseStream, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// @brief Method CreateAndInitEncryptionStream, addr 0x9f8c7bc, size 0x198, virtual false, abstract: false, final false
inline ::System::IO::Stream* CreateAndInitEncryptionStream(::System::IO::Stream*  baseStream, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// @brief Method Delete, addr 0x9f8abc0, size 0x140, virtual false, abstract: false, final false
inline bool Delete(::StringW  fileName) ;

/// @brief Method Delete, addr 0x9f8ad00, size 0x108, virtual false, abstract: false, final false
inline void Delete(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// @brief Method Dispose, addr 0x9f8d998, size 0x8, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method DisposeInternal, addr 0x9f84788, size 0x150, virtual false, abstract: false, final false
inline void DisposeInternal(bool  disposing) ;

/// @brief Method Finalize, addr 0x9f84ba0, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method FindEntry, addr 0x9f85004, size 0xe0, virtual false, abstract: false, final false
inline int32_t FindEntry(::StringW  name, bool  ignoreCase) ;

/// @brief Method FindExistingUpdate, addr 0x9f8ae08, size 0x98, virtual false, abstract: false, final false
inline int32_t FindExistingUpdate(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// @brief Method FindExistingUpdate, addr 0x9f89b24, size 0xb8, virtual false, abstract: false, final false
inline int32_t FindExistingUpdate(::StringW  fileName, bool  isEntryName) ;

/// @brief Method GetBuffer, addr 0x9f8bccc, size 0x6c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetBuffer() ;

/// @brief Method GetDescriptorSize, addr 0x9f8bef0, size 0x50, virtual false, abstract: false, final false
static inline int32_t GetDescriptorSize(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  update, bool  includingSignature) ;

/// @brief Method GetEntry, addr 0x9f850e4, size 0x10c, virtual false, abstract: false, final false
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* GetEntry(::StringW  name) ;

/// @brief Method GetEnumerator, addr 0x9f7d17c, size 0xc4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* GetEnumerator() ;

/// @brief Method GetInputStream, addr 0x9f7e4e4, size 0x160, virtual false, abstract: false, final false
inline ::System::IO::Stream* GetInputStream(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// @brief Method GetInputStream, addr 0x9f851f0, size 0x2d0, virtual false, abstract: false, final false
inline ::System::IO::Stream* GetInputStream(int64_t  entryIndex) ;

/// @brief Method GetOutputStream, addr 0x9f8c5c8, size 0x1f4, virtual false, abstract: false, final false
inline ::System::IO::Stream* GetOutputStream(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// @brief Method GetTransformedDirectoryName, addr 0x9f8bc0c, size 0xc0, virtual false, abstract: false, final false
inline ::StringW GetTransformedDirectoryName(::StringW  name) ;

/// @brief Method GetTransformedFileName, addr 0x9f8bb50, size 0xbc, virtual false, abstract: false, final false
inline ::StringW GetTransformedFileName(::StringW  name) ;

/// @brief Method LocateBlockWithSignature, addr 0x9f8d9f4, size 0x188, virtual false, abstract: false, final false
inline int64_t LocateBlockWithSignature(int32_t  signature, int64_t  endLocation, int32_t  minimumBlockSize, int32_t  maximumVariableData) ;

/// @brief Method LocateEntry, addr 0x9f854c0, size 0x8, virtual false, abstract: false, final false
inline int64_t LocateEntry(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// @brief Method ModifyEntry, addr 0x9f8d0dc, size 0x2f0, virtual false, abstract: false, final false
inline void ModifyEntry(::ICSharpCode::SharpZipLib::Zip::ZipFile*  workFile, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  update) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipFile* New_ctor() ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipFile* New_ctor(::System::IO::FileStream*  file) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipFile* New_ctor(::System::IO::FileStream*  file, bool  leaveOpen) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipFile* New_ctor(::StringW  name) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipFile* New_ctor(::System::IO::Stream*  stream) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipFile* New_ctor(::System::IO::Stream*  stream, bool  leaveOpen) ;

/// @brief Method OnKeysRequired, addr 0x9f83c90, size 0xb8, virtual false, abstract: false, final false
inline void OnKeysRequired(::StringW  fileName) ;

/// @brief Method PostUpdateCleanup, addr 0x9f89714, size 0xec, virtual false, abstract: false, final false
inline void PostUpdateCleanup() ;

/// @brief Method ReadEntries, addr 0x9f83f08, size 0x880, virtual false, abstract: false, final false
inline void ReadEntries() ;

/// @brief Method ReadLEUint, addr 0x9f87558, size 0x30, virtual false, abstract: false, final false
inline uint32_t ReadLEUint() ;

/// @brief Method ReadLEUlong, addr 0x9f8d9a0, size 0x54, virtual false, abstract: false, final false
inline uint64_t ReadLEUlong() ;

/// @brief Method ReadLEUshort, addr 0x9f87588, size 0xa4, virtual false, abstract: false, final false
inline uint16_t ReadLEUshort() ;

/// @brief Method Reopen, addr 0x9f8d764, size 0x7c, virtual false, abstract: false, final false
inline void Reopen() ;

/// @brief Method Reopen, addr 0x9f8d6fc, size 0x68, virtual false, abstract: false, final false
inline void Reopen(::System::IO::Stream*  source) ;

/// @brief Method RunUpdates, addr 0x9f882b8, size 0xbc8, virtual false, abstract: false, final false
inline void RunUpdates() ;

/// @brief Method SetComment, addr 0x9f89800, size 0x13c, virtual false, abstract: false, final false
inline void SetComment(::StringW  comment) ;

/// @brief Method System.IDisposable.Dispose, addr 0x9f8d994, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method TestArchive, addr 0x9f85964, size 0xc, virtual false, abstract: false, final false
inline bool TestArchive(bool  testData) ;

/// @brief Method TestArchive, addr 0x9f85970, size 0xa68, virtual false, abstract: false, final false
inline bool TestArchive(bool  testData, ::ICSharpCode::SharpZipLib::Zip::TestStrategy  strategy, ::ICSharpCode::SharpZipLib::Zip::ZipTestResultHandler*  resultHandler) ;

/// @brief Method TestLocalHeader, addr 0x9f863d8, size 0x106c, virtual false, abstract: false, final false
inline int64_t TestLocalHeader(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry, ::GlobalNamespace::ZipFile_HeaderTest  tests) ;

/// @brief Method UpdateCommentOnly, addr 0x9f88e80, size 0x5d4, virtual false, abstract: false, final false
inline void UpdateCommentOnly() ;

/// @brief Method WriteCentralDirectoryHeader, addr 0x9f8b5d4, size 0x57c, virtual false, abstract: false, final false
inline int32_t WriteCentralDirectoryHeader(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// @brief Method WriteEncryptionHeader, addr 0x9f8dc58, size 0x1c4, virtual false, abstract: false, final false
static inline void WriteEncryptionHeader(::System::IO::Stream*  stream, int64_t  crcValue) ;

/// @brief Method WriteLEInt, addr 0x9f8af40, size 0x2c, virtual false, abstract: false, final false
inline void WriteLEInt(int32_t  value) ;

/// @brief Method WriteLEShort, addr 0x9f8aea0, size 0x50, virtual false, abstract: false, final false
inline void WriteLEShort(int32_t  value) ;

/// @brief Method WriteLEUint, addr 0x9f8af6c, size 0x28, virtual false, abstract: false, final false
inline void WriteLEUint(uint32_t  value) ;

/// @brief Method WriteLEUlong, addr 0x9f8afd8, size 0x40, virtual false, abstract: false, final false
inline void WriteLEUlong(uint64_t  value) ;

/// @brief Method WriteLEUshort, addr 0x9f8aef0, size 0x50, virtual false, abstract: false, final false
inline void WriteLEUshort(uint16_t  value) ;

/// @brief Method WriteLeLong, addr 0x9f8af94, size 0x44, virtual false, abstract: false, final false
inline void WriteLeLong(int64_t  value) ;

/// @brief Method WriteLocalEntryHeader, addr 0x9f8b018, size 0x4e8, virtual false, abstract: false, final false
inline void WriteLocalEntryHeader(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  update) ;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler* const& __cordl_internal_get_KeysRequired() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler*& __cordl_internal_get_KeysRequired() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::IArchiveStorage* const& __cordl_internal_get_archiveStorage_() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*& __cordl_internal_get_archiveStorage_() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_baseStream_() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_baseStream_() ;

constexpr int32_t const& __cordl_internal_get_bufferSize_() const;

constexpr int32_t& __cordl_internal_get_bufferSize_() ;

constexpr bool const& __cordl_internal_get_commentEdited_() const;

constexpr bool& __cordl_internal_get_commentEdited_() ;

constexpr ::StringW const& __cordl_internal_get_comment_() const;

constexpr ::StringW& __cordl_internal_get_comment_() ;

constexpr bool const& __cordl_internal_get_contentsEdited_() const;

constexpr bool& __cordl_internal_get_contentsEdited_() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_copyBuffer_() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_copyBuffer_() ;

constexpr ::ArrayW<::ICSharpCode::SharpZipLib::Zip::ZipEntry*> const& __cordl_internal_get_entries_() const;

constexpr ::ArrayW<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>& __cordl_internal_get_entries_() ;

constexpr bool const& __cordl_internal_get_isDisposed_() const;

constexpr bool& __cordl_internal_get_isDisposed_() ;

constexpr bool const& __cordl_internal_get_isNewArchive_() const;

constexpr bool& __cordl_internal_get_isNewArchive_() ;

constexpr bool const& __cordl_internal_get_isStreamOwner() const;

constexpr bool& __cordl_internal_get_isStreamOwner() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_key() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_key() ;

constexpr ::StringW const& __cordl_internal_get_name_() const;

constexpr ::StringW& __cordl_internal_get_name_() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString* const& __cordl_internal_get_newComment_() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*& __cordl_internal_get_newComment_() ;

constexpr int64_t const& __cordl_internal_get_offsetOfFirstEntry() const;

constexpr int64_t& __cordl_internal_get_offsetOfFirstEntry() ;

constexpr ::StringW const& __cordl_internal_get_rawPassword_() const;

constexpr ::StringW& __cordl_internal_get_rawPassword_() ;

constexpr int64_t const& __cordl_internal_get_updateCount_() const;

constexpr int64_t& __cordl_internal_get_updateCount_() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource* const& __cordl_internal_get_updateDataSource_() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource*& __cordl_internal_get_updateDataSource_() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::IEntryFactory* const& __cordl_internal_get_updateEntryFactory_() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::IEntryFactory*& __cordl_internal_get_updateEntryFactory_() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get_updateIndex_() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get_updateIndex_() ;

constexpr ::System::Collections::Generic::List_1<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>* const& __cordl_internal_get_updates_() const;

constexpr ::System::Collections::Generic::List_1<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>*& __cordl_internal_get_updates_() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::UseZip64 const& __cordl_internal_get_useZip64_() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::UseZip64& __cordl_internal_get_useZip64_() ;

constexpr void __cordl_internal_set_KeysRequired(::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler*  value) ;

constexpr void __cordl_internal_set_archiveStorage_(::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*  value) ;

constexpr void __cordl_internal_set_baseStream_(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set_bufferSize_(int32_t  value) ;

constexpr void __cordl_internal_set_commentEdited_(bool  value) ;

constexpr void __cordl_internal_set_comment_(::StringW  value) ;

constexpr void __cordl_internal_set_contentsEdited_(bool  value) ;

constexpr void __cordl_internal_set_copyBuffer_(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_entries_(::ArrayW<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>  value) ;

constexpr void __cordl_internal_set_isDisposed_(bool  value) ;

constexpr void __cordl_internal_set_isNewArchive_(bool  value) ;

constexpr void __cordl_internal_set_isStreamOwner(bool  value) ;

constexpr void __cordl_internal_set_key(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_name_(::StringW  value) ;

constexpr void __cordl_internal_set_newComment_(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*  value) ;

constexpr void __cordl_internal_set_offsetOfFirstEntry(int64_t  value) ;

constexpr void __cordl_internal_set_rawPassword_(::StringW  value) ;

constexpr void __cordl_internal_set_updateCount_(int64_t  value) ;

constexpr void __cordl_internal_set_updateDataSource_(::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource*  value) ;

constexpr void __cordl_internal_set_updateEntryFactory_(::ICSharpCode::SharpZipLib::Zip::IEntryFactory*  value) ;

constexpr void __cordl_internal_set_updateIndex_(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

constexpr void __cordl_internal_set_updates_(::System::Collections::Generic::List_1<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>*  value) ;

constexpr void __cordl_internal_set_useZip64_(::ICSharpCode::SharpZipLib::Zip::UseZip64  value) ;

/// @brief Method .ctor, addr 0x9f84ae8, size 0xb8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9f848d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::IO::FileStream*  file) ;

/// @brief Method .ctor, addr 0x9f848e0, size 0x200, virtual false, abstract: false, final false
inline void _ctor(::System::IO::FileStream*  file, bool  leaveOpen) ;

/// @brief Method .ctor, addr 0x9f83d68, size 0x1a0, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method .ctor, addr 0x9f84ae0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream) ;

/// @brief Method .ctor, addr 0x9f7cea0, size 0x238, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, bool  leaveOpen) ;

/// @brief Method get_BufferSize, addr 0x9f877e8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_BufferSize() ;

/// @brief Method get_Count, addr 0x9f84f10, size 0x18, virtual false, abstract: false, final false
inline int64_t get_Count() ;

/// @brief Method get_EntryByIndex, addr 0x9f84f28, size 0xa4, virtual false, abstract: false, final false
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* get_EntryByIndex(int32_t  index) ;

/// @brief Method get_EntryFactory, addr 0x9f8777c, size 0x8, virtual false, abstract: false, final false
inline ::ICSharpCode::SharpZipLib::Zip::IEntryFactory* get_EntryFactory() ;

/// @brief Method get_HaveKeys, addr 0x9f83d58, size 0x10, virtual false, abstract: false, final false
inline bool get_HaveKeys() ;

/// @brief Method get_IsEmbeddedArchive, addr 0x9f84ed0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsEmbeddedArchive() ;

/// @brief Method get_IsNewArchive, addr 0x9f84ee0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsNewArchive() ;

/// @brief Method get_IsStreamOwner, addr 0x9f84ec0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsStreamOwner() ;

/// @brief Method get_IsUpdating, addr 0x9f87880, size 0x10, virtual false, abstract: false, final false
inline bool get_IsUpdating() ;

/// @brief Method get_Key, addr 0x9f83d48, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_Key() ;

/// @brief Method get_Name, addr 0x9f84ef0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NameTransform, addr 0x9f8762c, size 0xa4, virtual false, abstract: false, final false
inline ::ICSharpCode::SharpZipLib::Core::INameTransform* get_NameTransform() ;

/// @brief Method get_Size, addr 0x9f84ef8, size 0x18, virtual false, abstract: false, final false
inline int32_t get_Size() ;

/// @brief Method get_UseZip64, addr 0x9f87890, size 0x8, virtual false, abstract: false, final false
inline ::ICSharpCode::SharpZipLib::Zip::UseZip64 get_UseZip64() ;

/// @brief Method get_ZipFileComment, addr 0x9f84ee8, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ZipFileComment() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_BufferSize, addr 0x9f877f0, size 0x90, virtual false, abstract: false, final false
inline void set_BufferSize(int32_t  value) ;

/// @brief Method set_EntryFactory, addr 0x9f87784, size 0x64, virtual false, abstract: false, final false
inline void set_EntryFactory(::ICSharpCode::SharpZipLib::Zip::IEntryFactory*  value) ;

/// @brief Method set_IsStreamOwner, addr 0x9f84ec8, size 0x8, virtual false, abstract: false, final false
inline void set_IsStreamOwner(bool  value) ;

/// @brief Method set_Key, addr 0x9f83d50, size 0x8, virtual false, abstract: false, final false
inline void set_Key(::ArrayW<uint8_t>  value) ;

/// @brief Method set_NameTransform, addr 0x9f876d0, size 0xac, virtual false, abstract: false, final false
inline void set_NameTransform(::ICSharpCode::SharpZipLib::Core::INameTransform*  value) ;

/// @brief Method set_Password, addr 0x9f7d0d8, size 0xa4, virtual false, abstract: false, final false
inline void set_Password(::StringW  value) ;

/// @brief Method set_UseZip64, addr 0x9f87898, size 0x8, virtual false, abstract: false, final false
inline void set_UseZip64(::ICSharpCode::SharpZipLib::Zip::UseZip64  value) ;

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

/// @brief Field DefaultBufferSize offset 0xffffffff size 0x4
static constexpr int32_t  DefaultBufferSize{static_cast<int32_t>(0x1000)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17352};

/// @brief Field KeysRequired, offset: 0x10, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler*  ___KeysRequired;

/// @brief Field isDisposed_, offset: 0x18, size: 0x1, def value: None
 bool  ___isDisposed_;

/// @brief Field name_, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___name_;

/// @brief Field comment_, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___comment_;

/// @brief Field rawPassword_, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___rawPassword_;

/// @brief Field baseStream_, offset: 0x38, size: 0x8, def value: None
 ::System::IO::Stream*  ___baseStream_;

/// @brief Field isStreamOwner, offset: 0x40, size: 0x1, def value: None
 bool  ___isStreamOwner;

/// @brief Field offsetOfFirstEntry, offset: 0x48, size: 0x8, def value: None
 int64_t  ___offsetOfFirstEntry;

/// @brief Field entries_, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>  ___entries_;

/// @brief Field key, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___key;

/// @brief Field isNewArchive_, offset: 0x60, size: 0x1, def value: None
 bool  ___isNewArchive_;

/// @brief Field useZip64_, offset: 0x64, size: 0x4, def value: None
 ::ICSharpCode::SharpZipLib::Zip::UseZip64  ___useZip64_;

/// @brief Field updates_, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>*  ___updates_;

/// @brief Field updateCount_, offset: 0x70, size: 0x8, def value: None
 int64_t  ___updateCount_;

/// @brief Field updateIndex_, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ___updateIndex_;

/// @brief Field archiveStorage_, offset: 0x80, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*  ___archiveStorage_;

/// @brief Field updateDataSource_, offset: 0x88, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::IDynamicDataSource*  ___updateDataSource_;

/// @brief Field contentsEdited_, offset: 0x90, size: 0x1, def value: None
 bool  ___contentsEdited_;

/// @brief Field bufferSize_, offset: 0x94, size: 0x4, def value: None
 int32_t  ___bufferSize_;

/// @brief Field copyBuffer_, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___copyBuffer_;

/// @brief Field newComment_, offset: 0xa0, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*  ___newComment_;

/// @brief Field commentEdited_, offset: 0xa8, size: 0x1, def value: None
 bool  ___commentEdited_;

/// @brief Field updateEntryFactory_, offset: 0xb0, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::IEntryFactory*  ___updateEntryFactory_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile, ___KeysRequired) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile, ___isDisposed_) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile, ___name_) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile, ___comment_) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile, ___rawPassword_) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile, ___baseStream_) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile, ___isStreamOwner) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile, ___offsetOfFirstEntry) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile, ___entries_) == 0x50, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile, ___key) == 0x58, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile, ___isNewArchive_) == 0x60, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile, ___useZip64_) == 0x64, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile, ___updates_) == 0x68, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile, ___updateCount_) == 0x70, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile, ___updateIndex_) == 0x78, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile, ___archiveStorage_) == 0x80, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile, ___updateDataSource_) == 0x88, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile, ___contentsEdited_) == 0x90, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile, ___bufferSize_) == 0x94, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile, ___copyBuffer_) == 0x98, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile, ___newComment_) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile, ___commentEdited_) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile, ___updateEntryFactory_) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::ZipFile) == 0xb8, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
// Dependencies System.IO.Stream
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipFile/PartialInputStream
class CORDL_TYPE ZipFile_PartialInputStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanTimeout)) bool  CanTimeout;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field baseStream_, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseStream_, put=__cordl_internal_set_baseStream_)) ::System::IO::Stream*  baseStream_;

/// @brief Field end_, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_end_, put=__cordl_internal_set_end_)) int64_t  end_;

/// @brief Field length_, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_length_, put=__cordl_internal_set_length_)) int64_t  length_;

/// @brief Field readPos_, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_readPos_, put=__cordl_internal_set_readPos_)) int64_t  readPos_;

/// @brief Field start_, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_start_, put=__cordl_internal_set_start_)) int64_t  start_;

/// @brief Field zipFile_, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_zipFile_, put=__cordl_internal_set_zipFile_)) ::ICSharpCode::SharpZipLib::Zip::ZipFile*  zipFile_;

/// @brief Method Flush, addr 0x9f8e8fc, size 0x4, virtual true, abstract: false, final false
inline void Flush() ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream* New_ctor(::ICSharpCode::SharpZipLib::Zip::ZipFile*  zipFile, int64_t  start, int64_t  length) ;

/// @brief Method Read, addr 0x9f8e624, size 0x190, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ReadByte, addr 0x9f8e4f8, size 0x12c, virtual true, abstract: false, final false
inline int32_t ReadByte() ;

/// @brief Method Seek, addr 0x9f8e824, size 0xd8, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0x9f8e7ec, size 0x38, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method Write, addr 0x9f8e7b4, size 0x38, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_baseStream_() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_baseStream_() ;

constexpr int64_t const& __cordl_internal_get_end_() const;

constexpr int64_t& __cordl_internal_get_end_() ;

constexpr int64_t const& __cordl_internal_get_length_() const;

constexpr int64_t& __cordl_internal_get_length_() ;

constexpr int64_t const& __cordl_internal_get_readPos_() const;

constexpr int64_t& __cordl_internal_get_readPos_() ;

constexpr int64_t const& __cordl_internal_get_start_() const;

constexpr int64_t& __cordl_internal_get_start_() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile* const& __cordl_internal_get_zipFile_() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipFile*& __cordl_internal_get_zipFile_() ;

constexpr void __cordl_internal_set_baseStream_(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set_end_(int64_t  value) ;

constexpr void __cordl_internal_set_length_(int64_t  value) ;

constexpr void __cordl_internal_set_readPos_(int64_t  value) ;

constexpr void __cordl_internal_set_start_(int64_t  value) ;

constexpr void __cordl_internal_set_zipFile_(::ICSharpCode::SharpZipLib::Zip::ZipFile*  value) ;

/// @brief Method .ctor, addr 0x9f854c8, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::ICSharpCode::SharpZipLib::Zip::ZipFile*  zipFile, int64_t  start, int64_t  length) ;

/// @brief Method get_CanRead, addr 0x9f8e9d0, size 0x8, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0x9f8e9c8, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanTimeout, addr 0x9f8e9d8, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanTimeout() ;

/// @brief Method get_CanWrite, addr 0x9f8e9c0, size 0x8, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Length, addr 0x9f8e9b8, size 0x8, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0x9f8e900, size 0x10, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method set_Position, addr 0x9f8e910, size 0xa8, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipFile_PartialInputStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipFile_PartialInputStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipFile_PartialInputStream(ZipFile_PartialInputStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipFile_PartialInputStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipFile_PartialInputStream(ZipFile_PartialInputStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17351};

/// @brief Field zipFile_, offset: 0x28, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::ZipFile*  ___zipFile_;

/// @brief Field baseStream_, offset: 0x30, size: 0x8, def value: None
 ::System::IO::Stream*  ___baseStream_;

/// @brief Field start_, offset: 0x38, size: 0x8, def value: None
 int64_t  ___start_;

/// @brief Field length_, offset: 0x40, size: 0x8, def value: None
 int64_t  ___length_;

/// @brief Field readPos_, offset: 0x48, size: 0x8, def value: None
 int64_t  ___readPos_;

/// @brief Field end_, offset: 0x50, size: 0x8, def value: None
 int64_t  ___end_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream, ___zipFile_) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream, ___baseStream_) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream, ___start_) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream, ___length_) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream, ___readPos_) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream, ___end_) == 0x50, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::ZipFile_PartialInputStream) == 0x58, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
// Dependencies System.IO.Stream
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipFile/UncompressedStream
class CORDL_TYPE ZipFile_UncompressedStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field baseStream_, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseStream_, put=__cordl_internal_set_baseStream_)) ::System::IO::Stream*  baseStream_;

/// @brief Method Flush, addr 0x9f8e420, size 0x20, virtual true, abstract: false, final false
inline void Flush() ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream* New_ctor(::System::IO::Stream*  baseStream) ;

/// @brief Method Read, addr 0x9f8e4c4, size 0x8, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Seek, addr 0x9f8e4cc, size 0x8, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0x9f8e4d4, size 0x4, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method Write, addr 0x9f8e4d8, size 0x20, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_baseStream_() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_baseStream_() ;

constexpr void __cordl_internal_set_baseStream_(::System::IO::Stream*  value) ;

/// @brief Method .ctor, addr 0x9f8c954, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  baseStream) ;

/// @brief Method get_CanRead, addr 0x9f8e418, size 0x8, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0x9f8e45c, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0x9f8e440, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Length, addr 0x9f8e464, size 0x8, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0x9f8e46c, size 0x20, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method set_Position, addr 0x9f8e48c, size 0x38, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipFile_UncompressedStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipFile_UncompressedStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipFile_UncompressedStream(ZipFile_UncompressedStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipFile_UncompressedStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipFile_UncompressedStream(ZipFile_UncompressedStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17350};

/// @brief Field baseStream_, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Stream*  ___baseStream_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream, ___baseStream_) == 0x28, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::ZipFile_UncompressedStream) == 0x30, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
// Dependencies ICSharpCode.SharpZipLib.Zip.ZipEntry, System.Object
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipFile/ZipEntryEnumerator
class CORDL_TYPE ZipFile_ZipEntryEnumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::System::Object*  Current;

/// @brief Field array, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_array, put=__cordl_internal_set_array)) ::ArrayW<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>  array;

/// @brief Field index, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Method MoveNext, addr 0x9f8e3ec, size 0x2c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator* New_ctor(::ArrayW<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>  entries) ;

/// @brief Method Reset, addr 0x9f8e3e0, size 0xc, virtual true, abstract: false, final true
inline void Reset() ;

constexpr ::ArrayW<::ICSharpCode::SharpZipLib::Zip::ZipEntry*> const& __cordl_internal_get_array() const;

constexpr ::ArrayW<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>& __cordl_internal_get_array() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr void __cordl_internal_set_array(::ArrayW<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

/// @brief Method .ctor, addr 0x9f84fcc, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>  entries) ;

/// @brief Method get_Current, addr 0x9f8e3ac, size 0x34, virtual true, abstract: false, final true
inline ::System::Object* get_Current() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipFile_ZipEntryEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipFile_ZipEntryEnumerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipFile_ZipEntryEnumerator(ZipFile_ZipEntryEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipFile_ZipEntryEnumerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipFile_ZipEntryEnumerator(ZipFile_ZipEntryEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17349};

/// @brief Field array, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>  ___array;

/// @brief Field index, offset: 0x18, size: 0x4, def value: None
 int32_t  ___index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator, ___array) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator, ___index) == 0x18, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipEntryEnumerator) == 0x20, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipFile/ZipString
class CORDL_TYPE ZipFile_ZipString : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsSourceString)) bool  IsSourceString;

 __declspec(property(get=get_RawComment)) ::ArrayW<uint8_t>  RawComment;

 __declspec(property(get=get_RawLength)) int32_t  RawLength;

/// @brief Field comment_, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_comment_, put=__cordl_internal_set_comment_)) ::StringW  comment_;

/// @brief Field isSourceString_, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSourceString_, put=__cordl_internal_set_isSourceString_)) bool  isSourceString_;

/// @brief Field rawComment_, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_rawComment_, put=__cordl_internal_set_rawComment_)) ::ArrayW<uint8_t>  rawComment_;

/// @brief Method MakeBytesAvailable, addr 0x9f8e254, size 0x84, virtual false, abstract: false, final false
inline void MakeBytesAvailable() ;

/// @brief Method MakeTextAvailable, addr 0x9f8e308, size 0x84, virtual false, abstract: false, final false
inline void MakeTextAvailable() ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString* New_ctor(::StringW  comment) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString* New_ctor(::ArrayW<uint8_t>  rawString) ;

/// @brief Method Reset, addr 0x9f8e2d8, size 0x30, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::StringW const& __cordl_internal_get_comment_() const;

constexpr ::StringW& __cordl_internal_get_comment_() ;

constexpr bool const& __cordl_internal_get_isSourceString_() const;

constexpr bool& __cordl_internal_get_isSourceString_() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_rawComment_() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_rawComment_() ;

constexpr void __cordl_internal_set_comment_(::StringW  value) ;

constexpr void __cordl_internal_set_isSourceString_(bool  value) ;

constexpr void __cordl_internal_set_rawComment_(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0x9f8993c, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::StringW  comment) ;

/// @brief Method .ctor, addr 0x9f8e21c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  rawString) ;

/// @brief Method get_IsSourceString, addr 0x9f8e24c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSourceString() ;

/// @brief Method get_RawComment, addr 0x9f89454, size 0x80, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_RawComment() ;

/// @brief Method get_RawLength, addr 0x9f89978, size 0x24, virtual false, abstract: false, final false
inline int32_t get_RawLength() ;

/// @brief Method op_Implicit, addr 0x9f8e38c, size 0x20, virtual false, abstract: false, final false
static inline ::StringW op_Implicit___StringW(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*  zipString) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipFile_ZipString() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipFile_ZipString", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipFile_ZipString(ZipFile_ZipString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipFile_ZipString", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipFile_ZipString(ZipFile_ZipString const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17348};

/// @brief Field comment_, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___comment_;

/// @brief Field rawComment_, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___rawComment_;

/// @brief Field isSourceString_, offset: 0x20, size: 0x1, def value: None
 bool  ___isSourceString_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString, ___comment_) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString, ___rawComment_) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString, ___isSourceString_) == 0x20, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString) == 0x28, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
// Dependencies ICSharpCode.SharpZipLib.Zip.ZipFile::UpdateCommand, System.Object
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate
class CORDL_TYPE ZipFile_ZipUpdate : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Command)) ::GlobalNamespace::ZipFile_UpdateCommand  Command;

 __declspec(property(get=get_CrcPatchOffset, put=set_CrcPatchOffset)) int64_t  CrcPatchOffset;

 __declspec(property(get=get_Entry)) ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  Entry;

 __declspec(property(get=get_Filename)) ::StringW  Filename;

 __declspec(property(get=get_OffsetBasedSize, put=set_OffsetBasedSize)) int64_t  OffsetBasedSize;

 __declspec(property(get=get_OutEntry)) ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  OutEntry;

 __declspec(property(get=get_SizePatchOffset, put=set_SizePatchOffset)) int64_t  SizePatchOffset;

/// @brief Field _offsetBasedSize, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__offsetBasedSize, put=__cordl_internal_set__offsetBasedSize)) int64_t  _offsetBasedSize;

/// @brief Field command_, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_command_, put=__cordl_internal_set_command_)) ::GlobalNamespace::ZipFile_UpdateCommand  command_;

/// @brief Field crcPatchOffset_, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_crcPatchOffset_, put=__cordl_internal_set_crcPatchOffset_)) int64_t  crcPatchOffset_;

/// @brief Field dataSource_, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_dataSource_, put=__cordl_internal_set_dataSource_)) ::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*  dataSource_;

/// @brief Field entry_, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_entry_, put=__cordl_internal_set_entry_)) ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry_;

/// @brief Field filename_, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_filename_, put=__cordl_internal_set_filename_)) ::StringW  filename_;

/// @brief Field outEntry_, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_outEntry_, put=__cordl_internal_set_outEntry_)) ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  outEntry_;

/// @brief Field sizePatchOffset_, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_sizePatchOffset_, put=__cordl_internal_set_sizePatchOffset_)) int64_t  sizePatchOffset_;

/// @brief Method GetSource, addr 0x9f8ced0, size 0xac, virtual false, abstract: false, final false
inline ::System::IO::Stream* GetSource() ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* New_ctor(::GlobalNamespace::ZipFile_UpdateCommand  command, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* New_ctor(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*  dataSource, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// @brief [Obsolete]
static inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* New_ctor(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*  dataSource, ::StringW  entryName, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  compressionMethod) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* New_ctor(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* New_ctor(::StringW  fileName, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// @brief [Obsolete]
static inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* New_ctor(::StringW  fileName, ::StringW  entryName) ;

/// @brief [Obsolete]
static inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* New_ctor(::StringW  fileName, ::StringW  entryName, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  compressionMethod) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate* New_ctor(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  original, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  updated) ;

constexpr int64_t const& __cordl_internal_get__offsetBasedSize() const;

constexpr int64_t& __cordl_internal_get__offsetBasedSize() ;

constexpr ::GlobalNamespace::ZipFile_UpdateCommand const& __cordl_internal_get_command_() const;

constexpr ::GlobalNamespace::ZipFile_UpdateCommand& __cordl_internal_get_command_() ;

constexpr int64_t const& __cordl_internal_get_crcPatchOffset_() const;

constexpr int64_t& __cordl_internal_get_crcPatchOffset_() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::IStaticDataSource* const& __cordl_internal_get_dataSource_() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*& __cordl_internal_get_dataSource_() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEntry* const& __cordl_internal_get_entry_() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEntry*& __cordl_internal_get_entry_() ;

constexpr ::StringW const& __cordl_internal_get_filename_() const;

constexpr ::StringW& __cordl_internal_get_filename_() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEntry* const& __cordl_internal_get_outEntry_() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEntry*& __cordl_internal_get_outEntry_() ;

constexpr int64_t const& __cordl_internal_get_sizePatchOffset_() const;

constexpr int64_t& __cordl_internal_get_sizePatchOffset_() ;

constexpr void __cordl_internal_set__offsetBasedSize(int64_t  value) ;

constexpr void __cordl_internal_set_command_(::GlobalNamespace::ZipFile_UpdateCommand  value) ;

constexpr void __cordl_internal_set_crcPatchOffset_(int64_t  value) ;

constexpr void __cordl_internal_set_dataSource_(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*  value) ;

constexpr void __cordl_internal_set_entry_(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  value) ;

constexpr void __cordl_internal_set_filename_(::StringW  value) ;

constexpr void __cordl_internal_set_outEntry_(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  value) ;

constexpr void __cordl_internal_set_sizePatchOffset_(int64_t  value) ;

/// @brief Method .ctor, addr 0x9f8a858, size 0xec, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::ZipFile_UpdateCommand  command, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// @brief Method .ctor, addr 0x9f8a3dc, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*  dataSource, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// [Obsolete]
/// @brief Method .ctor, addr 0x9f8e0b4, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*  dataSource, ::StringW  entryName, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  compressionMethod) ;

/// @brief Method .ctor, addr 0x9f87de4, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// @brief Method .ctor, addr 0x9f89df8, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::StringW  fileName, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

/// [Obsolete]
/// @brief Method .ctor, addr 0x9f8e0ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  fileName, ::StringW  entryName) ;

/// [Obsolete]
/// @brief Method .ctor, addr 0x9f8dfe8, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(::StringW  fileName, ::StringW  entryName, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  compressionMethod) ;

/// @brief Method .ctor, addr 0x9f8e178, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  original, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  updated) ;

/// @brief Method get_Command, addr 0x9f8e1dc, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ZipFile_UpdateCommand get_Command() ;

/// @brief Method get_CrcPatchOffset, addr 0x9f8e1fc, size 0x8, virtual false, abstract: false, final false
inline int64_t get_CrcPatchOffset() ;

/// @brief Method get_Entry, addr 0x9f8e1d4, size 0x8, virtual false, abstract: false, final false
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* get_Entry() ;

/// @brief Method get_Filename, addr 0x9f8e1e4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Filename() ;

/// @brief Method get_OffsetBasedSize, addr 0x9f8e20c, size 0x8, virtual false, abstract: false, final false
inline int64_t get_OffsetBasedSize() ;

/// @brief Method get_OutEntry, addr 0x9f8b500, size 0xd4, virtual false, abstract: false, final false
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* get_OutEntry() ;

/// @brief Method get_SizePatchOffset, addr 0x9f8e1ec, size 0x8, virtual false, abstract: false, final false
inline int64_t get_SizePatchOffset() ;

/// @brief Method set_CrcPatchOffset, addr 0x9f8e204, size 0x8, virtual false, abstract: false, final false
inline void set_CrcPatchOffset(int64_t  value) ;

/// @brief Method set_OffsetBasedSize, addr 0x9f8e214, size 0x8, virtual false, abstract: false, final false
inline void set_OffsetBasedSize(int64_t  value) ;

/// @brief Method set_SizePatchOffset, addr 0x9f8e1f4, size 0x8, virtual false, abstract: false, final false
inline void set_SizePatchOffset(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipFile_ZipUpdate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipFile_ZipUpdate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipFile_ZipUpdate(ZipFile_ZipUpdate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipFile_ZipUpdate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipFile_ZipUpdate(ZipFile_ZipUpdate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17347};

/// @brief Field entry_, offset: 0x10, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  ___entry_;

/// @brief Field outEntry_, offset: 0x18, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  ___outEntry_;

/// @brief Field command_, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::ZipFile_UpdateCommand  ___command_;

/// @brief Field dataSource_, offset: 0x28, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*  ___dataSource_;

/// @brief Field filename_, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___filename_;

/// @brief Field sizePatchOffset_, offset: 0x38, size: 0x8, def value: None
 int64_t  ___sizePatchOffset_;

/// @brief Field crcPatchOffset_, offset: 0x40, size: 0x8, def value: None
 int64_t  ___crcPatchOffset_;

/// @brief Field _offsetBasedSize, offset: 0x48, size: 0x8, def value: None
 int64_t  ____offsetBasedSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate, ___entry_) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate, ___outEntry_) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate, ___command_) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate, ___dataSource_) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate, ___filename_) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate, ___sizePatchOffset_) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate, ___crcPatchOffset_) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate, ____offsetBasedSize) == 0x48, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate) == 0x50, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipFile/UpdateComparer
class CORDL_TYPE ZipFile_UpdateComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>*() noexcept;

/// @brief Method Compare, addr 0x9f8df70, size 0x78, virtual true, abstract: false, final true
inline int32_t Compare(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  x, ::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*  y) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x9f87df0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>"
constexpr ::System::Collections::Generic::IComparer_1<::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipUpdate*>* i___System__Collections__Generic__IComparer_1___ICSharpCode__SharpZipLib__Zip__ZipFile_ZipUpdate__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipFile_UpdateComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipFile_UpdateComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipFile_UpdateComparer(ZipFile_UpdateComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipFile_UpdateComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipFile_UpdateComparer(ZipFile_UpdateComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17346};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateComparer) == 0x10, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
// Dependencies System.MulticastDelegate
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipFile/KeysRequiredEventHandler
class CORDL_TYPE ZipFile_KeysRequiredEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9f8df3c, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  sender, ::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs*  e, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9f8df64, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9f8df28, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::Object*  sender, ::ICSharpCode::SharpZipLib::Zip::KeysRequiredEventArgs*  e) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9f8de1c, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipFile_KeysRequiredEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipFile_KeysRequiredEventHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipFile_KeysRequiredEventHandler(ZipFile_KeysRequiredEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipFile_KeysRequiredEventHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipFile_KeysRequiredEventHandler(ZipFile_KeysRequiredEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17343};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::ZipFile_KeysRequiredEventHandler) == 0x80, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
