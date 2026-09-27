#pragma once
// IWYU pragma private; include "Drawing/Palette.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Drawing/zzzz__Palette_def.hpp"
#include "Drawing/zzzz__Palette_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
// Ctor Parameters []
constexpr ::Drawing::Palette::Palette()   {
}
// Ctor Parameters []
constexpr ::Drawing::Palette_Colorbrewer::Palette_Colorbrewer()   {
}
//  Writing Method size for method: ::Drawing::Colorbrewer_Palette_Blues.GetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(int32_t, int32_t)>(&::Drawing::Colorbrewer_Palette_Blues::GetColor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x55da710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Colorbrewer_Palette_Blues*>(),
                        {"GetColor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Drawing::Colorbrewer_Palette_Blues::setStaticF_Colors(::ArrayW<::UnityEngine::Color>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Color>, "Colors", ::Drawing::Colorbrewer_Palette_Blues*>(std::forward<::ArrayW<::UnityEngine::Color>>(value));
}
inline ::ArrayW<::UnityEngine::Color> Drawing::Colorbrewer_Palette_Blues::getStaticF_Colors()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Color>, "Colors", ::Drawing::Colorbrewer_Palette_Blues*>();
}
inline ::UnityEngine::Color Drawing::Colorbrewer_Palette_Blues::GetColor(int32_t  classes, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Colorbrewer_Palette_Blues*>(),
                        {"GetColor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, classes, index);
}
// Ctor Parameters []
constexpr ::Drawing::Colorbrewer_Palette_Blues::Colorbrewer_Palette_Blues()   {
}
inline void Drawing::Colorbrewer_Palette_Set1::setStaticF_Red(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "Red", ::Drawing::Colorbrewer_Palette_Set1*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Drawing::Colorbrewer_Palette_Set1::getStaticF_Red()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "Red", ::Drawing::Colorbrewer_Palette_Set1*>();
}
inline void Drawing::Colorbrewer_Palette_Set1::setStaticF_Blue(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "Blue", ::Drawing::Colorbrewer_Palette_Set1*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Drawing::Colorbrewer_Palette_Set1::getStaticF_Blue()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "Blue", ::Drawing::Colorbrewer_Palette_Set1*>();
}
inline void Drawing::Colorbrewer_Palette_Set1::setStaticF_Green(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "Green", ::Drawing::Colorbrewer_Palette_Set1*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Drawing::Colorbrewer_Palette_Set1::getStaticF_Green()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "Green", ::Drawing::Colorbrewer_Palette_Set1*>();
}
inline void Drawing::Colorbrewer_Palette_Set1::setStaticF_Purple(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "Purple", ::Drawing::Colorbrewer_Palette_Set1*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Drawing::Colorbrewer_Palette_Set1::getStaticF_Purple()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "Purple", ::Drawing::Colorbrewer_Palette_Set1*>();
}
inline void Drawing::Colorbrewer_Palette_Set1::setStaticF_Orange(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "Orange", ::Drawing::Colorbrewer_Palette_Set1*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Drawing::Colorbrewer_Palette_Set1::getStaticF_Orange()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "Orange", ::Drawing::Colorbrewer_Palette_Set1*>();
}
inline void Drawing::Colorbrewer_Palette_Set1::setStaticF_Yellow(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "Yellow", ::Drawing::Colorbrewer_Palette_Set1*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Drawing::Colorbrewer_Palette_Set1::getStaticF_Yellow()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "Yellow", ::Drawing::Colorbrewer_Palette_Set1*>();
}
inline void Drawing::Colorbrewer_Palette_Set1::setStaticF_Brown(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "Brown", ::Drawing::Colorbrewer_Palette_Set1*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Drawing::Colorbrewer_Palette_Set1::getStaticF_Brown()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "Brown", ::Drawing::Colorbrewer_Palette_Set1*>();
}
inline void Drawing::Colorbrewer_Palette_Set1::setStaticF_Pink(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "Pink", ::Drawing::Colorbrewer_Palette_Set1*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Drawing::Colorbrewer_Palette_Set1::getStaticF_Pink()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "Pink", ::Drawing::Colorbrewer_Palette_Set1*>();
}
inline void Drawing::Colorbrewer_Palette_Set1::setStaticF_Grey(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "Grey", ::Drawing::Colorbrewer_Palette_Set1*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Drawing::Colorbrewer_Palette_Set1::getStaticF_Grey()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "Grey", ::Drawing::Colorbrewer_Palette_Set1*>();
}
// Ctor Parameters []
constexpr ::Drawing::Colorbrewer_Palette_Set1::Colorbrewer_Palette_Set1()   {
}
inline void Drawing::Palette_Pure::setStaticF_Yellow(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "Yellow", ::Drawing::Palette_Pure*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Drawing::Palette_Pure::getStaticF_Yellow()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "Yellow", ::Drawing::Palette_Pure*>();
}
inline void Drawing::Palette_Pure::setStaticF_Clear(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "Clear", ::Drawing::Palette_Pure*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Drawing::Palette_Pure::getStaticF_Clear()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "Clear", ::Drawing::Palette_Pure*>();
}
inline void Drawing::Palette_Pure::setStaticF_Grey(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "Grey", ::Drawing::Palette_Pure*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Drawing::Palette_Pure::getStaticF_Grey()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "Grey", ::Drawing::Palette_Pure*>();
}
inline void Drawing::Palette_Pure::setStaticF_Magenta(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "Magenta", ::Drawing::Palette_Pure*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Drawing::Palette_Pure::getStaticF_Magenta()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "Magenta", ::Drawing::Palette_Pure*>();
}
inline void Drawing::Palette_Pure::setStaticF_Cyan(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "Cyan", ::Drawing::Palette_Pure*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Drawing::Palette_Pure::getStaticF_Cyan()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "Cyan", ::Drawing::Palette_Pure*>();
}
inline void Drawing::Palette_Pure::setStaticF_Red(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "Red", ::Drawing::Palette_Pure*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Drawing::Palette_Pure::getStaticF_Red()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "Red", ::Drawing::Palette_Pure*>();
}
inline void Drawing::Palette_Pure::setStaticF_Black(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "Black", ::Drawing::Palette_Pure*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Drawing::Palette_Pure::getStaticF_Black()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "Black", ::Drawing::Palette_Pure*>();
}
inline void Drawing::Palette_Pure::setStaticF_White(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "White", ::Drawing::Palette_Pure*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Drawing::Palette_Pure::getStaticF_White()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "White", ::Drawing::Palette_Pure*>();
}
inline void Drawing::Palette_Pure::setStaticF_Blue(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "Blue", ::Drawing::Palette_Pure*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Drawing::Palette_Pure::getStaticF_Blue()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "Blue", ::Drawing::Palette_Pure*>();
}
inline void Drawing::Palette_Pure::setStaticF_Green(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "Green", ::Drawing::Palette_Pure*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Drawing::Palette_Pure::getStaticF_Green()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "Green", ::Drawing::Palette_Pure*>();
}
// Ctor Parameters []
constexpr ::Drawing::Palette_Pure::Palette_Pure()   {
}
