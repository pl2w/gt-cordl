#pragma once
// IWYU pragma private; include "emotitron/Compression/BitCounter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BitCounter)
// Forward declare root types
namespace emotitron::Compression {
class BitCounter;
}
// Write type traits
MARK_REF_T(::emotitron::Compression::BitCounter*);
DEFINE_IL2CPP_CLASS(::emotitron::Compression::BitCounter*, "emotitron.Compression", "BitCounter");
// [Extension]
// Dependencies System.Object
namespace emotitron::Compression {
// Is value type: false
// CS Name: emotitron.Compression.BitCounter
class CORDL_TYPE BitCounter : public ::System::Object {
public:
// Declarations
/// @brief Field bitPatternToLog2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_bitPatternToLog2, put=setStaticF_bitPatternToLog2)) ::ArrayW<int32_t>  bitPatternToLog2;

/// [Extension]
/// @brief Method UsedBitCount, addr 0x5dd216c, size 0xb8, virtual false, abstract: false, final false
static inline int32_t UsedBitCount(int32_t  val) ;

/// [Extension]
/// @brief Method UsedBitCount, addr 0x5dd5924, size 0xb4, virtual false, abstract: false, final false
static inline int32_t UsedBitCount(uint16_t  val) ;

/// [Extension]
/// @brief Method UsedBitCount, addr 0x5dd5870, size 0xb4, virtual false, abstract: false, final false
static inline int32_t UsedBitCount(uint32_t  val) ;

/// [Extension]
/// @brief Method UsedBitCount, addr 0x5dd20b4, size 0xb8, virtual false, abstract: false, final false
static inline int32_t UsedBitCount(uint64_t  val) ;

/// [Extension]
/// @brief Method UsedBitCount, addr 0x5dd59d8, size 0xb0, virtual false, abstract: false, final false
static inline int32_t UsedBitCount(uint8_t  val) ;

/// [Extension]
/// @brief Method UsedByteCount, addr 0x5dd5ab4, size 0x1c, virtual false, abstract: false, final false
static inline int32_t UsedByteCount(uint16_t  val) ;

/// [Extension]
/// @brief Method UsedByteCount, addr 0x5dd5a88, size 0x2c, virtual false, abstract: false, final false
static inline int32_t UsedByteCount(uint32_t  val) ;

/// [Extension]
/// @brief Method UsedByteCount, addr 0x5dd2d68, size 0x54, virtual false, abstract: false, final false
static inline int32_t UsedByteCount(uint64_t  val) ;

static inline ::ArrayW<int32_t> getStaticF_bitPatternToLog2() ;

static inline void setStaticF_bitPatternToLog2(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BitCounter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BitCounter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BitCounter(BitCounter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BitCounter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BitCounter(BitCounter const& ) = delete;

/// @brief Field MULTIPLICATOR offset 0xffffffff size 0x8
static constexpr uint64_t  MULTIPLICATOR{static_cast<uint64_t>(0x6c04f118e9966f6bu)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5091};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::emotitron::Compression::BitCounter) == 0x10, "Size mismatch!");

} // namespace end def emotitron::Compression
