#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/BinaryStorageBuffer_BuiltinTypesSerializer_ObjectToStringRemap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryStorageBuffer_BuiltinTypesSerializer_ObjectToStringRemap)
// Forward declare root types
namespace GlobalNamespace {
struct BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/BuiltinTypesSerializer/ObjectToStringRemap");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/BuiltinTypesSerializer/ObjectToStringRemap
struct CORDL_TYPE BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap() ;

// Ctor Parameters [CppParam { name: "stringId", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "separator", ty: "char16_t", modifiers: "", def_value: None, comment: None }]
constexpr BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap(uint32_t  stringId, char16_t  separator) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28553};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field stringId, offset: 0x0, size: 0x4, def value: None
 uint32_t  stringId;

/// @brief Field separator, offset: 0x4, size: 0x2, def value: None
 char16_t  separator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap, stringId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap, separator) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuiltinTypesSerializer_BinaryStorageBuffer_ObjectToStringRemap) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
