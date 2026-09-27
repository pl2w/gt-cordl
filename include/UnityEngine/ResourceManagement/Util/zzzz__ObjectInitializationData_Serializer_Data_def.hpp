#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/ObjectInitializationData_Serializer_Data.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectInitializationData_Serializer_Data)
// Forward declare root types
namespace GlobalNamespace {
struct Serializer_ObjectInitializationData_Data;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Serializer_ObjectInitializationData_Data);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Serializer_ObjectInitializationData_Data, "UnityEngine.ResourceManagement.Util", "ObjectInitializationData/Serializer/Data");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Util.ObjectInitializationData/Serializer/Data
struct CORDL_TYPE Serializer_ObjectInitializationData_Data {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Serializer_ObjectInitializationData_Data() ;

// Ctor Parameters [CppParam { name: "id", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "type", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "data", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr Serializer_ObjectInitializationData_Data(uint32_t  id, uint32_t  type, uint32_t  data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28590};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field id, offset: 0x0, size: 0x4, def value: None
 uint32_t  id;

/// @brief Field type, offset: 0x4, size: 0x4, def value: None
 uint32_t  type;

/// @brief Field data, offset: 0x8, size: 0x4, def value: None
 uint32_t  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Serializer_ObjectInitializationData_Data, id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Serializer_ObjectInitializationData_Data, type) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Serializer_ObjectInitializationData_Data, data) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Serializer_ObjectInitializationData_Data) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
