#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/PendingBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PendingBuffer)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip::Compression {
class PendingBuffer;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::Compression::PendingBuffer*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::Compression::PendingBuffer*, "ICSharpCode.SharpZipLib.Zip.Compression", "PendingBuffer");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip::Compression {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.Compression.PendingBuffer
class CORDL_TYPE PendingBuffer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BitCount)) int32_t  BitCount;

 __declspec(property(get=get_IsFlushed)) bool  IsFlushed;

/// @brief Field bitCount, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_bitCount, put=__cordl_internal_set_bitCount)) int32_t  bitCount;

/// @brief Field bits, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_bits, put=__cordl_internal_set_bits)) uint32_t  bits;

/// @brief Field buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::ArrayW<uint8_t>  buffer;

/// @brief Field end, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_end, put=__cordl_internal_set_end)) int32_t  end;

/// @brief Field start, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_start, put=__cordl_internal_set_start)) int32_t  start;

/// @brief Method AlignToByte, addr 0x9fd296c, size 0x8c, virtual false, abstract: false, final false
inline void AlignToByte() ;

/// @brief Method Flush, addr 0x9fd2714, size 0xc8, virtual false, abstract: false, final false
inline int32_t Flush(::ArrayW<uint8_t>  output, int32_t  offset, int32_t  length) ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::PendingBuffer* New_ctor() ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::PendingBuffer* New_ctor(int32_t  bufferSize) ;

/// @brief Method Reset, addr 0x9fd1e08, size 0xc, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ToByteArray, addr 0x9fd976c, size 0x88, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ToByteArray() ;

/// @brief Method WriteBits, addr 0x9fd28cc, size 0xa0, virtual false, abstract: false, final false
inline void WriteBits(int32_t  b, int32_t  count) ;

/// @brief Method WriteBlock, addr 0x9fd566c, size 0x48, virtual false, abstract: false, final false
inline void WriteBlock(::ArrayW<uint8_t>  block, int32_t  offset, int32_t  length) ;

/// @brief Method WriteByte, addr 0x9fd9668, size 0x3c, virtual false, abstract: false, final false
inline void WriteByte(int32_t  value) ;

/// @brief Method WriteInt, addr 0x9fd96a4, size 0xc0, virtual false, abstract: false, final false
inline void WriteInt(int32_t  value) ;

/// @brief Method WriteShort, addr 0x9fd5604, size 0x68, virtual false, abstract: false, final false
inline void WriteShort(int32_t  value) ;

/// @brief Method WriteShortMSB, addr 0x9fd2698, size 0x68, virtual false, abstract: false, final false
inline void WriteShortMSB(int32_t  s) ;

constexpr int32_t const& __cordl_internal_get_bitCount() const;

constexpr int32_t& __cordl_internal_get_bitCount() ;

constexpr uint32_t const& __cordl_internal_get_bits() const;

constexpr uint32_t& __cordl_internal_get_bits() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_buffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_buffer() ;

constexpr int32_t const& __cordl_internal_get_end() const;

constexpr int32_t& __cordl_internal_get_end() ;

constexpr int32_t const& __cordl_internal_get_start() const;

constexpr int32_t& __cordl_internal_get_start() ;

constexpr void __cordl_internal_set_bitCount(int32_t  value) ;

constexpr void __cordl_internal_set_bits(uint32_t  value) ;

constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_end(int32_t  value) ;

constexpr void __cordl_internal_set_start(int32_t  value) ;

/// @brief Method .ctor, addr 0x9fd9660, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9fd63ec, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  bufferSize) ;

/// @brief Method get_BitCount, addr 0x9fd9764, size 0x8, virtual false, abstract: false, final false
inline int32_t get_BitCount() ;

/// @brief Method get_IsFlushed, addr 0x9fd1f7c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsFlushed() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PendingBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PendingBuffer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PendingBuffer(PendingBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PendingBuffer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PendingBuffer(PendingBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17382};

/// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___buffer;

/// @brief Field start, offset: 0x18, size: 0x4, def value: None
 int32_t  ___start;

/// @brief Field end, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___end;

/// @brief Field bits, offset: 0x20, size: 0x4, def value: None
 uint32_t  ___bits;

/// @brief Field bitCount, offset: 0x24, size: 0x4, def value: None
 int32_t  ___bitCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::PendingBuffer, ___buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::PendingBuffer, ___start) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::PendingBuffer, ___end) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::PendingBuffer, ___bits) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::PendingBuffer, ___bitCount) == 0x24, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::Compression::PendingBuffer) == 0x28, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip::Compression
