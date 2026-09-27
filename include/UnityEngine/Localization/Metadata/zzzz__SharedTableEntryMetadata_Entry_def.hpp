#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/SharedTableEntryMetadata_Entry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SharedTableEntryMetadata_Entry)
// Forward declare root types
namespace GlobalNamespace {
struct SharedTableEntryMetadata_Entry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SharedTableEntryMetadata_Entry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SharedTableEntryMetadata_Entry, "UnityEngine.Localization.Metadata", "SharedTableEntryMetadata/Entry");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Localization.Metadata.SharedTableEntryMetadata/Entry
struct CORDL_TYPE SharedTableEntryMetadata_Entry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SharedTableEntryMetadata_Entry() ;

// Ctor Parameters [CppParam { name: "id", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr SharedTableEntryMetadata_Entry(int64_t  id) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25345};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field id, offset: 0x0, size: 0x8, def value: None
 int64_t  id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SharedTableEntryMetadata_Entry, id) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SharedTableEntryMetadata_Entry) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
