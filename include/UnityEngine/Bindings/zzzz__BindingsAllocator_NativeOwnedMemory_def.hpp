#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/BindingsAllocator_NativeOwnedMemory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(BindingsAllocator_NativeOwnedMemory)
// Forward declare root types
namespace GlobalNamespace {
struct BindingsAllocator_NativeOwnedMemory;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BindingsAllocator_NativeOwnedMemory);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BindingsAllocator_NativeOwnedMemory, "UnityEngine.Bindings", "BindingsAllocator/NativeOwnedMemory");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Bindings.BindingsAllocator/NativeOwnedMemory
struct CORDL_TYPE BindingsAllocator_NativeOwnedMemory {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BindingsAllocator_NativeOwnedMemory() ;

// Ctor Parameters [CppParam { name: "data", ty: "void*", modifiers: "", def_value: None, comment: None }]
constexpr BindingsAllocator_NativeOwnedMemory(void*  data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15205};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field data, offset: 0x0, size: 0x8, def value: None
 void*  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BindingsAllocator_NativeOwnedMemory, data) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BindingsAllocator_NativeOwnedMemory) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
