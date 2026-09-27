#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/TempAllocator`1_Page.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TempAllocator`1_Page)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct TempAllocator_1_Page;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::TempAllocator_1_Page);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::TempAllocator_1_Page, "UnityEngine.UIElements.UIR", "TempAllocator`1/Page");
// Dependencies Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.TempAllocator`1/Page<T>
struct CORDL_TYPE TempAllocator_1_Page {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TempAllocator_1_Page() ;

// Ctor Parameters [CppParam { name: "array", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "used", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TempAllocator_1_Page(::Unity::Collections::NativeArray_1<T>  array, int32_t  used) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8581};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field array, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<T>  array;

/// @brief Field used, offset: 0x10, size: 0x4, def value: None
 int32_t  used;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
