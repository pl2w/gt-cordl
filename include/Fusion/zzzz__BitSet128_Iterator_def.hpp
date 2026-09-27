#pragma once
// IWYU pragma private; include "Fusion/BitSet128_Iterator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__BitSet128_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitSet128_Iterator)
namespace Fusion {
struct BitSet128;
}
// Forward declare root types
namespace GlobalNamespace {
struct BitSet128_Iterator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BitSet128_Iterator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BitSet128_Iterator, "Fusion", "BitSet128/Iterator");
// Dependencies Fusion.BitSet128
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.BitSet128/Iterator
struct CORDL_TYPE BitSet128_Iterator {
public:
// Declarations
/// @brief Method Next, addr 0x5f986dc, size 0xf8, virtual false, abstract: false, final false
inline bool Next(::by_ref<int32_t>  index) ;

/// @brief Method .ctor, addr 0x5f97f34, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Fusion::BitSet128  set) ;

// Ctor Parameters []
// @brief default ctor
constexpr BitSet128_Iterator() ;

// Ctor Parameters [CppParam { name: "_bit", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_set", ty: "::Fusion::BitSet128", modifiers: "", def_value: None, comment: None }]
constexpr BitSet128_Iterator(int32_t  _bit, ::Fusion::BitSet128  _set) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18979};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _bit, offset: 0x0, size: 0x4, def value: None
 int32_t  _bit;

/// @brief Field _set, offset: 0x8, size: 0x10, def value: None
 ::Fusion::BitSet128  _set;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BitSet128_Iterator, _bit) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitSet128_Iterator, _set) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BitSet128_Iterator) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
