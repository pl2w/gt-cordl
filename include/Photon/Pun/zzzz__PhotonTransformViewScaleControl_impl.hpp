#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonTransformViewScaleControl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewScaleControl_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewScaleModel_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewScaleControl._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonTransformViewScaleControl::*)(::Photon::Pun::PhotonTransformViewScaleModel*)>(&::Photon::Pun::PhotonTransformViewScaleControl::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa74096c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewScaleControl*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Pun::PhotonTransformViewScaleModel*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewScaleControl.GetNetworkScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Photon::Pun::PhotonTransformViewScaleControl::*)()>(&::Photon::Pun::PhotonTransformViewScaleControl::GetNetworkScale)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa74214c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewScaleControl*>(),
                        {"GetNetworkScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewScaleControl.GetScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Photon::Pun::PhotonTransformViewScaleControl::*)(::UnityEngine::Vector3)>(&::Photon::Pun::PhotonTransformViewScaleControl::GetScale)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xa74134c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewScaleControl*>(),
                        {"GetScale", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::PhotonTransformViewScaleControl.OnPhotonSerializeView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::PhotonTransformViewScaleControl::*)(::UnityEngine::Vector3, ::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::Photon::Pun::PhotonTransformViewScaleControl::OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa741878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewScaleControl*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Pun::PhotonTransformViewScaleModel*& Photon::Pun::PhotonTransformViewScaleControl::__cordl_internal_get_m_Model()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Model;
}
constexpr ::Photon::Pun::PhotonTransformViewScaleModel* const& Photon::Pun::PhotonTransformViewScaleControl::__cordl_internal_get_m_Model() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Model;
}
constexpr void Photon::Pun::PhotonTransformViewScaleControl::__cordl_internal_set_m_Model(::Photon::Pun::PhotonTransformViewScaleModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Model = value;
}
constexpr ::UnityEngine::Vector3& Photon::Pun::PhotonTransformViewScaleControl::__cordl_internal_get_m_NetworkScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetworkScale;
}
constexpr ::UnityEngine::Vector3 const& Photon::Pun::PhotonTransformViewScaleControl::__cordl_internal_get_m_NetworkScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NetworkScale;
}
constexpr void Photon::Pun::PhotonTransformViewScaleControl::__cordl_internal_set_m_NetworkScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NetworkScale = value;
}
inline void Photon::Pun::PhotonTransformViewScaleControl::_ctor(::Photon::Pun::PhotonTransformViewScaleModel*  model)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewScaleControl*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Pun::PhotonTransformViewScaleModel*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, model);
}
inline ::UnityEngine::Vector3 Photon::Pun::PhotonTransformViewScaleControl::GetNetworkScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewScaleControl*>(),
                        {"GetNetworkScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Photon::Pun::PhotonTransformViewScaleControl::GetScale(::UnityEngine::Vector3  currentScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewScaleControl*>(),
                        {"GetScale", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, currentScale);
}
inline void Photon::Pun::PhotonTransformViewScaleControl::OnPhotonSerializeView(::UnityEngine::Vector3  currentScale, ::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::PhotonTransformViewScaleControl*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentScale, stream, info);
}
inline ::Photon::Pun::PhotonTransformViewScaleControl* Photon::Pun::PhotonTransformViewScaleControl::New_ctor(::Photon::Pun::PhotonTransformViewScaleModel*  model)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::PhotonTransformViewScaleControl*>(model));
}
// Ctor Parameters []
constexpr ::Photon::Pun::PhotonTransformViewScaleControl::PhotonTransformViewScaleControl()   {
}
