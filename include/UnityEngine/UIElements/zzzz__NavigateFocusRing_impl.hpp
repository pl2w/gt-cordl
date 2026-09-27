#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/NavigateFocusRing.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_impl.hpp"
#include "UnityEngine/UIElements/zzzz__NavigateFocusRing_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusController_def.hpp"
#include "UnityEngine/UIElements/zzzz__Focusable_def.hpp"
#include "UnityEngine/UIElements/zzzz__IFocusRing_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigateFocusRing_FocusableHierarchyTraversal_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigateFocusRing_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocument_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementFocusRing_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing.get_focusController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::FocusController* (::UnityEngine::UIElements::NavigateFocusRing::*)()>(&::UnityEngine::UIElements::NavigateFocusRing::get_focusController)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb8ac904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(),
                        {"get_focusController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::NavigateFocusRing::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::NavigateFocusRing::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb8ac924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing.GetFocusChangeDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::FocusChangeDirection* (::UnityEngine::UIElements::NavigateFocusRing::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::NavigateFocusRing::GetFocusChangeDirection)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0xb8ac9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(),
                        {"GetFocusChangeDirection", {}, {::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing.GetNextFocusable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Focusable* (::UnityEngine::UIElements::NavigateFocusRing::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*)>(&::UnityEngine::UIElements::NavigateFocusRing::GetNextFocusable)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0xb8acce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing.IsWorldSpaceNavigationValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::NavigateFocusRing::*)(::UnityEngine::UIElements::Focusable*, ::by_ref<::UnityEngine::UIElements::UIDocument*>)>(&::UnityEngine::UIElements::NavigateFocusRing::IsWorldSpaceNavigationValid)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb8ad030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(),
                        {"IsWorldSpaceNavigationValid", {}, {::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIDocument*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing.GetNextFocusable2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Focusable* (::UnityEngine::UIElements::NavigateFocusRing::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*, ::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::NavigateFocusRing::GetNextFocusable2D)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0xb8ad128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(),
                        {"GetNextFocusable2D", {}, {::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing.IsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::NavigateFocusRing::IsActive)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb8ad67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(),
                        {"IsActive", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing.IsNavigable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::Focusable*)>(&::UnityEngine::UIElements::NavigateFocusRing::IsNavigable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb8ad754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(),
                        {"IsNavigable", {}, {::i2c::type_of<::UnityEngine::UIElements::Focusable*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::NavigateFocusRing::__cordl_internal_get_m_Root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Root;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::NavigateFocusRing::__cordl_internal_get_m_Root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Root;
}
constexpr void UnityEngine::UIElements::NavigateFocusRing::__cordl_internal_set_m_Root(::UnityEngine::UIElements::VisualElement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Root = value;
}
constexpr ::UnityEngine::UIElements::VisualElementFocusRing*& UnityEngine::UIElements::NavigateFocusRing::__cordl_internal_get_m_Ring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ring;
}
constexpr ::UnityEngine::UIElements::VisualElementFocusRing* const& UnityEngine::UIElements::NavigateFocusRing::__cordl_internal_get_m_Ring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ring;
}
constexpr void UnityEngine::UIElements::NavigateFocusRing::__cordl_internal_set_m_Ring(::UnityEngine::UIElements::VisualElementFocusRing*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Ring = value;
}
inline void UnityEngine::UIElements::NavigateFocusRing::setStaticF_Left(::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*, "Left", ::UnityEngine::UIElements::NavigateFocusRing*>(std::forward<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*>(value));
}
inline ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection* UnityEngine::UIElements::NavigateFocusRing::getStaticF_Left()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*, "Left", ::UnityEngine::UIElements::NavigateFocusRing*>();
}
inline void UnityEngine::UIElements::NavigateFocusRing::setStaticF_Right(::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*, "Right", ::UnityEngine::UIElements::NavigateFocusRing*>(std::forward<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*>(value));
}
inline ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection* UnityEngine::UIElements::NavigateFocusRing::getStaticF_Right()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*, "Right", ::UnityEngine::UIElements::NavigateFocusRing*>();
}
inline void UnityEngine::UIElements::NavigateFocusRing::setStaticF_Up(::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*, "Up", ::UnityEngine::UIElements::NavigateFocusRing*>(std::forward<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*>(value));
}
inline ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection* UnityEngine::UIElements::NavigateFocusRing::getStaticF_Up()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*, "Up", ::UnityEngine::UIElements::NavigateFocusRing*>();
}
inline void UnityEngine::UIElements::NavigateFocusRing::setStaticF_Down(::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*, "Down", ::UnityEngine::UIElements::NavigateFocusRing*>(std::forward<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*>(value));
}
inline ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection* UnityEngine::UIElements::NavigateFocusRing::getStaticF_Down()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*, "Down", ::UnityEngine::UIElements::NavigateFocusRing*>();
}
inline void UnityEngine::UIElements::NavigateFocusRing::setStaticF_Next(::UnityEngine::UIElements::FocusChangeDirection*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::FocusChangeDirection*, "Next", ::UnityEngine::UIElements::NavigateFocusRing*>(std::forward<::UnityEngine::UIElements::FocusChangeDirection*>(value));
}
inline ::UnityEngine::UIElements::FocusChangeDirection* UnityEngine::UIElements::NavigateFocusRing::getStaticF_Next()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::FocusChangeDirection*, "Next", ::UnityEngine::UIElements::NavigateFocusRing*>();
}
inline void UnityEngine::UIElements::NavigateFocusRing::setStaticF_Previous(::UnityEngine::UIElements::FocusChangeDirection*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::FocusChangeDirection*, "Previous", ::UnityEngine::UIElements::NavigateFocusRing*>(std::forward<::UnityEngine::UIElements::FocusChangeDirection*>(value));
}
inline ::UnityEngine::UIElements::FocusChangeDirection* UnityEngine::UIElements::NavigateFocusRing::getStaticF_Previous()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::FocusChangeDirection*, "Previous", ::UnityEngine::UIElements::NavigateFocusRing*>();
}
inline ::UnityEngine::UIElements::FocusController* UnityEngine::UIElements::NavigateFocusRing::get_focusController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(),
                        {"get_focusController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusController*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::NavigateFocusRing::_ctor(::UnityEngine::UIElements::VisualElement*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root);
}
inline ::UnityEngine::UIElements::FocusChangeDirection* UnityEngine::UIElements::NavigateFocusRing::GetFocusChangeDirection(::UnityEngine::UIElements::Focusable*  currentFocusable, ::UnityEngine::UIElements::EventBase*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(),
                        {"GetFocusChangeDirection", {}, {::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusChangeDirection*>(this, ___internal_method, currentFocusable, e);
}
inline ::UnityEngine::UIElements::Focusable* UnityEngine::UIElements::NavigateFocusRing::GetNextFocusable(::UnityEngine::UIElements::Focusable*  currentFocusable, ::UnityEngine::UIElements::FocusChangeDirection*  direction)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable*>(this, ___internal_method, currentFocusable, direction);
}
inline bool UnityEngine::UIElements::NavigateFocusRing::IsWorldSpaceNavigationValid(::UnityEngine::UIElements::Focusable*  currentFocusable, ::by_ref<::UnityEngine::UIElements::UIDocument*>  document)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(),
                        {"IsWorldSpaceNavigationValid", {}, {::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIDocument*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, currentFocusable, document);
}
inline ::UnityEngine::UIElements::Focusable* UnityEngine::UIElements::NavigateFocusRing::GetNextFocusable2D(::UnityEngine::UIElements::Focusable*  currentFocusable, ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*  direction, ::UnityEngine::UIElements::VisualElement*  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(),
                        {"GetNextFocusable2D", {}, {::i2c::type_of<::UnityEngine::UIElements::Focusable*>(), ::i2c::type_of<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable*>(this, ___internal_method, currentFocusable, direction, root);
}
inline bool UnityEngine::UIElements::NavigateFocusRing::IsActive(::UnityEngine::UIElements::VisualElement*  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(),
                        {"IsActive", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v);
}
inline bool UnityEngine::UIElements::NavigateFocusRing::IsNavigable(::UnityEngine::UIElements::Focusable*  focusable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing*>(),
                        {"IsNavigable", {}, {::i2c::type_of<::UnityEngine::UIElements::Focusable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, focusable);
}
inline ::UnityEngine::UIElements::NavigateFocusRing* UnityEngine::UIElements::NavigateFocusRing::New_ctor(::UnityEngine::UIElements::VisualElement*  root)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::NavigateFocusRing*>(root));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IFocusRing"
constexpr  UnityEngine::UIElements::NavigateFocusRing::operator ::UnityEngine::UIElements::IFocusRing*() noexcept {
return static_cast<::UnityEngine::UIElements::IFocusRing*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IFocusRing"
constexpr ::UnityEngine::UIElements::IFocusRing* UnityEngine::UIElements::NavigateFocusRing::i___UnityEngine__UIElements__IFocusRing() noexcept {
return static_cast<::UnityEngine::UIElements::IFocusRing*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::NavigateFocusRing::NavigateFocusRing()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection::*)(int32_t)>(&::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb8ad95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::NavigateFocusRing_ChangeDirection::_ctor(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection* UnityEngine::UIElements::NavigateFocusRing_ChangeDirection::New_ctor(int32_t  i)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*>(i));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection::NavigateFocusRing_ChangeDirection()   {
}
