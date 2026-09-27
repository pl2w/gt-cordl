#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DynamicArray`1_Iterator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicArray`1_Iterator)
namespace UnityEngine::Rendering {
template<typename T>
class DynamicArray_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct DynamicArray_1_Iterator;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::DynamicArray_1_Iterator);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::DynamicArray_1_Iterator, "UnityEngine.Rendering", "DynamicArray`1/Iterator");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.Rendering.DynamicArray`1/Iterator<T>
struct CORDL_TYPE DynamicArray_1_Iterator {
public:
// Declarations
 __declspec(property(get=get_Current)) T  Current;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool MoveNext() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::DynamicArray_1<T>*  setOwner) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> get_Current() ;

// Ctor Parameters []
// @brief default ctor
constexpr DynamicArray_1_Iterator() ;

// Ctor Parameters [CppParam { name: "owner", ty: "::UnityEngine::Rendering::DynamicArray_1<T>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DynamicArray_1_Iterator(::UnityEngine::Rendering::DynamicArray_1<T>*  owner, int32_t  index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16616};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field owner, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Rendering::DynamicArray_1<T>*  owner;

/// @brief Field index, offset: 0x8, size: 0x4, def value: None
 int32_t  index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
