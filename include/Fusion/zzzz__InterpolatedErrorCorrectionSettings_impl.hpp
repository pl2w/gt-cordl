#pragma once
// IWYU pragma private; include "Fusion/InterpolatedErrorCorrectionSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__InterpolatedErrorCorrectionSettings_def.hpp"
//  Writing Method size for method: ::Fusion::InterpolatedErrorCorrectionSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::InterpolatedErrorCorrectionSettings::*)()>(&::Fusion::InterpolatedErrorCorrectionSettings::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5fa06c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::InterpolatedErrorCorrectionSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_get_MinRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinRate;
}
constexpr float_t const& Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_get_MinRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinRate;
}
constexpr void Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_set_MinRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinRate = value;
}
constexpr float_t& Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_get_MaxRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxRate;
}
constexpr float_t const& Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_get_MaxRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxRate;
}
constexpr void Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_set_MaxRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxRate = value;
}
constexpr float_t& Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_get_PosBlendStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PosBlendStart;
}
constexpr float_t const& Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_get_PosBlendStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PosBlendStart;
}
constexpr void Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_set_PosBlendStart(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PosBlendStart = value;
}
constexpr float_t& Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_get_PosBlendEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PosBlendEnd;
}
constexpr float_t const& Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_get_PosBlendEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PosBlendEnd;
}
constexpr void Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_set_PosBlendEnd(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PosBlendEnd = value;
}
constexpr float_t& Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_get_PosMinCorrection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PosMinCorrection;
}
constexpr float_t const& Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_get_PosMinCorrection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PosMinCorrection;
}
constexpr void Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_set_PosMinCorrection(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PosMinCorrection = value;
}
constexpr float_t& Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_get_PosTeleportDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PosTeleportDistance;
}
constexpr float_t const& Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_get_PosTeleportDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PosTeleportDistance;
}
constexpr void Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_set_PosTeleportDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PosTeleportDistance = value;
}
constexpr float_t& Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_get_RotBlendStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotBlendStart;
}
constexpr float_t const& Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_get_RotBlendStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotBlendStart;
}
constexpr void Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_set_RotBlendStart(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RotBlendStart = value;
}
constexpr float_t& Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_get_RotBlendEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotBlendEnd;
}
constexpr float_t const& Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_get_RotBlendEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotBlendEnd;
}
constexpr void Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_set_RotBlendEnd(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RotBlendEnd = value;
}
constexpr float_t& Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_get_RotTeleportRadians()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotTeleportRadians;
}
constexpr float_t const& Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_get_RotTeleportRadians() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotTeleportRadians;
}
constexpr void Fusion::InterpolatedErrorCorrectionSettings::__cordl_internal_set_RotTeleportRadians(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RotTeleportRadians = value;
}
inline void Fusion::InterpolatedErrorCorrectionSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::InterpolatedErrorCorrectionSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::InterpolatedErrorCorrectionSettings* Fusion::InterpolatedErrorCorrectionSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::InterpolatedErrorCorrectionSettings*>());
}
// Ctor Parameters []
constexpr ::Fusion::InterpolatedErrorCorrectionSettings::InterpolatedErrorCorrectionSettings()   {
}
