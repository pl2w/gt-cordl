#pragma once
// IWYU pragma private; include "System/Numerics/BitOperations.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BitOperations)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::Numerics {
class BitOperations;
}
// Write type traits
MARK_REF_T(::System::Numerics::BitOperations*);
DEFINE_IL2CPP_CLASS(::System::Numerics::BitOperations*, "System.Numerics", "BitOperations");
// Dependencies System.Object
namespace System::Numerics {
// Is value type: false
// CS Name: System.Numerics.BitOperations
class CORDL_TYPE BitOperations : public ::System::Object {
public:
// Declarations
/// @brief Method LeadingZeroCount, addr 0xb9a9508, size 0x24, virtual false, abstract: false, final false
static inline int32_t LeadingZeroCount(uint32_t  value) ;

/// @brief Method LeadingZeroCount, addr 0xb9a95b0, size 0x3c, virtual false, abstract: false, final false
static inline int32_t LeadingZeroCount(uint64_t  value) ;

/// @brief Method Log2, addr 0xb9a95ec, size 0x4, virtual false, abstract: false, final false
static inline int32_t Log2(uint32_t  value) ;

/// @brief Method Log2, addr 0xb9a95f0, size 0x24, virtual false, abstract: false, final false
static inline int32_t Log2(uint64_t  value) ;

/// @brief Method Log2SoftwareFallback, addr 0xb9a952c, size 0x84, virtual false, abstract: false, final false
static inline int32_t Log2SoftwareFallback(uint32_t  value) ;

/// @brief Method PopCount, addr 0xb9a9614, size 0x14, virtual false, abstract: false, final false
static inline int32_t PopCount(uint32_t  value) ;

/// @brief Method PopCount, addr 0xb9a9628, size 0x5c, virtual false, abstract: false, final false
static inline int32_t PopCount(uint64_t  value) ;

/// @brief Method RotateLeft, addr 0xb9a988c, size 0xc, virtual false, abstract: false, final false
static inline uint32_t RotateLeft(uint32_t  value, int32_t  offset) ;

/// @brief Method RotateLeft, addr 0xb9a9898, size 0xc, virtual false, abstract: false, final false
static inline uint64_t RotateLeft(uint64_t  value, int32_t  offset) ;

/// @brief Method RotateRight, addr 0xb9a98a4, size 0x8, virtual false, abstract: false, final false
static inline uint32_t RotateRight(uint32_t  value, int32_t  offset) ;

/// @brief Method RotateRight, addr 0xb9a98ac, size 0x8, virtual false, abstract: false, final false
static inline uint64_t RotateRight(uint64_t  value, int32_t  offset) ;

/// @brief Method TrailingZeroCount, addr 0xb9a9684, size 0x88, virtual false, abstract: false, final false
static inline int32_t TrailingZeroCount(int32_t  value) ;

/// @brief Method TrailingZeroCount, addr 0xb9a9790, size 0x8, virtual false, abstract: false, final false
static inline int32_t TrailingZeroCount(int64_t  value) ;

/// @brief Method TrailingZeroCount, addr 0xb9a970c, size 0x84, virtual false, abstract: false, final false
static inline int32_t TrailingZeroCount(uint32_t  value) ;

/// @brief Method TrailingZeroCount, addr 0xb9a9798, size 0xf4, virtual false, abstract: false, final false
static inline int32_t TrailingZeroCount(uint64_t  value) ;

/// @brief Method get_Log2DeBruijn, addr 0xb9a94b8, size 0x50, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<uint8_t> get_Log2DeBruijn() ;

/// @brief Method get_TrailingZeroCountDeBruijn, addr 0xb9a9468, size 0x50, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<uint8_t> get_TrailingZeroCountDeBruijn() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BitOperations() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BitOperations", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BitOperations(BitOperations && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BitOperations", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BitOperations(BitOperations const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26337};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Numerics::BitOperations) == 0x10, "Size mismatch!");

} // namespace end def System::Numerics
