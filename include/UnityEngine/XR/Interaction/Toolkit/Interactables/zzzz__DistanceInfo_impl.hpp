#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/DistanceInfo.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__DistanceInfo_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo.get_point
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo::get_point)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb490e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>(),
                        {"get_point", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo.set_point
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo::*)(::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo::set_point)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb490e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>(),
                        {"set_point", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo.get_distanceSqr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo::get_distanceSqr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb490e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>(),
                        {"get_distanceSqr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo.set_distanceSqr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo::set_distanceSqr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb490e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>(),
                        {"set_distanceSqr", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo.get_collider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo::get_collider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb490e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>(),
                        {"get_collider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo.set_collider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo::*)(::UnityEngine::Collider*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo::set_collider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb490ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>(),
                        {"set_collider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo::get_point()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>(),
                        {"get_point", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo::set_point(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>(),
                        {"set_point", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo::get_distanceSqr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>(),
                        {"get_distanceSqr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo::set_distanceSqr(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>(),
                        {"set_distanceSqr", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo::get_collider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>(),
                        {"get_collider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(*this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo::set_collider(::UnityEngine::Collider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>(),
                        {"set_collider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_point_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_distanceSqr_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_collider_k__BackingField", ty: "::UnityW<::UnityEngine::Collider>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo::DistanceInfo(::UnityEngine::Vector3  _point_k__BackingField, float_t  _distanceSqr_k__BackingField, ::UnityW<::UnityEngine::Collider>  _collider_k__BackingField) noexcept  {
this->_point_k__BackingField = _point_k__BackingField;
this->_distanceSqr_k__BackingField = _distanceSqr_k__BackingField;
this->_collider_k__BackingField = _collider_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo::DistanceInfo()   {
}
