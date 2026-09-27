#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonTransformViewPositionControl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewPositionControl_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewPositionModel_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewPositionControl._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonTransformViewPositionControl::*)(::Photon::Pun::PhotonTransformViewPositionModel*)>(&::Photon::Pun::PhotonTransformViewPositionControl::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa740858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewPositionControl*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Pun::PhotonTransformViewPositionModel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewPositionControl.GetOldestStoredNetworkPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Photon::Pun::PhotonTransformViewPositionControl::*)()>(&::Photon::Pun::PhotonTransformViewPositionControl::GetOldestStoredNetworkPosition)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa741b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewPositionControl*>(),
                        {"GetOldestStoredNetworkPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewPositionControl.SetSynchronizedValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonTransformViewPositionControl::*)(::UnityEngine::Vector3, float_t)>(&::Photon::Pun::PhotonTransformViewPositionControl::SetSynchronizedValues)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa741504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewPositionControl*>(),
                        {"SetSynchronizedValues", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewPositionControl.UpdatePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Photon::Pun::PhotonTransformViewPositionControl::*)(::UnityEngine::Vector3)>(&::Photon::Pun::PhotonTransformViewPositionControl::UpdatePosition)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0xa740c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewPositionControl*>(),
                        {"UpdatePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewPositionControl.GetNetworkPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Photon::Pun::PhotonTransformViewPositionControl::*)()>(&::Photon::Pun::PhotonTransformViewPositionControl::GetNetworkPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa741e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewPositionControl*>(),
                        {"GetNetworkPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewPositionControl.GetExtrapolatedPositionOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Photon::Pun::PhotonTransformViewPositionControl::*)()>(&::Photon::Pun::PhotonTransformViewPositionControl::GetExtrapolatedPositionOffset)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0xa741b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewPositionControl*>(),
                        {"GetExtrapolatedPositionOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewPositionControl.OnPhotonSerializeView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonTransformViewPositionControl::*)(::UnityEngine::Vector3, ::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Photon::Pun::PhotonTransformViewPositionControl::OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa7416b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewPositionControl*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewPositionControl.SerializeData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonTransformViewPositionControl::*)(::UnityEngine::Vector3, ::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Photon::Pun::PhotonTransformViewPositionControl::SerializeData)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa741e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewPositionControl*>(),
                        {"SerializeData", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewPositionControl.DeserializeData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonTransformViewPositionControl::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Photon::Pun::PhotonTransformViewPositionControl::DeserializeData)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xa741f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewPositionControl*>(),
                        {"DeserializeData", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Pun::PhotonTransformViewPositionModel*& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_Model()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Model;
}
constexpr ::Photon::Pun::PhotonTransformViewPositionModel* const& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_Model() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Model;
}
constexpr void Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_set_m_Model(::Photon::Pun::PhotonTransformViewPositionModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Model = value;
}
constexpr float_t& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_CurrentSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentSpeed;
}
constexpr float_t const& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_CurrentSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentSpeed;
}
constexpr void Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_set_m_CurrentSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentSpeed = value;
}
constexpr double_t& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_LastSerializeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastSerializeTime;
}
constexpr double_t const& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_LastSerializeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastSerializeTime;
}
constexpr void Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_set_m_LastSerializeTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastSerializeTime = value;
}
constexpr ::UnityEngine::Vector3& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_SynchronizedSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizedSpeed;
}
constexpr ::UnityEngine::Vector3 const& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_SynchronizedSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizedSpeed;
}
constexpr void Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_set_m_SynchronizedSpeed(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SynchronizedSpeed = value;
}
constexpr float_t& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_SynchronizedTurnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizedTurnSpeed;
}
constexpr float_t const& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_SynchronizedTurnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronizedTurnSpeed;
}
constexpr void Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_set_m_SynchronizedTurnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SynchronizedTurnSpeed = value;
}
constexpr ::UnityEngine::Vector3& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_NetworkPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetworkPosition;
}
constexpr ::UnityEngine::Vector3 const& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_NetworkPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetworkPosition;
}
constexpr void Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_set_m_NetworkPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NetworkPosition = value;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::Vector3>*& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_OldNetworkPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OldNetworkPositions;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::Vector3>* const& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_OldNetworkPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OldNetworkPositions;
}
constexpr void Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_set_m_OldNetworkPositions(::System::Collections::Generic::Queue_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OldNetworkPositions = value;
}
constexpr bool& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_UpdatedPositionAfterOnSerialize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdatedPositionAfterOnSerialize;
}
constexpr bool const& Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_get_m_UpdatedPositionAfterOnSerialize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdatedPositionAfterOnSerialize;
}
constexpr void Photon::Pun::PhotonTransformViewPositionControl::__cordl_internal_set_m_UpdatedPositionAfterOnSerialize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UpdatedPositionAfterOnSerialize = value;
}
inline void Photon::Pun::PhotonTransformViewPositionControl::_ctor(::Photon::Pun::PhotonTransformViewPositionModel*  model)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewPositionControl*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Pun::PhotonTransformViewPositionModel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, model);
}
inline ::UnityEngine::Vector3 Photon::Pun::PhotonTransformViewPositionControl::GetOldestStoredNetworkPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewPositionControl*>(),
                        {"GetOldestStoredNetworkPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Photon::Pun::PhotonTransformViewPositionControl::SetSynchronizedValues(::UnityEngine::Vector3  speed, float_t  turnSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewPositionControl*>(),
                        {"SetSynchronizedValues", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speed, turnSpeed);
}
inline ::UnityEngine::Vector3 Photon::Pun::PhotonTransformViewPositionControl::UpdatePosition(::UnityEngine::Vector3  currentPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewPositionControl*>(),
                        {"UpdatePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, currentPosition);
}
inline ::UnityEngine::Vector3 Photon::Pun::PhotonTransformViewPositionControl::GetNetworkPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewPositionControl*>(),
                        {"GetNetworkPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Photon::Pun::PhotonTransformViewPositionControl::GetExtrapolatedPositionOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewPositionControl*>(),
                        {"GetExtrapolatedPositionOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Photon::Pun::PhotonTransformViewPositionControl::OnPhotonSerializeView(::UnityEngine::Vector3  currentPosition, ::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewPositionControl*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentPosition, stream, info);
}
inline void Photon::Pun::PhotonTransformViewPositionControl::SerializeData(::UnityEngine::Vector3  currentPosition, ::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewPositionControl*>(),
                        {"SerializeData", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentPosition, stream, info);
}
inline void Photon::Pun::PhotonTransformViewPositionControl::DeserializeData(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewPositionControl*>(),
                        {"DeserializeData", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline ::Photon::Pun::PhotonTransformViewPositionControl* Photon::Pun::PhotonTransformViewPositionControl::New_ctor(::Photon::Pun::PhotonTransformViewPositionModel*  model)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonTransformViewPositionControl*>(model));
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonTransformViewPositionControl::PhotonTransformViewPositionControl()   {
}
