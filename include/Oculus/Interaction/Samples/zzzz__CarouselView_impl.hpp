#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/CarouselView.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__CarouselView_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::CarouselView.get_CurrentChildIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Samples::CarouselView::*)()>(&::Oculus::Interaction::Samples::CarouselView::get_CurrentChildIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa436574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::CarouselView*>(),
                        {"get_CurrentChildIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::CarouselView.get_ContentArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::Oculus::Interaction::Samples::CarouselView::*)()>(&::Oculus::Interaction::Samples::CarouselView::get_ContentArea)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43657c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::CarouselView*>(),
                        {"get_ContentArea", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::CarouselView.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::CarouselView::*)()>(&::Oculus::Interaction::Samples::CarouselView::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa436584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::CarouselView*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::CarouselView*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::CarouselView.ScrollRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::CarouselView::*)()>(&::Oculus::Interaction::Samples::CarouselView::ScrollRight)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa436588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::CarouselView*>(),
                        {"ScrollRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::CarouselView.ScrollLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::CarouselView::*)()>(&::Oculus::Interaction::Samples::CarouselView::ScrollLeft)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa4368e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::CarouselView*>(),
                        {"ScrollLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::CarouselView.GetCurrentChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::Oculus::Interaction::Samples::CarouselView::*)()>(&::Oculus::Interaction::Samples::CarouselView::GetCurrentChild)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa436668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::CarouselView*>(),
                        {"GetCurrentChild", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::CarouselView.ScrollToChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::CarouselView::*)(::UnityEngine::RectTransform*, float_t)>(&::Oculus::Interaction::Samples::CarouselView::ScrollToChild)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xa4366d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::CarouselView*>(),
                        {"ScrollToChild", {}, {::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::CarouselView.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::CarouselView::*)()>(&::Oculus::Interaction::Samples::CarouselView::Update)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa4369e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::CarouselView*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::CarouselView*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::CarouselView._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::CarouselView::*)()>(&::Oculus::Interaction::Samples::CarouselView::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa436af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::CarouselView*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& Oculus::Interaction::Samples::CarouselView::__cordl_internal_get__viewport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____viewport;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Oculus::Interaction::Samples::CarouselView::__cordl_internal_get__viewport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____viewport;
}
constexpr void Oculus::Interaction::Samples::CarouselView::__cordl_internal_set__viewport(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____viewport = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Oculus::Interaction::Samples::CarouselView::__cordl_internal_get__content()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____content;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Oculus::Interaction::Samples::CarouselView::__cordl_internal_get__content() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____content;
}
constexpr void Oculus::Interaction::Samples::CarouselView::__cordl_internal_set__content(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____content = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::Samples::CarouselView::__cordl_internal_get__easeCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____easeCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::Samples::CarouselView::__cordl_internal_get__easeCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____easeCurve;
}
constexpr void Oculus::Interaction::Samples::CarouselView::__cordl_internal_set__easeCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____easeCurve = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Oculus::Interaction::Samples::CarouselView::__cordl_internal_get__emptyCarouselVisuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emptyCarouselVisuals;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Oculus::Interaction::Samples::CarouselView::__cordl_internal_get__emptyCarouselVisuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emptyCarouselVisuals;
}
constexpr void Oculus::Interaction::Samples::CarouselView::__cordl_internal_set__emptyCarouselVisuals(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emptyCarouselVisuals = value;
}
constexpr int32_t& Oculus::Interaction::Samples::CarouselView::__cordl_internal_get__currentChildIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentChildIndex;
}
constexpr int32_t const& Oculus::Interaction::Samples::CarouselView::__cordl_internal_get__currentChildIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentChildIndex;
}
constexpr void Oculus::Interaction::Samples::CarouselView::__cordl_internal_set__currentChildIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentChildIndex = value;
}
constexpr float_t& Oculus::Interaction::Samples::CarouselView::__cordl_internal_get__scrollVal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scrollVal;
}
constexpr float_t const& Oculus::Interaction::Samples::CarouselView::__cordl_internal_get__scrollVal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scrollVal;
}
constexpr void Oculus::Interaction::Samples::CarouselView::__cordl_internal_set__scrollVal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scrollVal = value;
}
inline int32_t Oculus::Interaction::Samples::CarouselView::get_CurrentChildIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::CarouselView*>(),
                        {"get_CurrentChildIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RectTransform> Oculus::Interaction::Samples::CarouselView::get_ContentArea()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::CarouselView*>(),
                        {"get_ContentArea", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::CarouselView::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::CarouselView*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::CarouselView::ScrollRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::CarouselView*>(),
                        {"ScrollRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::CarouselView::ScrollLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::CarouselView*>(),
                        {"ScrollLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RectTransform> Oculus::Interaction::Samples::CarouselView::GetCurrentChild()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::CarouselView*>(),
                        {"GetCurrentChild", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::CarouselView::ScrollToChild(::UnityEngine::RectTransform*  child, float_t  amount01)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::CarouselView*>(),
                        {"ScrollToChild", {}, {::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, child, amount01);
}
inline void Oculus::Interaction::Samples::CarouselView::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::CarouselView*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::CarouselView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::CarouselView*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::CarouselView* Oculus::Interaction::Samples::CarouselView::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::CarouselView*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::CarouselView::CarouselView()   {
}
