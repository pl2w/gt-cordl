#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TemplateAsset_AttributeOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TemplateAsset_AttributeOverride)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct TemplateAsset_AttributeOverride;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TemplateAsset_AttributeOverride);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TemplateAsset_AttributeOverride, "UnityEngine.UIElements", "TemplateAsset/AttributeOverride");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.TemplateAsset/AttributeOverride
struct CORDL_TYPE TemplateAsset_AttributeOverride {
public:
// Declarations
/// @brief Method NamesPathMatchesElementNamesPath, addr 0xb7b4244, size 0x32c, virtual false, abstract: false, final false
inline bool NamesPathMatchesElementNamesPath(::System::Collections::Generic::IList_1<::StringW>*  elementNamesPath) ;

// Ctor Parameters []
// @brief default ctor
constexpr TemplateAsset_AttributeOverride() ;

// Ctor Parameters [CppParam { name: "m_ElementName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_NamesPath", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AttributeName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Value", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr TemplateAsset_AttributeOverride(::StringW  m_ElementName, ::ArrayW<::StringW>  m_NamesPath, ::StringW  m_AttributeName, ::StringW  m_Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8362};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ElementName, offset: 0x0, size: 0x8, def value: None
 ::StringW  m_ElementName;

/// @brief Field m_NamesPath, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::StringW>  m_NamesPath;

/// @brief Field m_AttributeName, offset: 0x10, size: 0x8, def value: None
 ::StringW  m_AttributeName;

/// @brief Field m_Value, offset: 0x18, size: 0x8, def value: None
 ::StringW  m_Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TemplateAsset_AttributeOverride, m_ElementName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TemplateAsset_AttributeOverride, m_NamesPath) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TemplateAsset_AttributeOverride, m_AttributeName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TemplateAsset_AttributeOverride, m_Value) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TemplateAsset_AttributeOverride) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
