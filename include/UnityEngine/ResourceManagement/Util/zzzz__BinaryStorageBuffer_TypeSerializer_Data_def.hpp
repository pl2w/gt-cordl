#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/BinaryStorageBuffer_TypeSerializer_Data.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryStorageBuffer_TypeSerializer_Data)
// Forward declare root types
namespace GlobalNamespace {
struct TypeSerializer_BinaryStorageBuffer_Data;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TypeSerializer_BinaryStorageBuffer_Data);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TypeSerializer_BinaryStorageBuffer_Data, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/TypeSerializer/Data");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/TypeSerializer/Data
struct CORDL_TYPE TypeSerializer_BinaryStorageBuffer_Data {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TypeSerializer_BinaryStorageBuffer_Data() ;

// Ctor Parameters [CppParam { name: "assemblyId", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "classId", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr TypeSerializer_BinaryStorageBuffer_Data(uint32_t  assemblyId, uint32_t  classId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28556};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field assemblyId, offset: 0x0, size: 0x4, def value: None
 uint32_t  assemblyId;

/// @brief Field classId, offset: 0x4, size: 0x4, def value: None
 uint32_t  classId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TypeSerializer_BinaryStorageBuffer_Data, assemblyId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TypeSerializer_BinaryStorageBuffer_Data, classId) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TypeSerializer_BinaryStorageBuffer_Data) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
