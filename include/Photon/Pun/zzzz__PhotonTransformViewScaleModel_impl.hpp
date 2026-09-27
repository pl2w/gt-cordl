#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonTransformViewScaleModel.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewScaleModel_InterpolateOptions_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewScaleModel_def.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewScaleModel_InterpolateOptions_def.hpp"
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewScaleModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonTransformViewScaleModel::*)()>(&::Photon::Pun::PhotonTransformViewScaleModel::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa741af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewScaleModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Photon::Pun::PhotonTransformViewScaleModel::__cordl_internal_get_SynchronizeEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SynchronizeEnabled;
}
constexpr bool const& Photon::Pun::PhotonTransformViewScaleModel::__cordl_internal_get_SynchronizeEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SynchronizeEnabled;
}
constexpr void Photon::Pun::PhotonTransformViewScaleModel::__cordl_internal_set_SynchronizeEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SynchronizeEnabled = value;
}
constexpr ::GlobalNamespace::PhotonTransformViewScaleModel_InterpolateOptions& Photon::Pun::PhotonTransformViewScaleModel::__cordl_internal_get_InterpolateOption()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InterpolateOption;
}
constexpr ::GlobalNamespace::PhotonTransformViewScaleModel_InterpolateOptions const& Photon::Pun::PhotonTransformViewScaleModel::__cordl_internal_get_InterpolateOption() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InterpolateOption;
}
constexpr void Photon::Pun::PhotonTransformViewScaleModel::__cordl_internal_set_InterpolateOption(::GlobalNamespace::PhotonTransformViewScaleModel_InterpolateOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InterpolateOption = value;
}
constexpr float_t& Photon::Pun::PhotonTransformViewScaleModel::__cordl_internal_get_InterpolateMoveTowardsSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InterpolateMoveTowardsSpeed;
}
constexpr float_t const& Photon::Pun::PhotonTransformViewScaleModel::__cordl_internal_get_InterpolateMoveTowardsSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InterpolateMoveTowardsSpeed;
}
constexpr void Photon::Pun::PhotonTransformViewScaleModel::__cordl_internal_set_InterpolateMoveTowardsSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InterpolateMoveTowardsSpeed = value;
}
constexpr float_t& Photon::Pun::PhotonTransformViewScaleModel::__cordl_internal_get_InterpolateLerpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InterpolateLerpSpeed;
}
constexpr float_t const& Photon::Pun::PhotonTransformViewScaleModel::__cordl_internal_get_InterpolateLerpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InterpolateLerpSpeed;
}
constexpr void Photon::Pun::PhotonTransformViewScaleModel::__cordl_internal_set_InterpolateLerpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InterpolateLerpSpeed = value;
}
inline void Photon::Pun::PhotonTransformViewScaleModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewScaleModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::PhotonTransformViewScaleModel* Photon::Pun::PhotonTransformViewScaleModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonTransformViewScaleModel*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonTransformViewScaleModel::PhotonTransformViewScaleModel()   {
}
