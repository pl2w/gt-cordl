#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/Streams/StreamManipulator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StreamManipulator)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams {
class StreamManipulator;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*, "ICSharpCode.SharpZipLib.Zip.Compression.Streams", "StreamManipulator");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator
class CORDL_TYPE StreamManipulator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AvailableBits)) int32_t  AvailableBits;

 __declspec(property(get=get_AvailableBytes)) int32_t  AvailableBytes;

 __declspec(property(get=get_IsNeedingInput)) bool  IsNeedingInput;

/// @brief Field bitsInBuffer_, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_bitsInBuffer_, put=__cordl_internal_set_bitsInBuffer_)) int32_t  bitsInBuffer_;

/// @brief Field buffer_, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_buffer_, put=__cordl_internal_set_buffer_)) uint32_t  buffer_;

/// @brief Field windowEnd_, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_windowEnd_, put=__cordl_internal_set_windowEnd_)) int32_t  windowEnd_;

/// @brief Field windowStart_, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_windowStart_, put=__cordl_internal_set_windowStart_)) int32_t  windowStart_;

/// @brief Field window_, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_window_, put=__cordl_internal_set_window_)) ::ArrayW<uint8_t>  window_;

/// @brief Method CopyBytes, addr 0x9fda580, size 0x18c, virtual false, abstract: false, final false
inline int32_t CopyBytes(::ArrayW<uint8_t>  output, int32_t  offset, int32_t  length) ;

/// @brief Method DropBits, addr 0x9fd668c, size 0x14, virtual false, abstract: false, final false
inline void DropBits(int32_t  bitCount) ;

/// @brief Method GetBits, addr 0x9fda714, size 0x3c, virtual false, abstract: false, final false
inline int32_t GetBits(int32_t  bitCount) ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator* New_ctor() ;

/// @brief Method PeekBits, addr 0x9fd65ec, size 0xa0, virtual false, abstract: false, final false
inline int32_t PeekBits(int32_t  bitCount) ;

/// @brief Method Reset, addr 0x9fd64d0, size 0x8, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetInput, addr 0x9fd7d1c, size 0x1a4, virtual false, abstract: false, final false
inline void SetInput(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method SkipToByteBoundary, addr 0x9fd75a0, size 0x18, virtual false, abstract: false, final false
inline void SkipToByteBoundary() ;

/// @brief Method TryGetBits, addr 0x9fd8d08, size 0x70, virtual false, abstract: false, final false
inline bool TryGetBits(int32_t  bitCount, ::by_ref<::ArrayW<uint8_t>>  array, int32_t  index) ;

/// @brief Method TryGetBits, addr 0x9fd8cb4, size 0x54, virtual false, abstract: false, final false
inline bool TryGetBits(int32_t  bitCount, ::by_ref<int32_t>  output, int32_t  outputOffset) ;

constexpr int32_t const& __cordl_internal_get_bitsInBuffer_() const;

constexpr int32_t& __cordl_internal_get_bitsInBuffer_() ;

constexpr uint32_t const& __cordl_internal_get_buffer_() const;

constexpr uint32_t& __cordl_internal_get_buffer_() ;

constexpr int32_t const& __cordl_internal_get_windowEnd_() const;

constexpr int32_t& __cordl_internal_get_windowEnd_() ;

constexpr int32_t const& __cordl_internal_get_windowStart_() const;

constexpr int32_t& __cordl_internal_get_windowStart_() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_window_() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_window_() ;

constexpr void __cordl_internal_set_bitsInBuffer_(int32_t  value) ;

constexpr void __cordl_internal_set_buffer_(uint32_t  value) ;

constexpr void __cordl_internal_set_windowEnd_(int32_t  value) ;

constexpr void __cordl_internal_set_windowStart_(int32_t  value) ;

constexpr void __cordl_internal_set_window_(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0x9fd6464, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AvailableBits, addr 0x9fda750, size 0x8, virtual false, abstract: false, final false
inline int32_t get_AvailableBits() ;

/// @brief Method get_AvailableBytes, addr 0x9fd82c8, size 0x14, virtual false, abstract: false, final false
inline int32_t get_AvailableBytes() ;

/// @brief Method get_IsNeedingInput, addr 0x9fd77d8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsNeedingInput() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreamManipulator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreamManipulator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamManipulator(StreamManipulator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamManipulator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamManipulator(StreamManipulator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17387};

/// @brief Field window_, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___window_;

/// @brief Field windowStart_, offset: 0x18, size: 0x4, def value: None
 int32_t  ___windowStart_;

/// @brief Field windowEnd_, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___windowEnd_;

/// @brief Field buffer_, offset: 0x20, size: 0x4, def value: None
 uint32_t  ___buffer_;

/// @brief Field bitsInBuffer_, offset: 0x24, size: 0x4, def value: None
 int32_t  ___bitsInBuffer_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator, ___window_) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator, ___windowStart_) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator, ___windowEnd_) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator, ___buffer_) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator, ___bitsInBuffer_) == 0x24, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator) == 0x28, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip::Compression::Streams
