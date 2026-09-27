#pragma once
// IWYU pragma private; include "Drawing/LabelAlignment.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "Drawing/zzzz__LabelAlignment_def.hpp"
//  Writing Method size for method: ::Drawing::LabelAlignment.withPixelOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Drawing::LabelAlignment (::Drawing::LabelAlignment::*)(float_t, float_t)>(&::Drawing::LabelAlignment::withPixelOffset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x55a81f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::LabelAlignment>(),
                        {"withPixelOffset", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Drawing::LabelAlignment::setStaticF_TopLeft(::Drawing::LabelAlignment  value)  {
::cordl_internals::setStaticField<::Drawing::LabelAlignment, "TopLeft", ::Drawing::LabelAlignment>(std::forward<::Drawing::LabelAlignment>(value));
}
inline ::Drawing::LabelAlignment Drawing::LabelAlignment::getStaticF_TopLeft()  {
return ::cordl_internals::getStaticField<::Drawing::LabelAlignment, "TopLeft", ::Drawing::LabelAlignment>();
}
inline void Drawing::LabelAlignment::setStaticF_MiddleLeft(::Drawing::LabelAlignment  value)  {
::cordl_internals::setStaticField<::Drawing::LabelAlignment, "MiddleLeft", ::Drawing::LabelAlignment>(std::forward<::Drawing::LabelAlignment>(value));
}
inline ::Drawing::LabelAlignment Drawing::LabelAlignment::getStaticF_MiddleLeft()  {
return ::cordl_internals::getStaticField<::Drawing::LabelAlignment, "MiddleLeft", ::Drawing::LabelAlignment>();
}
inline void Drawing::LabelAlignment::setStaticF_BottomLeft(::Drawing::LabelAlignment  value)  {
::cordl_internals::setStaticField<::Drawing::LabelAlignment, "BottomLeft", ::Drawing::LabelAlignment>(std::forward<::Drawing::LabelAlignment>(value));
}
inline ::Drawing::LabelAlignment Drawing::LabelAlignment::getStaticF_BottomLeft()  {
return ::cordl_internals::getStaticField<::Drawing::LabelAlignment, "BottomLeft", ::Drawing::LabelAlignment>();
}
inline void Drawing::LabelAlignment::setStaticF_BottomCenter(::Drawing::LabelAlignment  value)  {
::cordl_internals::setStaticField<::Drawing::LabelAlignment, "BottomCenter", ::Drawing::LabelAlignment>(std::forward<::Drawing::LabelAlignment>(value));
}
inline ::Drawing::LabelAlignment Drawing::LabelAlignment::getStaticF_BottomCenter()  {
return ::cordl_internals::getStaticField<::Drawing::LabelAlignment, "BottomCenter", ::Drawing::LabelAlignment>();
}
inline void Drawing::LabelAlignment::setStaticF_BottomRight(::Drawing::LabelAlignment  value)  {
::cordl_internals::setStaticField<::Drawing::LabelAlignment, "BottomRight", ::Drawing::LabelAlignment>(std::forward<::Drawing::LabelAlignment>(value));
}
inline ::Drawing::LabelAlignment Drawing::LabelAlignment::getStaticF_BottomRight()  {
return ::cordl_internals::getStaticField<::Drawing::LabelAlignment, "BottomRight", ::Drawing::LabelAlignment>();
}
inline void Drawing::LabelAlignment::setStaticF_MiddleRight(::Drawing::LabelAlignment  value)  {
::cordl_internals::setStaticField<::Drawing::LabelAlignment, "MiddleRight", ::Drawing::LabelAlignment>(std::forward<::Drawing::LabelAlignment>(value));
}
inline ::Drawing::LabelAlignment Drawing::LabelAlignment::getStaticF_MiddleRight()  {
return ::cordl_internals::getStaticField<::Drawing::LabelAlignment, "MiddleRight", ::Drawing::LabelAlignment>();
}
inline void Drawing::LabelAlignment::setStaticF_TopRight(::Drawing::LabelAlignment  value)  {
::cordl_internals::setStaticField<::Drawing::LabelAlignment, "TopRight", ::Drawing::LabelAlignment>(std::forward<::Drawing::LabelAlignment>(value));
}
inline ::Drawing::LabelAlignment Drawing::LabelAlignment::getStaticF_TopRight()  {
return ::cordl_internals::getStaticField<::Drawing::LabelAlignment, "TopRight", ::Drawing::LabelAlignment>();
}
inline void Drawing::LabelAlignment::setStaticF_TopCenter(::Drawing::LabelAlignment  value)  {
::cordl_internals::setStaticField<::Drawing::LabelAlignment, "TopCenter", ::Drawing::LabelAlignment>(std::forward<::Drawing::LabelAlignment>(value));
}
inline ::Drawing::LabelAlignment Drawing::LabelAlignment::getStaticF_TopCenter()  {
return ::cordl_internals::getStaticField<::Drawing::LabelAlignment, "TopCenter", ::Drawing::LabelAlignment>();
}
inline void Drawing::LabelAlignment::setStaticF_Center(::Drawing::LabelAlignment  value)  {
::cordl_internals::setStaticField<::Drawing::LabelAlignment, "Center", ::Drawing::LabelAlignment>(std::forward<::Drawing::LabelAlignment>(value));
}
inline ::Drawing::LabelAlignment Drawing::LabelAlignment::getStaticF_Center()  {
return ::cordl_internals::getStaticField<::Drawing::LabelAlignment, "Center", ::Drawing::LabelAlignment>();
}
inline ::Drawing::LabelAlignment Drawing::LabelAlignment::withPixelOffset(float_t  x, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::LabelAlignment>(),
                        {"withPixelOffset", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Drawing::LabelAlignment>(*this, ___internal_method, x, y);
}
// Ctor Parameters [CppParam { name: "relativePivot", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pixelOffset", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Drawing::LabelAlignment::LabelAlignment(::Unity::Mathematics::float2  relativePivot, ::Unity::Mathematics::float2  pixelOffset) noexcept  {
this->relativePivot = relativePivot;
this->pixelOffset = pixelOffset;
}
// Ctor Parameters []
constexpr ::Drawing::LabelAlignment::LabelAlignment()   {
}
