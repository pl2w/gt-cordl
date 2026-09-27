#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Tar/TarOutputStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TarOutputStream)
namespace ICSharpCode::SharpZipLib::Tar {
class TarBuffer;
}
namespace ICSharpCode::SharpZipLib::Tar {
class TarEntry;
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
class TarOutputStream;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Tar::TarOutputStream*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Tar::TarOutputStream*, "ICSharpCode.SharpZipLib.Tar", "TarOutputStream");
// Dependencies System.IO.Stream
namespace ICSharpCode::SharpZipLib::Tar {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Tar.TarOutputStream
class CORDL_TYPE TarOutputStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_IsEntryOpen)) bool  IsEntryOpen;

 __declspec(property(get=get_IsStreamOwner, put=set_IsStreamOwner)) bool  IsStreamOwner;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

 __declspec(property(get=get_RecordSize)) int32_t  RecordSize;

/// @brief Field assemblyBuffer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_assemblyBuffer, put=__cordl_internal_set_assemblyBuffer)) ::ArrayW<uint8_t>  assemblyBuffer;

/// @brief Field assemblyBufferLength, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_assemblyBufferLength, put=__cordl_internal_set_assemblyBufferLength)) int32_t  assemblyBufferLength;

/// @brief Field blockBuffer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_blockBuffer, put=__cordl_internal_set_blockBuffer)) ::ArrayW<uint8_t>  blockBuffer;

/// @brief Field buffer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::ICSharpCode::SharpZipLib::Tar::TarBuffer*  buffer;

/// @brief Field currBytes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_currBytes, put=__cordl_internal_set_currBytes)) int64_t  currBytes;

/// @brief Field currSize, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_currSize, put=__cordl_internal_set_currSize)) int64_t  currSize;

/// @brief Field isClosed, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_isClosed, put=__cordl_internal_set_isClosed)) bool  isClosed;

/// @brief Field nameEncoding, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameEncoding, put=__cordl_internal_set_nameEncoding)) ::System::Text::Encoding*  nameEncoding;

/// @brief Field outputStream, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputStream, put=__cordl_internal_set_outputStream)) ::System::IO::Stream*  outputStream;

/// @brief Method CloseEntry, addr 0x9ff43e8, size 0x108, virtual false, abstract: false, final false
inline void CloseEntry() ;

/// @brief Method Dispose, addr 0x9ff4538, size 0x38, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finish, addr 0x9ff43a8, size 0x2c, virtual false, abstract: false, final false
inline void Finish() ;

/// @brief Method Flush, addr 0x9ff4388, size 0x20, virtual true, abstract: false, final false
inline void Flush() ;

/// [Obsolete("Use RecordSize property instead")]
/// @brief Method GetRecordSize, addr 0x9ff4588, size 0x18, virtual false, abstract: false, final false
inline int32_t GetRecordSize() ;

/// @brief [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
static inline ::ICSharpCode::SharpZipLib::Tar::TarOutputStream* New_ctor(::System::IO::Stream*  outputStream) ;

/// @brief [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
static inline ::ICSharpCode::SharpZipLib::Tar::TarOutputStream* New_ctor(::System::IO::Stream*  outputStream, int32_t  blockFactor) ;

static inline ::ICSharpCode::SharpZipLib::Tar::TarOutputStream* New_ctor(::System::IO::Stream*  outputStream, int32_t  blockFactor, ::System::Text::Encoding*  nameEncoding) ;

static inline ::ICSharpCode::SharpZipLib::Tar::TarOutputStream* New_ctor(::System::IO::Stream*  outputStream, ::System::Text::Encoding*  nameEncoding) ;

/// @brief Method PutNextEntry, addr 0x9ff45a0, size 0x28c, virtual false, abstract: false, final false
inline void PutNextEntry(::ICSharpCode::SharpZipLib::Tar::TarEntry*  entry) ;

/// @brief Method Read, addr 0x9ff4368, size 0x20, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ReadByte, addr 0x9ff4348, size 0x20, virtual true, abstract: false, final false
inline int32_t ReadByte() ;

/// @brief Method Seek, addr 0x9ff4308, size 0x20, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0x9ff4328, size 0x20, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method Write, addr 0x9ff48b8, size 0x310, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method WriteByte, addr 0x9ff482c, size 0x8c, virtual true, abstract: false, final false
inline void WriteByte(uint8_t  value) ;

/// @brief Method WriteEofBlock, addr 0x9ff44f0, size 0x48, virtual false, abstract: false, final false
inline void WriteEofBlock() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_assemblyBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_assemblyBuffer() ;

constexpr int32_t const& __cordl_internal_get_assemblyBufferLength() const;

constexpr int32_t& __cordl_internal_get_assemblyBufferLength() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_blockBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_blockBuffer() ;

constexpr ::ICSharpCode::SharpZipLib::Tar::TarBuffer* const& __cordl_internal_get_buffer() const;

constexpr ::ICSharpCode::SharpZipLib::Tar::TarBuffer*& __cordl_internal_get_buffer() ;

constexpr int64_t const& __cordl_internal_get_currBytes() const;

constexpr int64_t& __cordl_internal_get_currBytes() ;

constexpr int64_t const& __cordl_internal_get_currSize() const;

constexpr int64_t& __cordl_internal_get_currSize() ;

constexpr bool const& __cordl_internal_get_isClosed() const;

constexpr bool& __cordl_internal_get_isClosed() ;

constexpr ::System::Text::Encoding* const& __cordl_internal_get_nameEncoding() const;

constexpr ::System::Text::Encoding*& __cordl_internal_get_nameEncoding() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_outputStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_outputStream() ;

constexpr void __cordl_internal_set_assemblyBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_assemblyBufferLength(int32_t  value) ;

constexpr void __cordl_internal_set_blockBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_buffer(::ICSharpCode::SharpZipLib::Tar::TarBuffer*  value) ;

constexpr void __cordl_internal_set_currBytes(int64_t  value) ;

constexpr void __cordl_internal_set_currSize(int64_t  value) ;

constexpr void __cordl_internal_set_isClosed(bool  value) ;

constexpr void __cordl_internal_set_nameEncoding(::System::Text::Encoding*  value) ;

constexpr void __cordl_internal_set_outputStream(::System::IO::Stream*  value) ;

/// [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
/// @brief Method .ctor, addr 0x9ff3f9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  outputStream) ;

/// [Obsolete("No Encoding for Name field is specified, any non-ASCII bytes will be discarded")]
/// @brief Method .ctor, addr 0x9ff3fa4, size 0x12c, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  outputStream, int32_t  blockFactor) ;

/// @brief Method .ctor, addr 0x9ff40dc, size 0x148, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  outputStream, int32_t  blockFactor, ::System::Text::Encoding*  nameEncoding) ;

/// @brief Method .ctor, addr 0x9ff40d0, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  outputStream, ::System::Text::Encoding*  nameEncoding) ;

/// @brief Method get_CanRead, addr 0x9ff4258, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0x9ff4274, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0x9ff4290, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_IsEntryOpen, addr 0x9ff43d4, size 0x14, virtual false, abstract: false, final false
inline bool get_IsEntryOpen() ;

/// @brief Method get_IsStreamOwner, addr 0x9ff4224, size 0x18, virtual false, abstract: false, final false
inline bool get_IsStreamOwner() ;

/// @brief Method get_Length, addr 0x9ff42ac, size 0x1c, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0x9ff42c8, size 0x20, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method get_RecordSize, addr 0x9ff4570, size 0x18, virtual false, abstract: false, final false
inline int32_t get_RecordSize() ;

/// @brief Method set_IsStreamOwner, addr 0x9ff423c, size 0x1c, virtual false, abstract: false, final false
inline void set_IsStreamOwner(bool  value) ;

/// @brief Method set_Position, addr 0x9ff42e8, size 0x20, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TarOutputStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TarOutputStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TarOutputStream(TarOutputStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TarOutputStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TarOutputStream(TarOutputStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17399};

/// @brief Field currBytes, offset: 0x28, size: 0x8, def value: None
 int64_t  ___currBytes;

/// @brief Field assemblyBufferLength, offset: 0x30, size: 0x4, def value: None
 int32_t  ___assemblyBufferLength;

/// @brief Field isClosed, offset: 0x34, size: 0x1, def value: None
 bool  ___isClosed;

/// @brief Field currSize, offset: 0x38, size: 0x8, def value: None
 int64_t  ___currSize;

/// @brief Field blockBuffer, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___blockBuffer;

/// @brief Field assemblyBuffer, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___assemblyBuffer;

/// @brief Field buffer, offset: 0x50, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Tar::TarBuffer*  ___buffer;

/// @brief Field outputStream, offset: 0x58, size: 0x8, def value: None
 ::System::IO::Stream*  ___outputStream;

/// @brief Field nameEncoding, offset: 0x60, size: 0x8, def value: None
 ::System::Text::Encoding*  ___nameEncoding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarOutputStream, ___currBytes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarOutputStream, ___assemblyBufferLength) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarOutputStream, ___isClosed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarOutputStream, ___currSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarOutputStream, ___blockBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarOutputStream, ___assemblyBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarOutputStream, ___buffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarOutputStream, ___outputStream) == 0x58, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarOutputStream, ___nameEncoding) == 0x60, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Tar::TarOutputStream) == 0x68, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Tar
