#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DynamicArray`1_RangeEnumerable_RangeIterator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicArray`1_RangeEnumerable_RangeIterator)
namespace UnityEngine::Rendering {
template<typename T>
class DynamicArray_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct RangeEnumerable_DynamicArray_1_RangeIterator;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::RangeEnumerable_DynamicArray_1_RangeIterator);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::RangeEnumerable_DynamicArray_1_RangeIterator, "UnityEngine.Rendering", "DynamicArray`1/RangeEnumerable/RangeIterator");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.Rendering.DynamicArray`1/RangeEnumerable/RangeIterator<T>
struct CORDL_TYPE RangeEnumerable_DynamicArray_1_RangeIterator {
public:
// Declarations
 __declspec(property(get=get_Current)) T  Current;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool MoveNext() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::DynamicArray_1<T>*  setOwner, int32_t  first, int32_t  numItems) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> get_Current() ;

// Ctor Parameters []
// @brief default ctor
constexpr RangeEnumerable_DynamicArray_1_RangeIterator() ;

// Ctor Parameters [CppParam { name: "owner", ty: "::UnityEngine::Rendering::DynamicArray_1<T>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "first", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "last", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RangeEnumerable_DynamicArray_1_RangeIterator(::UnityEngine::Rendering::DynamicArray_1<T>*  owner, int32_t  index, int32_t  first, int32_t  last) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16617};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field owner, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Rendering::DynamicArray_1<T>*  owner;

/// @brief Field index, offset: 0x8, size: 0x4, def value: None
 int32_t  index;

/// @brief Field first, offset: 0xc, size: 0x4, def value: None
 int32_t  first;

/// @brief Field last, offset: 0x10, size: 0x4, def value: None
 int32_t  last;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
