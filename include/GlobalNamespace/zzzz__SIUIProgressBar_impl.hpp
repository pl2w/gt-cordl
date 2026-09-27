#pragma once
// IWYU pragma private; include "GlobalNamespace/SIUIProgressBar.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIUIProgressBar_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIUIProgressBar.UpdateFillPercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIUIProgressBar::*)(float_t)>(&::GlobalNamespace::SIUIProgressBar::UpdateFillPercent)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5af7728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUIProgressBar*>(),
                        {"UpdateFillPercent", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIUIProgressBar._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIUIProgressBar::*)()>(&::GlobalNamespace::SIUIProgressBar::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af7da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUIProgressBar*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::SIUIProgressBar::__cordl_internal_get_backgroundImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backgroundImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::SIUIProgressBar::__cordl_internal_get_backgroundImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backgroundImage;
}
constexpr void GlobalNamespace::SIUIProgressBar::__cordl_internal_set_backgroundImage(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backgroundImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::SIUIProgressBar::__cordl_internal_get_progressImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::SIUIProgressBar::__cordl_internal_get_progressImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressImage;
}
constexpr void GlobalNamespace::SIUIProgressBar::__cordl_internal_set_progressImage(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressImage = value;
}
constexpr float_t& GlobalNamespace::SIUIProgressBar::__cordl_internal_get_borderPercent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___borderPercent;
}
constexpr float_t const& GlobalNamespace::SIUIProgressBar::__cordl_internal_get_borderPercent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___borderPercent;
}
constexpr void GlobalNamespace::SIUIProgressBar::__cordl_internal_set_borderPercent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___borderPercent = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SIUIProgressBar::__cordl_internal_get_progressText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SIUIProgressBar::__cordl_internal_get_progressText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressText;
}
constexpr void GlobalNamespace::SIUIProgressBar::__cordl_internal_set_progressText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressText = value;
}
inline void GlobalNamespace::SIUIProgressBar::UpdateFillPercent(float_t  percentFull)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUIProgressBar*>(),
                        {"UpdateFillPercent", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, percentFull);
}
inline void GlobalNamespace::SIUIProgressBar::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUIProgressBar*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIUIProgressBar* GlobalNamespace::SIUIProgressBar::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIUIProgressBar*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIUIProgressBar::SIUIProgressBar()   {
}
