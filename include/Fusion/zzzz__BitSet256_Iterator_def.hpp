#pragma once
// IWYU pragma private; include "Fusion/BitSet256_Iterator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__BitSet256_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitSet256_Iterator)
namespace Fusion {
struct BitSet256;
}
// Forward declare root types
namespace GlobalNamespace {
struct BitSet256_Iterator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BitSet256_Iterator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BitSet256_Iterator, "Fusion", "BitSet256/Iterator");
// Dependencies Fusion.BitSet256
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.BitSet256/Iterator
struct CORDL_TYPE BitSet256_Iterator {
public:
// Declarations
/// @brief Method Next, addr 0x5f99b38, size 0xf8, virtual false, abstract: false, final false
inline bool Next(::by_ref<int32_t>  index) ;

/// @brief Method .ctor, addr 0x5f993c4, size 0x18, virtual false, abstract: false, final false
inline void _ctor(::Fusion::BitSet256  set) ;

// Ctor Parameters []
// @brief default ctor
constexpr BitSet256_Iterator() ;

// Ctor Parameters [CppParam { name: "_bit", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_set", ty: "::Fusion::BitSet256", modifiers: "", def_value: None, comment: None }]
constexpr BitSet256_Iterator(int32_t  _bit, ::Fusion::BitSet256  _set) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18987};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field _bit, offset: 0x0, size: 0x4, def value: None
 int32_t  _bit;

/// @brief Field _set, offset: 0x8, size: 0x20, def value: None
 ::Fusion::BitSet256  _set;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BitSet256_Iterator, _bit) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitSet256_Iterator, _set) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BitSet256_Iterator) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
