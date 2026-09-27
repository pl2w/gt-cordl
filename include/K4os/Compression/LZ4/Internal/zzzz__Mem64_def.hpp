#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Internal/Mem64.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "K4os/Compression/LZ4/Internal/zzzz__Mem_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Mem64)
// Forward declare root types
namespace K4os::Compression::LZ4::Internal {
class Mem64;
}
// Write type traits
MARK_REF_T(::K4os::Compression::LZ4::Internal::Mem64*);
DEFINE_IL2CPP_CLASS(::K4os::Compression::LZ4::Internal::Mem64*, "K4os.Compression.LZ4.Internal", "Mem64");
// Dependencies K4os.Compression.LZ4.Internal.Mem
namespace K4os::Compression::LZ4::Internal {
// Is value type: false
// CS Name: K4os.Compression.LZ4.Internal.Mem64
class CORDL_TYPE Mem64 : public ::K4os::Compression::LZ4::Internal::Mem {
public:
// Declarations
/// @brief Method Copy16, addr 0x9cbb8b4, size 0x14, virtual false, abstract: false, final false
static inline void Copy16(uint8_t*  target, uint8_t*  source) ;

/// @brief Method Copy18, addr 0x9cbb8c8, size 0x1c, virtual false, abstract: false, final false
static inline void Copy18(uint8_t*  target, uint8_t*  source) ;

/// @brief Method Copy2, addr 0x9cbb880, size 0xc, virtual false, abstract: false, final false
static inline void Copy2(uint8_t*  target, uint8_t*  source) ;

/// @brief Method Copy4, addr 0x9cbb88c, size 0xc, virtual false, abstract: false, final false
static inline void Copy4(uint8_t*  target, uint8_t*  source) ;

/// @brief Method Copy8, addr 0x9cbb8a0, size 0xc, virtual false, abstract: false, final false
static inline void Copy8(uint8_t*  target, uint8_t*  source) ;

/// @brief Method Peek2, addr 0x9cbb860, size 0x8, virtual false, abstract: false, final false
static inline uint16_t Peek2(void*  p) ;

/// @brief Method Peek4, addr 0x9cbb870, size 0x8, virtual false, abstract: false, final false
static inline uint32_t Peek4(void*  p) ;

/// @brief Method Peek8, addr 0x9cbb898, size 0x8, virtual false, abstract: false, final false
static inline uint64_t Peek8(void*  p) ;

/// @brief Method PeekW, addr 0x9cbb8ac, size 0x8, virtual false, abstract: false, final false
static inline uint64_t PeekW(void*  p) ;

/// @brief Method Poke2, addr 0x9cbb868, size 0x8, virtual false, abstract: false, final false
static inline void Poke2(void*  p, uint16_t  v) ;

/// @brief Method Poke4, addr 0x9cbb878, size 0x8, virtual false, abstract: false, final false
static inline void Poke4(void*  p, uint32_t  v) ;

/// @brief Method WildCopy8, addr 0x9cbb8e4, size 0x14, virtual false, abstract: false, final false
static inline void WildCopy8(uint8_t*  target, uint8_t*  source, void*  limit) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Mem64() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Mem64", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Mem64(Mem64 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Mem64", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Mem64(Mem64 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31575};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::K4os::Compression::LZ4::Internal::Mem64) == 0x10, "Size mismatch!");

} // namespace end def K4os::Compression::LZ4::Internal
