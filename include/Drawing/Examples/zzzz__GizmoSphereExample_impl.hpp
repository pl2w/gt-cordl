#pragma once
// IWYU pragma private; include "Drawing/Examples/GizmoSphereExample.hpp"
#include "Drawing/zzzz__MonoBehaviourGizmos_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Drawing/Examples/zzzz__GizmoSphereExample_def.hpp"
#include "Drawing/Examples/zzzz__GizmoSphereExample_Contact_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
//  Writing Method size for method: ::Drawing::Examples::GizmoSphereExample.DrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::Examples::GizmoSphereExample::*)()>(&::Drawing::Examples::GizmoSphereExample::DrawGizmos)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x55e0474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::Examples::GizmoSphereExample*>(),
                    {::i2c::class_of<::Drawing::Examples::GizmoSphereExample*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Examples::GizmoSphereExample.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::Examples::GizmoSphereExample::*)()>(&::Drawing::Examples::GizmoSphereExample::FixedUpdate)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x55e07fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::GizmoSphereExample*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Examples::GizmoSphereExample.OnCollisionStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::Examples::GizmoSphereExample::*)(::UnityEngine::Collision*)>(&::Drawing::Examples::GizmoSphereExample::OnCollisionStay)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x55e0aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::GizmoSphereExample*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Examples::GizmoSphereExample._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::Examples::GizmoSphereExample::*)()>(&::Drawing::Examples::GizmoSphereExample::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x55e0d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::GizmoSphereExample*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& Drawing::Examples::GizmoSphereExample::__cordl_internal_get_gizmoColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmoColor;
}
constexpr ::UnityEngine::Color const& Drawing::Examples::GizmoSphereExample::__cordl_internal_get_gizmoColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmoColor;
}
constexpr void Drawing::Examples::GizmoSphereExample::__cordl_internal_set_gizmoColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gizmoColor = value;
}
constexpr ::UnityEngine::Color& Drawing::Examples::GizmoSphereExample::__cordl_internal_get_gizmoColor2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmoColor2;
}
constexpr ::UnityEngine::Color const& Drawing::Examples::GizmoSphereExample::__cordl_internal_get_gizmoColor2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmoColor2;
}
constexpr void Drawing::Examples::GizmoSphereExample::__cordl_internal_set_gizmoColor2(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gizmoColor2 = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::GlobalNamespace::GizmoSphereExample_Contact>*& Drawing::Examples::GizmoSphereExample::__cordl_internal_get_contactForces()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contactForces;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::GlobalNamespace::GizmoSphereExample_Contact>* const& Drawing::Examples::GizmoSphereExample::__cordl_internal_get_contactForces() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contactForces;
}
constexpr void Drawing::Examples::GizmoSphereExample::__cordl_internal_set_contactForces(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::GlobalNamespace::GizmoSphereExample_Contact>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contactForces = value;
}
inline void Drawing::Examples::GizmoSphereExample::DrawGizmos()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::Examples::GizmoSphereExample*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Drawing::Examples::GizmoSphereExample::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::GizmoSphereExample*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Drawing::Examples::GizmoSphereExample::OnCollisionStay(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::GizmoSphereExample*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void Drawing::Examples::GizmoSphereExample::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Examples::GizmoSphereExample*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Drawing::Examples::GizmoSphereExample* Drawing::Examples::GizmoSphereExample::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::Examples::GizmoSphereExample*>());
}
// Ctor Parameters []
constexpr ::Drawing::Examples::GizmoSphereExample::GizmoSphereExample()   {
}
