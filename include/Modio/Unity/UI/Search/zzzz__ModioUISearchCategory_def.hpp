#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Search/ModioUISearchCategory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioUISearchCategory)
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
// Forward declare root types
namespace Modio::Unity::UI::Search {
class ModioUISearchCategory;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Search::ModioUISearchCategory*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Search::ModioUISearchCategory*, "Modio.Unity.UI.Search", "ModioUISearchCategory");
// Dependencies UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Search {
// Is value type: false
// CS Name: Modio.Unity.UI.Search.ModioUISearchCategory
class CORDL_TYPE ModioUISearchCategory : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CategoryLabel)) ::StringW  CategoryLabel;

 __declspec(property(get=get_CategoryLabelLocalized)) ::StringW  CategoryLabelLocalized;

 __declspec(property(get=get_CustomSearchBase)) ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  CustomSearchBase;

 __declspec(property(get=get_Tabs)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>>*  Tabs;

/// @brief Field _categoryLabel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__categoryLabel, put=__cordl_internal_set__categoryLabel)) ::StringW  _categoryLabel;

/// @brief Field _categoryLabelLocalized, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__categoryLabelLocalized, put=__cordl_internal_set__categoryLabelLocalized)) ::StringW  _categoryLabelLocalized;

/// @brief Field _customSearchBase, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__customSearchBase, put=__cordl_internal_set__customSearchBase)) ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  _customSearchBase;

/// @brief Field _tabs, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__tabs, put=__cordl_internal_set__tabs)) ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>>*  _tabs;

static inline ::Modio::Unity::UI::Search::ModioUISearchCategory* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__categoryLabel() const;

constexpr ::StringW& __cordl_internal_get__categoryLabel() ;

constexpr ::StringW const& __cordl_internal_get__categoryLabelLocalized() const;

constexpr ::StringW& __cordl_internal_get__categoryLabelLocalized() ;

constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings> const& __cordl_internal_get__customSearchBase() const;

constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>& __cordl_internal_get__customSearchBase() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>>* const& __cordl_internal_get__tabs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>>*& __cordl_internal_get__tabs() ;

constexpr void __cordl_internal_set__categoryLabel(::StringW  value) ;

constexpr void __cordl_internal_set__categoryLabelLocalized(::StringW  value) ;

constexpr void __cordl_internal_set__customSearchBase(::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  value) ;

constexpr void __cordl_internal_set__tabs(::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>>*  value) ;

/// @brief Method .ctor, addr 0x9fa2e84, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CategoryLabel, addr 0x9fa2e64, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_CategoryLabel() ;

/// @brief Method get_CategoryLabelLocalized, addr 0x9fa2e6c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_CategoryLabelLocalized() ;

/// @brief Method get_CustomSearchBase, addr 0x9fa2e7c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings> get_CustomSearchBase() ;

/// @brief Method get_Tabs, addr 0x9fa2e74, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>>* get_Tabs() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUISearchCategory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUISearchCategory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUISearchCategory(ModioUISearchCategory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUISearchCategory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUISearchCategory(ModioUISearchCategory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27043};

/// [SerializeField]
/// @brief Field _categoryLabel, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____categoryLabel;

/// [SerializeField]
/// @brief Field _categoryLabelLocalized, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____categoryLabelLocalized;

/// [SerializeField]
/// @brief Field _tabs, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>>*  ____tabs;

/// [SerializeField]
/// @brief Field _customSearchBase, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  ____customSearchBase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearchCategory, ____categoryLabel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearchCategory, ____categoryLabelLocalized) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearchCategory, ____tabs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearchCategory, ____customSearchBase) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Search::ModioUISearchCategory) == 0x40, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Search
