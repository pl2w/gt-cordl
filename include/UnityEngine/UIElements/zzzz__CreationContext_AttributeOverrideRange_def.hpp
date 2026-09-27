#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CreationContext_AttributeOverrideRange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CreationContext_AttributeOverrideRange)
namespace GlobalNamespace {
struct TemplateAsset_AttributeOverride;
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
struct CreationContext_AttributeOverrideRange;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CreationContext_AttributeOverrideRange);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreationContext_AttributeOverrideRange, "UnityEngine.UIElements", "CreationContext/AttributeOverrideRange");
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.CreationContext/AttributeOverrideRange
struct CORDL_TYPE CreationContext_AttributeOverrideRange {
public:
// Declarations
/// @brief Method .ctor, addr 0xb7c1104, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::VisualTreeAsset*  sourceAsset, ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_AttributeOverride>*  attributeOverrides) ;

// Ctor Parameters []
// @brief default ctor
constexpr CreationContext_AttributeOverrideRange() ;

// Ctor Parameters [CppParam { name: "sourceAsset", ty: "::UnityW<::UnityEngine::UIElements::VisualTreeAsset>", modifiers: "", def_value: None, comment: None }, CppParam { name: "attributeOverrides", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_AttributeOverride>*", modifiers: "", def_value: None, comment: None }]
constexpr CreationContext_AttributeOverrideRange(::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  sourceAsset, ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_AttributeOverride>*  attributeOverrides) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8435};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field sourceAsset, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  sourceAsset;

/// @brief Field attributeOverrides, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_AttributeOverride>*  attributeOverrides;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreationContext_AttributeOverrideRange, sourceAsset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreationContext_AttributeOverrideRange, attributeOverrides) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreationContext_AttributeOverrideRange) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
