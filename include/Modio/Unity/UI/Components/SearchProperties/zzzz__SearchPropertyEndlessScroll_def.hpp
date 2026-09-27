#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/SearchProperties/SearchPropertyEndlessScroll.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SearchPropertyEndlessScroll)
namespace Modio::Unity::UI::Components::SearchProperties {
class ISearchProperty;
}
namespace Modio::Unity::UI::Components::SearchProperties {
class SearchPropertyEndlessScroll__MonitorCo_d__9;
}
namespace Modio::Unity::UI::Components {
class IPropertyMonoBehaviourEvents;
}
namespace Modio::Unity::UI::Search {
class ModioUISearch;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
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
namespace UnityEngine::UI {
class ScrollRect;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::SearchProperties {
class SearchPropertyEndlessScroll;
}
namespace Modio::Unity::UI::Components::SearchProperties {
class SearchPropertyEndlessScroll__MonitorCo_d__9;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyEndlessScroll*);
MARK_REF_T(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyEndlessScroll__MonitorCo_d__9*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyEndlessScroll*, "Modio.Unity.UI.Components.SearchProperties", "SearchPropertyEndlessScroll");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyEndlessScroll__MonitorCo_d__9*, "Modio.Unity.UI.Components.SearchProperties", "SearchPropertyEndlessScroll/<MonitorCo>d__9");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::SearchProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.SearchProperties.SearchPropertyEndlessScroll
class CORDL_TYPE SearchPropertyEndlessScroll : public ::System::Object {
public:
// Declarations
using _MonitorCo_d__9 = ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyEndlessScroll__MonitorCo_d__9;

/// @brief Field _distanceFromBottomToLoadContent, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__distanceFromBottomToLoadContent, put=__cordl_internal_set__distanceFromBottomToLoadContent)) float_t  _distanceFromBottomToLoadContent;

/// @brief Field _hasRunStart, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasRunStart, put=__cordl_internal_set__hasRunStart)) bool  _hasRunStart;

/// @brief Field _monitorCoroutine, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__monitorCoroutine, put=__cordl_internal_set__monitorCoroutine)) ::UnityEngine::Coroutine*  _monitorCoroutine;

/// @brief Field _scrollRect, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__scrollRect, put=__cordl_internal_set__scrollRect)) ::UnityW<::UnityEngine::UI::ScrollRect>  _scrollRect;

/// @brief Field _search, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__search, put=__cordl_internal_set__search)) ::UnityW<::Modio::Unity::UI::Search::ModioUISearch>  _search;

/// @brief Convert operator to "::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents"
constexpr operator  ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents*() noexcept;

/// @brief Convert operator to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr operator  ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty*() noexcept;

/// [IteratorStateMachine(typeof(Modio.Unity.UI.Components.SearchProperties.SearchPropertyEndlessScroll::<MonitorCo>d__9))]
/// @brief Method MonitorCo, addr 0x9fc3f70, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* MonitorCo() ;

static inline ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyEndlessScroll* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9fc3f6c, size 0x4, virtual true, abstract: false, final true
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9fc4004, size 0x24, virtual true, abstract: false, final true
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9fc3f14, size 0x58, virtual true, abstract: false, final true
inline void OnEnable() ;

/// @brief Method OnSearchUpdate, addr 0x9fc3f00, size 0x8, virtual true, abstract: false, final true
inline void OnSearchUpdate(::Modio::Unity::UI::Search::ModioUISearch*  search) ;

/// @brief Method Start, addr 0x9fc3f08, size 0xc, virtual true, abstract: false, final true
inline void Start() ;

constexpr float_t const& __cordl_internal_get__distanceFromBottomToLoadContent() const;

constexpr float_t& __cordl_internal_get__distanceFromBottomToLoadContent() ;

constexpr bool const& __cordl_internal_get__hasRunStart() const;

constexpr bool& __cordl_internal_get__hasRunStart() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__monitorCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__monitorCoroutine() ;

constexpr ::UnityW<::UnityEngine::UI::ScrollRect> const& __cordl_internal_get__scrollRect() const;

constexpr ::UnityW<::UnityEngine::UI::ScrollRect>& __cordl_internal_get__scrollRect() ;

constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearch> const& __cordl_internal_get__search() const;

constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearch>& __cordl_internal_get__search() ;

constexpr void __cordl_internal_set__distanceFromBottomToLoadContent(float_t  value) ;

constexpr void __cordl_internal_set__hasRunStart(bool  value) ;

constexpr void __cordl_internal_set__monitorCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__scrollRect(::UnityW<::UnityEngine::UI::ScrollRect>  value) ;

constexpr void __cordl_internal_set__search(::UnityW<::Modio::Unity::UI::Search::ModioUISearch>  value) ;

/// @brief Method .ctor, addr 0x9fc4028, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents"
constexpr ::Modio::Unity::UI::Components::IPropertyMonoBehaviourEvents* i___Modio__Unity__UI__Components__IPropertyMonoBehaviourEvents() noexcept;

/// @brief Convert to "::Modio::Unity::UI::Components::SearchProperties::ISearchProperty"
constexpr ::Modio::Unity::UI::Components::SearchProperties::ISearchProperty* i___Modio__Unity__UI__Components__SearchProperties__ISearchProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SearchPropertyEndlessScroll() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertyEndlessScroll", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SearchPropertyEndlessScroll(SearchPropertyEndlessScroll && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertyEndlessScroll", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SearchPropertyEndlessScroll(SearchPropertyEndlessScroll const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27204};

/// [SerializeField]
/// @brief Field _scrollRect, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::ScrollRect>  ____scrollRect;

/// [SerializeField]
/// @brief Field _distanceFromBottomToLoadContent, offset: 0x18, size: 0x4, def value: None
 float_t  ____distanceFromBottomToLoadContent;

/// @brief Field _monitorCoroutine, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____monitorCoroutine;

/// @brief Field _search, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Search::ModioUISearch>  ____search;

/// @brief Field _hasRunStart, offset: 0x30, size: 0x1, def value: None
 bool  ____hasRunStart;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyEndlessScroll, ____scrollRect) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyEndlessScroll, ____distanceFromBottomToLoadContent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyEndlessScroll, ____monitorCoroutine) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyEndlessScroll, ____search) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyEndlessScroll, ____hasRunStart) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyEndlessScroll) == 0x38, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::SearchProperties
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Unity::UI::Components::SearchProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.SearchProperties.SearchPropertyEndlessScroll/<MonitorCo>d__9
class CORDL_TYPE SearchPropertyEndlessScroll__MonitorCo_d__9 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyEndlessScroll*  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9fc403c, size 0x158, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyEndlessScroll__MonitorCo_d__9* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9fc4194, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9fc419c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9fc41d4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9fc4038, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyEndlessScroll* const& __cordl_internal_get___4__this() const;

constexpr ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyEndlessScroll*& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyEndlessScroll*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9fc3fdc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SearchPropertyEndlessScroll__MonitorCo_d__9() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertyEndlessScroll__MonitorCo_d__9", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SearchPropertyEndlessScroll__MonitorCo_d__9(SearchPropertyEndlessScroll__MonitorCo_d__9 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SearchPropertyEndlessScroll__MonitorCo_d__9", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SearchPropertyEndlessScroll__MonitorCo_d__9(SearchPropertyEndlessScroll__MonitorCo_d__9 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27203};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::Unity::UI::Components::SearchProperties::SearchPropertyEndlessScroll*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyEndlessScroll__MonitorCo_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyEndlessScroll__MonitorCo_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyEndlessScroll__MonitorCo_d__9, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::SearchProperties::SearchPropertyEndlessScroll__MonitorCo_d__9) == 0x28, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::SearchProperties
