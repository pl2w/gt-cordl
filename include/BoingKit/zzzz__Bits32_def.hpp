#pragma once
// IWYU pragma private; include "BoingKit/Bits32.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Bits32)
// Forward declare root types
namespace BoingKit {
struct Bits32;
}
// Write type traits
MARK_VAL_T(::BoingKit::Bits32);
DEFINE_IL2CPP_CLASS(::BoingKit::Bits32, "BoingKit", "Bits32");
// Dependencies 
namespace BoingKit {
// Is value type: true
// CS Name: BoingKit.Bits32
struct CORDL_TYPE Bits32 {
public:
// Declarations
 __declspec(property(get=get_IntValue)) int32_t  IntValue;

/// @brief Method Clear, addr 0x5e21910, size 0x8, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method IsBitSet, addr 0x5e25cb8, size 0x10, virtual false, abstract: false, final false
inline bool IsBitSet(int32_t  index) ;

/// @brief Method SetBit, addr 0x5e2ad74, size 0x24, virtual false, abstract: false, final false
inline void SetBit(int32_t  index, bool  value) ;

/// @brief Method .ctor, addr 0x5e2ad6c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  bits) ;

/// @brief Method get_IntValue, addr 0x5e2ad64, size 0x8, virtual false, abstract: false, final false
inline int32_t get_IntValue() ;

// Ctor Parameters []
// @brief default ctor
constexpr Bits32() ;

// Ctor Parameters [CppParam { name: "m_bits", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Bits32(int32_t  m_bits) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5221};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// [SerializeField]
/// @brief Field m_bits, offset: 0x0, size: 0x4, def value: None
 int32_t  m_bits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BoingKit::Bits32, m_bits) == 0x0, "Offset mismatch!");

static_assert(sizeof(::BoingKit::Bits32) == 0x4, "Size mismatch!");

} // namespace end def BoingKit
