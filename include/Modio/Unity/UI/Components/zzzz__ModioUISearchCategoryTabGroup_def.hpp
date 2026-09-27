#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUISearchCategoryTabGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModioUISearchCategoryTabGroup)
namespace Modio::Unity::UI::Components::Localization {
class ModioUILocalizedText;
}
namespace Modio::Unity::UI::Components {
class ModioUISearchCategoryTab;
}
namespace Modio::Unity::UI::Search {
class ModioUISearchCategory;
}
namespace Modio::Unity::UI::Search {
class ModioUISearchSettings;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Modio::Unity::UI::Components {
class ModioUISearchCategoryTabGroup;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup*, "Modio.Unity.UI.Components", "ModioUISearchCategoryTabGroup");
// Dependencies UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUISearchCategoryTabGroup
class CORDL_TYPE ModioUISearchCategoryTabGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _activeTabCount, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__activeTabCount, put=__cordl_internal_set__activeTabCount)) int32_t  _activeTabCount;

/// @brief Field _categoryName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__categoryName, put=__cordl_internal_set__categoryName)) ::UnityW<::TMPro::TMP_Text>  _categoryName;

/// @brief Field _categoryNameLocalized, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__categoryNameLocalized, put=__cordl_internal_set__categoryNameLocalized)) ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  _categoryNameLocalized;

/// @brief Field _disableIfNoCategory, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__disableIfNoCategory, put=__cordl_internal_set__disableIfNoCategory)) ::UnityW<::UnityEngine::GameObject>  _disableIfNoCategory;

/// @brief Field _firstTab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstTab, put=__cordl_internal_set__firstTab)) ::UnityW<::Modio::Unity::UI::Components::ModioUISearchCategoryTab>  _firstTab;

/// @brief Field _hasRunStart, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasRunStart, put=__cordl_internal_set__hasRunStart)) bool  _hasRunStart;

/// @brief Field _setCategoryOnFrame, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__setCategoryOnFrame, put=__cordl_internal_set__setCategoryOnFrame)) int32_t  _setCategoryOnFrame;

/// @brief Field _tabs, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__tabs, put=__cordl_internal_set__tabs)) ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUISearchCategoryTab>>*  _tabs;

/// @brief Method ClearCategory, addr 0x9fbb124, size 0x40, virtual false, abstract: false, final false
inline void ClearCategory() ;

static inline ::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup* New_ctor() ;

/// @brief Method SetCategory, addr 0x9fbb164, size 0x280, virtual false, abstract: false, final false
inline void SetCategory(::Modio::Unity::UI::Search::ModioUISearchCategory*  category) ;

/// @brief Method SetTabs, addr 0x9fbb3e4, size 0x6c8, virtual false, abstract: false, final false
inline void SetTabs(::System::Collections::Generic::IEnumerable_1<::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>>*  tabSearches) ;

/// @brief Method Start, addr 0x9fbbaac, size 0x114, virtual false, abstract: false, final false
inline void Start() ;

constexpr int32_t const& __cordl_internal_get__activeTabCount() const;

constexpr int32_t& __cordl_internal_get__activeTabCount() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__categoryName() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__categoryName() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText> const& __cordl_internal_get__categoryNameLocalized() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>& __cordl_internal_get__categoryNameLocalized() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__disableIfNoCategory() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__disableIfNoCategory() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUISearchCategoryTab> const& __cordl_internal_get__firstTab() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUISearchCategoryTab>& __cordl_internal_get__firstTab() ;

constexpr bool const& __cordl_internal_get__hasRunStart() const;

constexpr bool& __cordl_internal_get__hasRunStart() ;

constexpr int32_t const& __cordl_internal_get__setCategoryOnFrame() const;

constexpr int32_t& __cordl_internal_get__setCategoryOnFrame() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUISearchCategoryTab>>* const& __cordl_internal_get__tabs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUISearchCategoryTab>>*& __cordl_internal_get__tabs() ;

constexpr void __cordl_internal_set__activeTabCount(int32_t  value) ;

constexpr void __cordl_internal_set__categoryName(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__categoryNameLocalized(::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  value) ;

constexpr void __cordl_internal_set__disableIfNoCategory(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__firstTab(::UnityW<::Modio::Unity::UI::Components::ModioUISearchCategoryTab>  value) ;

constexpr void __cordl_internal_set__hasRunStart(bool  value) ;

constexpr void __cordl_internal_set__setCategoryOnFrame(int32_t  value) ;

constexpr void __cordl_internal_set__tabs(::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUISearchCategoryTab>>*  value) ;

/// @brief Method .ctor, addr 0x9fbbbc0, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUISearchCategoryTabGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUISearchCategoryTabGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUISearchCategoryTabGroup(ModioUISearchCategoryTabGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUISearchCategoryTabGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUISearchCategoryTabGroup(ModioUISearchCategoryTabGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27152};

/// [SerializeField]
/// @brief Field _firstTab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::ModioUISearchCategoryTab>  ____firstTab;

/// [SerializeField]
/// @brief Field _disableIfNoCategory, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____disableIfNoCategory;

/// [SerializeField]
/// @brief Field _categoryName, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____categoryName;

/// [SerializeField]
/// @brief Field _categoryNameLocalized, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  ____categoryNameLocalized;

/// @brief Field _tabs, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUISearchCategoryTab>>*  ____tabs;

/// @brief Field _hasRunStart, offset: 0x48, size: 0x1, def value: None
 bool  ____hasRunStart;

/// @brief Field _activeTabCount, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____activeTabCount;

/// @brief Field _setCategoryOnFrame, offset: 0x50, size: 0x4, def value: None
 int32_t  ____setCategoryOnFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup, ____firstTab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup, ____disableIfNoCategory) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup, ____categoryName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup, ____categoryNameLocalized) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup, ____tabs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup, ____hasRunStart) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup, ____activeTabCount) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup, ____setCategoryOnFrame) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModioUISearchCategoryTabGroup) == 0x58, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components
