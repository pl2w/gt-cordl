#pragma once
// IWYU pragma private; include "GlobalNamespace/PageScroll.hpp"
#include "GlobalNamespace/zzzz__PageScroll_Page_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PageScroll_def.hpp"
#include "GlobalNamespace/zzzz__PageScroll_Page_def.hpp"
#include "GlobalNamespace/zzzz__PageScroll_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__ToggleGroup_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PageScroll.SetPageIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageScroll::*)(int32_t)>(&::GlobalNamespace::PageScroll::SetPageIndex)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa4247a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                        {"SetPageIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageScroll.ScrollPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageScroll::*)(int32_t)>(&::GlobalNamespace::PageScroll::ScrollPage)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa424860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                        {"ScrollPage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageScroll.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageScroll::*)()>(&::GlobalNamespace::PageScroll::OnEnable)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0xa42486c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                    {::i2c::class_of<::GlobalNamespace::PageScroll*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageScroll.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageScroll::*)()>(&::GlobalNamespace::PageScroll::OnDisable)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa424ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                    {::i2c::class_of<::GlobalNamespace::PageScroll*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageScroll.ActiveToggleChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageScroll::*)(::UnityEngine::UI::Toggle*)>(&::GlobalNamespace::PageScroll::ActiveToggleChanged)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa424bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                        {"ActiveToggleChanged", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageScroll.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageScroll::*)()>(&::GlobalNamespace::PageScroll::Start)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa424d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                    {::i2c::class_of<::GlobalNamespace::PageScroll*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageScroll.LateStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::PageScroll::*)()>(&::GlobalNamespace::PageScroll::LateStart)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa424d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                        {"LateStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageScroll.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageScroll::*)()>(&::GlobalNamespace::PageScroll::Update)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa424df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                    {::i2c::class_of<::GlobalNamespace::PageScroll*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageScroll.UpdateVisial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageScroll::*)()>(&::GlobalNamespace::PageScroll::UpdateVisial)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xa424eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                        {"UpdateVisial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageScroll.SetOtherPagesTransparent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageScroll::*)(int32_t, int32_t)>(&::GlobalNamespace::PageScroll::SetOtherPagesTransparent)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa425150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                        {"SetOtherPagesTransparent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageScroll.InjectAllPageScroll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageScroll::*)(::UnityEngine::UI::ToggleGroup*, ::UnityEngine::RectTransform*, ::System::Collections::Generic::List_1<::GlobalNamespace::PageScroll_Page>*, int32_t)>(&::GlobalNamespace::PageScroll::InjectAllPageScroll)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa425270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                        {"InjectAllPageScroll", {}, {::i2c::type_of<::UnityEngine::UI::ToggleGroup*>(), ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PageScroll_Page>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageScroll.InjectToggleGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageScroll::*)(::UnityEngine::UI::ToggleGroup*)>(&::GlobalNamespace::PageScroll::InjectToggleGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4252c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                        {"InjectToggleGroup", {}, {::i2c::type_of<::UnityEngine::UI::ToggleGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageScroll.InjectContentContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageScroll::*)(::UnityEngine::RectTransform*)>(&::GlobalNamespace::PageScroll::InjectContentContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4252d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                        {"InjectContentContainer", {}, {::i2c::type_of<::UnityEngine::RectTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageScroll.InjectPages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageScroll::*)(::System::Collections::Generic::List_1<::GlobalNamespace::PageScroll_Page>*)>(&::GlobalNamespace::PageScroll::InjectPages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4252d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                        {"InjectPages", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PageScroll_Page>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageScroll.InjectPageIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageScroll::*)(int32_t)>(&::GlobalNamespace::PageScroll::InjectPageIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4252e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                        {"InjectPageIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageScroll._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageScroll::*)()>(&::GlobalNamespace::PageScroll::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4252e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::ToggleGroup>& GlobalNamespace::PageScroll::__cordl_internal_get__toggleGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggleGroup;
}
constexpr ::UnityW<::UnityEngine::UI::ToggleGroup> const& GlobalNamespace::PageScroll::__cordl_internal_get__toggleGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggleGroup;
}
constexpr void GlobalNamespace::PageScroll::__cordl_internal_set__toggleGroup(::UnityW<::UnityEngine::UI::ToggleGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toggleGroup = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::PageScroll::__cordl_internal_get__contentContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contentContainer;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::PageScroll::__cordl_internal_get__contentContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contentContainer;
}
constexpr void GlobalNamespace::PageScroll::__cordl_internal_set__contentContainer(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____contentContainer = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PageScroll_Page>*& GlobalNamespace::PageScroll::__cordl_internal_get__pages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pages;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PageScroll_Page>* const& GlobalNamespace::PageScroll::__cordl_internal_get__pages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pages;
}
constexpr void GlobalNamespace::PageScroll::__cordl_internal_set__pages(::System::Collections::Generic::List_1<::GlobalNamespace::PageScroll_Page>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pages = value;
}
constexpr int32_t& GlobalNamespace::PageScroll::__cordl_internal_get__pageIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageIndex;
}
constexpr int32_t const& GlobalNamespace::PageScroll::__cordl_internal_get__pageIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageIndex;
}
constexpr void GlobalNamespace::PageScroll::__cordl_internal_set__pageIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pageIndex = value;
}
constexpr float_t& GlobalNamespace::PageScroll::__cordl_internal_get_animationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationSpeed;
}
constexpr float_t const& GlobalNamespace::PageScroll::__cordl_internal_get_animationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationSpeed;
}
constexpr void GlobalNamespace::PageScroll::__cordl_internal_set_animationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationSpeed = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::PageScroll::__cordl_internal_get_alphaTransitionCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alphaTransitionCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::PageScroll::__cordl_internal_get_alphaTransitionCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alphaTransitionCurve;
}
constexpr void GlobalNamespace::PageScroll::__cordl_internal_set_alphaTransitionCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alphaTransitionCurve = value;
}
constexpr float_t& GlobalNamespace::PageScroll::__cordl_internal_get__pageAnim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageAnim;
}
constexpr float_t const& GlobalNamespace::PageScroll::__cordl_internal_get__pageAnim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pageAnim;
}
constexpr void GlobalNamespace::PageScroll::__cordl_internal_set__pageAnim(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pageAnim = value;
}
inline void GlobalNamespace::PageScroll::SetPageIndex(int32_t  pageIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                        {"SetPageIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pageIndex);
}
inline void GlobalNamespace::PageScroll::ScrollPage(int32_t  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                        {"ScrollPage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, direction);
}
inline void GlobalNamespace::PageScroll::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PageScroll*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PageScroll::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PageScroll*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PageScroll::ActiveToggleChanged(::UnityEngine::UI::Toggle*  toggle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                        {"ActiveToggleChanged", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toggle);
}
inline void GlobalNamespace::PageScroll::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PageScroll*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::PageScroll::LateStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                        {"LateStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::PageScroll::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PageScroll*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PageScroll::UpdateVisial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                        {"UpdateVisial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PageScroll::SetOtherPagesTransparent(int32_t  index0, int32_t  index1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                        {"SetOtherPagesTransparent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index0, index1);
}
inline void GlobalNamespace::PageScroll::InjectAllPageScroll(::UnityEngine::UI::ToggleGroup*  toggleGroup, ::UnityEngine::RectTransform*  contentContainer, ::System::Collections::Generic::List_1<::GlobalNamespace::PageScroll_Page>*  pages, int32_t  pageIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                        {"InjectAllPageScroll", {}, {::i2c::type_of<::UnityEngine::UI::ToggleGroup*>(), ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PageScroll_Page>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toggleGroup, contentContainer, pages, pageIndex);
}
inline void GlobalNamespace::PageScroll::InjectToggleGroup(::UnityEngine::UI::ToggleGroup*  toggleGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                        {"InjectToggleGroup", {}, {::i2c::type_of<::UnityEngine::UI::ToggleGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toggleGroup);
}
inline void GlobalNamespace::PageScroll::InjectContentContainer(::UnityEngine::RectTransform*  contentContainer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                        {"InjectContentContainer", {}, {::i2c::type_of<::UnityEngine::RectTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contentContainer);
}
inline void GlobalNamespace::PageScroll::InjectPages(::System::Collections::Generic::List_1<::GlobalNamespace::PageScroll_Page>*  pages)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                        {"InjectPages", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PageScroll_Page>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pages);
}
inline void GlobalNamespace::PageScroll::InjectPageIndex(int32_t  pageIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                        {"InjectPageIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pageIndex);
}
inline void GlobalNamespace::PageScroll::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PageScroll* GlobalNamespace::PageScroll::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PageScroll*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PageScroll::PageScroll()   {
}
//  Writing Method size for method: ::GlobalNamespace::PageScroll__LateStart_d__14._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageScroll__LateStart_d__14::*)(int32_t)>(&::GlobalNamespace::PageScroll__LateStart_d__14::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa424dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll__LateStart_d__14*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageScroll__LateStart_d__14.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageScroll__LateStart_d__14::*)()>(&::GlobalNamespace::PageScroll__LateStart_d__14::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa42537c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll__LateStart_d__14*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageScroll__LateStart_d__14.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PageScroll__LateStart_d__14::*)()>(&::GlobalNamespace::PageScroll__LateStart_d__14::MoveNext)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa425380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll__LateStart_d__14*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageScroll__LateStart_d__14.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::PageScroll__LateStart_d__14::*)()>(&::GlobalNamespace::PageScroll__LateStart_d__14::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa425444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll__LateStart_d__14*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageScroll__LateStart_d__14.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageScroll__LateStart_d__14::*)()>(&::GlobalNamespace::PageScroll__LateStart_d__14::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa42544c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll__LateStart_d__14*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageScroll__LateStart_d__14.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::PageScroll__LateStart_d__14::*)()>(&::GlobalNamespace::PageScroll__LateStart_d__14::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa425484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll__LateStart_d__14*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PageScroll__LateStart_d__14::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::PageScroll__LateStart_d__14::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::PageScroll__LateStart_d__14::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::PageScroll__LateStart_d__14::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::PageScroll__LateStart_d__14::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::PageScroll__LateStart_d__14::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::PageScroll>& GlobalNamespace::PageScroll__LateStart_d__14::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PageScroll> const& GlobalNamespace::PageScroll__LateStart_d__14::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::PageScroll__LateStart_d__14::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PageScroll>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::PageScroll__LateStart_d__14::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll__LateStart_d__14*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::PageScroll__LateStart_d__14::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll__LateStart_d__14*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PageScroll__LateStart_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll__LateStart_d__14*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::PageScroll__LateStart_d__14::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll__LateStart_d__14*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::PageScroll__LateStart_d__14::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll__LateStart_d__14*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::PageScroll__LateStart_d__14::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll__LateStart_d__14*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::PageScroll__LateStart_d__14* GlobalNamespace::PageScroll__LateStart_d__14::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PageScroll__LateStart_d__14*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::PageScroll__LateStart_d__14::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::PageScroll__LateStart_d__14::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::PageScroll__LateStart_d__14::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::PageScroll__LateStart_d__14::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::PageScroll__LateStart_d__14::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::PageScroll__LateStart_d__14::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PageScroll__LateStart_d__14::PageScroll__LateStart_d__14()   {
}
//  Writing Method size for method: ::GlobalNamespace::PageScroll___c__DisplayClass12_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageScroll___c__DisplayClass12_0::*)()>(&::GlobalNamespace::PageScroll___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa424d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll___c__DisplayClass12_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageScroll___c__DisplayClass12_0._ActiveToggleChanged_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PageScroll___c__DisplayClass12_0::*)(::GlobalNamespace::PageScroll_Page)>(&::GlobalNamespace::PageScroll___c__DisplayClass12_0::_ActiveToggleChanged_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa42530c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll___c__DisplayClass12_0*>(),
                        {"<ActiveToggleChanged>b__0", {}, {::i2c::type_of<::GlobalNamespace::PageScroll_Page>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::PageScroll___c__DisplayClass12_0::__cordl_internal_get_toggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::PageScroll___c__DisplayClass12_0::__cordl_internal_get_toggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggle;
}
constexpr void GlobalNamespace::PageScroll___c__DisplayClass12_0::__cordl_internal_set_toggle(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toggle = value;
}
inline void GlobalNamespace::PageScroll___c__DisplayClass12_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll___c__DisplayClass12_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PageScroll___c__DisplayClass12_0::_ActiveToggleChanged_b__0(::GlobalNamespace::PageScroll_Page  page)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll___c__DisplayClass12_0*>(),
                        {"<ActiveToggleChanged>b__0", {}, {::i2c::type_of<::GlobalNamespace::PageScroll_Page>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, page);
}
inline ::GlobalNamespace::PageScroll___c__DisplayClass12_0* GlobalNamespace::PageScroll___c__DisplayClass12_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PageScroll___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PageScroll___c__DisplayClass12_0::PageScroll___c__DisplayClass12_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::PageScroll___c__DisplayClass10_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageScroll___c__DisplayClass10_0::*)()>(&::GlobalNamespace::PageScroll___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa424ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageScroll___c__DisplayClass10_0._OnEnable_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageScroll___c__DisplayClass10_0::*)(bool)>(&::GlobalNamespace::PageScroll___c__DisplayClass10_0::_OnEnable_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa4252f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll___c__DisplayClass10_0*>(),
                        {"<OnEnable>b__0", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PageScroll_Page& GlobalNamespace::PageScroll___c__DisplayClass10_0::__cordl_internal_get_page()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___page;
}
constexpr ::GlobalNamespace::PageScroll_Page const& GlobalNamespace::PageScroll___c__DisplayClass10_0::__cordl_internal_get_page() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___page;
}
constexpr void GlobalNamespace::PageScroll___c__DisplayClass10_0::__cordl_internal_set_page(::GlobalNamespace::PageScroll_Page  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___page = value;
}
constexpr ::UnityW<::GlobalNamespace::PageScroll>& GlobalNamespace::PageScroll___c__DisplayClass10_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PageScroll> const& GlobalNamespace::PageScroll___c__DisplayClass10_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::PageScroll___c__DisplayClass10_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PageScroll>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::PageScroll___c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PageScroll___c__DisplayClass10_0::_OnEnable_b__0(bool  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PageScroll___c__DisplayClass10_0*>(),
                        {"<OnEnable>b__0", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::GlobalNamespace::PageScroll___c__DisplayClass10_0* GlobalNamespace::PageScroll___c__DisplayClass10_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PageScroll___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PageScroll___c__DisplayClass10_0::PageScroll___c__DisplayClass10_0()   {
}
