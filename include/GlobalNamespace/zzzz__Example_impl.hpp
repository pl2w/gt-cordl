#pragma once
// IWYU pragma private; include "GlobalNamespace/Example.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__Example_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Example.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Example::*)()>(&::GlobalNamespace::Example::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5704478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Example*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Example.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Example::*)()>(&::GlobalNamespace::Example::Update)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5704648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Example*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Example._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Example::*)()>(&::GlobalNamespace::Example::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x570480c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Example*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::Example::__cordl_internal_get_debugPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugPoint;
}
constexpr bool const& GlobalNamespace::Example::__cordl_internal_get_debugPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugPoint;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugPoint(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugPoint = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Example::__cordl_internal_get_debugPoint_Position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugPoint_Position;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Example::__cordl_internal_get_debugPoint_Position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugPoint_Position;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugPoint_Position(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugPoint_Position = value;
}
constexpr float_t& GlobalNamespace::Example::__cordl_internal_get_debugPoint_Scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugPoint_Scale;
}
constexpr float_t const& GlobalNamespace::Example::__cordl_internal_get_debugPoint_Scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugPoint_Scale;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugPoint_Scale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugPoint_Scale = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::Example::__cordl_internal_get_debugPoint_Color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugPoint_Color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::Example::__cordl_internal_get_debugPoint_Color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugPoint_Color;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugPoint_Color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugPoint_Color = value;
}
constexpr bool& GlobalNamespace::Example::__cordl_internal_get_debugBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugBounds;
}
constexpr bool const& GlobalNamespace::Example::__cordl_internal_get_debugBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugBounds;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugBounds(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugBounds = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Example::__cordl_internal_get_debugBounds_Position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugBounds_Position;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Example::__cordl_internal_get_debugBounds_Position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugBounds_Position;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugBounds_Position(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugBounds_Position = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Example::__cordl_internal_get_debugBounds_Size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugBounds_Size;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Example::__cordl_internal_get_debugBounds_Size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugBounds_Size;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugBounds_Size(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugBounds_Size = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::Example::__cordl_internal_get_debugBounds_Color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugBounds_Color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::Example::__cordl_internal_get_debugBounds_Color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugBounds_Color;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugBounds_Color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugBounds_Color = value;
}
constexpr bool& GlobalNamespace::Example::__cordl_internal_get_debugCircle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCircle;
}
constexpr bool const& GlobalNamespace::Example::__cordl_internal_get_debugCircle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCircle;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugCircle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugCircle = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Example::__cordl_internal_get_debugCircle_Up()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCircle_Up;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Example::__cordl_internal_get_debugCircle_Up() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCircle_Up;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugCircle_Up(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugCircle_Up = value;
}
constexpr float_t& GlobalNamespace::Example::__cordl_internal_get_debugCircle_Radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCircle_Radius;
}
constexpr float_t const& GlobalNamespace::Example::__cordl_internal_get_debugCircle_Radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCircle_Radius;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugCircle_Radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugCircle_Radius = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::Example::__cordl_internal_get_debugCircle_Color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCircle_Color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::Example::__cordl_internal_get_debugCircle_Color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCircle_Color;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugCircle_Color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugCircle_Color = value;
}
constexpr bool& GlobalNamespace::Example::__cordl_internal_get_debugWireSphere()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugWireSphere;
}
constexpr bool const& GlobalNamespace::Example::__cordl_internal_get_debugWireSphere() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugWireSphere;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugWireSphere(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugWireSphere = value;
}
constexpr float_t& GlobalNamespace::Example::__cordl_internal_get_debugWireSphere_Radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugWireSphere_Radius;
}
constexpr float_t const& GlobalNamespace::Example::__cordl_internal_get_debugWireSphere_Radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugWireSphere_Radius;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugWireSphere_Radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugWireSphere_Radius = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::Example::__cordl_internal_get_debugWireSphere_Color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugWireSphere_Color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::Example::__cordl_internal_get_debugWireSphere_Color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugWireSphere_Color;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugWireSphere_Color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugWireSphere_Color = value;
}
constexpr bool& GlobalNamespace::Example::__cordl_internal_get_debugCylinder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCylinder;
}
constexpr bool const& GlobalNamespace::Example::__cordl_internal_get_debugCylinder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCylinder;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugCylinder(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugCylinder = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Example::__cordl_internal_get_debugCylinder_End()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCylinder_End;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Example::__cordl_internal_get_debugCylinder_End() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCylinder_End;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugCylinder_End(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugCylinder_End = value;
}
constexpr float_t& GlobalNamespace::Example::__cordl_internal_get_debugCylinder_Radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCylinder_Radius;
}
constexpr float_t const& GlobalNamespace::Example::__cordl_internal_get_debugCylinder_Radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCylinder_Radius;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugCylinder_Radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugCylinder_Radius = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::Example::__cordl_internal_get_debugCylinder_Color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCylinder_Color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::Example::__cordl_internal_get_debugCylinder_Color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCylinder_Color;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugCylinder_Color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugCylinder_Color = value;
}
constexpr bool& GlobalNamespace::Example::__cordl_internal_get_debugCone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCone;
}
constexpr bool const& GlobalNamespace::Example::__cordl_internal_get_debugCone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCone;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugCone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugCone = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Example::__cordl_internal_get_debugCone_Direction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCone_Direction;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Example::__cordl_internal_get_debugCone_Direction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCone_Direction;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugCone_Direction(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugCone_Direction = value;
}
constexpr float_t& GlobalNamespace::Example::__cordl_internal_get_debugCone_Angle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCone_Angle;
}
constexpr float_t const& GlobalNamespace::Example::__cordl_internal_get_debugCone_Angle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCone_Angle;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugCone_Angle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugCone_Angle = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::Example::__cordl_internal_get_debugCone_Color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCone_Color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::Example::__cordl_internal_get_debugCone_Color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCone_Color;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugCone_Color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugCone_Color = value;
}
constexpr bool& GlobalNamespace::Example::__cordl_internal_get_debugArrow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugArrow;
}
constexpr bool const& GlobalNamespace::Example::__cordl_internal_get_debugArrow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugArrow;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugArrow(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugArrow = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Example::__cordl_internal_get_debugArrow_Direction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugArrow_Direction;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Example::__cordl_internal_get_debugArrow_Direction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugArrow_Direction;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugArrow_Direction(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugArrow_Direction = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::Example::__cordl_internal_get_debugArrow_Color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugArrow_Color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::Example::__cordl_internal_get_debugArrow_Color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugArrow_Color;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugArrow_Color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugArrow_Color = value;
}
constexpr bool& GlobalNamespace::Example::__cordl_internal_get_debugCapsule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCapsule;
}
constexpr bool const& GlobalNamespace::Example::__cordl_internal_get_debugCapsule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCapsule;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugCapsule(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugCapsule = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Example::__cordl_internal_get_debugCapsule_End()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCapsule_End;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Example::__cordl_internal_get_debugCapsule_End() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCapsule_End;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugCapsule_End(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugCapsule_End = value;
}
constexpr float_t& GlobalNamespace::Example::__cordl_internal_get_debugCapsule_Radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCapsule_Radius;
}
constexpr float_t const& GlobalNamespace::Example::__cordl_internal_get_debugCapsule_Radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCapsule_Radius;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugCapsule_Radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugCapsule_Radius = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::Example::__cordl_internal_get_debugCapsule_Color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCapsule_Color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::Example::__cordl_internal_get_debugCapsule_Color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugCapsule_Color;
}
constexpr void GlobalNamespace::Example::__cordl_internal_set_debugCapsule_Color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugCapsule_Color = value;
}
inline void GlobalNamespace::Example::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Example*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Example::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Example*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Example::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Example*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Example* GlobalNamespace::Example::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Example*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Example::Example()   {
}
