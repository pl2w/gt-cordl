#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeAsset_SlotUsageEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualTreeAsset_SlotUsageEntry)
// Forward declare root types
namespace GlobalNamespace {
struct VisualTreeAsset_SlotUsageEntry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VisualTreeAsset_SlotUsageEntry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualTreeAsset_SlotUsageEntry, "UnityEngine.UIElements", "VisualTreeAsset/SlotUsageEntry");
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualTreeAsset/SlotUsageEntry
struct CORDL_TYPE VisualTreeAsset_SlotUsageEntry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VisualTreeAsset_SlotUsageEntry() ;

// Ctor Parameters [CppParam { name: "slotName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "assetId", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VisualTreeAsset_SlotUsageEntry(::StringW  slotName, int32_t  assetId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8427};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [SerializeField]
/// @brief Field slotName, offset: 0x0, size: 0x8, def value: None
 ::StringW  slotName;

/// [SerializeField]
/// @brief Field assetId, offset: 0x8, size: 0x4, def value: None
 int32_t  assetId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualTreeAsset_SlotUsageEntry, slotName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualTreeAsset_SlotUsageEntry, assetId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualTreeAsset_SlotUsageEntry) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
