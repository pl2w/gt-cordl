#pragma once
// IWYU pragma private; include "GlobalNamespace/BasePageHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BasePageHandler)
// Forward declare root types
namespace GlobalNamespace {
class BasePageHandler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BasePageHandler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BasePageHandler*, "", "BasePageHandler");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BasePageHandler
class CORDL_TYPE BasePageHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field <currentPage>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentPage_k__BackingField, put=__cordl_internal_set__currentPage_k__BackingField)) int32_t  _currentPage_k__BackingField;

/// @brief Field <maxEntires>k__BackingField, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxEntires_k__BackingField, put=__cordl_internal_set__maxEntires_k__BackingField)) int32_t  _maxEntires_k__BackingField;

/// @brief Field <pages>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__pages_k__BackingField, put=__cordl_internal_set__pages_k__BackingField)) int32_t  _pages_k__BackingField;

/// @brief Field <selectedIndex>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__selectedIndex_k__BackingField, put=__cordl_internal_set__selectedIndex_k__BackingField)) int32_t  _selectedIndex_k__BackingField;

 __declspec(property(get=get_currentPage, put=set_currentPage)) int32_t  currentPage;

 __declspec(property(get=get_entriesCount)) int32_t  entriesCount;

 __declspec(property(get=get_maxEntires, put=set_maxEntires)) int32_t  maxEntires;

 __declspec(property(get=get_pageSize)) int32_t  pageSize;

 __declspec(property(get=get_pages, put=set_pages)) int32_t  pages;

 __declspec(property(get=get_selectedIndex, put=set_selectedIndex)) int32_t  selectedIndex;

/// @brief Method ChangePage, addr 0x5ae1d00, size 0x80, virtual false, abstract: false, final false
inline void ChangePage(bool  left) ;

static inline ::GlobalNamespace::BasePageHandler* New_ctor() ;

/// @brief Method PageEntrySelected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void PageEntrySelected(int32_t  pageEntry, int32_t  selectionIndex) ;

/// @brief Method SelectEntryFromIndex, addr 0x5ae1c08, size 0x68, virtual false, abstract: false, final false
inline void SelectEntryFromIndex(int32_t  index) ;

/// @brief Method SelectEntryOnPage, addr 0x5ae1b98, size 0x70, virtual false, abstract: false, final false
inline void SelectEntryOnPage(int32_t  entryIndex) ;

/// @brief Method SetPage, addr 0x5ae1c70, size 0x90, virtual false, abstract: false, final false
inline void SetPage(int32_t  page) ;

/// @brief Method ShowPage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ShowPage(int32_t  selectedPage, int32_t  startIndex, int32_t  endIndex) ;

/// @brief Method Start, addr 0x5ae1a50, size 0x148, virtual true, abstract: false, final false
inline void Start() ;

constexpr int32_t const& __cordl_internal_get__currentPage_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__currentPage_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__maxEntires_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__maxEntires_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__pages_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__pages_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__selectedIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__selectedIndex_k__BackingField() ;

constexpr void __cordl_internal_set__currentPage_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__maxEntires_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__pages_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__selectedIndex_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x5ae1d80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_currentPage, addr 0x5ae1a20, size 0x8, virtual false, abstract: false, final false
inline int32_t get_currentPage() ;

/// @brief Method get_entriesCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_entriesCount() ;

/// [CompilerGenerated]
/// @brief Method get_maxEntires, addr 0x5ae1a40, size 0x8, virtual false, abstract: false, final false
inline int32_t get_maxEntires() ;

/// @brief Method get_pageSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_pageSize() ;

/// [CompilerGenerated]
/// @brief Method get_pages, addr 0x5ae1a30, size 0x8, virtual false, abstract: false, final false
inline int32_t get_pages() ;

/// [CompilerGenerated]
/// @brief Method get_selectedIndex, addr 0x5ae1a10, size 0x8, virtual false, abstract: false, final false
inline int32_t get_selectedIndex() ;

/// [CompilerGenerated]
/// @brief Method set_currentPage, addr 0x5ae1a28, size 0x8, virtual false, abstract: false, final false
inline void set_currentPage(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_maxEntires, addr 0x5ae1a48, size 0x8, virtual false, abstract: false, final false
inline void set_maxEntires(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_pages, addr 0x5ae1a38, size 0x8, virtual false, abstract: false, final false
inline void set_pages(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_selectedIndex, addr 0x5ae1a18, size 0x8, virtual false, abstract: false, final false
inline void set_selectedIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BasePageHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasePageHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BasePageHandler(BasePageHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasePageHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasePageHandler(BasePageHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3463};

/// [CompilerGenerated]
/// @brief Field <selectedIndex>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____selectedIndex_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <currentPage>k__BackingField, offset: 0x24, size: 0x4, def value: None
 int32_t  ____currentPage_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <pages>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____pages_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <maxEntires>k__BackingField, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____maxEntires_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BasePageHandler, ____selectedIndex_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasePageHandler, ____currentPage_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasePageHandler, ____pages_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasePageHandler, ____maxEntires_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BasePageHandler) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
