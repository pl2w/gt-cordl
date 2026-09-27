#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/BinaryStorageBuffer_ObjectTypeData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryStorageBuffer_ObjectTypeData)
// Forward declare root types
namespace GlobalNamespace {
struct BinaryStorageBuffer_ObjectTypeData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BinaryStorageBuffer_ObjectTypeData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BinaryStorageBuffer_ObjectTypeData, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/ObjectTypeData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/ObjectTypeData
struct CORDL_TYPE BinaryStorageBuffer_ObjectTypeData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BinaryStorageBuffer_ObjectTypeData() ;

// Ctor Parameters [CppParam { name: "typeId", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "objectId", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr BinaryStorageBuffer_ObjectTypeData(uint32_t  typeId, uint32_t  objectId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28559};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field typeId, offset: 0x0, size: 0x4, def value: None
 uint32_t  typeId;

/// @brief Field objectId, offset: 0x4, size: 0x4, def value: None
 uint32_t  objectId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BinaryStorageBuffer_ObjectTypeData, typeId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BinaryStorageBuffer_ObjectTypeData, objectId) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BinaryStorageBuffer_ObjectTypeData) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
