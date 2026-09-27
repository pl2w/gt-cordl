#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderSetSelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderSetSelector)
namespace GlobalNamespace {
class BuilderPieceSet_BuilderDisplayGroup;
}
namespace GlobalNamespace {
struct BuilderPieceSet_BuilderPieceCategory;
}
namespace GlobalNamespace {
class BuilderSetSelector___c__DisplayClass24_0;
}
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderSetSelector;
}
namespace GlobalNamespace {
class BuilderSetSelector___c__DisplayClass24_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderSetSelector*);
MARK_REF_T(::GlobalNamespace::BuilderSetSelector___c__DisplayClass24_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderSetSelector*, "", "BuilderSetSelector");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderSetSelector___c__DisplayClass24_0*, "", "BuilderSetSelector/<>c__DisplayClass24_0");
// Dependencies GorillaPressableButton, UnityEngine.MonoBehaviour, UnityEngine.UI.Text
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderSetSelector
class CORDL_TYPE BuilderSetSelector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass24_0 = ::GlobalNamespace::BuilderSetSelector___c__DisplayClass24_0;

/// @brief Field OnSelectedGroup, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSelectedGroup, put=__cordl_internal_set_OnSelectedGroup)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  OnSelectedGroup;

/// @brief Field _includedCategories, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__includedCategories, put=__cordl_internal_set__includedCategories)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>*  _includedCategories;

/// @brief Field currentGroup, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentGroup, put=__cordl_internal_set_currentGroup)) ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*  currentGroup;

/// @brief Field disabledMaterial, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_disabledMaterial, put=__cordl_internal_set_disabledMaterial)) ::UnityW<::UnityEngine::Material>  disabledMaterial;

/// @brief Field groupButtons, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_groupButtons, put=__cordl_internal_set_groupButtons)) ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>  groupButtons;

/// @brief Field groupLabels, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_groupLabels, put=__cordl_internal_set_groupLabels)) ::ArrayW<::UnityW<::UnityEngine::UI::Text>>  groupLabels;

/// @brief Field groupsPerPage, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_groupsPerPage, put=__cordl_internal_set_groupsPerPage)) int32_t  groupsPerPage;

/// @brief Field inBuilderZone, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_inBuilderZone, put=__cordl_internal_set_inBuilderZone)) bool  inBuilderZone;

/// @brief Field includedGroupIndex, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_includedGroupIndex, put=__cordl_internal_set_includedGroupIndex)) int32_t  includedGroupIndex;

/// @brief Field includedGroups, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_includedGroups, put=__cordl_internal_set_includedGroups)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>*  includedGroups;

/// @brief Field nextPageButton, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextPageButton, put=__cordl_internal_set_nextPageButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  nextPageButton;

/// @brief Field numLiveDisplayGroups, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_numLiveDisplayGroups, put=__cordl_internal_set_numLiveDisplayGroups)) int32_t  numLiveDisplayGroups;

/// @brief Field pageIndex, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_pageIndex, put=__cordl_internal_set_pageIndex)) int32_t  pageIndex;

/// @brief Field previousPageButton, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_previousPageButton, put=__cordl_internal_set_previousPageButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  previousPageButton;

/// @brief Field totalPages, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalPages, put=__cordl_internal_set_totalPages)) int32_t  totalPages;

/// @brief Field zoneRenderers, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneRenderers, put=__cordl_internal_set_zoneRenderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  zoneRenderers;

/// @brief Method DoesDisplayGroupHaveIncludedCategories, addr 0x57e0560, size 0x178, virtual false, abstract: false, final false
inline bool DoesDisplayGroupHaveIncludedCategories(::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*  set) ;

/// @brief Method GetDefaultGroupID, addr 0x57e18ac, size 0x2b0, virtual false, abstract: false, final false
inline int32_t GetDefaultGroupID() ;

/// @brief Method GetSelectedGroup, addr 0x57e18a4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup* GetSelectedGroup() ;

static inline ::GlobalNamespace::BuilderSetSelector* New_ctor() ;

/// @brief Method OnDestroy, addr 0x57e0cb0, size 0x438, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnNextPageClicked, addr 0x57e1688, size 0x4c, virtual false, abstract: false, final false
inline void OnNextPageClicked() ;

/// @brief Method OnPreviousPageClicked, addr 0x57e163c, size 0x4c, virtual false, abstract: false, final false
inline void OnPreviousPageClicked() ;

/// @brief Method OnSetButtonPressed, addr 0x57e10e8, size 0x134, virtual false, abstract: false, final false
inline void OnSetButtonPressed(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeft) ;

/// @brief Method OnZoneChanged, addr 0x57dfd90, size 0x224, virtual false, abstract: false, final false
inline void OnZoneChanged() ;

/// @brief Method RefreshUnlockedGroups, addr 0x57e121c, size 0x420, virtual false, abstract: false, final false
inline void RefreshUnlockedGroups() ;

/// @brief Method SetSelection, addr 0x57e16d4, size 0x1c8, virtual false, abstract: false, final false
inline void SetSelection(int32_t  groupID) ;

/// @brief Method Setup, addr 0x57dffb4, size 0x5ac, virtual false, abstract: false, final false
inline void Setup(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>*  categories) ;

/// @brief Method Start, addr 0x57df7a4, size 0x5ec, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateLabels, addr 0x57e06d8, size 0x5d8, virtual false, abstract: false, final false
inline void UpdateLabels() ;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& __cordl_internal_get_OnSelectedGroup() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& __cordl_internal_get_OnSelectedGroup() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>* const& __cordl_internal_get__includedCategories() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>*& __cordl_internal_get__includedCategories() ;

constexpr ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup* const& __cordl_internal_get_currentGroup() const;

constexpr ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*& __cordl_internal_get_currentGroup() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_disabledMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_disabledMaterial() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>> const& __cordl_internal_get_groupButtons() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>& __cordl_internal_get_groupButtons() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Text>> const& __cordl_internal_get_groupLabels() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Text>>& __cordl_internal_get_groupLabels() ;

constexpr int32_t const& __cordl_internal_get_groupsPerPage() const;

constexpr int32_t& __cordl_internal_get_groupsPerPage() ;

constexpr bool const& __cordl_internal_get_inBuilderZone() const;

constexpr bool& __cordl_internal_get_inBuilderZone() ;

constexpr int32_t const& __cordl_internal_get_includedGroupIndex() const;

constexpr int32_t& __cordl_internal_get_includedGroupIndex() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>* const& __cordl_internal_get_includedGroups() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>*& __cordl_internal_get_includedGroups() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_nextPageButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_nextPageButton() ;

constexpr int32_t const& __cordl_internal_get_numLiveDisplayGroups() const;

constexpr int32_t& __cordl_internal_get_numLiveDisplayGroups() ;

constexpr int32_t const& __cordl_internal_get_pageIndex() const;

constexpr int32_t& __cordl_internal_get_pageIndex() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_previousPageButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_previousPageButton() ;

constexpr int32_t const& __cordl_internal_get_totalPages() const;

constexpr int32_t& __cordl_internal_get_totalPages() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_zoneRenderers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_zoneRenderers() ;

constexpr void __cordl_internal_set_OnSelectedGroup(::UnityEngine::Events::UnityEvent_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__includedCategories(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>*  value) ;

constexpr void __cordl_internal_set_currentGroup(::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*  value) ;

constexpr void __cordl_internal_set_disabledMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_groupButtons(::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>  value) ;

constexpr void __cordl_internal_set_groupLabels(::ArrayW<::UnityW<::UnityEngine::UI::Text>>  value) ;

constexpr void __cordl_internal_set_groupsPerPage(int32_t  value) ;

constexpr void __cordl_internal_set_inBuilderZone(bool  value) ;

constexpr void __cordl_internal_set_includedGroupIndex(int32_t  value) ;

constexpr void __cordl_internal_set_includedGroups(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>*  value) ;

constexpr void __cordl_internal_set_nextPageButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_numLiveDisplayGroups(int32_t  value) ;

constexpr void __cordl_internal_set_pageIndex(int32_t  value) ;

constexpr void __cordl_internal_set_previousPageButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_totalPages(int32_t  value) ;

constexpr void __cordl_internal_set_zoneRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

/// @brief Method .ctor, addr 0x57e1b5c, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderSetSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderSetSelector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderSetSelector(BuilderSetSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderSetSelector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderSetSelector(BuilderSetSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1645};

/// @brief Field includedGroups, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>*  ___includedGroups;

/// @brief Field numLiveDisplayGroups, offset: 0x28, size: 0x4, def value: None
 int32_t  ___numLiveDisplayGroups;

/// [SerializeField]
/// @brief Field disabledMaterial, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___disabledMaterial;

/// [Header("UI")]
/// [FormerlySerializedAs("setLabels")]
/// [SerializeField]
/// @brief Field groupLabels, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::UI::Text>>  ___groupLabels;

/// [Header("Buttons")]
/// [FormerlySerializedAs("setButtons")]
/// [SerializeField]
/// @brief Field groupButtons, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>  ___groupButtons;

/// [SerializeField]
/// @brief Field previousPageButton, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___previousPageButton;

/// [SerializeField]
/// @brief Field nextPageButton, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___nextPageButton;

/// @brief Field _includedCategories, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>*  ____includedCategories;

/// @brief Field includedGroupIndex, offset: 0x60, size: 0x4, def value: None
 int32_t  ___includedGroupIndex;

/// @brief Field currentGroup, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*  ___currentGroup;

/// @brief Field pageIndex, offset: 0x70, size: 0x4, def value: None
 int32_t  ___pageIndex;

/// @brief Field groupsPerPage, offset: 0x74, size: 0x4, def value: None
 int32_t  ___groupsPerPage;

/// @brief Field totalPages, offset: 0x78, size: 0x4, def value: None
 int32_t  ___totalPages;

/// @brief Field zoneRenderers, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___zoneRenderers;

/// @brief Field inBuilderZone, offset: 0x88, size: 0x1, def value: None
 bool  ___inBuilderZone;

/// [HideInInspector]
/// @brief Field OnSelectedGroup, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___OnSelectedGroup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderSetSelector, ___includedGroups) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetSelector, ___numLiveDisplayGroups) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetSelector, ___disabledMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetSelector, ___groupLabels) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetSelector, ___groupButtons) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetSelector, ___previousPageButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetSelector, ___nextPageButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetSelector, ____includedCategories) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetSelector, ___includedGroupIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetSelector, ___currentGroup) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetSelector, ___pageIndex) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetSelector, ___groupsPerPage) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetSelector, ___totalPages) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetSelector, ___zoneRenderers) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetSelector, ___inBuilderZone) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderSetSelector, ___OnSelectedGroup) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderSetSelector) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderSetSelector/<>c__DisplayClass24_0
class CORDL_TYPE BuilderSetSelector___c__DisplayClass24_0 : public ::System::Object {
public:
// Declarations
/// @brief Field newGroup, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_newGroup, put=__cordl_internal_set_newGroup)) ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*  newGroup;

static inline ::GlobalNamespace::BuilderSetSelector___c__DisplayClass24_0* New_ctor() ;

/// @brief Method <SetSelection>b__0, addr 0x57e1bf4, size 0x28, virtual false, abstract: false, final false
inline bool _SetSelection_b__0(::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*  x) ;

constexpr ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup* const& __cordl_internal_get_newGroup() const;

constexpr ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*& __cordl_internal_get_newGroup() ;

constexpr void __cordl_internal_set_newGroup(::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*  value) ;

/// @brief Method .ctor, addr 0x57e189c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderSetSelector___c__DisplayClass24_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderSetSelector___c__DisplayClass24_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderSetSelector___c__DisplayClass24_0(BuilderSetSelector___c__DisplayClass24_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderSetSelector___c__DisplayClass24_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderSetSelector___c__DisplayClass24_0(BuilderSetSelector___c__DisplayClass24_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1644};

/// @brief Field newGroup, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*  ___newGroup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderSetSelector___c__DisplayClass24_0, ___newGroup) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderSetSelector___c__DisplayClass24_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
