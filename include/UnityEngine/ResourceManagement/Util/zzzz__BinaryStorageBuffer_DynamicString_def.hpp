#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/BinaryStorageBuffer_DynamicString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryStorageBuffer_DynamicString)
// Forward declare root types
namespace GlobalNamespace {
struct BinaryStorageBuffer_DynamicString;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BinaryStorageBuffer_DynamicString);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BinaryStorageBuffer_DynamicString, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/DynamicString");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/DynamicString
struct CORDL_TYPE BinaryStorageBuffer_DynamicString {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BinaryStorageBuffer_DynamicString() ;

// Ctor Parameters [CppParam { name: "stringId", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "nextId", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr BinaryStorageBuffer_DynamicString(uint32_t  stringId, uint32_t  nextId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28558};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field stringId, offset: 0x0, size: 0x4, def value: None
 uint32_t  stringId;

/// @brief Field nextId, offset: 0x4, size: 0x4, def value: None
 uint32_t  nextId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BinaryStorageBuffer_DynamicString, stringId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BinaryStorageBuffer_DynamicString, nextId) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BinaryStorageBuffer_DynamicString) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
