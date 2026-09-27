#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/EntryPreProcessor_AllocSize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EntryPreProcessor_AllocSize)
// Forward declare root types
namespace GlobalNamespace {
struct EntryPreProcessor_AllocSize;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EntryPreProcessor_AllocSize);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EntryPreProcessor_AllocSize, "UnityEngine.UIElements.UIR", "EntryPreProcessor/AllocSize");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.EntryPreProcessor/AllocSize
struct CORDL_TYPE EntryPreProcessor_AllocSize {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr EntryPreProcessor_AllocSize() ;

// Ctor Parameters [CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "indexCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EntryPreProcessor_AllocSize(int32_t  vertexCount, int32_t  indexCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8516};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field vertexCount, offset: 0x0, size: 0x4, def value: None
 int32_t  vertexCount;

/// @brief Field indexCount, offset: 0x4, size: 0x4, def value: None
 int32_t  indexCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EntryPreProcessor_AllocSize, vertexCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EntryPreProcessor_AllocSize, indexCount) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EntryPreProcessor_AllocSize) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
