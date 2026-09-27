#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/GizmoHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__GizmoHelpers_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers.DrawWirePlaneOriented
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers::DrawWirePlaneOriented)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0xb41a3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers*>(),
                        {"DrawWirePlaneOriented", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers.DrawWireCubeOriented
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers::DrawWireCubeOriented)> {
  constexpr static std::size_t size = 0x6e8;
  constexpr static std::size_t addrs = 0xb41a678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers*>(),
                        {"DrawWireCubeOriented", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers.DrawAxisArrows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers::DrawAxisArrows)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb41ad60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers*>(),
                        {"DrawAxisArrows", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers.DrawCapsule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t, float_t, ::UnityEngine::Vector3, ::UnityEngine::Color)>(&::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers::DrawCapsule)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb41aeac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers*>(),
                        {"DrawCapsule", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::GizmoHelpers::setStaticF_s_XAxisColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "s_XAxisColor", ::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color UnityEngine::XR::Interaction::Toolkit::GizmoHelpers::getStaticF_s_XAxisColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_XAxisColor", ::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::GizmoHelpers::setStaticF_s_YAxisColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "s_YAxisColor", ::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color UnityEngine::XR::Interaction::Toolkit::GizmoHelpers::getStaticF_s_YAxisColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_YAxisColor", ::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::GizmoHelpers::setStaticF_s_ZAxisColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "s_ZAxisColor", ::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color UnityEngine::XR::Interaction::Toolkit::GizmoHelpers::getStaticF_s_ZAxisColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_ZAxisColor", ::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::GizmoHelpers::setStaticF_s_AxisMapping(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3,::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3,::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>*, "s_AxisMapping", ::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3,::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3,::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>* UnityEngine::XR::Interaction::Toolkit::GizmoHelpers::getStaticF_s_AxisMapping()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3,::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>*, "s_AxisMapping", ::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::GizmoHelpers::DrawWirePlaneOriented(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers*>(),
                        {"DrawWirePlaneOriented", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, size);
}
inline void UnityEngine::XR::Interaction::Toolkit::GizmoHelpers::DrawWireCubeOriented(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers*>(),
                        {"DrawWireCubeOriented", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, size);
}
inline void UnityEngine::XR::Interaction::Toolkit::GizmoHelpers::DrawAxisArrows(::UnityEngine::Transform*  transform, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers*>(),
                        {"DrawAxisArrows", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, size);
}
inline void UnityEngine::XR::Interaction::Toolkit::GizmoHelpers::DrawCapsule(::UnityEngine::Vector3  center, float_t  height, float_t  radius, ::UnityEngine::Vector3  axis, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers*>(),
                        {"DrawCapsule", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, height, radius, axis, color);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::GizmoHelpers::GizmoHelpers()   {
}
