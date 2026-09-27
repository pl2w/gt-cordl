#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Encryption/ZipAESStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__CryptoStream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZipAESStream)
namespace ICSharpCode::SharpZipLib::Encryption {
class ZipAESTransform;
}
namespace System::IO {
class Stream;
}
namespace System::Security::Cryptography {
struct CryptoStreamMode;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Encryption {
class ZipAESStream;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Encryption::ZipAESStream*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Encryption::ZipAESStream*, "ICSharpCode.SharpZipLib.Encryption", "ZipAESStream");
// Dependencies System.Security.Cryptography.CryptoStream
namespace ICSharpCode::SharpZipLib::Encryption {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Encryption.ZipAESStream
class CORDL_TYPE ZipAESStream : public ::System::Security::Cryptography::CryptoStream {
public:
// Declarations
 __declspec(property(get=get_HasBufferedData)) bool  HasBufferedData;

/// @brief Field _slideBufFreePos, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__slideBufFreePos, put=__cordl_internal_set__slideBufFreePos)) int32_t  _slideBufFreePos;

/// @brief Field _slideBufStartPos, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__slideBufStartPos, put=__cordl_internal_set__slideBufStartPos)) int32_t  _slideBufStartPos;

/// @brief Field _slideBuffer, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__slideBuffer, put=__cordl_internal_set__slideBuffer)) ::ArrayW<uint8_t>  _slideBuffer;

/// @brief Field _stream, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__stream, put=__cordl_internal_set__stream)) ::System::IO::Stream*  _stream;

/// @brief Field _transform, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__transform, put=__cordl_internal_set__transform)) ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*  _transform;

/// @brief Field _transformBuffer, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__transformBuffer, put=__cordl_internal_set__transformBuffer)) ::ArrayW<uint8_t>  _transformBuffer;

/// @brief Field _transformBufferFreePos, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__transformBufferFreePos, put=__cordl_internal_set__transformBufferFreePos)) int32_t  _transformBufferFreePos;

/// @brief Field _transformBufferStartPos, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get__transformBufferStartPos, put=__cordl_internal_set__transformBufferStartPos)) int32_t  _transformBufferStartPos;

static inline ::ICSharpCode::SharpZipLib::Encryption::ZipAESStream* New_ctor(::System::IO::Stream*  stream, ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*  transform, ::System::Security::Cryptography::CryptoStreamMode  mode) ;

/// @brief Method Read, addr 0x9ff8d3c, size 0xa0, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ReadAndTransform, addr 0x9ff8e90, size 0x22c, virtual false, abstract: false, final false
inline int32_t ReadAndTransform(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method ReadAsync, addr 0x9ff90bc, size 0xb0, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReadBufferedData, addr 0x9ff8ddc, size 0xb4, virtual false, abstract: false, final false
inline int32_t ReadBufferedData(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method TransformAndBufferBlock, addr 0x9ff92c8, size 0xfc, virtual false, abstract: false, final false
inline int32_t TransformAndBufferBlock(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, int32_t  blockSize) ;

/// @brief Method Write, addr 0x9ff9638, size 0x38, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

constexpr int32_t const& __cordl_internal_get__slideBufFreePos() const;

constexpr int32_t& __cordl_internal_get__slideBufFreePos() ;

constexpr int32_t const& __cordl_internal_get__slideBufStartPos() const;

constexpr int32_t& __cordl_internal_get__slideBufStartPos() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__slideBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__slideBuffer() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__stream() ;

constexpr ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform* const& __cordl_internal_get__transform() const;

constexpr ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*& __cordl_internal_get__transform() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__transformBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__transformBuffer() ;

constexpr int32_t const& __cordl_internal_get__transformBufferFreePos() const;

constexpr int32_t& __cordl_internal_get__transformBufferFreePos() ;

constexpr int32_t const& __cordl_internal_get__transformBufferStartPos() const;

constexpr int32_t& __cordl_internal_get__transformBufferStartPos() ;

constexpr void __cordl_internal_set__slideBufFreePos(int32_t  value) ;

constexpr void __cordl_internal_set__slideBufStartPos(int32_t  value) ;

constexpr void __cordl_internal_set__slideBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__stream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__transform(::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*  value) ;

constexpr void __cordl_internal_set__transformBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__transformBufferFreePos(int32_t  value) ;

constexpr void __cordl_internal_set__transformBufferStartPos(int32_t  value) ;

/// @brief Method .ctor, addr 0x9ff8c20, size 0xfc, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*  transform, ::System::Security::Cryptography::CryptoStreamMode  mode) ;

/// @brief Method get_HasBufferedData, addr 0x9ff8d1c, size 0x20, virtual false, abstract: false, final false
inline bool get_HasBufferedData() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipAESStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipAESStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipAESStream(ZipAESStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipAESStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipAESStream(ZipAESStream const& ) = delete;

/// @brief Field AUTH_CODE_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  AUTH_CODE_LENGTH{static_cast<int32_t>(0xa)};

/// @brief Field BLOCK_AND_AUTH offset 0xffffffff size 0x4
static constexpr int32_t  BLOCK_AND_AUTH{static_cast<int32_t>(0x1a)};

/// @brief Field CRYPTO_BLOCK_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  CRYPTO_BLOCK_SIZE{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17415};

/// @brief Field _stream, offset: 0x78, size: 0x8, def value: None
 ::System::IO::Stream*  ____stream;

/// @brief Field _transform, offset: 0x80, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*  ____transform;

/// @brief Field _slideBuffer, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____slideBuffer;

/// @brief Field _slideBufStartPos, offset: 0x90, size: 0x4, def value: None
 int32_t  ____slideBufStartPos;

/// @brief Field _slideBufFreePos, offset: 0x94, size: 0x4, def value: None
 int32_t  ____slideBufFreePos;

/// @brief Field _transformBuffer, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____transformBuffer;

/// @brief Field _transformBufferFreePos, offset: 0xa0, size: 0x4, def value: None
 int32_t  ____transformBufferFreePos;

/// @brief Field _transformBufferStartPos, offset: 0xa4, size: 0x4, def value: None
 int32_t  ____transformBufferStartPos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Encryption::ZipAESStream, ____stream) == 0x78, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Encryption::ZipAESStream, ____transform) == 0x80, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Encryption::ZipAESStream, ____slideBuffer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Encryption::ZipAESStream, ____slideBufStartPos) == 0x90, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Encryption::ZipAESStream, ____slideBufFreePos) == 0x94, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Encryption::ZipAESStream, ____transformBuffer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Encryption::ZipAESStream, ____transformBufferFreePos) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Encryption::ZipAESStream, ____transformBufferStartPos) == 0xa4, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Encryption::ZipAESStream) == 0xa8, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Encryption
