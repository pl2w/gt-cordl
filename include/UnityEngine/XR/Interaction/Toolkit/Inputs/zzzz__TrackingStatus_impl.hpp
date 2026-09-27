#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/TrackingStatus.hpp"
#include "UnityEngine/XR/zzzz__InputTrackingState_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/zzzz__TrackingStatus_def.hpp"
#include "UnityEngine/XR/zzzz__InputTrackingState_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus.get_isConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus::get_isConnected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b4d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus>(),
                        {"get_isConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus.set_isConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus::set_isConnected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b4d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus>(),
                        {"set_isConnected", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus.get_isTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus::get_isTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b4d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus>(),
                        {"get_isTracked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus.set_isTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus::set_isTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b4d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus>(),
                        {"set_isTracked", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus.get_trackingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputTrackingState (::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus::get_trackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b4d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus>(),
                        {"get_trackingState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus.set_trackingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus::*)(::UnityEngine::XR::InputTrackingState)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus::set_trackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b4d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus>(),
                        {"set_trackingState", {}, {::i2c::type_of<::UnityEngine::XR::InputTrackingState>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus::get_isConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus>(),
                        {"get_isConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus::set_isConnected(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus>(),
                        {"set_isConnected", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus::get_isTracked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus>(),
                        {"get_isTracked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus::set_isTracked(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus>(),
                        {"set_isTracked", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::XR::InputTrackingState UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus::get_trackingState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus>(),
                        {"get_trackingState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputTrackingState>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus::set_trackingState(::UnityEngine::XR::InputTrackingState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus>(),
                        {"set_trackingState", {}, {::i2c::type_of<::UnityEngine::XR::InputTrackingState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_isConnected_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_isTracked_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_trackingState_k__BackingField", ty: "::UnityEngine::XR::InputTrackingState", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus::TrackingStatus(bool  _isConnected_k__BackingField, bool  _isTracked_k__BackingField, ::UnityEngine::XR::InputTrackingState  _trackingState_k__BackingField) noexcept  {
this->_isConnected_k__BackingField = _isConnected_k__BackingField;
this->_isTracked_k__BackingField = _isTracked_k__BackingField;
this->_trackingState_k__BackingField = _trackingState_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::TrackingStatus::TrackingStatus()   {
}
