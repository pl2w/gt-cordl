#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipInputStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/Zip/Compression/Streams/zzzz__InflaterInputStream_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__CompressionMethod_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZipInputStream)
namespace ICSharpCode::SharpZipLib::Checksum {
class Crc32;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipEntry;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipInputStream_ReadDataHandler;
}
namespace System::IO {
class Stream;
}
namespace System {
class AsyncCallback;
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
class ZipInputStream;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipInputStream_ReadDataHandler;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::ZipInputStream*);
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ZipInputStream*, "ICSharpCode.SharpZipLib.Zip", "ZipInputStream");
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler*, "ICSharpCode.SharpZipLib.Zip", "ZipInputStream/ReadDataHandler");
// Dependencies ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream, ICSharpCode.SharpZipLib.Zip.CompressionMethod
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipInputStream
class CORDL_TYPE ZipInputStream : public ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputStream {
public:
// Declarations
using ReadDataHandler = ::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler;

 __declspec(property(get=get_Available)) int32_t  Available;

 __declspec(property(get=get_CanDecompressEntry)) bool  CanDecompressEntry;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Password, put=set_Password)) ::StringW  Password;

/// @brief Field crc, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_crc, put=__cordl_internal_set_crc)) ::ICSharpCode::SharpZipLib::Checksum::Crc32*  crc;

/// @brief Field entry, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_entry, put=__cordl_internal_set_entry)) ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry;

/// @brief Field flags, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_flags, put=__cordl_internal_set_flags)) int32_t  flags;

/// @brief Field internalReader, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_internalReader, put=__cordl_internal_set_internalReader)) ::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler*  internalReader;

/// @brief Field method, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_method, put=__cordl_internal_set_method)) ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  method;

/// @brief Field password, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_password, put=__cordl_internal_set_password)) ::StringW  password;

/// @brief Field size, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) int64_t  size;

/// @brief Method BodyRead, addr 0x9fcd168, size 0x46c, virtual false, abstract: false, final false
inline int32_t BodyRead(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method CloseEntry, addr 0x9fcbfb0, size 0x1dc, virtual false, abstract: false, final false
inline void CloseEntry() ;

/// @brief Method CompleteCloseEntry, addr 0x9fcc41c, size 0x100, virtual false, abstract: false, final false
inline void CompleteCloseEntry(bool  testCrc) ;

/// @brief Method Dispose, addr 0x9fcd880, size 0xac, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method GetNextEntry, addr 0x9fcb964, size 0x64c, virtual false, abstract: false, final false
inline ::ICSharpCode::SharpZipLib::Zip::ZipEntry* GetNextEntry() ;

/// @brief Method InitialRead, addr 0x9fcc988, size 0x430, virtual false, abstract: false, final false
inline int32_t InitialRead(::ArrayW<uint8_t>  destination, int32_t  offset, int32_t  count) ;

/// @brief Method IsEntryCompressionMethodSupported, addr 0x9fcb940, size 0x24, virtual false, abstract: false, final false
static inline bool IsEntryCompressionMethodSupported(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipInputStream* New_ctor(::System::IO::Stream*  baseInputStream) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipInputStream* New_ctor(::System::IO::Stream*  baseInputStream, int32_t  bufferSize) ;

/// @brief Method Read, addr 0x9fcd5d4, size 0x12c, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ReadByte, addr 0x9fcc80c, size 0x98, virtual true, abstract: false, final false
inline int32_t ReadByte() ;

/// @brief Method ReadDataDescriptor, addr 0x9fcc294, size 0x158, virtual false, abstract: false, final false
inline void ReadDataDescriptor() ;

/// @brief Method ReadingNotAvailable, addr 0x9fcc8a4, size 0x4c, virtual false, abstract: false, final false
inline int32_t ReadingNotAvailable(::ArrayW<uint8_t>  destination, int32_t  offset, int32_t  count) ;

/// @brief Method ReadingNotSupported, addr 0x9fcc8f0, size 0x4c, virtual false, abstract: false, final false
inline int32_t ReadingNotSupported(::ArrayW<uint8_t>  destination, int32_t  offset, int32_t  count) ;

/// @brief Method StoredDescriptorEntry, addr 0x9fcc93c, size 0x4c, virtual false, abstract: false, final false
inline int32_t StoredDescriptorEntry(::ArrayW<uint8_t>  destination, int32_t  offset, int32_t  count) ;

constexpr ::ICSharpCode::SharpZipLib::Checksum::Crc32* const& __cordl_internal_get_crc() const;

constexpr ::ICSharpCode::SharpZipLib::Checksum::Crc32*& __cordl_internal_get_crc() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEntry* const& __cordl_internal_get_entry() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipEntry*& __cordl_internal_get_entry() ;

constexpr int32_t const& __cordl_internal_get_flags() const;

constexpr int32_t& __cordl_internal_get_flags() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler* const& __cordl_internal_get_internalReader() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler*& __cordl_internal_get_internalReader() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::CompressionMethod const& __cordl_internal_get_method() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::CompressionMethod& __cordl_internal_get_method() ;

constexpr ::StringW const& __cordl_internal_get_password() const;

constexpr ::StringW& __cordl_internal_get_password() ;

constexpr int64_t const& __cordl_internal_get_size() const;

constexpr int64_t& __cordl_internal_get_size() ;

constexpr void __cordl_internal_set_crc(::ICSharpCode::SharpZipLib::Checksum::Crc32*  value) ;

constexpr void __cordl_internal_set_entry(::ICSharpCode::SharpZipLib::Zip::ZipEntry*  value) ;

constexpr void __cordl_internal_set_flags(int32_t  value) ;

constexpr void __cordl_internal_set_internalReader(::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler*  value) ;

constexpr void __cordl_internal_set_method(::ICSharpCode::SharpZipLib::Zip::CompressionMethod  value) ;

constexpr void __cordl_internal_set_password(::StringW  value) ;

constexpr void __cordl_internal_set_size(int64_t  value) ;

/// @brief Method .ctor, addr 0x9fcb36c, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  baseInputStream) ;

/// @brief Method .ctor, addr 0x9fcb62c, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  baseInputStream, int32_t  bufferSize) ;

/// @brief Method get_Available, addr 0x9fcc74c, size 0x10, virtual true, abstract: false, final false
inline int32_t get_Available() ;

/// @brief Method get_CanDecompressEntry, addr 0x9fcb8cc, size 0x74, virtual false, abstract: false, final false
inline bool get_CanDecompressEntry() ;

/// @brief Method get_Length, addr 0x9fcc75c, size 0xb0, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Password, addr 0x9fcb8bc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Password() ;

/// @brief Method set_Password, addr 0x9fcb8c4, size 0x8, virtual false, abstract: false, final false
inline void set_Password(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipInputStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipInputStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipInputStream(ZipInputStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipInputStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipInputStream(ZipInputStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17365};

/// @brief Field internalReader, offset: 0x58, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler*  ___internalReader;

/// @brief Field crc, offset: 0x60, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Checksum::Crc32*  ___crc;

/// @brief Field entry, offset: 0x68, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  ___entry;

/// @brief Field size, offset: 0x70, size: 0x8, def value: None
 int64_t  ___size;

/// @brief Field method, offset: 0x78, size: 0x4, def value: None
 ::ICSharpCode::SharpZipLib::Zip::CompressionMethod  ___method;

/// @brief Field flags, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___flags;

/// @brief Field password, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___password;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipInputStream, ___internalReader) == 0x58, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipInputStream, ___crc) == 0x60, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipInputStream, ___entry) == 0x68, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipInputStream, ___size) == 0x70, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipInputStream, ___method) == 0x78, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipInputStream, ___flags) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::ZipInputStream, ___password) == 0x80, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::ZipInputStream) == 0x88, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
// Dependencies System.MulticastDelegate
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.ZipInputStream/ReadDataHandler
class CORDL_TYPE ZipInputStream_ReadDataHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9fcd974, size 0x84, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::ArrayW<uint8_t>  b, int32_t  offset, int32_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9fcd9f8, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9fcd960, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::ArrayW<uint8_t>  b, int32_t  offset, int32_t  length) ;

static inline ::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9fcb578, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipInputStream_ReadDataHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipInputStream_ReadDataHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipInputStream_ReadDataHandler(ZipInputStream_ReadDataHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipInputStream_ReadDataHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipInputStream_ReadDataHandler(ZipInputStream_ReadDataHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17364};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::ZipInputStream_ReadDataHandler) == 0x80, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
