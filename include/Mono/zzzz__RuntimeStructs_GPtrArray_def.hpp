#pragma once
// IWYU pragma private; include "Mono/RuntimeStructs_GPtrArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeStructs_GPtrArray)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
struct RuntimeStructs_GPtrArray;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RuntimeStructs_GPtrArray);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RuntimeStructs_GPtrArray, "Mono", "RuntimeStructs/GPtrArray");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Mono.RuntimeStructs/GPtrArray
struct CORDL_TYPE RuntimeStructs_GPtrArray {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeStructs_GPtrArray() ;

// Ctor Parameters [CppParam { name: "data", ty: "::System::IntPtr*", modifiers: "", def_value: None, comment: None }, CppParam { name: "len", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RuntimeStructs_GPtrArray(::System::IntPtr*  data, int32_t  len) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5338};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field data, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr*  data;

/// @brief Field len, offset: 0x8, size: 0x4, def value: None
 int32_t  len;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RuntimeStructs_GPtrArray, data) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimeStructs_GPtrArray, len) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RuntimeStructs_GPtrArray) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
