#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/LZ4Pickler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LZ4Pickler)
namespace K4os::Compression::LZ4 {
struct LZ4Level;
}
namespace K4os::Compression::LZ4 {
struct PickleHeader;
}
namespace System {
class Exception;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace K4os::Compression::LZ4 {
class LZ4Pickler;
}
// Write type traits
MARK_REF_T(::K4os::Compression::LZ4::LZ4Pickler*);
DEFINE_IL2CPP_CLASS(::K4os::Compression::LZ4::LZ4Pickler*, "K4os.Compression.LZ4", "LZ4Pickler");
// Dependencies System.Object
namespace K4os::Compression::LZ4 {
// Is value type: false
// CS Name: K4os.Compression.LZ4.LZ4Pickler
class CORDL_TYPE LZ4Pickler : public ::System::Object {
public:
// Declarations
/// [NullableContext(1)]
/// @brief Method CorruptedPickle, addr 0x9cba390, size 0x90, virtual false, abstract: false, final false
static inline ::System::Exception* CorruptedPickle(::StringW  message) ;

/// @brief Method DecodeHeader, addr 0x9cba15c, size 0x7c, virtual false, abstract: false, final false
static inline ::K4os::Compression::LZ4::PickleHeader DecodeHeader(::System::ReadOnlySpan_1<uint8_t>  source) ;

/// @brief Method DecodeHeaderV0, addr 0x9cba42c, size 0x128, virtual false, abstract: false, final false
static inline ::K4os::Compression::LZ4::PickleHeader DecodeHeaderV0(::System::ReadOnlySpan_1<uint8_t>  source) ;

/// @brief Method EffectiveSizeOf, addr 0x9cb9df0, size 0x24, virtual false, abstract: false, final false
static inline int32_t EffectiveSizeOf(int32_t  value) ;

/// @brief Method EncodeCompressedHeader, addr 0x9cb9d08, size 0x3c, virtual false, abstract: false, final false
static inline int32_t EncodeCompressedHeader(::System::Span_1<uint8_t>  target, int32_t  version, int32_t  headerSize, int32_t  sourceLength, int32_t  encodedLength) ;

/// @brief Method EncodeCompressedHeaderV0, addr 0x9cb9e30, size 0xb0, virtual false, abstract: false, final false
static inline int32_t EncodeCompressedHeaderV0(::System::Span_1<uint8_t>  target, int32_t  headerSize, int32_t  sourceLength, int32_t  encodedLength) ;

/// @brief Method EncodeHeaderByteV0, addr 0x9cb9ee0, size 0x14, virtual false, abstract: false, final false
static inline uint8_t EncodeHeaderByteV0(int32_t  sizeOfDiff) ;

/// @brief Method EncodeSizeOf, addr 0x9cb9fd8, size 0x10, virtual false, abstract: false, final false
static inline int32_t EncodeSizeOf(int32_t  size) ;

/// @brief Method EncodeUncompressedHeader, addr 0x9cb9c6c, size 0x48, virtual false, abstract: false, final false
static inline int32_t EncodeUncompressedHeader(::System::Span_1<uint8_t>  target, int32_t  version, int32_t  sourceLength) ;

/// @brief Method EncodeUncompressedHeaderV0, addr 0x9cb9e14, size 0x1c, virtual false, abstract: false, final false
static inline int32_t EncodeUncompressedHeaderV0(::System::Span_1<uint8_t>  target) ;

/// @brief Method GetCompressedHeaderSize, addr 0x9cb9cb4, size 0x54, virtual false, abstract: false, final false
static inline int32_t GetCompressedHeaderSize(int32_t  version, int32_t  sourceLength, int32_t  encodedLength) ;

/// @brief Method GetUncompressedHeaderSize, addr 0x9cb9c3c, size 0x30, virtual false, abstract: false, final false
static inline int32_t GetUncompressedHeaderSize(int32_t  version, int32_t  sourceLength) ;

/// @brief Method PeekN, addr 0x9cba554, size 0xe4, virtual false, abstract: false, final false
static inline int32_t PeekN(::System::ReadOnlySpan_1<uint8_t>  bytes, int32_t  size) ;

/// [NullableContext(1)]
/// @brief Method Pickle, addr 0x9cb95b0, size 0x94, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Pickle(::ArrayW<uint8_t>  source, ::K4os::Compression::LZ4::LZ4Level  level) ;

/// @brief Method Pickle, addr 0x9cb9644, size 0x258, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Pickle(::System::ReadOnlySpan_1<uint8_t>  source, ::K4os::Compression::LZ4::LZ4Level  level) ;

/// @brief Method PickleWithBuffer, addr 0x9cb989c, size 0x270, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> PickleWithBuffer(::System::ReadOnlySpan_1<uint8_t>  source, ::K4os::Compression::LZ4::LZ4Level  level, ::System::Span_1<uint8_t>  buffer) ;

/// @brief Method PokeN, addr 0x9cb9ef4, size 0xe4, virtual false, abstract: false, final false
static inline void PokeN(::System::Span_1<uint8_t>  target, int32_t  value, int32_t  size) ;

/// [NullableContext(1)]
/// @brief Method UnexpectedVersion, addr 0x9cb9d44, size 0xac, virtual false, abstract: false, final false
static inline ::System::Exception* UnexpectedVersion(int32_t  version) ;

/// [NullableContext(1)]
/// @brief Method Unpickle, addr 0x9cb9fe8, size 0x84, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Unpickle(::ArrayW<uint8_t>  source) ;

/// @brief Method Unpickle, addr 0x9cba06c, size 0xf0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Unpickle(::System::ReadOnlySpan_1<uint8_t>  source) ;

/// @brief Method UnpickleCore, addr 0x9cba1e0, size 0x1b0, virtual false, abstract: false, final false
static inline void UnpickleCore(/* [IsReadOnly] */ ::by_ref<::K4os::Compression::LZ4::PickleHeader>  header, ::System::ReadOnlySpan_1<uint8_t>  source, ::System::Span_1<uint8_t>  target) ;

/// @brief Method UnpickledSize, addr 0x9cba1d8, size 0x8, virtual false, abstract: false, final false
static inline int32_t UnpickledSize(/* [IsReadOnly] */ ::by_ref<::K4os::Compression::LZ4::PickleHeader>  header) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LZ4Pickler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LZ4Pickler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LZ4Pickler(LZ4Pickler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LZ4Pickler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LZ4Pickler(LZ4Pickler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31569};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::K4os::Compression::LZ4::LZ4Pickler) == 0x10, "Size mismatch!");

} // namespace end def K4os::Compression::LZ4
