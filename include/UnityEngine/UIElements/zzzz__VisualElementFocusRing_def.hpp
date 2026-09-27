#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElementFocusRing.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementFocusRing_DefaultFocusOrder_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualElementFocusRing)
namespace GlobalNamespace {
struct VisualElementFocusRing_DefaultFocusOrder;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine::UIElements {
class Focusable;
}
namespace UnityEngine::UIElements {
class IFocusRing;
}
namespace UnityEngine::UIElements {
class VisualElementFocusRing_FocusRingRecord;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementFocusRing;
}
namespace UnityEngine::UIElements {
class VisualElementFocusRing_FocusRingRecord;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::VisualElementFocusRing*);
MARK_REF_T(::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualElementFocusRing*, "UnityEngine.UIElements", "VisualElementFocusRing");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*, "UnityEngine.UIElements", "VisualElementFocusRing/FocusRingRecord");
// Dependencies System.Object, UnityEngine.UIElements.VisualElementFocusRing::DefaultFocusOrder
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElementFocusRing
class CORDL_TYPE VisualElementFocusRing : public ::System::Object {
public:
// Declarations
using DefaultFocusOrder = ::GlobalNamespace::VisualElementFocusRing_DefaultFocusOrder;

using FocusRingRecord = ::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord;

/// @brief Field <defaultFocusOrder>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__defaultFocusOrder_k__BackingField, put=__cordl_internal_set__defaultFocusOrder_k__BackingField)) ::GlobalNamespace::VisualElementFocusRing_DefaultFocusOrder  _defaultFocusOrder_k__BackingField;

 __declspec(property(get=get_defaultFocusOrder, put=set_defaultFocusOrder)) ::GlobalNamespace::VisualElementFocusRing_DefaultFocusOrder  defaultFocusOrder;

 __declspec(property(get=get_focusController)) ::UnityEngine::UIElements::FocusController*  focusController;

/// @brief Field m_FocusRing, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FocusRing, put=__cordl_internal_set_m_FocusRing)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>*  m_FocusRing;

/// @brief Field root, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_root, put=__cordl_internal_set_root)) ::UnityEngine::UIElements::VisualElement*  root;

/// @brief Convert operator to "::UnityEngine::UIElements::IFocusRing"
constexpr operator  ::UnityEngine::UIElements::IFocusRing*() noexcept;

/// @brief Method BuildRingForScopeRecursive, addr 0xb7c4688, size 0x334, virtual false, abstract: false, final false
inline void BuildRingForScopeRecursive(::UnityEngine::UIElements::VisualElement*  ve, ::by_ref<int32_t>  scopeIndex, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>*  scopeList) ;

/// @brief Method DoUpdate, addr 0xb7c45ac, size 0xdc, virtual false, abstract: false, final false
inline void DoUpdate() ;

/// @brief Method FocusRingAutoIndexSort, addr 0xb7c41a4, size 0x318, virtual false, abstract: false, final false
inline int32_t FocusRingAutoIndexSort(::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*  a, ::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*  b) ;

/// @brief Method FocusRingSort, addr 0xb7c44bc, size 0xf0, virtual false, abstract: false, final false
inline int32_t FocusRingSort(::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*  a, ::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*  b) ;

/// @brief Method GetFocusChangeDirection, addr 0xb7c4d34, size 0x324, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::FocusChangeDirection* GetFocusChangeDirection(::UnityEngine::UIElements::Focusable*  currentFocusable, ::UnityEngine::UIElements::EventBase*  e) ;

/// @brief Method GetFocusableInternalIndex, addr 0xb7c4c8c, size 0xa8, virtual false, abstract: false, final false
inline int32_t GetFocusableInternalIndex(::UnityEngine::UIElements::Focusable*  f) ;

/// @brief Method GetNextElementDepthFirst, addr 0xb7c5648, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* GetNextElementDepthFirst(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method GetNextFocusable, addr 0xb7c5058, size 0x15c, virtual true, abstract: false, final true
inline ::UnityEngine::UIElements::Focusable* GetNextFocusable(::UnityEngine::UIElements::Focusable*  currentFocusable, ::UnityEngine::UIElements::FocusChangeDirection*  direction) ;

/// @brief Method GetNextFocusableInSequence, addr 0xb7c51b4, size 0x384, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::Focusable* GetNextFocusableInSequence(::UnityEngine::UIElements::Focusable*  currentFocusable, ::UnityEngine::UIElements::FocusChangeDirection*  direction) ;

/// @brief Method GetNextFocusableInTree, addr 0xb7c5538, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* GetNextFocusableInTree(::UnityEngine::UIElements::VisualElement*  currentFocusable) ;

/// @brief Method GetPreviousElementDepthFirst, addr 0xb7c569c, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* GetPreviousElementDepthFirst(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method GetPreviousFocusableInTree, addr 0xb7c55c0, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* GetPreviousFocusableInTree(::UnityEngine::UIElements::VisualElement*  currentFocusable) ;

static inline ::UnityEngine::UIElements::VisualElementFocusRing* New_ctor(::UnityEngine::UIElements::VisualElement*  root, ::GlobalNamespace::VisualElementFocusRing_DefaultFocusOrder  dfo) ;

/// @brief Method SortAndFlattenScopeLists, addr 0xb7c49bc, size 0x2c8, virtual false, abstract: false, final false
inline void SortAndFlattenScopeLists(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>*  rootScopeList) ;

constexpr ::GlobalNamespace::VisualElementFocusRing_DefaultFocusOrder const& __cordl_internal_get__defaultFocusOrder_k__BackingField() const;

constexpr ::GlobalNamespace::VisualElementFocusRing_DefaultFocusOrder& __cordl_internal_get__defaultFocusOrder_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>* const& __cordl_internal_get_m_FocusRing() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>*& __cordl_internal_get_m_FocusRing() ;

constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_root() const;

constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_root() ;

constexpr void __cordl_internal_set__defaultFocusOrder_k__BackingField(::GlobalNamespace::VisualElementFocusRing_DefaultFocusOrder  value) ;

constexpr void __cordl_internal_set_m_FocusRing(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>*  value) ;

constexpr void __cordl_internal_set_root(::UnityEngine::UIElements::VisualElement*  value) ;

/// @brief Method .ctor, addr 0xb7c40c8, size 0xac, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::VisualElement*  root, ::GlobalNamespace::VisualElementFocusRing_DefaultFocusOrder  dfo) ;

/// [CompilerGenerated]
/// @brief Method get_defaultFocusOrder, addr 0xb7c4194, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::VisualElementFocusRing_DefaultFocusOrder get_defaultFocusOrder() ;

/// @brief Method get_focusController, addr 0xb7c4174, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::FocusController* get_focusController() ;

/// @brief Convert to "::UnityEngine::UIElements::IFocusRing"
constexpr ::UnityEngine::UIElements::IFocusRing* i___UnityEngine__UIElements__IFocusRing() noexcept;

/// [CompilerGenerated]
/// @brief Method set_defaultFocusOrder, addr 0xb7c419c, size 0x8, virtual false, abstract: false, final false
inline void set_defaultFocusOrder(::GlobalNamespace::VisualElementFocusRing_DefaultFocusOrder  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VisualElementFocusRing() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VisualElementFocusRing", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualElementFocusRing(VisualElementFocusRing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementFocusRing", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualElementFocusRing(VisualElementFocusRing const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8471};

/// @brief Field root, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  ___root;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <defaultFocusOrder>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::VisualElementFocusRing_DefaultFocusOrder  ____defaultFocusOrder_k__BackingField;

/// @brief Field m_FocusRing, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>*  ___m_FocusRing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualElementFocusRing, ___root) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementFocusRing, ____defaultFocusOrder_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementFocusRing, ___m_FocusRing) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::VisualElementFocusRing) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElementFocusRing/FocusRingRecord
class CORDL_TYPE VisualElementFocusRing_FocusRingRecord : public ::System::Object {
public:
// Declarations
/// @brief Field m_AutoIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AutoIndex, put=__cordl_internal_set_m_AutoIndex)) int32_t  m_AutoIndex;

/// @brief Field m_Focusable, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Focusable, put=__cordl_internal_set_m_Focusable)) ::UnityEngine::UIElements::Focusable*  m_Focusable;

/// @brief Field m_IsSlot, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsSlot, put=__cordl_internal_set_m_IsSlot)) bool  m_IsSlot;

/// @brief Field m_ScopeNavigationOrder, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScopeNavigationOrder, put=__cordl_internal_set_m_ScopeNavigationOrder)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>*  m_ScopeNavigationOrder;

static inline ::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_m_AutoIndex() const;

constexpr int32_t& __cordl_internal_get_m_AutoIndex() ;

constexpr ::UnityEngine::UIElements::Focusable* const& __cordl_internal_get_m_Focusable() const;

constexpr ::UnityEngine::UIElements::Focusable*& __cordl_internal_get_m_Focusable() ;

constexpr bool const& __cordl_internal_get_m_IsSlot() const;

constexpr bool& __cordl_internal_get_m_IsSlot() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>* const& __cordl_internal_get_m_ScopeNavigationOrder() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>*& __cordl_internal_get_m_ScopeNavigationOrder() ;

constexpr void __cordl_internal_set_m_AutoIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_Focusable(::UnityEngine::UIElements::Focusable*  value) ;

constexpr void __cordl_internal_set_m_IsSlot(bool  value) ;

constexpr void __cordl_internal_set_m_ScopeNavigationOrder(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>*  value) ;

/// @brief Method .ctor, addr 0xb7c4c84, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VisualElementFocusRing_FocusRingRecord() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VisualElementFocusRing_FocusRingRecord", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualElementFocusRing_FocusRingRecord(VisualElementFocusRing_FocusRingRecord && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementFocusRing_FocusRingRecord", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualElementFocusRing_FocusRingRecord(VisualElementFocusRing_FocusRingRecord const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8470};

/// @brief Field m_AutoIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___m_AutoIndex;

/// @brief Field m_Focusable, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::UIElements::Focusable*  ___m_Focusable;

/// @brief Field m_IsSlot, offset: 0x20, size: 0x1, def value: None
 bool  ___m_IsSlot;

/// @brief Field m_ScopeNavigationOrder, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord*>*  ___m_ScopeNavigationOrder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord, ___m_AutoIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord, ___m_Focusable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord, ___m_IsSlot) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord, ___m_ScopeNavigationOrder) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::VisualElementFocusRing_FocusRingRecord) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
