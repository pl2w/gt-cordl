#pragma once
// IWYU pragma private; include "Fusion/BitSet512_Iterator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__BitSet512_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitSet512_Iterator)
namespace Fusion {
struct BitSet512;
}
// Forward declare root types
namespace GlobalNamespace {
struct BitSet512_Iterator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BitSet512_Iterator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BitSet512_Iterator, "Fusion", "BitSet512/Iterator");
// Dependencies Fusion.BitSet512
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.BitSet512/Iterator
struct CORDL_TYPE BitSet512_Iterator {
public:
// Declarations
/// @brief Method Next, addr 0x5f9a750, size 0xf8, virtual false, abstract: false, final false
inline bool Next(::by_ref<int32_t>  index) ;

/// @brief Method .ctor, addr 0x5f99de8, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::Fusion::BitSet512  set) ;

// Ctor Parameters []
// @brief default ctor
constexpr BitSet512_Iterator() ;

// Ctor Parameters [CppParam { name: "_bit", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_set", ty: "::Fusion::BitSet512", modifiers: "", def_value: None, comment: None }]
constexpr BitSet512_Iterator(int32_t  _bit, ::Fusion::BitSet512  _set) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18991};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field _bit, offset: 0x0, size: 0x4, def value: None
 int32_t  _bit;

/// @brief Field _set, offset: 0x8, size: 0x40, def value: None
 ::Fusion::BitSet512  _set;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BitSet512_Iterator, _bit) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitSet512_Iterator, _set) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BitSet512_Iterator) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
