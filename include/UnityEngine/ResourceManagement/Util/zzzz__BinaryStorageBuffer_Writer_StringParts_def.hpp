#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/BinaryStorageBuffer_Writer_StringParts.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryStorageBuffer_Writer_StringParts)
// Forward declare root types
namespace GlobalNamespace {
struct Writer_BinaryStorageBuffer_StringParts;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Writer_BinaryStorageBuffer_StringParts);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Writer_BinaryStorageBuffer_StringParts, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/Writer/StringParts");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/Writer/StringParts
struct CORDL_TYPE Writer_BinaryStorageBuffer_StringParts {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Writer_BinaryStorageBuffer_StringParts() ;

// Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "dataSize", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isUnicode", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr Writer_BinaryStorageBuffer_StringParts(::StringW  str, uint32_t  dataSize, bool  isUnicode) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28565};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field str, offset: 0x0, size: 0x8, def value: None
 ::StringW  str;

/// @brief Field dataSize, offset: 0x8, size: 0x4, def value: None
 uint32_t  dataSize;

/// @brief Field isUnicode, offset: 0xc, size: 0x1, def value: None
 bool  isUnicode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Writer_BinaryStorageBuffer_StringParts, str) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Writer_BinaryStorageBuffer_StringParts, dataSize) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Writer_BinaryStorageBuffer_StringParts, isUnicode) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Writer_BinaryStorageBuffer_StringParts) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
