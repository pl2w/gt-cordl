#pragma once
// IWYU pragma private; include "GlobalNamespace/GizmoUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GizmoUtils_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GizmoUtils.DrawGizmo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Collider*, ::UnityEngine::Color)>(&::GlobalNamespace::GizmoUtils::DrawGizmo)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x5b07c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoUtils*>(),
                        {"DrawGizmo", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GizmoUtils.DrawWireCubeTRS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::GlobalNamespace::GizmoUtils::DrawWireCubeTRS)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b082d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoUtils*>(),
                        {"DrawWireCubeTRS", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GizmoUtils::setStaticF_gColliderToColor(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::Color>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::Color>*, "gColliderToColor", ::GlobalNamespace::GizmoUtils*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::Color>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::Color>* GlobalNamespace::GizmoUtils::getStaticF_gColliderToColor()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::Color>*, "gColliderToColor", ::GlobalNamespace::GizmoUtils*>();
}
inline void GlobalNamespace::GizmoUtils::DrawGizmo(::UnityEngine::Collider*  c, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoUtils*>(),
                        {"DrawGizmo", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, c, color);
}
inline void GlobalNamespace::GizmoUtils::DrawWireCubeTRS(::UnityEngine::Vector3  t, ::UnityEngine::Quaternion  r, ::UnityEngine::Vector3  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GizmoUtils*>(),
                        {"DrawWireCubeTRS", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, r, s);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GizmoUtils::GizmoUtils()   {
}
