#pragma once
// IWYU pragma private; include "Liv/Lck/UI/LckButtonColors.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Liv/Lck/UI/zzzz__LckButtonColors_def.hpp"
//  Writing Method size for method: ::Liv::Lck::UI::LckButtonColors._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::UI::LckButtonColors::*)()>(&::Liv::Lck::UI::LckButtonColors::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d4e840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButtonColors*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& Liv::Lck::UI::LckButtonColors::__cordl_internal_get_NormalColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NormalColor;
}
constexpr ::UnityEngine::Color const& Liv::Lck::UI::LckButtonColors::__cordl_internal_get_NormalColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NormalColor;
}
constexpr void Liv::Lck::UI::LckButtonColors::__cordl_internal_set_NormalColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NormalColor = value;
}
constexpr ::UnityEngine::Color& Liv::Lck::UI::LckButtonColors::__cordl_internal_get_HighlightedColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HighlightedColor;
}
constexpr ::UnityEngine::Color const& Liv::Lck::UI::LckButtonColors::__cordl_internal_get_HighlightedColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HighlightedColor;
}
constexpr void Liv::Lck::UI::LckButtonColors::__cordl_internal_set_HighlightedColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HighlightedColor = value;
}
constexpr ::UnityEngine::Color& Liv::Lck::UI::LckButtonColors::__cordl_internal_get_PressedColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PressedColor;
}
constexpr ::UnityEngine::Color const& Liv::Lck::UI::LckButtonColors::__cordl_internal_get_PressedColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PressedColor;
}
constexpr void Liv::Lck::UI::LckButtonColors::__cordl_internal_set_PressedColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PressedColor = value;
}
constexpr ::UnityEngine::Color& Liv::Lck::UI::LckButtonColors::__cordl_internal_get_SelectedColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedColor;
}
constexpr ::UnityEngine::Color const& Liv::Lck::UI::LckButtonColors::__cordl_internal_get_SelectedColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedColor;
}
constexpr void Liv::Lck::UI::LckButtonColors::__cordl_internal_set_SelectedColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SelectedColor = value;
}
constexpr ::UnityEngine::Color& Liv::Lck::UI::LckButtonColors::__cordl_internal_get_DisabledColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisabledColor;
}
constexpr ::UnityEngine::Color const& Liv::Lck::UI::LckButtonColors::__cordl_internal_get_DisabledColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisabledColor;
}
constexpr void Liv::Lck::UI::LckButtonColors::__cordl_internal_set_DisabledColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisabledColor = value;
}
inline void Liv::Lck::UI::LckButtonColors::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::UI::LckButtonColors*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::UI::LckButtonColors* Liv::Lck::UI::LckButtonColors::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::UI::LckButtonColors*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::UI::LckButtonColors::LckButtonColors()   {
}
