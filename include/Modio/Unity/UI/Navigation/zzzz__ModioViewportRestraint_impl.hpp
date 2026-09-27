#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Navigation/ModioViewportRestraint.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Modio/Unity/UI/Navigation/zzzz__ModioViewportRestraint_def.hpp"
#include "Modio/Unity/UI/Navigation/zzzz__ModioViewportRestraint_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Navigation::ModioViewportRestraint.ChildSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Navigation::ModioViewportRestraint::*)(::UnityEngine::RectTransform*)>(&::Modio::Unity::UI::Navigation::ModioViewportRestraint::ChildSelected)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x9fb3bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraint*>(),
                        {"ChildSelected", {}, {::i2c::type_of<::UnityEngine::RectTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Navigation::ModioViewportRestraint.Transition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Modio::Unity::UI::Navigation::ModioViewportRestraint::*)(::UnityEngine::Transform*)>(&::Modio::Unity::UI::Navigation::ModioViewportRestraint::Transition)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9fb3fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraint*>(),
                        {"Transition", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Navigation::ModioViewportRestraint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Navigation::ModioViewportRestraint::*)()>(&::Modio::Unity::UI::Navigation::ModioViewportRestraint::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9fb4058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Navigation::ModioViewportRestraint._ChildSelected_g__GetWorldAABB_11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RectTransform*, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Modio::Unity::UI::Navigation::ModioViewportRestraint::_ChildSelected_g__GetWorldAABB_11_0)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x9fb3e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraint*>(),
                        {"<ChildSelected>g__GetWorldAABB|11_0", {}, {::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_get_PercentPaddingHorizontal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PercentPaddingHorizontal;
}
constexpr float_t const& Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_get_PercentPaddingHorizontal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PercentPaddingHorizontal;
}
constexpr void Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_set_PercentPaddingHorizontal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PercentPaddingHorizontal = value;
}
constexpr float_t& Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_get_PercentPaddingVertical()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PercentPaddingVertical;
}
constexpr float_t const& Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_get_PercentPaddingVertical() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PercentPaddingVertical;
}
constexpr void Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_set_PercentPaddingVertical(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PercentPaddingVertical = value;
}
constexpr bool& Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_get_adjustHorizontally()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adjustHorizontally;
}
constexpr bool const& Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_get_adjustHorizontally() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adjustHorizontally;
}
constexpr void Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_set_adjustHorizontally(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___adjustHorizontally = value;
}
constexpr bool& Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_get_adjustVertically()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adjustVertically;
}
constexpr bool const& Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_get_adjustVertically() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adjustVertically;
}
constexpr void Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_set_adjustVertically(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___adjustVertically = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_get_Viewport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Viewport;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_get_Viewport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Viewport;
}
constexpr void Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_set_Viewport(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Viewport = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_get_DefaultViewportContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultViewportContainer;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_get_DefaultViewportContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultViewportContainer;
}
constexpr void Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_set_DefaultViewportContainer(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DefaultViewportContainer = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_get_HorizontalViewportContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HorizontalViewportContainer;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_get_HorizontalViewportContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HorizontalViewportContainer;
}
constexpr void Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_set_HorizontalViewportContainer(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HorizontalViewportContainer = value;
}
constexpr ::UnityEngine::Vector3& Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_get__targetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetPosition;
}
constexpr ::UnityEngine::Vector3 const& Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_get__targetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetPosition;
}
constexpr void Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_set__targetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetPosition = value;
}
constexpr ::UnityEngine::Coroutine*& Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_get__animCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_get__animCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animCoroutine;
}
constexpr void Modio::Unity::UI::Navigation::ModioViewportRestraint::__cordl_internal_set__animCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animCoroutine = value;
}
inline void Modio::Unity::UI::Navigation::ModioViewportRestraint::setStaticF_transitionTime(float_t  value)  {
::cordl_internals::setStaticField<float_t, "transitionTime", ::Modio::Unity::UI::Navigation::ModioViewportRestraint*>(std::forward<float_t>(value));
}
inline float_t Modio::Unity::UI::Navigation::ModioViewportRestraint::getStaticF_transitionTime()  {
return ::cordl_internals::getStaticField<float_t, "transitionTime", ::Modio::Unity::UI::Navigation::ModioViewportRestraint*>();
}
inline void Modio::Unity::UI::Navigation::ModioViewportRestraint::setStaticF_CachedFourCornersArray(::ArrayW<::UnityEngine::Vector3>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "CachedFourCornersArray", ::Modio::Unity::UI::Navigation::ModioViewportRestraint*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> Modio::Unity::UI::Navigation::ModioViewportRestraint::getStaticF_CachedFourCornersArray()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "CachedFourCornersArray", ::Modio::Unity::UI::Navigation::ModioViewportRestraint*>();
}
inline void Modio::Unity::UI::Navigation::ModioViewportRestraint::ChildSelected(::UnityEngine::RectTransform*  ensureFits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraint*>(),
                        {"ChildSelected", {}, {::i2c::type_of<::UnityEngine::RectTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ensureFits);
}
inline ::System::Collections::IEnumerator* Modio::Unity::UI::Navigation::ModioViewportRestraint::Transition(::UnityEngine::Transform*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraint*>(),
                        {"Transition", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, parent);
}
inline void Modio::Unity::UI::Navigation::ModioViewportRestraint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Navigation::ModioViewportRestraint::_ChildSelected_g__GetWorldAABB_11_0(::UnityEngine::RectTransform*  rectTransform, ::by_ref<::UnityEngine::Vector3>  min, ::by_ref<::UnityEngine::Vector3>  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraint*>(),
                        {"<ChildSelected>g__GetWorldAABB|11_0", {}, {::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rectTransform, min, max);
}
inline ::Modio::Unity::UI::Navigation::ModioViewportRestraint* Modio::Unity::UI::Navigation::ModioViewportRestraint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Navigation::ModioViewportRestraint*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Navigation::ModioViewportRestraint::ModioViewportRestraint()   {
}
//  Writing Method size for method: ::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::*)(int32_t)>(&::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9fb4030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::*)()>(&::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9fb40f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::*)()>(&::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x9fb40fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::*)()>(&::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fb428c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::*)()>(&::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9fb4294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::*)()>(&::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fb42cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr void Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::__cordl_internal_set_parent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Navigation::ModioViewportRestraint>& Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Modio::Unity::UI::Navigation::ModioViewportRestraint> const& Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::__cordl_internal_set___4__this(::UnityW<::Modio::Unity::UI::Navigation::ModioViewportRestraint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::Vector2& Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::__cordl_internal_get__startPos_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startPos_5__2;
}
constexpr ::UnityEngine::Vector2 const& Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::__cordl_internal_get__startPos_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startPos_5__2;
}
constexpr void Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::__cordl_internal_set__startPos_5__2(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startPos_5__2 = value;
}
constexpr float_t& Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::__cordl_internal_get__t_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____t_5__3;
}
constexpr float_t const& Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::__cordl_internal_get__t_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____t_5__3;
}
constexpr void Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::__cordl_internal_set__t_5__3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____t_5__3 = value;
}
inline void Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12* Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Navigation::ModioViewportRestraint__Transition_d__12::ModioViewportRestraint__Transition_d__12()   {
}
