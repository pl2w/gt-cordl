#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressBar.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ProgressBar_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProgressBar.UpdateProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressBar::*)(float_t)>(&::GlobalNamespace::ProgressBar::UpdateProgress)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x596e658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressBar*>(),
                        {"UpdateProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressBar._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressBar::*)()>(&::GlobalNamespace::ProgressBar::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x596e784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressBar*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::ProgressBar::__cordl_internal_get_fillImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fillImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::ProgressBar::__cordl_internal_get_fillImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fillImage;
}
constexpr void GlobalNamespace::ProgressBar::__cordl_internal_set_fillImage(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fillImage = value;
}
constexpr bool& GlobalNamespace::ProgressBar::__cordl_internal_get_useColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useColors;
}
constexpr bool const& GlobalNamespace::ProgressBar::__cordl_internal_get_useColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useColors;
}
constexpr void GlobalNamespace::ProgressBar::__cordl_internal_set_useColors(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useColors = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ProgressBar::__cordl_internal_get_underCapacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___underCapacity;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ProgressBar::__cordl_internal_get_underCapacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___underCapacity;
}
constexpr void GlobalNamespace::ProgressBar::__cordl_internal_set_underCapacity(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___underCapacity = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ProgressBar::__cordl_internal_get_overCapacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overCapacity;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ProgressBar::__cordl_internal_get_overCapacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overCapacity;
}
constexpr void GlobalNamespace::ProgressBar::__cordl_internal_set_overCapacity(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overCapacity = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::ProgressBar::__cordl_internal_get_atCapacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atCapacity;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::ProgressBar::__cordl_internal_get_atCapacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atCapacity;
}
constexpr void GlobalNamespace::ProgressBar::__cordl_internal_set_atCapacity(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atCapacity = value;
}
constexpr float_t& GlobalNamespace::ProgressBar::__cordl_internal_get__fillAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fillAmount;
}
constexpr float_t const& GlobalNamespace::ProgressBar::__cordl_internal_get__fillAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fillAmount;
}
constexpr void GlobalNamespace::ProgressBar::__cordl_internal_set__fillAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fillAmount = value;
}
inline void GlobalNamespace::ProgressBar::UpdateProgress(float_t  newFill)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressBar*>(),
                        {"UpdateProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newFill);
}
inline void GlobalNamespace::ProgressBar::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressBar*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressBar* GlobalNamespace::ProgressBar::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressBar*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressBar::ProgressBar()   {
}
