#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonTransformViewPositionModel.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewPositionModel_ExtrapolateOptions_impl.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewPositionModel_InterpolateOptions_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewPositionModel_def.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewPositionModel_ExtrapolateOptions_def.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewPositionModel_InterpolateOptions_def.hpp"
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewPositionModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonTransformViewPositionModel::*)()>(&::Photon::Pun::PhotonTransformViewPositionModel::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa741aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewPositionModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_SynchronizeEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SynchronizeEnabled;
}
constexpr bool const& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_SynchronizeEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SynchronizeEnabled;
}
constexpr void Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_set_SynchronizeEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SynchronizeEnabled = value;
}
constexpr bool& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_TeleportEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TeleportEnabled;
}
constexpr bool const& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_TeleportEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TeleportEnabled;
}
constexpr void Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_set_TeleportEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TeleportEnabled = value;
}
constexpr float_t& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_TeleportIfDistanceGreaterThan()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TeleportIfDistanceGreaterThan;
}
constexpr float_t const& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_TeleportIfDistanceGreaterThan() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TeleportIfDistanceGreaterThan;
}
constexpr void Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_set_TeleportIfDistanceGreaterThan(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TeleportIfDistanceGreaterThan = value;
}
constexpr ::GlobalNamespace::PhotonTransformViewPositionModel_InterpolateOptions& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_InterpolateOption()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InterpolateOption;
}
constexpr ::GlobalNamespace::PhotonTransformViewPositionModel_InterpolateOptions const& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_InterpolateOption() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InterpolateOption;
}
constexpr void Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_set_InterpolateOption(::GlobalNamespace::PhotonTransformViewPositionModel_InterpolateOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InterpolateOption = value;
}
constexpr float_t& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_InterpolateMoveTowardsSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InterpolateMoveTowardsSpeed;
}
constexpr float_t const& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_InterpolateMoveTowardsSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InterpolateMoveTowardsSpeed;
}
constexpr void Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_set_InterpolateMoveTowardsSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InterpolateMoveTowardsSpeed = value;
}
constexpr float_t& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_InterpolateLerpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InterpolateLerpSpeed;
}
constexpr float_t const& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_InterpolateLerpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InterpolateLerpSpeed;
}
constexpr void Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_set_InterpolateLerpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InterpolateLerpSpeed = value;
}
constexpr ::GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_ExtrapolateOption()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExtrapolateOption;
}
constexpr ::GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions const& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_ExtrapolateOption() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExtrapolateOption;
}
constexpr void Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_set_ExtrapolateOption(::GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExtrapolateOption = value;
}
constexpr float_t& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_ExtrapolateSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExtrapolateSpeed;
}
constexpr float_t const& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_ExtrapolateSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExtrapolateSpeed;
}
constexpr void Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_set_ExtrapolateSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExtrapolateSpeed = value;
}
constexpr bool& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_ExtrapolateIncludingRoundTripTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExtrapolateIncludingRoundTripTime;
}
constexpr bool const& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_ExtrapolateIncludingRoundTripTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExtrapolateIncludingRoundTripTime;
}
constexpr void Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_set_ExtrapolateIncludingRoundTripTime(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExtrapolateIncludingRoundTripTime = value;
}
constexpr int32_t& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_ExtrapolateNumberOfStoredPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExtrapolateNumberOfStoredPositions;
}
constexpr int32_t const& Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_get_ExtrapolateNumberOfStoredPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExtrapolateNumberOfStoredPositions;
}
constexpr void Photon::Pun::PhotonTransformViewPositionModel::__cordl_internal_set_ExtrapolateNumberOfStoredPositions(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExtrapolateNumberOfStoredPositions = value;
}
inline void Photon::Pun::PhotonTransformViewPositionModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewPositionModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::PhotonTransformViewPositionModel* Photon::Pun::PhotonTransformViewPositionModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonTransformViewPositionModel*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonTransformViewPositionModel::PhotonTransformViewPositionModel()   {
}
