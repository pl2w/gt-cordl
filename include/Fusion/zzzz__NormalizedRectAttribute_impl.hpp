#pragma once
// IWYU pragma private; include "Fusion/NormalizedRectAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Fusion/zzzz__NormalizedRectAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::NormalizedRectAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NormalizedRectAttribute::*)(bool, float_t)>(&::Fusion::NormalizedRectAttribute::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f70328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NormalizedRectAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Fusion::NormalizedRectAttribute::__cordl_internal_get_InvertY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InvertY;
}
constexpr bool const& Fusion::NormalizedRectAttribute::__cordl_internal_get_InvertY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InvertY;
}
constexpr void Fusion::NormalizedRectAttribute::__cordl_internal_set_InvertY(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InvertY = value;
}
constexpr float_t& Fusion::NormalizedRectAttribute::__cordl_internal_get_AspectRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AspectRatio;
}
constexpr float_t const& Fusion::NormalizedRectAttribute::__cordl_internal_get_AspectRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AspectRatio;
}
constexpr void Fusion::NormalizedRectAttribute::__cordl_internal_set_AspectRatio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AspectRatio = value;
}
inline void Fusion::NormalizedRectAttribute::_ctor(bool  invertY, float_t  aspectRatio)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NormalizedRectAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, invertY, aspectRatio);
}
inline ::Fusion::NormalizedRectAttribute* Fusion::NormalizedRectAttribute::New_ctor(bool  invertY, float_t  aspectRatio)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NormalizedRectAttribute*>(invertY, aspectRatio));
}
// Ctor Parameters []
constexpr ::Fusion::NormalizedRectAttribute::NormalizedRectAttribute()   {
}
