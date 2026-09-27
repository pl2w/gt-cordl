#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Tar/TarInputStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TarInputStream)
namespace ICSharpCode::SharpZipLib::Tar {
class TarBuffer;
}
namespace ICSharpCode::SharpZipLib::Tar {
class TarEntry;
}
namespace ICSharpCode::SharpZipLib::Tar {
class TarInputStream_EntryFactoryAdapter;
}
namespace ICSharpCode::SharpZipLib::Tar {
class TarInputStream_IEntryFactory;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Tar {
class TarInputStream;
}
namespace ICSharpCode::SharpZipLib::Tar {
class TarInputStream_EntryFactoryAdapter;
}
namespace ICSharpCode::SharpZipLib::Tar {
class TarInputStream_IEntryFactory;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Tar::TarInputStream*);
MARK_REF_T(::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter*);
MARK_REF_T(::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Tar::TarInputStream*, "ICSharpCode.SharpZipLib.Tar", "TarInputStream");
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter*, "ICSharpCode.SharpZipLib.Tar", "TarInputStream/EntryFactoryAdapter");
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*, "ICSharpCode.SharpZipLib.Tar", "TarInputStream/IEntryFactory");
// Dependencies System.IO.Stream
namespace ICSharpCode::SharpZipLib::Tar {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Tar.TarInputStream
class CORDL_TYPE TarInputStream : public ::System::IO::Stream {
public:
// Declarations
using EntryFactoryAdapter = ::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter;

using IEntryFactory = ::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory;

 __declspec(property(get=get_Available)) int64_t  Available;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_IsMarkSupported)) bool  IsMarkSupported;

 __declspec(property(get=get_IsStreamOwner, put=set_IsStreamOwner)) bool  IsStreamOwner;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

 __declspec(property(get=get_RecordSize)) int32_t  RecordSize;

/// @brief Field currentEntry, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentEntry, put=__cordl_internal_set_currentEntry)) ::ICSharpCode::SharpZipLib::Tar::TarEntry*  currentEntry;

/// @brief Field encoding, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_encoding, put=__cordl_internal_set_encoding)) ::System::Text::Encoding*  encoding;

/// @brief Field entryFactory, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_entryFactory, put=__cordl_internal_set_entryFactory)) ::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*  entryFactory;

/// @brief Field entryOffset, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_entryOffset, put=__cordl_internal_set_entryOffset)) int64_t  entryOffset;

/// @brief Field entrySize, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_entrySize, put=__cordl_internal_set_entrySize)) int64_t  entrySize;

/// @brief Field hasHitEOF, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasHitEOF, put=__cordl_internal_set_hasHitEOF)) bool  hasHitEOF;

/// @brief Field inputStream, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputStream, put=__cordl_internal_set_inputStream)) ::System::IO::Stream*  inputStream;

/// @brief Field readBuffer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_readBuffer, put=__cordl_internal_set_readBuffer)) ::ArrayW<uint8_t>  readBuffer;

/// @brief Field tarBuffer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_tarBuffer, put=__cordl_internal_set_tarBuffer)) ::ICSharpCode::SharpZipLib::Tar::TarBuffer*  tarBuffer;

/// @brief Method CopyEntryContents, addr 0x9ff3e0c, size 0xdc, virtual false, abstract: false, final false
inline void CopyEntryContents(::System::IO::Stream*  outputStream) ;

/// @brief Method Dispose, addr 0x9ff3494, size 0x1c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Flush, addr 0x9ff2fd0, size 0x20, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method GetNextEntry, addr 0x9ff35a8, size 0x830, virtual false, abstract: false, final false
inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* GetNextEntry() ;

/// [Obsolete("Use RecordSize property instead")]
/// @brief Method GetRecordSize, addr 0x9ff34d0, size 0x18, virtual false, abstract: false, final false
inline int32_t GetRecordSize() ;

/// @brief Method Mark, addr 0x9ff35a0, size 0x4, virtual false, abstract: false, final false
inline void Mark(int32_t  markLimit) ;

/// @brief [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
static inline ::ICSharpCode::SharpZipLib::Tar::TarInputStream* New_ctor(::System::IO::Stream*  inputStream) ;

/// @brief [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
static inline ::ICSharpCode::SharpZipLib::Tar::TarInputStream* New_ctor(::System::IO::Stream*  inputStream, int32_t  blockFactor) ;

static inline ::ICSharpCode::SharpZipLib::Tar::TarInputStream* New_ctor(::System::IO::Stream*  inputStream, int32_t  blockFactor, ::System::Text::Encoding*  nameEncoding) ;

static inline ::ICSharpCode::SharpZipLib::Tar::TarInputStream* New_ctor(::System::IO::Stream*  inputStream, ::System::Text::Encoding*  nameEncoding) ;

/// @brief Method Read, addr 0x9ff31b8, size 0x2dc, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ReadByte, addr 0x9ff3120, size 0x98, virtual true, abstract: false, final false
inline int32_t ReadByte() ;

/// @brief Method Reset, addr 0x9ff35a4, size 0x4, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Seek, addr 0x9ff2ff0, size 0x4c, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetEntryFactory, addr 0x9ff34b0, size 0x8, virtual false, abstract: false, final false
inline void SetEntryFactory(::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*  factory) ;

/// @brief Method SetLength, addr 0x9ff303c, size 0x4c, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method Skip, addr 0x9ff34f4, size 0xa4, virtual false, abstract: false, final false
inline void Skip(int64_t  skipCount) ;

/// @brief Method SkipToNextEntry, addr 0x9ff3dd8, size 0x34, virtual false, abstract: false, final false
inline void SkipToNextEntry() ;

/// @brief Method Write, addr 0x9ff3088, size 0x4c, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method WriteByte, addr 0x9ff30d4, size 0x4c, virtual true, abstract: false, final false
inline void WriteByte(uint8_t  value) ;

constexpr ::ICSharpCode::SharpZipLib::Tar::TarEntry* const& __cordl_internal_get_currentEntry() const;

constexpr ::ICSharpCode::SharpZipLib::Tar::TarEntry*& __cordl_internal_get_currentEntry() ;

constexpr ::System::Text::Encoding* const& __cordl_internal_get_encoding() const;

constexpr ::System::Text::Encoding*& __cordl_internal_get_encoding() ;

constexpr ::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory* const& __cordl_internal_get_entryFactory() const;

constexpr ::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*& __cordl_internal_get_entryFactory() ;

constexpr int64_t const& __cordl_internal_get_entryOffset() const;

constexpr int64_t& __cordl_internal_get_entryOffset() ;

constexpr int64_t const& __cordl_internal_get_entrySize() const;

constexpr int64_t& __cordl_internal_get_entrySize() ;

constexpr bool const& __cordl_internal_get_hasHitEOF() const;

constexpr bool& __cordl_internal_get_hasHitEOF() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_inputStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_inputStream() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_readBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_readBuffer() ;

constexpr ::ICSharpCode::SharpZipLib::Tar::TarBuffer* const& __cordl_internal_get_tarBuffer() const;

constexpr ::ICSharpCode::SharpZipLib::Tar::TarBuffer*& __cordl_internal_get_tarBuffer() ;

constexpr void __cordl_internal_set_currentEntry(::ICSharpCode::SharpZipLib::Tar::TarEntry*  value) ;

constexpr void __cordl_internal_set_encoding(::System::Text::Encoding*  value) ;

constexpr void __cordl_internal_set_entryFactory(::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*  value) ;

constexpr void __cordl_internal_set_entryOffset(int64_t  value) ;

constexpr void __cordl_internal_set_entrySize(int64_t  value) ;

constexpr void __cordl_internal_set_hasHitEOF(bool  value) ;

constexpr void __cordl_internal_set_inputStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set_readBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_tarBuffer(::ICSharpCode::SharpZipLib::Tar::TarBuffer*  value) ;

/// [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
/// @brief Method .ctor, addr 0x9ff2d7c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  inputStream) ;

/// [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
/// @brief Method .ctor, addr 0x9ff2e44, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  inputStream, int32_t  blockFactor) ;

/// @brief Method .ctor, addr 0x9ff2d88, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  inputStream, int32_t  blockFactor, ::System::Text::Encoding*  nameEncoding) ;

/// @brief Method .ctor, addr 0x9ff2e38, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  inputStream, ::System::Text::Encoding*  nameEncoding) ;

/// @brief Method get_Available, addr 0x9ff34e8, size 0xc, virtual false, abstract: false, final false
inline int64_t get_Available() ;

/// @brief Method get_CanRead, addr 0x9ff2f1c, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0x9ff2f38, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0x9ff2f40, size 0x8, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_IsMarkSupported, addr 0x9ff3598, size 0x8, virtual false, abstract: false, final false
inline bool get_IsMarkSupported() ;

/// @brief Method get_IsStreamOwner, addr 0x9ff2ee8, size 0x18, virtual false, abstract: false, final false
inline bool get_IsStreamOwner() ;

/// @brief Method get_Length, addr 0x9ff2f48, size 0x1c, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0x9ff2f64, size 0x20, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method get_RecordSize, addr 0x9ff34b8, size 0x18, virtual false, abstract: false, final false
inline int32_t get_RecordSize() ;

/// @brief Method set_IsStreamOwner, addr 0x9ff2f00, size 0x1c, virtual false, abstract: false, final false
inline void set_IsStreamOwner(bool  value) ;

/// @brief Method set_Position, addr 0x9ff2f84, size 0x4c, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TarInputStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TarInputStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TarInputStream(TarInputStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TarInputStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TarInputStream(TarInputStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17398};

/// @brief Field hasHitEOF, offset: 0x28, size: 0x1, def value: None
 bool  ___hasHitEOF;

/// @brief Field entrySize, offset: 0x30, size: 0x8, def value: None
 int64_t  ___entrySize;

/// @brief Field entryOffset, offset: 0x38, size: 0x8, def value: None
 int64_t  ___entryOffset;

/// @brief Field readBuffer, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___readBuffer;

/// @brief Field tarBuffer, offset: 0x48, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Tar::TarBuffer*  ___tarBuffer;

/// @brief Field currentEntry, offset: 0x50, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Tar::TarEntry*  ___currentEntry;

/// @brief Field entryFactory, offset: 0x58, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*  ___entryFactory;

/// @brief Field inputStream, offset: 0x60, size: 0x8, def value: None
 ::System::IO::Stream*  ___inputStream;

/// @brief Field encoding, offset: 0x68, size: 0x8, def value: None
 ::System::Text::Encoding*  ___encoding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarInputStream, ___hasHitEOF) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarInputStream, ___entrySize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarInputStream, ___entryOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarInputStream, ___readBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarInputStream, ___tarBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarInputStream, ___currentEntry) == 0x50, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarInputStream, ___entryFactory) == 0x58, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarInputStream, ___inputStream) == 0x60, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarInputStream, ___encoding) == 0x68, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Tar::TarInputStream) == 0x70, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Tar
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Tar {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Tar.TarInputStream/EntryFactoryAdapter
class CORDL_TYPE TarInputStream_EntryFactoryAdapter : public ::System::Object {
public:
// Declarations
/// @brief Field nameEncoding, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameEncoding, put=__cordl_internal_set_nameEncoding)) ::System::Text::Encoding*  nameEncoding;

/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory"
constexpr operator  ::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory*() noexcept;

/// @brief Method CreateEntry, addr 0x9ff3f30, size 0x6c, virtual true, abstract: false, final true
inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* CreateEntry(::ArrayW<uint8_t>  headerBuffer) ;

/// @brief Method CreateEntry, addr 0x9ff3f20, size 0x8, virtual true, abstract: false, final true
inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* CreateEntry(::StringW  name) ;

/// @brief Method CreateEntryFromFile, addr 0x9ff3f28, size 0x8, virtual true, abstract: false, final true
inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* CreateEntryFromFile(::StringW  fileName) ;

/// @brief [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
static inline ::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter* New_ctor() ;

static inline ::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter* New_ctor(::System::Text::Encoding*  nameEncoding) ;

constexpr ::System::Text::Encoding* const& __cordl_internal_get_nameEncoding() const;

constexpr ::System::Text::Encoding*& __cordl_internal_get_nameEncoding() ;

constexpr void __cordl_internal_set_nameEncoding(::System::Text::Encoding*  value) ;

/// [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
/// @brief Method .ctor, addr 0x9ff3ee8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9ff3ef0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Text::Encoding*  nameEncoding) ;

/// @brief Convert to "::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory"
constexpr ::ICSharpCode::SharpZipLib::Tar::TarInputStream_IEntryFactory* i___ICSharpCode__SharpZipLib__Tar__TarInputStream_IEntryFactory() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TarInputStream_EntryFactoryAdapter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TarInputStream_EntryFactoryAdapter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TarInputStream_EntryFactoryAdapter(TarInputStream_EntryFactoryAdapter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TarInputStream_EntryFactoryAdapter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TarInputStream_EntryFactoryAdapter(TarInputStream_EntryFactoryAdapter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17397};

/// @brief Field nameEncoding, offset: 0x10, size: 0x8, def value: None
 ::System::Text::Encoding*  ___nameEncoding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter, ___nameEncoding) == 0x10, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Tar::TarInputStream_EntryFactoryAdapter) == 0x18, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Tar
// Dependencies 
namespace ICSharpCode::SharpZipLib::Tar {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Tar.TarInputStream/IEntryFactory
class CORDL_TYPE TarInputStream_IEntryFactory {
public:
// Declarations
/// @brief Method CreateEntry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* CreateEntry(::ArrayW<uint8_t>  headerBuffer) ;

/// @brief Method CreateEntry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* CreateEntry(::StringW  name) ;

/// @brief Method CreateEntryFromFile, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ICSharpCode::SharpZipLib::Tar::TarEntry* CreateEntryFromFile(::StringW  fileName) ;

// Ctor Parameters [CppParam { name: "", ty: "TarInputStream_IEntryFactory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TarInputStream_IEntryFactory(TarInputStream_IEntryFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17396};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ICSharpCode::SharpZipLib::Tar
