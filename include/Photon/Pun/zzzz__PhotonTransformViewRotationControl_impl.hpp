#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonTransformViewRotationControl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewRotationControl_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewRotationModel_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewRotationControl._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonTransformViewRotationControl::*)(::Photon::Pun::PhotonTransformViewRotationModel*)>(&::Photon::Pun::PhotonTransformViewRotationControl::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa74093c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewRotationControl*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Pun::PhotonTransformViewRotationModel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewRotationControl.GetNetworkRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Photon::Pun::PhotonTransformViewRotationControl::*)()>(&::Photon::Pun::PhotonTransformViewRotationControl::GetNetworkRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa742140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewRotationControl*>(),
                        {"GetNetworkRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewRotationControl.GetRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Photon::Pun::PhotonTransformViewRotationControl::*)(::UnityEngine::Quaternion)>(&::Photon::Pun::PhotonTransformViewRotationControl::GetRotation)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa7411cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewRotationControl*>(),
                        {"GetRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewRotationControl.OnPhotonSerializeView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonTransformViewRotationControl::*)(::UnityEngine::Quaternion, ::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Photon::Pun::PhotonTransformViewRotationControl::OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa74177c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewRotationControl*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Pun::PhotonTransformViewRotationModel*& Photon::Pun::PhotonTransformViewRotationControl::__cordl_internal_get_m_Model()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Model;
}
constexpr ::Photon::Pun::PhotonTransformViewRotationModel* const& Photon::Pun::PhotonTransformViewRotationControl::__cordl_internal_get_m_Model() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Model;
}
constexpr void Photon::Pun::PhotonTransformViewRotationControl::__cordl_internal_set_m_Model(::Photon::Pun::PhotonTransformViewRotationModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Model = value;
}
constexpr ::UnityEngine::Quaternion& Photon::Pun::PhotonTransformViewRotationControl::__cordl_internal_get_m_NetworkRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetworkRotation;
}
constexpr ::UnityEngine::Quaternion const& Photon::Pun::PhotonTransformViewRotationControl::__cordl_internal_get_m_NetworkRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetworkRotation;
}
constexpr void Photon::Pun::PhotonTransformViewRotationControl::__cordl_internal_set_m_NetworkRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NetworkRotation = value;
}
inline void Photon::Pun::PhotonTransformViewRotationControl::_ctor(::Photon::Pun::PhotonTransformViewRotationModel*  model)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewRotationControl*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Pun::PhotonTransformViewRotationModel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, model);
}
inline ::UnityEngine::Quaternion Photon::Pun::PhotonTransformViewRotationControl::GetNetworkRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewRotationControl*>(),
                        {"GetNetworkRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion Photon::Pun::PhotonTransformViewRotationControl::GetRotation(::UnityEngine::Quaternion  currentRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewRotationControl*>(),
                        {"GetRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, currentRotation);
}
inline void Photon::Pun::PhotonTransformViewRotationControl::OnPhotonSerializeView(::UnityEngine::Quaternion  currentRotation, ::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewRotationControl*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentRotation, stream, info);
}
inline ::Photon::Pun::PhotonTransformViewRotationControl* Photon::Pun::PhotonTransformViewRotationControl::New_ctor(::Photon::Pun::PhotonTransformViewRotationModel*  model)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonTransformViewRotationControl*>(model));
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonTransformViewRotationControl::PhotonTransformViewRotationControl()   {
}
