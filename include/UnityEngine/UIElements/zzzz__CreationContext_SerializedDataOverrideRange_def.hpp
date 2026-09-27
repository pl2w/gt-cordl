#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CreationContext_SerializedDataOverrideRange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CreationContext_SerializedDataOverrideRange)
namespace GlobalNamespace {
struct TemplateAsset_UxmlSerializedDataOverride;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
// Forward declare root types
namespace GlobalNamespace {
struct CreationContext_SerializedDataOverrideRange;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CreationContext_SerializedDataOverrideRange);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreationContext_SerializedDataOverrideRange, "UnityEngine.UIElements", "CreationContext/SerializedDataOverrideRange");
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.CreationContext/SerializedDataOverrideRange
struct CORDL_TYPE CreationContext_SerializedDataOverrideRange {
public:
// Declarations
/// @brief Method .ctor, addr 0xb7c1134, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::VisualTreeAsset*  sourceAsset, ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_UxmlSerializedDataOverride>*  attributeOverrides, int32_t  templateId) ;

// Ctor Parameters []
// @brief default ctor
constexpr CreationContext_SerializedDataOverrideRange() ;

// Ctor Parameters [CppParam { name: "sourceAsset", ty: "::UnityW<::UnityEngine::UIElements::VisualTreeAsset>", modifiers: "", def_value: None, comment: None }, CppParam { name: "templateId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "attributeOverrides", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_UxmlSerializedDataOverride>*", modifiers: "", def_value: None, comment: None }]
constexpr CreationContext_SerializedDataOverrideRange(::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  sourceAsset, int32_t  templateId, ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_UxmlSerializedDataOverride>*  attributeOverrides) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8436};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field sourceAsset, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  sourceAsset;

/// @brief Field templateId, offset: 0x8, size: 0x4, def value: None
 int32_t  templateId;

/// @brief Field attributeOverrides, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_UxmlSerializedDataOverride>*  attributeOverrides;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreationContext_SerializedDataOverrideRange, sourceAsset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreationContext_SerializedDataOverrideRange, templateId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreationContext_SerializedDataOverrideRange, attributeOverrides) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreationContext_SerializedDataOverrideRange) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
