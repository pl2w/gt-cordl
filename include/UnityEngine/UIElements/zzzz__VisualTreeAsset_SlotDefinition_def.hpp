#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeAsset_SlotDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualTreeAsset_SlotDefinition)
// Forward declare root types
namespace GlobalNamespace {
struct VisualTreeAsset_SlotDefinition;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VisualTreeAsset_SlotDefinition);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualTreeAsset_SlotDefinition, "UnityEngine.UIElements", "VisualTreeAsset/SlotDefinition");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.VisualTreeAsset/SlotDefinition
struct CORDL_TYPE VisualTreeAsset_SlotDefinition {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VisualTreeAsset_SlotDefinition() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "insertionPointId", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VisualTreeAsset_SlotDefinition(::StringW  name, int32_t  insertionPointId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8426};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [SerializeField]
/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// [SerializeField]
/// @brief Field insertionPointId, offset: 0x8, size: 0x4, def value: None
 int32_t  insertionPointId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualTreeAsset_SlotDefinition, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualTreeAsset_SlotDefinition, insertionPointId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualTreeAsset_SlotDefinition) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
