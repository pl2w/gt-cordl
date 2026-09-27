#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/Streams/DeflaterOutputStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeflaterOutputStream)
namespace ICSharpCode::SharpZipLib::Zip::Compression {
class Deflater;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams {
class DeflaterOutputStream;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream*, "ICSharpCode.SharpZipLib.Zip.Compression.Streams", "DeflaterOutputStream");
// Dependencies System.IO.Stream
namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream
class CORDL_TYPE DeflaterOutputStream : public ::System::IO::Stream {
public:
// Declarations
/// @brief Field AESAuthCode, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_AESAuthCode, put=__cordl_internal_set_AESAuthCode)) ::ArrayW<uint8_t>  AESAuthCode;

 __declspec(property(get=get_CanPatchEntries)) bool  CanPatchEntries;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_IsStreamOwner, put=set_IsStreamOwner)) bool  IsStreamOwner;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field <IsStreamOwner>k__BackingField, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsStreamOwner_k__BackingField, put=__cordl_internal_set__IsStreamOwner_k__BackingField)) bool  _IsStreamOwner_k__BackingField;

/// @brief Field baseOutputStream_, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseOutputStream_, put=__cordl_internal_set_baseOutputStream_)) ::System::IO::Stream*  baseOutputStream_;

/// @brief Field buffer_, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer_, put=__cordl_internal_set_buffer_)) ::ArrayW<uint8_t>  buffer_;

/// @brief Field cryptoTransform_, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_cryptoTransform_, put=__cordl_internal_set_cryptoTransform_)) ::System::Security::Cryptography::ICryptoTransform*  cryptoTransform_;

/// @brief Field deflater_, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_deflater_, put=__cordl_internal_set_deflater_)) ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*  deflater_;

/// @brief Field isClosed_, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_isClosed_, put=__cordl_internal_set_isClosed_)) bool  isClosed_;

/// @brief Method Deflate, addr 0x9fd9878, size 0x8, virtual false, abstract: false, final false
inline void Deflate() ;

/// @brief Method Deflate, addr 0x9fd9880, size 0x108, virtual false, abstract: false, final false
inline void Deflate(bool  flushing) ;

/// @brief Method Dispose, addr 0x9fd9b6c, size 0x174, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method EncryptBlock, addr 0x9fd0738, size 0xc8, virtual false, abstract: false, final false
inline void EncryptBlock(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length) ;

/// @brief Method Finish, addr 0x9fd0214, size 0x248, virtual true, abstract: false, final false
inline void Finish() ;

/// @brief Method Flush, addr 0x9fd14f4, size 0x44, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method GetAuthCodeIfAES, addr 0x9fd045c, size 0x94, virtual false, abstract: false, final false
inline void GetAuthCodeIfAES() ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream* New_ctor(::System::IO::Stream*  baseOutputStream) ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream* New_ctor(::System::IO::Stream*  baseOutputStream, ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*  deflater) ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream* New_ctor(::System::IO::Stream*  baseOutputStream, ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*  deflater, int32_t  bufferSize) ;

/// @brief Method Read, addr 0x9fd9b20, size 0x4c, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ReadByte, addr 0x9fd9ad4, size 0x4c, virtual true, abstract: false, final false
inline int32_t ReadByte() ;

/// @brief Method Seek, addr 0x9fd9a3c, size 0x4c, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0x9fd9a88, size 0x4c, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method Write, addr 0x9fd0a54, size 0x28, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method WriteByte, addr 0x9fd9ce0, size 0x8c, virtual true, abstract: false, final false
inline void WriteByte(uint8_t  value) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_AESAuthCode() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_AESAuthCode() ;

constexpr bool const& __cordl_internal_get__IsStreamOwner_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsStreamOwner_k__BackingField() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_baseOutputStream_() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_baseOutputStream_() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_buffer_() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_buffer_() ;

constexpr ::System::Security::Cryptography::ICryptoTransform* const& __cordl_internal_get_cryptoTransform_() const;

constexpr ::System::Security::Cryptography::ICryptoTransform*& __cordl_internal_get_cryptoTransform_() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater* const& __cordl_internal_get_deflater_() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*& __cordl_internal_get_deflater_() ;

constexpr bool const& __cordl_internal_get_isClosed_() const;

constexpr bool& __cordl_internal_get_isClosed_() ;

constexpr void __cordl_internal_set_AESAuthCode(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__IsStreamOwner_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_baseOutputStream_(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set_buffer_(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_cryptoTransform_(::System::Security::Cryptography::ICryptoTransform*  value) ;

constexpr void __cordl_internal_set_deflater_(::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*  value) ;

constexpr void __cordl_internal_set_isClosed_(bool  value) ;

/// @brief Method .ctor, addr 0x9fd97f4, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  baseOutputStream) ;

/// @brief Method .ctor, addr 0x9fce660, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  baseOutputStream, ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*  deflater) ;

/// @brief Method .ctor, addr 0x9fce7fc, size 0x1e4, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  baseOutputStream, ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*  deflater, int32_t  bufferSize) ;

/// @brief Method get_CanPatchEntries, addr 0x9fcfe1c, size 0x1c, virtual false, abstract: false, final false
inline bool get_CanPatchEntries() ;

/// @brief Method get_CanRead, addr 0x9fd9988, size 0x8, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0x9fd9990, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0x9fd9998, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// [CompilerGenerated]
/// @brief Method get_IsStreamOwner, addr 0x9fd9868, size 0x8, virtual false, abstract: false, final false
inline bool get_IsStreamOwner() ;

/// @brief Method get_Length, addr 0x9fd99b4, size 0x1c, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0x9fd99d0, size 0x20, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// [CompilerGenerated]
/// @brief Method set_IsStreamOwner, addr 0x9fd9870, size 0x8, virtual false, abstract: false, final false
inline void set_IsStreamOwner(bool  value) ;

/// @brief Method set_Position, addr 0x9fd99f0, size 0x4c, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeflaterOutputStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeflaterOutputStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeflaterOutputStream(DeflaterOutputStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeflaterOutputStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeflaterOutputStream(DeflaterOutputStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17383};

/// [CompilerGenerated]
/// @brief Field <IsStreamOwner>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  ____IsStreamOwner_k__BackingField;

/// @brief Field cryptoTransform_, offset: 0x30, size: 0x8, def value: None
 ::System::Security::Cryptography::ICryptoTransform*  ___cryptoTransform_;

/// @brief Field AESAuthCode, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___AESAuthCode;

/// @brief Field buffer_, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___buffer_;

/// @brief Field deflater_, offset: 0x48, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*  ___deflater_;

/// @brief Field baseOutputStream_, offset: 0x50, size: 0x8, def value: None
 ::System::IO::Stream*  ___baseOutputStream_;

/// @brief Field isClosed_, offset: 0x58, size: 0x1, def value: None
 bool  ___isClosed_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream, ____IsStreamOwner_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream, ___cryptoTransform_) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream, ___AESAuthCode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream, ___buffer_) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream, ___deflater_) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream, ___baseOutputStream_) == 0x50, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream, ___isClosed_) == 0x58, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream) == 0x60, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip::Compression::Streams
