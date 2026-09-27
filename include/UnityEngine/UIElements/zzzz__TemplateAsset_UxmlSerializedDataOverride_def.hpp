#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TemplateAsset_UxmlSerializedDataOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TemplateAsset_UxmlSerializedDataOverride)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class UxmlSerializedData;
}
// Forward declare root types
namespace GlobalNamespace {
struct TemplateAsset_UxmlSerializedDataOverride;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TemplateAsset_UxmlSerializedDataOverride);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TemplateAsset_UxmlSerializedDataOverride, "UnityEngine.UIElements", "TemplateAsset/UxmlSerializedDataOverride");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.TemplateAsset/UxmlSerializedDataOverride
struct CORDL_TYPE TemplateAsset_UxmlSerializedDataOverride {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TemplateAsset_UxmlSerializedDataOverride() ;

// Ctor Parameters [CppParam { name: "m_ElementId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ElementIdsPath", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SerializedData", ty: "::UnityEngine::UIElements::UxmlSerializedData*", modifiers: "", def_value: None, comment: None }]
constexpr TemplateAsset_UxmlSerializedDataOverride(int32_t  m_ElementId, ::System::Collections::Generic::List_1<int32_t>*  m_ElementIdsPath, ::UnityEngine::UIElements::UxmlSerializedData*  m_SerializedData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8363};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ElementId, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ElementId;

/// @brief Field m_ElementIdsPath, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  m_ElementIdsPath;

/// [SerializeReference]
/// @brief Field m_SerializedData, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlSerializedData*  m_SerializedData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TemplateAsset_UxmlSerializedDataOverride, m_ElementId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TemplateAsset_UxmlSerializedDataOverride, m_ElementIdsPath) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TemplateAsset_UxmlSerializedDataOverride, m_SerializedData) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TemplateAsset_UxmlSerializedDataOverride) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
