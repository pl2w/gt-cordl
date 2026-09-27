#pragma once
// IWYU pragma private; include "System/Buffers/Binary/BinaryPrimitives.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryPrimitives)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Buffers::Binary {
class BinaryPrimitives;
}
// Write type traits
MARK_REF_T(::System::Buffers::Binary::BinaryPrimitives*);
DEFINE_IL2CPP_CLASS(::System::Buffers::Binary::BinaryPrimitives*, "System.Buffers.Binary", "BinaryPrimitives");
// Dependencies System.Object
namespace System::Buffers::Binary {
// Is value type: false
// CS Name: System.Buffers.Binary.BinaryPrimitives
class CORDL_TYPE BinaryPrimitives : public ::System::Object {
public:
// Declarations
/// [CLSCompliant(false)]
/// @brief Method ReadUInt32LittleEndian, addr 0xa2724dc, size 0x98, virtual false, abstract: false, final false
static inline uint32_t ReadUInt32LittleEndian(::System::ReadOnlySpan_1<uint8_t>  source) ;

/// @brief Method ReverseEndianness, addr 0xa2724a4, size 0xc, virtual false, abstract: false, final false
static inline int16_t ReverseEndianness(int16_t  value) ;

/// @brief Method ReverseEndianness, addr 0xa2724b0, size 0x8, virtual false, abstract: false, final false
static inline int32_t ReverseEndianness(int32_t  value) ;

/// @brief Method ReverseEndianness, addr 0xa2724b8, size 0x8, virtual false, abstract: false, final false
static inline int64_t ReverseEndianness(int64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ReverseEndianness, addr 0xa2724c0, size 0xc, virtual false, abstract: false, final false
static inline uint16_t ReverseEndianness(uint16_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ReverseEndianness, addr 0xa2724cc, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ReverseEndianness(uint32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method ReverseEndianness, addr 0xa2724d4, size 0x8, virtual false, abstract: false, final false
static inline uint64_t ReverseEndianness(uint64_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method TryWriteUInt32BigEndian, addr 0xa27261c, size 0xa4, virtual false, abstract: false, final false
static inline bool TryWriteUInt32BigEndian(::System::Span_1<uint8_t>  destination, uint32_t  value) ;

/// [CLSCompliant(false)]
/// @brief Method WriteUInt32BigEndian, addr 0xa272574, size 0xa8, virtual false, abstract: false, final false
static inline void WriteUInt32BigEndian(::System::Span_1<uint8_t>  destination, uint32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BinaryPrimitives() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BinaryPrimitives", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BinaryPrimitives(BinaryPrimitives && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BinaryPrimitives", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BinaryPrimitives(BinaryPrimitives const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6972};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Buffers::Binary::BinaryPrimitives) == 0x10, "Size mismatch!");

} // namespace end def System::Buffers::Binary
