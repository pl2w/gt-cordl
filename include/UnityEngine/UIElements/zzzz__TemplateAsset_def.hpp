#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TemplateAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__VisualElementAsset_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TemplateAsset)
namespace GlobalNamespace {
struct TemplateAsset_AttributeOverride;
}
namespace GlobalNamespace {
struct TemplateAsset_UxmlSerializedDataOverride;
}
namespace GlobalNamespace {
struct VisualTreeAsset_SlotUsageEntry;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TemplateAsset;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::TemplateAsset*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::TemplateAsset*, "UnityEngine.UIElements", "TemplateAsset");
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies UnityEngine.UIElements.VisualElementAsset
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TemplateAsset
class CORDL_TYPE TemplateAsset : public ::UnityEngine::UIElements::VisualElementAsset {
public:
// Declarations
using AttributeOverride = ::GlobalNamespace::TemplateAsset_AttributeOverride;

using UxmlSerializedDataOverride = ::GlobalNamespace::TemplateAsset_UxmlSerializedDataOverride;

 __declspec(property(get=get_attributeOverrides)) ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_AttributeOverride>*  attributeOverrides;

/// @brief Field m_AttributeOverrides, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AttributeOverrides, put=__cordl_internal_set_m_AttributeOverrides)) ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_AttributeOverride>*  m_AttributeOverrides;

/// @brief Field m_SerializedDataOverride, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SerializedDataOverride, put=__cordl_internal_set_m_SerializedDataOverride)) ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_UxmlSerializedDataOverride>*  m_SerializedDataOverride;

/// @brief Field m_SlotUsages, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SlotUsages, put=__cordl_internal_set_m_SlotUsages)) ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_SlotUsageEntry>*  m_SlotUsages;

/// @brief Field m_TemplateAlias, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TemplateAlias, put=__cordl_internal_set_m_TemplateAlias)) ::StringW  m_TemplateAlias;

 __declspec(property(get=get_serializedDataOverrides)) ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_UxmlSerializedDataOverride>*  serializedDataOverrides;

/// @brief [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
 __declspec(property(get=get_slotUsages)) ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_SlotUsageEntry>*  slotUsages;

/// @brief Method Instantiate, addr 0xb7b2c40, size 0x770, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* Instantiate(::UnityEngine::UIElements::CreationContext  cc) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_AttributeOverride>* const& __cordl_internal_get_m_AttributeOverrides() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_AttributeOverride>*& __cordl_internal_get_m_AttributeOverrides() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_UxmlSerializedDataOverride>* const& __cordl_internal_get_m_SerializedDataOverride() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_UxmlSerializedDataOverride>*& __cordl_internal_get_m_SerializedDataOverride() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_SlotUsageEntry>* const& __cordl_internal_get_m_SlotUsages() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_SlotUsageEntry>*& __cordl_internal_get_m_SlotUsages() ;

constexpr ::StringW const& __cordl_internal_get_m_TemplateAlias() const;

constexpr ::StringW& __cordl_internal_get_m_TemplateAlias() ;

constexpr void __cordl_internal_set_m_AttributeOverrides(::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_AttributeOverride>*  value) ;

constexpr void __cordl_internal_set_m_SerializedDataOverride(::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_UxmlSerializedDataOverride>*  value) ;

constexpr void __cordl_internal_set_m_SlotUsages(::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_SlotUsageEntry>*  value) ;

constexpr void __cordl_internal_set_m_TemplateAlias(::StringW  value) ;

/// @brief Method get_attributeOverrides, addr 0xb7b2c30, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_AttributeOverride>* get_attributeOverrides() ;

/// @brief Method get_serializedDataOverrides, addr 0xb7b2c38, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_UxmlSerializedDataOverride>* get_serializedDataOverrides() ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method get_slotUsages, addr 0xb7b423c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_SlotUsageEntry>* get_slotUsages() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TemplateAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TemplateAsset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TemplateAsset(TemplateAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TemplateAsset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TemplateAsset(TemplateAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8364};

/// [SerializeField]
/// @brief Field m_TemplateAlias, offset: 0x90, size: 0x8, def value: None
 ::StringW  ___m_TemplateAlias;

/// [SerializeField]
/// @brief Field m_AttributeOverrides, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_AttributeOverride>*  ___m_AttributeOverrides;

/// [SerializeField]
/// @brief Field m_SerializedDataOverride, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::TemplateAsset_UxmlSerializedDataOverride>*  ___m_SerializedDataOverride;

/// [SerializeField]
/// @brief Field m_SlotUsages, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_SlotUsageEntry>*  ___m_SlotUsages;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TemplateAsset, ___m_TemplateAlias) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TemplateAsset, ___m_AttributeOverrides) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TemplateAsset, ___m_SerializedDataOverride) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TemplateAsset, ___m_SlotUsages) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::TemplateAsset) == 0xb0, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
