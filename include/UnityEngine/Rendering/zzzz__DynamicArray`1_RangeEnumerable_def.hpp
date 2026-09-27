#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DynamicArray`1_RangeEnumerable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__DynamicArray`1_RangeEnumerable_RangeIterator_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DynamicArray`1_RangeEnumerable)
namespace GlobalNamespace {
template<typename T>
struct RangeEnumerable_DynamicArray_1_RangeIterator;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct DynamicArray_1_RangeEnumerable;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::DynamicArray_1_RangeEnumerable);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::DynamicArray_1_RangeEnumerable, "UnityEngine.Rendering", "DynamicArray`1/RangeEnumerable");
// Dependencies UnityEngine.Rendering.DynamicArray`1::RangeEnumerable::RangeIterator<T>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.Rendering.DynamicArray`1/RangeEnumerable<T>
struct CORDL_TYPE DynamicArray_1_RangeEnumerable {
public:
// Declarations
using RangeIterator = ::GlobalNamespace::RangeEnumerable_DynamicArray_1_RangeIterator<T>;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::RangeEnumerable_DynamicArray_1_RangeIterator<T> GetEnumerator() ;

// Ctor Parameters []
// @brief default ctor
constexpr DynamicArray_1_RangeEnumerable() ;

// Ctor Parameters [CppParam { name: "iterator", ty: "::GlobalNamespace::RangeEnumerable_DynamicArray_1_RangeIterator<T>", modifiers: "", def_value: None, comment: None }]
constexpr DynamicArray_1_RangeEnumerable(::GlobalNamespace::RangeEnumerable_DynamicArray_1_RangeIterator<T>  iterator) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16618};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field iterator, offset: 0x0, size: 0x18, def value: None
 ::GlobalNamespace::RangeEnumerable_DynamicArray_1_RangeIterator<T>  iterator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
