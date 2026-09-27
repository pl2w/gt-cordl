#pragma once
// IWYU pragma private; include "BoingKit/BitArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitArray)
// Forward declare root types
namespace BoingKit {
struct BitArray;
}
// Write type traits
MARK_VAL_T(::BoingKit::BitArray);
DEFINE_IL2CPP_CLASS(::BoingKit::BitArray, "BoingKit", "BitArray");
// Dependencies 
namespace BoingKit {
// Is value type: true
// CS Name: BoingKit.BitArray
struct CORDL_TYPE BitArray {
public:
// Declarations
 __declspec(property(get=get_Blocks)) ::ArrayW<int32_t>  Blocks;

/// @brief Method Clear, addr 0x5e2af0c, size 0xc0, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method GetBlockIndex, addr 0x5e2ada0, size 0x14, virtual false, abstract: false, final false
static inline int32_t GetBlockIndex(int32_t  index) ;

/// @brief Method GetSubIndex, addr 0x5e2adb4, size 0x14, virtual false, abstract: false, final false
static inline int32_t GetSubIndex(int32_t  index) ;

/// @brief Method IsBitSet, addr 0x5e2b184, size 0x10, virtual false, abstract: false, final false
inline bool IsBitSet(int32_t  index) ;

/// @brief Method IsBitSet, addr 0x5e2ae48, size 0x48, virtual false, abstract: false, final false
static inline bool IsBitSet(int32_t  index, ::ArrayW<int32_t>  blocks) ;

/// @brief Method Resize, addr 0x5e2afcc, size 0xdc, virtual false, abstract: false, final false
inline void Resize(int32_t  capacity) ;

/// @brief Method SetAllBits, addr 0x5e2b0a8, size 0xc8, virtual false, abstract: false, final false
inline void SetAllBits(bool  value) ;

/// @brief Method SetBit, addr 0x5e2b170, size 0x14, virtual false, abstract: false, final false
inline void SetBit(int32_t  index, bool  value) ;

/// @brief Method SetBit, addr 0x5e2adc8, size 0x80, virtual false, abstract: false, final false
static inline void SetBit(int32_t  index, bool  value, ::ArrayW<int32_t>  blocks) ;

/// @brief Method .ctor, addr 0x5e2ae90, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Blocks, addr 0x5e2ad98, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> get_Blocks() ;

// Ctor Parameters []
// @brief default ctor
constexpr BitArray() ;

// Ctor Parameters [CppParam { name: "m_aBlock", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr BitArray(::ArrayW<int32_t>  m_aBlock) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5222};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_aBlock, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<int32_t>  m_aBlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BoingKit::BitArray, m_aBlock) == 0x0, "Offset mismatch!");

static_assert(sizeof(::BoingKit::BitArray) == 0x8, "Size mismatch!");

} // namespace end def BoingKit
