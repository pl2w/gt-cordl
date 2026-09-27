#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModioPopupPositioning.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPopupPositioning_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutController_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutSelfController_def.hpp"
#include "UnityEngine/zzzz__RectOffset_def.hpp"
#include "UnityEngine/zzzz__RectTransform_Axis_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPopupPositioning.PositionNextTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPopupPositioning::*)(::UnityEngine::RectTransform*)>(&::Modio::Unity::UI::Panels::ModioPopupPositioning::PositionNextTo)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9fab9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPopupPositioning*>(),
                        {"PositionNextTo", {}, {::i2c::type_of<::UnityEngine::RectTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPopupPositioning.SetLayoutHorizontal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPopupPositioning::*)()>(&::Modio::Unity::UI::Panels::ModioPopupPositioning::SetLayoutHorizontal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9faba84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPopupPositioning*>(),
                        {"SetLayoutHorizontal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPopupPositioning.SetLayoutVertical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPopupPositioning::*)()>(&::Modio::Unity::UI::Panels::ModioPopupPositioning::SetLayoutVertical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fabce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPopupPositioning*>(),
                        {"SetLayoutVertical", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPopupPositioning.SetLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPopupPositioning::*)(::GlobalNamespace::RectTransform_Axis)>(&::Modio::Unity::UI::Panels::ModioPopupPositioning::SetLayout)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x9faba8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPopupPositioning*>(),
                        {"SetLayout", {}, {::i2c::type_of<::GlobalNamespace::RectTransform_Axis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPopupPositioning.GetMinMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPopupPositioning::*)(::UnityEngine::RectTransform*, ::GlobalNamespace::RectTransform_Axis, ::by_ref<float_t>, ::by_ref<float_t>)>(&::Modio::Unity::UI::Panels::ModioPopupPositioning::GetMinMax)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9fabcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPopupPositioning*>(),
                        {"GetMinMax", {}, {::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::GlobalNamespace::RectTransform_Axis>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModioPopupPositioning._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModioPopupPositioning::*)()>(&::Modio::Unity::UI::Panels::ModioPopupPositioning::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9fabdfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPopupPositioning*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& Modio::Unity::UI::Panels::ModioPopupPositioning::__cordl_internal_get__containWithin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____containWithin;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Modio::Unity::UI::Panels::ModioPopupPositioning::__cordl_internal_get__containWithin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____containWithin;
}
constexpr void Modio::Unity::UI::Panels::ModioPopupPositioning::__cordl_internal_set__containWithin(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____containWithin = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Modio::Unity::UI::Panels::ModioPopupPositioning::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Modio::Unity::UI::Panels::ModioPopupPositioning::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void Modio::Unity::UI::Panels::ModioPopupPositioning::__cordl_internal_set__target(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
constexpr ::UnityEngine::RectOffset*& Modio::Unity::UI::Panels::ModioPopupPositioning::__cordl_internal_get__padding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____padding;
}
constexpr ::UnityEngine::RectOffset* const& Modio::Unity::UI::Panels::ModioPopupPositioning::__cordl_internal_get__padding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____padding;
}
constexpr void Modio::Unity::UI::Panels::ModioPopupPositioning::__cordl_internal_set__padding(::UnityEngine::RectOffset*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____padding = value;
}
inline void Modio::Unity::UI::Panels::ModioPopupPositioning::setStaticF_FourCornersArray(::ArrayW<::UnityEngine::Vector3>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "FourCornersArray", ::Modio::Unity::UI::Panels::ModioPopupPositioning*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> Modio::Unity::UI::Panels::ModioPopupPositioning::getStaticF_FourCornersArray()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "FourCornersArray", ::Modio::Unity::UI::Panels::ModioPopupPositioning*>();
}
inline void Modio::Unity::UI::Panels::ModioPopupPositioning::PositionNextTo(::UnityEngine::RectTransform*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPopupPositioning*>(),
                        {"PositionNextTo", {}, {::i2c::type_of<::UnityEngine::RectTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Modio::Unity::UI::Panels::ModioPopupPositioning::SetLayoutHorizontal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPopupPositioning*>(),
                        {"SetLayoutHorizontal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioPopupPositioning::SetLayoutVertical()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPopupPositioning*>(),
                        {"SetLayoutVertical", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModioPopupPositioning::SetLayout(::GlobalNamespace::RectTransform_Axis  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPopupPositioning*>(),
                        {"SetLayout", {}, {::i2c::type_of<::GlobalNamespace::RectTransform_Axis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis);
}
inline void Modio::Unity::UI::Panels::ModioPopupPositioning::GetMinMax(::UnityEngine::RectTransform*  rectTransform, ::GlobalNamespace::RectTransform_Axis  axis, ::by_ref<float_t>  min, ::by_ref<float_t>  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPopupPositioning*>(),
                        {"GetMinMax", {}, {::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::GlobalNamespace::RectTransform_Axis>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rectTransform, axis, min, max);
}
inline void Modio::Unity::UI::Panels::ModioPopupPositioning::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModioPopupPositioning*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::ModioPopupPositioning* Modio::Unity::UI::Panels::ModioPopupPositioning::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModioPopupPositioning*>());
}
/// @brief Convert operator to "::UnityEngine::UI::ILayoutSelfController"
constexpr  Modio::Unity::UI::Panels::ModioPopupPositioning::operator ::UnityEngine::UI::ILayoutSelfController*() noexcept {
return static_cast<::UnityEngine::UI::ILayoutSelfController*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ILayoutSelfController"
constexpr ::UnityEngine::UI::ILayoutSelfController* Modio::Unity::UI::Panels::ModioPopupPositioning::i___UnityEngine__UI__ILayoutSelfController() noexcept {
return static_cast<::UnityEngine::UI::ILayoutSelfController*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
constexpr  Modio::Unity::UI::Panels::ModioPopupPositioning::operator ::UnityEngine::UI::ILayoutController*() noexcept {
return static_cast<::UnityEngine::UI::ILayoutController*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ILayoutController"
constexpr ::UnityEngine::UI::ILayoutController* Modio::Unity::UI::Panels::ModioPopupPositioning::i___UnityEngine__UI__ILayoutController() noexcept {
return static_cast<::UnityEngine::UI::ILayoutController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::ModioPopupPositioning::ModioPopupPositioning()   {
}
