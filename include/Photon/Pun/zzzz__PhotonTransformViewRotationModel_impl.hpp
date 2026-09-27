#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonTransformViewRotationModel.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewRotationModel_InterpolateOptions_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewRotationModel_def.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewRotationModel_InterpolateOptions_def.hpp"
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewRotationModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonTransformViewRotationModel::*)()>(&::Photon::Pun::PhotonTransformViewRotationModel::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa741ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewRotationModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Photon::Pun::PhotonTransformViewRotationModel::__cordl_internal_get_SynchronizeEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SynchronizeEnabled;
}
constexpr bool const& Photon::Pun::PhotonTransformViewRotationModel::__cordl_internal_get_SynchronizeEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SynchronizeEnabled;
}
constexpr void Photon::Pun::PhotonTransformViewRotationModel::__cordl_internal_set_SynchronizeEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SynchronizeEnabled = value;
}
constexpr ::GlobalNamespace::PhotonTransformViewRotationModel_InterpolateOptions& Photon::Pun::PhotonTransformViewRotationModel::__cordl_internal_get_InterpolateOption()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InterpolateOption;
}
constexpr ::GlobalNamespace::PhotonTransformViewRotationModel_InterpolateOptions const& Photon::Pun::PhotonTransformViewRotationModel::__cordl_internal_get_InterpolateOption() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InterpolateOption;
}
constexpr void Photon::Pun::PhotonTransformViewRotationModel::__cordl_internal_set_InterpolateOption(::GlobalNamespace::PhotonTransformViewRotationModel_InterpolateOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InterpolateOption = value;
}
constexpr float_t& Photon::Pun::PhotonTransformViewRotationModel::__cordl_internal_get_InterpolateRotateTowardsSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InterpolateRotateTowardsSpeed;
}
constexpr float_t const& Photon::Pun::PhotonTransformViewRotationModel::__cordl_internal_get_InterpolateRotateTowardsSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InterpolateRotateTowardsSpeed;
}
constexpr void Photon::Pun::PhotonTransformViewRotationModel::__cordl_internal_set_InterpolateRotateTowardsSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InterpolateRotateTowardsSpeed = value;
}
constexpr float_t& Photon::Pun::PhotonTransformViewRotationModel::__cordl_internal_get_InterpolateLerpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InterpolateLerpSpeed;
}
constexpr float_t const& Photon::Pun::PhotonTransformViewRotationModel::__cordl_internal_get_InterpolateLerpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InterpolateLerpSpeed;
}
constexpr void Photon::Pun::PhotonTransformViewRotationModel::__cordl_internal_set_InterpolateLerpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InterpolateLerpSpeed = value;
}
inline void Photon::Pun::PhotonTransformViewRotationModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewRotationModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::PhotonTransformViewRotationModel* Photon::Pun::PhotonTransformViewRotationModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonTransformViewRotationModel*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonTransformViewRotationModel::PhotonTransformViewRotationModel()   {
}
