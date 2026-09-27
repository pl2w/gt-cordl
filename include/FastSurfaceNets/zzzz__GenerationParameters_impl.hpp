#pragma once
// IWYU pragma private; include "FastSurfaceNets/GenerationParameters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__int3_impl.hpp"
#include "FastSurfaceNets/zzzz__GenerationParameters_def.hpp"
//  Writing Method size for method: ::FastSurfaceNets::GenerationParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::FastSurfaceNets::GenerationParameters::*)()>(&::FastSurfaceNets::GenerationParameters::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5daacf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::GenerationParameters*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& FastSurfaceNets::GenerationParameters::__cordl_internal_get_recalculateNormals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recalculateNormals;
}
constexpr bool const& FastSurfaceNets::GenerationParameters::__cordl_internal_get_recalculateNormals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recalculateNormals;
}
constexpr void FastSurfaceNets::GenerationParameters::__cordl_internal_set_recalculateNormals(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recalculateNormals = value;
}
constexpr bool& FastSurfaceNets::GenerationParameters::__cordl_internal_get_customNormals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customNormals;
}
constexpr bool const& FastSurfaceNets::GenerationParameters::__cordl_internal_get_customNormals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customNormals;
}
constexpr void FastSurfaceNets::GenerationParameters::__cordl_internal_set_customNormals(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customNormals = value;
}
constexpr bool& FastSurfaceNets::GenerationParameters::__cordl_internal_get_useBurst()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useBurst;
}
constexpr bool const& FastSurfaceNets::GenerationParameters::__cordl_internal_get_useBurst() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useBurst;
}
constexpr void FastSurfaceNets::GenerationParameters::__cordl_internal_set_useBurst(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useBurst = value;
}
constexpr float_t& FastSurfaceNets::GenerationParameters::__cordl_internal_get_normalThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalThreshold;
}
constexpr float_t const& FastSurfaceNets::GenerationParameters::__cordl_internal_get_normalThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalThreshold;
}
constexpr void FastSurfaceNets::GenerationParameters::__cordl_internal_set_normalThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normalThreshold = value;
}
constexpr bool& FastSurfaceNets::GenerationParameters::__cordl_internal_get_areaWeightedNormals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___areaWeightedNormals;
}
constexpr bool const& FastSurfaceNets::GenerationParameters::__cordl_internal_get_areaWeightedNormals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___areaWeightedNormals;
}
constexpr void FastSurfaceNets::GenerationParameters::__cordl_internal_set_areaWeightedNormals(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___areaWeightedNormals = value;
}
constexpr bool& FastSurfaceNets::GenerationParameters::__cordl_internal_get_generateShape()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___generateShape;
}
constexpr bool const& FastSurfaceNets::GenerationParameters::__cordl_internal_get_generateShape() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___generateShape;
}
constexpr void FastSurfaceNets::GenerationParameters::__cordl_internal_set_generateShape(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___generateShape = value;
}
constexpr ::Unity::Mathematics::int3& FastSurfaceNets::GenerationParameters::__cordl_internal_get_shapeMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shapeMin;
}
constexpr ::Unity::Mathematics::int3 const& FastSurfaceNets::GenerationParameters::__cordl_internal_get_shapeMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shapeMin;
}
constexpr void FastSurfaceNets::GenerationParameters::__cordl_internal_set_shapeMin(::Unity::Mathematics::int3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shapeMin = value;
}
constexpr ::Unity::Mathematics::int3& FastSurfaceNets::GenerationParameters::__cordl_internal_get_shapeMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shapeMax;
}
constexpr ::Unity::Mathematics::int3 const& FastSurfaceNets::GenerationParameters::__cordl_internal_get_shapeMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shapeMax;
}
constexpr void FastSurfaceNets::GenerationParameters::__cordl_internal_set_shapeMax(::Unity::Mathematics::int3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shapeMax = value;
}
constexpr float_t& FastSurfaceNets::GenerationParameters::__cordl_internal_get_noiseScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseScale;
}
constexpr float_t const& FastSurfaceNets::GenerationParameters::__cordl_internal_get_noiseScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseScale;
}
constexpr void FastSurfaceNets::GenerationParameters::__cordl_internal_set_noiseScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noiseScale = value;
}
constexpr float_t& FastSurfaceNets::GenerationParameters::__cordl_internal_get_baseHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseHeight;
}
constexpr float_t const& FastSurfaceNets::GenerationParameters::__cordl_internal_get_baseHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseHeight;
}
constexpr void FastSurfaceNets::GenerationParameters::__cordl_internal_set_baseHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseHeight = value;
}
constexpr float_t& FastSurfaceNets::GenerationParameters::__cordl_internal_get_heightScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightScale;
}
constexpr float_t const& FastSurfaceNets::GenerationParameters::__cordl_internal_get_heightScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightScale;
}
constexpr void FastSurfaceNets::GenerationParameters::__cordl_internal_set_heightScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightScale = value;
}
inline void FastSurfaceNets::GenerationParameters::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::GenerationParameters*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::FastSurfaceNets::GenerationParameters* FastSurfaceNets::GenerationParameters::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::FastSurfaceNets::GenerationParameters*>());
}
// Ctor Parameters []
constexpr ::FastSurfaceNets::GenerationParameters::GenerationParameters()   {
}
