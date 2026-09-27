#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualTreeAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List`1_Enumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_UsingEntry_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualTreeAsset)
namespace GlobalNamespace {
struct VisualTreeAsset_AssetEntry;
}
namespace GlobalNamespace {
struct VisualTreeAsset_SlotDefinition;
}
namespace GlobalNamespace {
struct VisualTreeAsset_SlotUsageEntry;
}
namespace GlobalNamespace {
struct VisualTreeAsset_UsingEntry;
}
namespace GlobalNamespace {
struct VisualTreeAsset_UxmlObjectEntry;
}
namespace GlobalNamespace {
struct VisualTreeAsset___c__DisplayClass82_0;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IBaseUxmlObjectFactory;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
class TemplateAsset;
}
namespace UnityEngine::UIElements {
class TemplateContainer;
}
namespace UnityEngine::UIElements {
class UxmlAsset;
}
namespace UnityEngine::UIElements {
struct UxmlNamespaceDefinition;
}
namespace UnityEngine::UIElements {
class UxmlObjectAsset;
}
namespace UnityEngine::UIElements {
class VisualElementAsset;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset_UsingEntryComparer;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset___c__DisplayClass76_0;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset__get_stylesheets_d__31;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset__get_templateDependencies_d__27;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset_UsingEntryComparer;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset___c__DisplayClass76_0;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset__get_stylesheets_d__31;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset__get_templateDependencies_d__27;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::VisualTreeAsset*);
MARK_REF_T(::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer*);
MARK_REF_T(::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass76_0*);
MARK_REF_T(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31*);
MARK_REF_T(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualTreeAsset*, "UnityEngine.UIElements", "VisualTreeAsset");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer*, "UnityEngine.UIElements", "VisualTreeAsset/UsingEntryComparer");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass76_0*, "UnityEngine.UIElements", "VisualTreeAsset/<>c__DisplayClass76_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31*, "UnityEngine.UIElements", "VisualTreeAsset/<get_stylesheets>d__31");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27*, "UnityEngine.UIElements", "VisualTreeAsset/<get_templateDependencies>d__27");
// [HelpURL("UIE-VisualTree-landing")]
// Dependencies UnityEngine.Object, UnityEngine.ScriptableObject
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeAsset
class CORDL_TYPE VisualTreeAsset : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using AssetEntry = ::GlobalNamespace::VisualTreeAsset_AssetEntry;

using SlotDefinition = ::GlobalNamespace::VisualTreeAsset_SlotDefinition;

using SlotUsageEntry = ::GlobalNamespace::VisualTreeAsset_SlotUsageEntry;

using UsingEntry = ::GlobalNamespace::VisualTreeAsset_UsingEntry;

using UxmlObjectEntry = ::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry;

using __c__DisplayClass82_0 = ::GlobalNamespace::VisualTreeAsset___c__DisplayClass82_0;

using UsingEntryComparer = ::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer;

using __c__DisplayClass76_0 = ::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass76_0;

using _get_stylesheets_d__31 = ::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31;

using _get_templateDependencies_d__27 = ::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27;

/// @brief Field LinkedVEAInTemplatePropertyName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LinkedVEAInTemplatePropertyName, put=setStaticF_LinkedVEAInTemplatePropertyName)) ::StringW  LinkedVEAInTemplatePropertyName;

/// @brief Field NoRegisteredFactoryErrorMessage, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NoRegisteredFactoryErrorMessage, put=setStaticF_NoRegisteredFactoryErrorMessage)) ::StringW  NoRegisteredFactoryErrorMessage;

 __declspec(property(get=get_contentContainerId, put=set_contentContainerId)) int32_t  contentContainerId;

 __declspec(property(get=get_contentHash, put=set_contentHash)) int32_t  contentHash;

 __declspec(property(get=get_importedWithErrors, put=set_importedWithErrors)) bool  importedWithErrors;

 __declspec(property(get=get_importedWithWarnings, put=set_importedWithWarnings)) bool  importedWithWarnings;

/// @brief [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
 __declspec(property(get=get_importerWithUpdatedUrls, put=set_importerWithUpdatedUrls)) bool  importerWithUpdatedUrls;

/// @brief Field inlineSheet, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_inlineSheet, put=__cordl_internal_set_inlineSheet)) ::UnityW<::UnityEngine::UIElements::StyleSheet>  inlineSheet;

/// @brief Field m_AssetEntries, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AssetEntries, put=__cordl_internal_set_m_AssetEntries)) ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_AssetEntry>*  m_AssetEntries;

/// @brief Field m_ContentContainerId, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ContentContainerId, put=__cordl_internal_set_m_ContentContainerId)) int32_t  m_ContentContainerId;

/// @brief Field m_ContentHash, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ContentHash, put=__cordl_internal_set_m_ContentHash)) int32_t  m_ContentHash;

/// @brief Field m_HasUpdatedUrls, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasUpdatedUrls, put=__cordl_internal_set_m_HasUpdatedUrls)) bool  m_HasUpdatedUrls;

/// @brief Field m_ImportedWithErrors, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ImportedWithErrors, put=__cordl_internal_set_m_ImportedWithErrors)) bool  m_ImportedWithErrors;

/// @brief Field m_ImportedWithWarnings, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ImportedWithWarnings, put=__cordl_internal_set_m_ImportedWithWarnings)) bool  m_ImportedWithWarnings;

/// @brief Field m_Slots, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Slots, put=__cordl_internal_set_m_Slots)) ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_SlotDefinition>*  m_Slots;

/// @brief Field m_TemplateAssets, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TemplateAssets, put=__cordl_internal_set_m_TemplateAssets)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>*  m_TemplateAssets;

/// @brief Field m_Usings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Usings, put=__cordl_internal_set_m_Usings)) ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_UsingEntry>*  m_Usings;

/// @brief Field m_UxmlObjectEntries, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UxmlObjectEntries, put=__cordl_internal_set_m_UxmlObjectEntries)) ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry>*  m_UxmlObjectEntries;

/// @brief Field m_UxmlObjectIds, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UxmlObjectIds, put=__cordl_internal_set_m_UxmlObjectIds)) ::System::Collections::Generic::List_1<int32_t>*  m_UxmlObjectIds;

/// @brief Field m_VisualElementAssets, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VisualElementAssets, put=__cordl_internal_set_m_VisualElementAssets)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*  m_VisualElementAssets;

/// @brief Field s_TemporarySlotInsertionPoints, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TemporarySlotInsertionPoints, put=setStaticF_s_TemporarySlotInsertionPoints)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::VisualElement*>*  s_TemporarySlotInsertionPoints;

/// @brief Field s_VeaIdsPath, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_VeaIdsPath, put=setStaticF_s_VeaIdsPath)) ::System::Collections::Generic::List_1<int32_t>*  s_VeaIdsPath;

 __declspec(property(get=get_slots)) ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_SlotDefinition>*  slots;

 __declspec(property(get=get_stylesheets)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*  stylesheets;

 __declspec(property(get=get_templateAssets)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>*  templateAssets;

 __declspec(property(get=get_templateDependencies)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*  templateDependencies;

 __declspec(property(get=get_usings)) ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_UsingEntry>*  usings;

 __declspec(property(get=get_uxmlObjectEntries)) ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry>*  uxmlObjectEntries;

 __declspec(property(get=get_uxmlObjectIds)) ::System::Collections::Generic::List_1<int32_t>*  uxmlObjectIds;

 __declspec(property(get=get_visualElementAssets)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*  visualElementAssets;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method AddUxmlObject, addr 0xb7bbfdc, size 0x3e0, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::UxmlObjectAsset* AddUxmlObject(::UnityEngine::UIElements::UxmlAsset*  parent, ::StringW  fieldUxmlName, ::StringW  fullTypeName, ::UnityEngine::UIElements::UxmlNamespaceDefinition  xmlNamespace) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method AssetEntryExists, addr 0xb7bcc6c, size 0x1c0, virtual false, abstract: false, final false
inline bool AssetEntryExists(::StringW  path, ::System::Type*  type) ;

/// @brief Method AssignClassListFromAssetToElement, addr 0xb7bd7c4, size 0x6c, virtual false, abstract: false, final false
static inline void AssignClassListFromAssetToElement(::UnityEngine::UIElements::VisualElementAsset*  asset, ::UnityEngine::UIElements::VisualElement*  element) ;

/// @brief Method AssignStyleSheetFromAssetToElement, addr 0xb7bd830, size 0x1b8, virtual false, abstract: false, final false
static inline void AssignStyleSheetFromAssetToElement(::UnityEngine::UIElements::VisualElementAsset*  asset, ::UnityEngine::UIElements::VisualElement*  element) ;

/// @brief Method CloneSetupRecursively, addr 0xb7bd9e8, size 0xb08, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* CloneSetupRecursively(::UnityEngine::UIElements::VisualElementAsset*  root, ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*>*  idToChildren, ::UnityEngine::UIElements::CreationContext  context) ;

/// @brief Method CloneTree, addr 0xb7bd5cc, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::TemplateContainer* CloneTree() ;

/// @brief Method CloneTree, addr 0xb7bd5d0, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::TemplateContainer* CloneTree(::StringW  bindingPath) ;

/// @brief Method CloneTree, addr 0xb7bd5d4, size 0x18, virtual false, abstract: false, final false
inline void CloneTree(::UnityEngine::UIElements::VisualElement*  target) ;

/// @brief Method CloneTree, addr 0xb7b3a88, size 0x7b4, virtual false, abstract: false, final false
inline void CloneTree(::UnityEngine::UIElements::VisualElement*  target, ::UnityEngine::UIElements::CreationContext  cc) ;

/// @brief Method CloneTree, addr 0xb7bd5ec, size 0x1d8, virtual false, abstract: false, final false
inline void CloneTree(::UnityEngine::UIElements::VisualElement*  target, ::by_ref<int32_t>  firstElementIndex, ::by_ref<int32_t>  elementAddedCount) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method CollectUxmlObjectAssets, addr 0xb7bc60c, size 0x330, virtual false, abstract: false, final false
inline void CollectUxmlObjectAssets(::UnityEngine::UIElements::UxmlAsset*  parent, ::StringW  fieldName, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>*  foundEntries) ;

/// @brief Method CompareForOrder, addr 0xb7bebe4, size 0x34, virtual false, abstract: false, final false
static inline int32_t CompareForOrder(::UnityEngine::UIElements::VisualElementAsset*  a, ::UnityEngine::UIElements::VisualElementAsset*  b) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method Create, addr 0xb7be4f0, size 0x630, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::VisualElement* Create(::UnityEngine::UIElements::VisualElementAsset*  asset, ::UnityEngine::UIElements::CreationContext  ctx) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method GetAsset, addr 0xb7b7854, size 0x1c0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> GetAsset(::StringW  path, ::System::Type*  type) ;

/// @brief Method GetAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline T GetAsset(::StringW  path) ;

/// @brief Method GetAssetType, addr 0xb7b76e4, size 0x170, virtual false, abstract: false, final false
inline ::System::Type* GetAssetType(::StringW  path) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method GetNextChildSerialNumber, addr 0xb7bb3e0, size 0x180, virtual false, abstract: false, final false
inline int32_t GetNextChildSerialNumber() ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method GetNextUxmlAssetId, addr 0xb7bc3bc, size 0x68, virtual false, abstract: false, final false
inline int32_t GetNextUxmlAssetId(int32_t  parentId) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method GetUxmlObjectEntry, addr 0xb7bbe84, size 0x158, virtual false, abstract: false, final false
inline ::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry GetUxmlObjectEntry(int32_t  id) ;

/// @brief Method GetUxmlObjectFactory, addr 0xb7bcfbc, size 0x3c0, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::IBaseUxmlObjectFactory* GetUxmlObjectFactory(::UnityEngine::UIElements::UxmlObjectAsset*  uxmlObjectAsset) ;

/// @brief Method GetUxmlObjects, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::default_constructor_constraint<T>)
inline ::System::Collections::Generic::List_1<T>* GetUxmlObjects(::UnityEngine::UIElements::IUxmlAttributes*  asset, ::UnityEngine::UIElements::CreationContext  cc) ;

/// @brief Method Instantiate, addr 0xb7bd394, size 0x1fc, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::TemplateContainer* Instantiate() ;

/// @brief Method Instantiate, addr 0xb7bd590, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::TemplateContainer* Instantiate(::StringW  bindingPath) ;

static inline ::UnityEngine::UIElements::VisualTreeAsset* New_ctor() ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method RegisterAssetEntry, addr 0xb7bce2c, size 0xfc, virtual false, abstract: false, final false
inline void RegisterAssetEntry(::StringW  path, ::System::Type*  type, ::UnityEngine::Object*  asset) ;

/// @brief Method RegisterUxmlObject, addr 0xb7bbbec, size 0x298, virtual false, abstract: false, final false
inline void RegisterUxmlObject(::UnityEngine::UIElements::UxmlObjectAsset*  uxmlObjectAsset) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method RemoveElementAndDependencies, addr 0xb7bb670, size 0x74, virtual false, abstract: false, final false
inline void RemoveElementAndDependencies(::UnityEngine::UIElements::VisualElementAsset*  asset) ;

/// @brief Method RemoveUsingEntry, addr 0xb7bed78, size 0x74, virtual false, abstract: false, final false
inline void RemoveUsingEntry(::GlobalNamespace::VisualTreeAsset_UsingEntry  entry) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method RemoveUxmlObject, addr 0xb7bc424, size 0x1e8, virtual false, abstract: false, final false
inline void RemoveUxmlObject(int32_t  id, bool  onlyIfIsField) ;

/// @brief Method RemoveUxmlObjectEntryDependencies, addr 0xb7bb6e4, size 0x508, virtual false, abstract: false, final false
inline void RemoveUxmlObjectEntryDependencies(int32_t  parentId) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method ResolveTemplate, addr 0xb7b3920, size 0x168, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> ResolveTemplate(::StringW  templateName) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method SetUxmlObjectAssets, addr 0xb7bc93c, size 0x330, virtual false, abstract: false, final false
inline void SetUxmlObjectAssets(::UnityEngine::UIElements::UxmlAsset*  parent, ::StringW  fieldName, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlObjectAsset*>*  entries) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method TransferAssetEntries, addr 0xb7bcf28, size 0x94, virtual false, abstract: false, final false
inline void TransferAssetEntries(::UnityEngine::UIElements::VisualTreeAsset*  otherVta) ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method TryGetSlotInsertionPoint, addr 0xb7beb20, size 0xc4, virtual false, abstract: false, final false
inline bool TryGetSlotInsertionPoint(int32_t  insertionPointId, ::by_ref<::StringW>  slotName) ;

/// @brief Method TryGetUsingEntry, addr 0xb7bec18, size 0x160, virtual false, abstract: false, final false
inline bool TryGetUsingEntry(::StringW  templateName, ::by_ref<::GlobalNamespace::VisualTreeAsset_UsingEntry>  entry) ;

/// [CompilerGenerated]
/// @brief Method <Create>g__CreateError|82_0, addr 0xb7bedec, size 0x174, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::VisualElement* _Create_g__CreateError_82_0(::by_ref<::GlobalNamespace::VisualTreeAsset___c__DisplayClass82_0>  _cordl_fixed_empty_name_whitespace) ;

constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& __cordl_internal_get_inlineSheet() const;

constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& __cordl_internal_get_inlineSheet() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_AssetEntry>* const& __cordl_internal_get_m_AssetEntries() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_AssetEntry>*& __cordl_internal_get_m_AssetEntries() ;

constexpr int32_t const& __cordl_internal_get_m_ContentContainerId() const;

constexpr int32_t& __cordl_internal_get_m_ContentContainerId() ;

constexpr int32_t const& __cordl_internal_get_m_ContentHash() const;

constexpr int32_t& __cordl_internal_get_m_ContentHash() ;

constexpr bool const& __cordl_internal_get_m_HasUpdatedUrls() const;

constexpr bool& __cordl_internal_get_m_HasUpdatedUrls() ;

constexpr bool const& __cordl_internal_get_m_ImportedWithErrors() const;

constexpr bool& __cordl_internal_get_m_ImportedWithErrors() ;

constexpr bool const& __cordl_internal_get_m_ImportedWithWarnings() const;

constexpr bool& __cordl_internal_get_m_ImportedWithWarnings() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_SlotDefinition>* const& __cordl_internal_get_m_Slots() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_SlotDefinition>*& __cordl_internal_get_m_Slots() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* const& __cordl_internal_get_m_TemplateAssets() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>*& __cordl_internal_get_m_TemplateAssets() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_UsingEntry>* const& __cordl_internal_get_m_Usings() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_UsingEntry>*& __cordl_internal_get_m_Usings() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry>* const& __cordl_internal_get_m_UxmlObjectEntries() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry>*& __cordl_internal_get_m_UxmlObjectEntries() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_UxmlObjectIds() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_UxmlObjectIds() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* const& __cordl_internal_get_m_VisualElementAssets() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*& __cordl_internal_get_m_VisualElementAssets() ;

constexpr void __cordl_internal_set_inlineSheet(::UnityW<::UnityEngine::UIElements::StyleSheet>  value) ;

constexpr void __cordl_internal_set_m_AssetEntries(::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_AssetEntry>*  value) ;

constexpr void __cordl_internal_set_m_ContentContainerId(int32_t  value) ;

constexpr void __cordl_internal_set_m_ContentHash(int32_t  value) ;

constexpr void __cordl_internal_set_m_HasUpdatedUrls(bool  value) ;

constexpr void __cordl_internal_set_m_ImportedWithErrors(bool  value) ;

constexpr void __cordl_internal_set_m_ImportedWithWarnings(bool  value) ;

constexpr void __cordl_internal_set_m_Slots(::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_SlotDefinition>*  value) ;

constexpr void __cordl_internal_set_m_TemplateAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>*  value) ;

constexpr void __cordl_internal_set_m_Usings(::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_UsingEntry>*  value) ;

constexpr void __cordl_internal_set_m_UxmlObjectEntries(::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry>*  value) ;

constexpr void __cordl_internal_set_m_UxmlObjectIds(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_VisualElementAssets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*  value) ;

/// @brief Method .ctor, addr 0xb7bef70, size 0x268, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_LinkedVEAInTemplatePropertyName() ;

static inline ::StringW getStaticF_NoRegisteredFactoryErrorMessage() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::VisualElement*>* getStaticF_s_TemporarySlotInsertionPoints() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_s_VeaIdsPath() ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method get_contentContainerId, addr 0xb7bd384, size 0x8, virtual false, abstract: false, final false
inline int32_t get_contentContainerId() ;

/// @brief Method get_contentHash, addr 0xb7bef60, size 0x8, virtual false, abstract: false, final false
inline int32_t get_contentHash() ;

/// @brief Method get_importedWithErrors, addr 0xb7bb3b0, size 0x8, virtual false, abstract: false, final false
inline bool get_importedWithErrors() ;

/// @brief Method get_importedWithWarnings, addr 0xb7bb3d0, size 0x8, virtual false, abstract: false, final false
inline bool get_importedWithWarnings() ;

/// @brief Method get_importerWithUpdatedUrls, addr 0xb7bb3c0, size 0x8, virtual false, abstract: false, final false
inline bool get_importerWithUpdatedUrls() ;

/// @brief Method get_slots, addr 0xb7bd37c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_SlotDefinition>* get_slots() ;

/// [IteratorStateMachine(typeof(UnityEngine.UIElements.VisualTreeAsset::<get_stylesheets>d__31))]
/// @brief Method get_stylesheets, addr 0xb7bb5dc, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* get_stylesheets() ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method get_templateAssets, addr 0xb7bb658, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>* get_templateAssets() ;

/// [IteratorStateMachine(typeof(UnityEngine.UIElements.VisualTreeAsset::<get_templateDependencies>d__27))]
/// @brief Method get_templateDependencies, addr 0xb7bb568, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* get_templateDependencies() ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method get_usings, addr 0xb7bb560, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_UsingEntry>* get_usings() ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method get_uxmlObjectEntries, addr 0xb7bb660, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry>* get_uxmlObjectEntries() ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method get_uxmlObjectIds, addr 0xb7bb668, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<int32_t>* get_uxmlObjectIds() ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method get_visualElementAssets, addr 0xb7bb650, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>* get_visualElementAssets() ;

static inline void setStaticF_LinkedVEAInTemplatePropertyName(::StringW  value) ;

static inline void setStaticF_NoRegisteredFactoryErrorMessage(::StringW  value) ;

static inline void setStaticF_s_TemporarySlotInsertionPoints(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::VisualElement*>*  value) ;

static inline void setStaticF_s_VeaIdsPath(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// @brief Method set_contentContainerId, addr 0xb7bd38c, size 0x8, virtual false, abstract: false, final false
inline void set_contentContainerId(int32_t  value) ;

/// @brief Method set_contentHash, addr 0xb7bef68, size 0x8, virtual false, abstract: false, final false
inline void set_contentHash(int32_t  value) ;

/// @brief Method set_importedWithErrors, addr 0xb7bb3b8, size 0x8, virtual false, abstract: false, final false
inline void set_importedWithErrors(bool  value) ;

/// @brief Method set_importedWithWarnings, addr 0xb7bb3d8, size 0x8, virtual false, abstract: false, final false
inline void set_importedWithWarnings(bool  value) ;

/// @brief Method set_importerWithUpdatedUrls, addr 0xb7bb3c8, size 0x8, virtual false, abstract: false, final false
inline void set_importerWithUpdatedUrls(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VisualTreeAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualTreeAsset(VisualTreeAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualTreeAsset(VisualTreeAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8434};

/// [SerializeField]
/// @brief Field m_ImportedWithErrors, offset: 0x18, size: 0x1, def value: None
 bool  ___m_ImportedWithErrors;

/// [SerializeField]
/// @brief Field m_HasUpdatedUrls, offset: 0x19, size: 0x1, def value: None
 bool  ___m_HasUpdatedUrls;

/// [SerializeField]
/// @brief Field m_ImportedWithWarnings, offset: 0x1a, size: 0x1, def value: None
 bool  ___m_ImportedWithWarnings;

/// [SerializeField]
/// @brief Field m_Usings, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_UsingEntry>*  ___m_Usings;

/// [SerializeField]
/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Field inlineSheet, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::StyleSheet>  ___inlineSheet;

/// [SerializeField]
/// @brief Field m_VisualElementAssets, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementAsset*>*  ___m_VisualElementAssets;

/// [SerializeField]
/// @brief Field m_TemplateAssets, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset*>*  ___m_TemplateAssets;

/// [SerializeField]
/// @brief Field m_UxmlObjectEntries, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_UxmlObjectEntry>*  ___m_UxmlObjectEntries;

/// [SerializeField]
/// @brief Field m_UxmlObjectIds, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___m_UxmlObjectIds;

/// [SerializeField]
/// @brief Field m_AssetEntries, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_AssetEntry>*  ___m_AssetEntries;

/// [SerializeField]
/// @brief Field m_Slots, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::VisualTreeAsset_SlotDefinition>*  ___m_Slots;

/// [SerializeField]
/// @brief Field m_ContentContainerId, offset: 0x60, size: 0x4, def value: None
 int32_t  ___m_ContentContainerId;

/// [SerializeField]
/// @brief Field m_ContentHash, offset: 0x64, size: 0x4, def value: None
 int32_t  ___m_ContentHash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_ImportedWithErrors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_HasUpdatedUrls) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_ImportedWithWarnings) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_Usings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___inlineSheet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_VisualElementAssets) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_TemplateAssets) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_UxmlObjectEntries) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_UxmlObjectIds) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_AssetEntries) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_Slots) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_ContentContainerId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset, ___m_ContentHash) == 0x64, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::VisualTreeAsset) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// [CompilerGenerated]
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, System.Object, UnityEngine.UIElements.VisualTreeAsset::UsingEntry
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeAsset/<get_templateDependencies>d__27
class CORDL_TYPE VisualTreeAsset__get_templateDependencies_d__27 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__get_Current)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <>s__2, offset 0x38, size 0x18 
 __declspec(property(get=__cordl_internal_get___s__2, put=__cordl_internal_set___s__2)) ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::VisualTreeAsset_UsingEntry>  __s__2;

/// @brief Field <entry>5__3, offset 0x50, size 0x18 
 __declspec(property(get=__cordl_internal_get__entry_5__3, put=__cordl_internal_set__entry_5__3)) ::GlobalNamespace::VisualTreeAsset_UsingEntry  _entry_5__3;

/// @brief Field <sent>5__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__sent_5__1, put=__cordl_internal_set__sent_5__1)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*  _sent_5__1;

/// @brief Field <vta>5__4, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__vta_5__4, put=__cordl_internal_set__vta_5__4)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  _vta_5__4;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb7c02b8, size 0x55c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.VisualTreeAsset>.GetEnumerator, addr 0xb7c08ac, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* System_Collections_Generic_IEnumerable_UnityEngine_UIElements_VisualTreeAsset__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.VisualTreeAsset>.get_Current, addr 0xb7c0864, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> System_Collections_Generic_IEnumerator_UnityEngine_UIElements_VisualTreeAsset__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb7c0950, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb7c086c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb7c08a4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb7c028c, size 0x2c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get___2__current() const;

constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::VisualTreeAsset_UsingEntry> const& __cordl_internal_get___s__2() const;

constexpr ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::VisualTreeAsset_UsingEntry>& __cordl_internal_get___s__2() ;

constexpr ::GlobalNamespace::VisualTreeAsset_UsingEntry const& __cordl_internal_get__entry_5__3() const;

constexpr ::GlobalNamespace::VisualTreeAsset_UsingEntry& __cordl_internal_get__entry_5__3() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* const& __cordl_internal_get__sent_5__1() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*& __cordl_internal_get__sent_5__1() ;

constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get__vta_5__4() const;

constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get__vta_5__4() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set___s__2(::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::VisualTreeAsset_UsingEntry>  value) ;

constexpr void __cordl_internal_set__entry_5__3(::GlobalNamespace::VisualTreeAsset_UsingEntry  value) ;

constexpr void __cordl_internal_set__sent_5__1(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*  value) ;

constexpr void __cordl_internal_set__vta_5__4(::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  value) ;

/// @brief Method <>m__Finally1, addr 0xb7c0814, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb7c0258, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* i___System__Collections__Generic__IEnumerable_1___UnityW___UnityEngine__UIElements__VisualTreeAsset__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>* i___System__Collections__Generic__IEnumerator_1___UnityW___UnityEngine__UIElements__VisualTreeAsset__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VisualTreeAsset__get_templateDependencies_d__27() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset__get_templateDependencies_d__27", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualTreeAsset__get_templateDependencies_d__27(VisualTreeAsset__get_templateDependencies_d__27 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset__get_templateDependencies_d__27", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualTreeAsset__get_templateDependencies_d__27(VisualTreeAsset__get_templateDependencies_d__27 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8433};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  _____4__this;

/// @brief Field <sent>5__1, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>*  ____sent_5__1;

/// @brief Field <>s__2, offset: 0x38, size: 0x18, def value: None
 ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::VisualTreeAsset_UsingEntry>  _____s__2;

/// @brief Field <entry>5__3, offset: 0x50, size: 0x18, def value: None
 ::GlobalNamespace::VisualTreeAsset_UsingEntry  ____entry_5__3;

/// @brief Field <vta>5__4, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  ____vta_5__4;

/// @brief Size padding 0x80 - 0x70 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27, ____sent_5__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27, _____s__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27, ____entry_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27, ____vta_5__4) == 0x68, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::VisualTreeAsset__get_templateDependencies_d__27) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// [CompilerGenerated]
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeAsset/<get_stylesheets>d__31
class CORDL_TYPE VisualTreeAsset__get_stylesheets_d__31 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__get_Current)) ::UnityW<::UnityEngine::UIElements::StyleSheet>  System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::UnityW<::UnityEngine::UIElements::StyleSheet>  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <>s__2, offset 0x38, size 0x18 
 __declspec(property(get=__cordl_internal_get___s__2, put=__cordl_internal_set___s__2)) ::GlobalNamespace::List_1_Enumerator<::UnityEngine::UIElements::VisualElementAsset*>  __s__2;

/// @brief Field <>s__4, offset 0x58, size 0x18 
 __declspec(property(get=__cordl_internal_get___s__4, put=__cordl_internal_set___s__4)) ::GlobalNamespace::List_1_Enumerator<::UnityW<::UnityEngine::UIElements::StyleSheet>>  __s__4;

/// @brief Field <>s__6, offset 0x78, size 0x18 
 __declspec(property(get=__cordl_internal_get___s__6, put=__cordl_internal_set___s__6)) ::GlobalNamespace::List_1_Enumerator<::StringW>  __s__6;

/// @brief Field <sent>5__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__sent_5__1, put=__cordl_internal_set__sent_5__1)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*  _sent_5__1;

/// @brief Field <stylesheetPath>5__7, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__stylesheetPath_5__7, put=__cordl_internal_set__stylesheetPath_5__7)) ::StringW  _stylesheetPath_5__7;

/// @brief Field <stylesheet>5__5, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__stylesheet_5__5, put=__cordl_internal_set__stylesheet_5__5)) ::UnityW<::UnityEngine::UIElements::StyleSheet>  _stylesheet_5__5;

/// @brief Field <stylesheet>5__8, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__stylesheet_5__8, put=__cordl_internal_set__stylesheet_5__8)) ::UnityW<::UnityEngine::UIElements::StyleSheet>  _stylesheet_5__8;

/// @brief Field <vea>5__3, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__vea_5__3, put=__cordl_internal_set__vea_5__3)) ::UnityEngine::UIElements::VisualElementAsset*  _vea_5__3;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb7bf97c, size 0x6fc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.StyleSheet>.GetEnumerator, addr 0xb7c01b0, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* System_Collections_Generic_IEnumerable_UnityEngine_UIElements_StyleSheet__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.StyleSheet>.get_Current, addr 0xb7c0168, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::UIElements::StyleSheet> System_Collections_Generic_IEnumerator_UnityEngine_UIElements_StyleSheet__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb7c0254, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb7c0170, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb7c01a8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb7bf8a4, size 0xd8, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& __cordl_internal_get___2__current() const;

constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::GlobalNamespace::List_1_Enumerator<::UnityEngine::UIElements::VisualElementAsset*> const& __cordl_internal_get___s__2() const;

constexpr ::GlobalNamespace::List_1_Enumerator<::UnityEngine::UIElements::VisualElementAsset*>& __cordl_internal_get___s__2() ;

constexpr ::GlobalNamespace::List_1_Enumerator<::UnityW<::UnityEngine::UIElements::StyleSheet>> const& __cordl_internal_get___s__4() const;

constexpr ::GlobalNamespace::List_1_Enumerator<::UnityW<::UnityEngine::UIElements::StyleSheet>>& __cordl_internal_get___s__4() ;

constexpr ::GlobalNamespace::List_1_Enumerator<::StringW> const& __cordl_internal_get___s__6() const;

constexpr ::GlobalNamespace::List_1_Enumerator<::StringW>& __cordl_internal_get___s__6() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* const& __cordl_internal_get__sent_5__1() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*& __cordl_internal_get__sent_5__1() ;

constexpr ::StringW const& __cordl_internal_get__stylesheetPath_5__7() const;

constexpr ::StringW& __cordl_internal_get__stylesheetPath_5__7() ;

constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& __cordl_internal_get__stylesheet_5__5() const;

constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& __cordl_internal_get__stylesheet_5__5() ;

constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& __cordl_internal_get__stylesheet_5__8() const;

constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& __cordl_internal_get__stylesheet_5__8() ;

constexpr ::UnityEngine::UIElements::VisualElementAsset* const& __cordl_internal_get__vea_5__3() const;

constexpr ::UnityEngine::UIElements::VisualElementAsset*& __cordl_internal_get__vea_5__3() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::UnityW<::UnityEngine::UIElements::StyleSheet>  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set___s__2(::GlobalNamespace::List_1_Enumerator<::UnityEngine::UIElements::VisualElementAsset*>  value) ;

constexpr void __cordl_internal_set___s__4(::GlobalNamespace::List_1_Enumerator<::UnityW<::UnityEngine::UIElements::StyleSheet>>  value) ;

constexpr void __cordl_internal_set___s__6(::GlobalNamespace::List_1_Enumerator<::StringW>  value) ;

constexpr void __cordl_internal_set__sent_5__1(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*  value) ;

constexpr void __cordl_internal_set__stylesheetPath_5__7(::StringW  value) ;

constexpr void __cordl_internal_set__stylesheet_5__5(::UnityW<::UnityEngine::UIElements::StyleSheet>  value) ;

constexpr void __cordl_internal_set__stylesheet_5__8(::UnityW<::UnityEngine::UIElements::StyleSheet>  value) ;

constexpr void __cordl_internal_set__vea_5__3(::UnityEngine::UIElements::VisualElementAsset*  value) ;

/// @brief Method <>m__Finally1, addr 0xb7c0118, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// @brief Method <>m__Finally2, addr 0xb7c0078, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally2() ;

/// @brief Method <>m__Finally3, addr 0xb7c00c8, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally3() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb7bf870, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* i___System__Collections__Generic__IEnumerable_1___UnityW___UnityEngine__UIElements__StyleSheet__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* i___System__Collections__Generic__IEnumerator_1___UnityW___UnityEngine__UIElements__StyleSheet__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VisualTreeAsset__get_stylesheets_d__31() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset__get_stylesheets_d__31", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualTreeAsset__get_stylesheets_d__31(VisualTreeAsset__get_stylesheets_d__31 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset__get_stylesheets_d__31", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualTreeAsset__get_stylesheets_d__31(VisualTreeAsset__get_stylesheets_d__31 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8432};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::StyleSheet>  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>  _____4__this;

/// @brief Field <sent>5__1, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*  ____sent_5__1;

/// @brief Field <>s__2, offset: 0x38, size: 0x18, def value: None
 ::GlobalNamespace::List_1_Enumerator<::UnityEngine::UIElements::VisualElementAsset*>  _____s__2;

/// @brief Field <vea>5__3, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElementAsset*  ____vea_5__3;

/// @brief Field <>s__4, offset: 0x58, size: 0x18, def value: None
 ::GlobalNamespace::List_1_Enumerator<::UnityW<::UnityEngine::UIElements::StyleSheet>>  _____s__4;

/// @brief Field <stylesheet>5__5, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::StyleSheet>  ____stylesheet_5__5;

/// @brief Field <>s__6, offset: 0x78, size: 0x18, def value: None
 ::GlobalNamespace::List_1_Enumerator<::StringW>  _____s__6;

/// @brief Field <stylesheetPath>5__7, offset: 0x90, size: 0x8, def value: None
 ::StringW  ____stylesheetPath_5__7;

/// @brief Field <stylesheet>5__8, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::StyleSheet>  ____stylesheet_5__8;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, ____sent_5__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, _____s__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, ____vea_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, _____s__4) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, ____stylesheet_5__5) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, _____s__6) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, ____stylesheetPath_5__7) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31, ____stylesheet_5__8) == 0x98, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::VisualTreeAsset__get_stylesheets_d__31) == 0xa0, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeAsset/<>c__DisplayClass76_0
class CORDL_TYPE VisualTreeAsset___c__DisplayClass76_0 : public ::System::Object {
public:
// Declarations
/// @brief Field childVea, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_childVea, put=__cordl_internal_set_childVea)) ::UnityEngine::UIElements::VisualElementAsset*  childVea;

static inline ::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass76_0* New_ctor() ;

/// @brief Method <CloneSetupRecursively>b__0, addr 0xb7bf850, size 0x20, virtual false, abstract: false, final false
inline bool _CloneSetupRecursively_b__0(::GlobalNamespace::VisualTreeAsset_SlotUsageEntry  u) ;

constexpr ::UnityEngine::UIElements::VisualElementAsset* const& __cordl_internal_get_childVea() const;

constexpr ::UnityEngine::UIElements::VisualElementAsset*& __cordl_internal_get_childVea() ;

constexpr void __cordl_internal_set_childVea(::UnityEngine::UIElements::VisualElementAsset*  value) ;

/// @brief Method .ctor, addr 0xb7bf848, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VisualTreeAsset___c__DisplayClass76_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset___c__DisplayClass76_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualTreeAsset___c__DisplayClass76_0(VisualTreeAsset___c__DisplayClass76_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset___c__DisplayClass76_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualTreeAsset___c__DisplayClass76_0(VisualTreeAsset___c__DisplayClass76_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8430};

/// @brief Field childVea, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElementAsset*  ___childVea;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass76_0, ___childVea) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::VisualTreeAsset___c__DisplayClass76_0) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualTreeAsset/UsingEntryComparer
class CORDL_TYPE VisualTreeAsset_UsingEntryComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::VisualTreeAsset_UsingEntry>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::GlobalNamespace::VisualTreeAsset_UsingEntry>*() noexcept;

/// @brief Method Compare, addr 0xb7bf3e4, size 0x10, virtual true, abstract: false, final true
inline int32_t Compare(::GlobalNamespace::VisualTreeAsset_UsingEntry  x, ::GlobalNamespace::VisualTreeAsset_UsingEntry  y) ;

static inline ::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer* New_ctor() ;

/// @brief Method .ctor, addr 0xb7bf3dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::VisualTreeAsset_UsingEntry>"
constexpr ::System::Collections::Generic::IComparer_1<::GlobalNamespace::VisualTreeAsset_UsingEntry>* i___System__Collections__Generic__IComparer_1___GlobalNamespace__VisualTreeAsset_UsingEntry_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VisualTreeAsset_UsingEntryComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset_UsingEntryComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualTreeAsset_UsingEntryComparer(VisualTreeAsset_UsingEntryComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeAsset_UsingEntryComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualTreeAsset_UsingEntryComparer(VisualTreeAsset_UsingEntryComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8425};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::VisualTreeAsset_UsingEntryComparer) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
