#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Internal/Mem32.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "K4os/Compression/LZ4/Internal/zzzz__Mem_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Mem32)
// Forward declare root types
namespace K4os::Compression::LZ4::Internal {
class Mem32;
}
// Write type traits
MARK_REF_T(::K4os::Compression::LZ4::Internal::Mem32*);
DEFINE_IL2CPP_CLASS(::K4os::Compression::LZ4::Internal::Mem32*, "K4os.Compression.LZ4.Internal", "Mem32");
// Dependencies K4os.Compression.LZ4.Internal.Mem
namespace K4os::Compression::LZ4::Internal {
// Is value type: false
// CS Name: K4os.Compression.LZ4.Internal.Mem32
class CORDL_TYPE Mem32 : public ::K4os::Compression::LZ4::Internal::Mem {
public:
// Declarations
/// @brief Method Copy16, addr 0x9cbb5dc, size 0xd4, virtual false, abstract: false, final false
static inline void Copy16(uint8_t*  target, uint8_t*  source) ;

/// @brief Method Copy18, addr 0x9cbb6b0, size 0x10c, virtual false, abstract: false, final false
static inline void Copy18(uint8_t*  target, uint8_t*  source) ;

/// @brief Method PeekW, addr 0x9cbb558, size 0x84, virtual false, abstract: false, final false
static inline uint32_t PeekW(void*  p) ;

/// @brief Method WildCopy8, addr 0x9cbb7bc, size 0xa4, virtual false, abstract: false, final false
static inline void WildCopy8(uint8_t*  target, uint8_t*  source, void*  limit) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Mem32() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Mem32", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Mem32(Mem32 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Mem32", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Mem32(Mem32 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31574};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::K4os::Compression::LZ4::Internal::Mem32) == 0x10, "Size mismatch!");

} // namespace end def K4os::Compression::LZ4::Internal
