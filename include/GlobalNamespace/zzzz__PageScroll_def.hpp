#pragma once
// IWYU pragma private; include "GlobalNamespace/PageScroll.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PageScroll_Page_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PageScroll)
namespace GlobalNamespace {
struct PageScroll_Page;
}
namespace GlobalNamespace {
class PageScroll__LateStart_d__14;
}
namespace GlobalNamespace {
class PageScroll___c__DisplayClass10_0;
}
namespace GlobalNamespace {
class PageScroll___c__DisplayClass12_0;
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
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::UI {
class ToggleGroup;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class PageScroll;
}
namespace GlobalNamespace {
class PageScroll__LateStart_d__14;
}
namespace GlobalNamespace {
class PageScroll___c__DisplayClass10_0;
}
namespace GlobalNamespace {
class PageScroll___c__DisplayClass12_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PageScroll*);
MARK_REF_T(::GlobalNamespace::PageScroll__LateStart_d__14*);
MARK_REF_T(::GlobalNamespace::PageScroll___c__DisplayClass10_0*);
MARK_REF_T(::GlobalNamespace::PageScroll___c__DisplayClass12_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PageScroll*, "", "PageScroll");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PageScroll__LateStart_d__14*, "", "PageScroll/<LateStart>d__14");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PageScroll___c__DisplayClass10_0*, "", "PageScroll/<>c__DisplayClass10_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PageScroll___c__DisplayClass12_0*, "", "PageScroll/<>c__DisplayClass12_0");
// Dependencies UnityEngine.EventSystems.UIBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PageScroll
class CORDL_TYPE PageScroll : public ::UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
using Page = ::GlobalNamespace::PageScroll_Page;

using _LateStart_d__14 = ::GlobalNamespace::PageScroll__LateStart_d__14;

using __c__DisplayClass10_0 = ::GlobalNamespace::PageScroll___c__DisplayClass10_0;

using __c__DisplayClass12_0 = ::GlobalNamespace::PageScroll___c__DisplayClass12_0;

/// @brief Field _contentContainer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__contentContainer, put=__cordl_internal_set__contentContainer)) ::UnityW<::UnityEngine::RectTransform>  _contentContainer;

/// @brief Field _pageAnim, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__pageAnim, put=__cordl_internal_set__pageAnim)) float_t  _pageAnim;

/// @brief Field _pageIndex, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__pageIndex, put=__cordl_internal_set__pageIndex)) int32_t  _pageIndex;

/// @brief Field _pages, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__pages, put=__cordl_internal_set__pages)) ::System::Collections::Generic::List_1<::GlobalNamespace::PageScroll_Page>*  _pages;

/// @brief Field _toggleGroup, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggleGroup, put=__cordl_internal_set__toggleGroup)) ::UnityW<::UnityEngine::UI::ToggleGroup>  _toggleGroup;

/// @brief Field alphaTransitionCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_alphaTransitionCurve, put=__cordl_internal_set_alphaTransitionCurve)) ::UnityEngine::AnimationCurve*  alphaTransitionCurve;

/// @brief Field animationSpeed, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationSpeed, put=__cordl_internal_set_animationSpeed)) float_t  animationSpeed;

/// @brief Method ActiveToggleChanged, addr 0xa424bfc, size 0x140, virtual false, abstract: false, final false
inline void ActiveToggleChanged(::UnityEngine::UI::Toggle*  toggle) ;

/// @brief Method InjectAllPageScroll, addr 0xa425270, size 0x58, virtual false, abstract: false, final false
inline void InjectAllPageScroll(::UnityEngine::UI::ToggleGroup*  toggleGroup, ::UnityEngine::RectTransform*  contentContainer, ::System::Collections::Generic::List_1<::GlobalNamespace::PageScroll_Page>*  pages, int32_t  pageIndex) ;

/// @brief Method InjectContentContainer, addr 0xa4252d0, size 0x8, virtual false, abstract: false, final false
inline void InjectContentContainer(::UnityEngine::RectTransform*  contentContainer) ;

/// @brief Method InjectPageIndex, addr 0xa4252e0, size 0x8, virtual false, abstract: false, final false
inline void InjectPageIndex(int32_t  pageIndex) ;

/// @brief Method InjectPages, addr 0xa4252d8, size 0x8, virtual false, abstract: false, final false
inline void InjectPages(::System::Collections::Generic::List_1<::GlobalNamespace::PageScroll_Page>*  pages) ;

/// @brief Method InjectToggleGroup, addr 0xa4252c8, size 0x8, virtual false, abstract: false, final false
inline void InjectToggleGroup(::UnityEngine::UI::ToggleGroup*  toggleGroup) ;

/// [IteratorStateMachine(typeof(PageScroll::<LateStart>d__14))]
/// @brief Method LateStart, addr 0xa424d64, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* LateStart() ;

static inline ::GlobalNamespace::PageScroll* New_ctor() ;

/// @brief Method OnDisable, addr 0xa424ab8, size 0x144, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa42486c, size 0x244, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ScrollPage, addr 0xa424860, size 0xc, virtual false, abstract: false, final false
inline void ScrollPage(int32_t  direction) ;

/// @brief Method SetOtherPagesTransparent, addr 0xa425150, size 0x120, virtual false, abstract: false, final false
inline void SetOtherPagesTransparent(int32_t  index0, int32_t  index1) ;

/// @brief Method SetPageIndex, addr 0xa4247a8, size 0xb8, virtual false, abstract: false, final false
inline void SetPageIndex(int32_t  pageIndex) ;

/// @brief Method Start, addr 0xa424d44, size 0x20, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa424df8, size 0xb8, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateVisial, addr 0xa424eb0, size 0x2a0, virtual false, abstract: false, final false
inline void UpdateVisial() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__contentContainer() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__contentContainer() ;

constexpr float_t const& __cordl_internal_get__pageAnim() const;

constexpr float_t& __cordl_internal_get__pageAnim() ;

constexpr int32_t const& __cordl_internal_get__pageIndex() const;

constexpr int32_t& __cordl_internal_get__pageIndex() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PageScroll_Page>* const& __cordl_internal_get__pages() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PageScroll_Page>*& __cordl_internal_get__pages() ;

constexpr ::UnityW<::UnityEngine::UI::ToggleGroup> const& __cordl_internal_get__toggleGroup() const;

constexpr ::UnityW<::UnityEngine::UI::ToggleGroup>& __cordl_internal_get__toggleGroup() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_alphaTransitionCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_alphaTransitionCurve() ;

constexpr float_t const& __cordl_internal_get_animationSpeed() const;

constexpr float_t& __cordl_internal_get_animationSpeed() ;

constexpr void __cordl_internal_set__contentContainer(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__pageAnim(float_t  value) ;

constexpr void __cordl_internal_set__pageIndex(int32_t  value) ;

constexpr void __cordl_internal_set__pages(::System::Collections::Generic::List_1<::GlobalNamespace::PageScroll_Page>*  value) ;

constexpr void __cordl_internal_set__toggleGroup(::UnityW<::UnityEngine::UI::ToggleGroup>  value) ;

constexpr void __cordl_internal_set_alphaTransitionCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_animationSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0xa4252e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PageScroll() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PageScroll", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PageScroll(PageScroll && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PageScroll", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PageScroll(PageScroll const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28230};

/// [SerializeField]
/// @brief Field _toggleGroup, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::ToggleGroup>  ____toggleGroup;

/// [SerializeField]
/// @brief Field _contentContainer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____contentContainer;

/// [SerializeField]
/// @brief Field _pages, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::PageScroll_Page>*  ____pages;

/// [SerializeField]
/// @brief Field _pageIndex, offset: 0x38, size: 0x4, def value: None
 int32_t  ____pageIndex;

/// @brief Field animationSpeed, offset: 0x3c, size: 0x4, def value: None
 float_t  ___animationSpeed;

/// @brief Field alphaTransitionCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___alphaTransitionCurve;

/// @brief Field _pageAnim, offset: 0x48, size: 0x4, def value: None
 float_t  ____pageAnim;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PageScroll, ____toggleGroup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PageScroll, ____contentContainer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PageScroll, ____pages) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PageScroll, ____pageIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PageScroll, ___animationSpeed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PageScroll, ___alphaTransitionCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PageScroll, ____pageAnim) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PageScroll) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PageScroll/<LateStart>d__14
class CORDL_TYPE PageScroll__LateStart_d__14 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::PageScroll>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa425380, size 0xc4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::PageScroll__LateStart_d__14* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xa425444, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa42544c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa425484, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa42537c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::PageScroll> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::PageScroll>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PageScroll>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa424dd0, size 0x28, virtual false, abstract: false, final false
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
constexpr PageScroll__LateStart_d__14() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PageScroll__LateStart_d__14", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PageScroll__LateStart_d__14(PageScroll__LateStart_d__14 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PageScroll__LateStart_d__14", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PageScroll__LateStart_d__14(PageScroll__LateStart_d__14 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28229};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PageScroll>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PageScroll__LateStart_d__14, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PageScroll__LateStart_d__14, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PageScroll__LateStart_d__14, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PageScroll__LateStart_d__14) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PageScroll/<>c__DisplayClass12_0
class CORDL_TYPE PageScroll___c__DisplayClass12_0 : public ::System::Object {
public:
// Declarations
/// @brief Field toggle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_toggle, put=__cordl_internal_set_toggle)) ::UnityW<::UnityEngine::UI::Toggle>  toggle;

static inline ::GlobalNamespace::PageScroll___c__DisplayClass12_0* New_ctor() ;

/// @brief Method <ActiveToggleChanged>b__0, addr 0xa42530c, size 0x70, virtual false, abstract: false, final false
inline bool _ActiveToggleChanged_b__0(::GlobalNamespace::PageScroll_Page  page) ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get_toggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get_toggle() ;

constexpr void __cordl_internal_set_toggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

/// @brief Method .ctor, addr 0xa424d3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PageScroll___c__DisplayClass12_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PageScroll___c__DisplayClass12_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PageScroll___c__DisplayClass12_0(PageScroll___c__DisplayClass12_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PageScroll___c__DisplayClass12_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PageScroll___c__DisplayClass12_0(PageScroll___c__DisplayClass12_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28228};

/// @brief Field toggle, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ___toggle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PageScroll___c__DisplayClass12_0, ___toggle) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PageScroll___c__DisplayClass12_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies PageScroll::Page, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PageScroll/<>c__DisplayClass10_0
class CORDL_TYPE PageScroll___c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::PageScroll>  __4__this;

/// @brief Field page, offset 0x10, size 0x18 
 __declspec(property(get=__cordl_internal_get_page, put=__cordl_internal_set_page)) ::GlobalNamespace::PageScroll_Page  page;

static inline ::GlobalNamespace::PageScroll___c__DisplayClass10_0* New_ctor() ;

/// @brief Method <OnEnable>b__0, addr 0xa4252f0, size 0x1c, virtual false, abstract: false, final false
inline void _OnEnable_b__0(bool  _p0_) ;

constexpr ::UnityW<::GlobalNamespace::PageScroll> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::PageScroll>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::PageScroll_Page const& __cordl_internal_get_page() const;

constexpr ::GlobalNamespace::PageScroll_Page& __cordl_internal_get_page() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PageScroll>  value) ;

constexpr void __cordl_internal_set_page(::GlobalNamespace::PageScroll_Page  value) ;

/// @brief Method .ctor, addr 0xa424ab0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PageScroll___c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PageScroll___c__DisplayClass10_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PageScroll___c__DisplayClass10_0(PageScroll___c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PageScroll___c__DisplayClass10_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PageScroll___c__DisplayClass10_0(PageScroll___c__DisplayClass10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28227};

/// @brief Field page, offset: 0x10, size: 0x18, def value: None
 ::GlobalNamespace::PageScroll_Page  ___page;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PageScroll>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PageScroll___c__DisplayClass10_0, ___page) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PageScroll___c__DisplayClass10_0, _____4__this) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PageScroll___c__DisplayClass10_0) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
