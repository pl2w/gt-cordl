#pragma once
// IWYU pragma private; include "GlobalNamespace/Slingshot.hpp"
#include "GlobalNamespace/zzzz__ProjectileWeapon_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__Slingshot_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__Slingshot_SlingshotActions_def.hpp"
#include "GlobalNamespace/zzzz__Slingshot_SlingshotState_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Slingshot.DestroyDummyProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Slingshot::*)()>(&::GlobalNamespace::Slingshot::DestroyDummyProjectile)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5737280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Slingshot*>(),
                        {"DestroyDummyProjectile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Slingshot.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Slingshot::*)()>(&::GlobalNamespace::Slingshot::Awake)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x57373ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Slingshot*>(),
                    {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Slingshot.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Slingshot::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::Slingshot::OnSpawn)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5737434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Slingshot*>(),
                    {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Slingshot.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Slingshot::*)()>(&::GlobalNamespace::Slingshot::OnEnable)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5737478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Slingshot*>(),
                    {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Slingshot.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Slingshot::*)()>(&::GlobalNamespace::Slingshot::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57375d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Slingshot*>(),
                    {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Slingshot.LateUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Slingshot::*)()>(&::GlobalNamespace::Slingshot::LateUpdateShared)> {
  constexpr static std::size_t size = 0x7f4;
  constexpr static std::size_t addrs = 0x57375f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Slingshot*>(),
                    {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Slingshot.LateUpdateLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Slingshot::*)()>(&::GlobalNamespace::Slingshot::LateUpdateLocal)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5737f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Slingshot*>(),
                    {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Slingshot.LateUpdateReplicated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Slingshot::*)()>(&::GlobalNamespace::Slingshot::LateUpdateReplicated)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5738108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Slingshot*>(),
                    {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Slingshot.IsSlingShotEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::Slingshot::IsSlingShotEnabled)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5738170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Slingshot*>(),
                        {"IsSlingShotEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Slingshot.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Slingshot::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::Slingshot::OnGrab)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x573832c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Slingshot*>(),
                    {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Slingshot.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Slingshot::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::Slingshot::OnRelease)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x57385f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Slingshot*>(),
                    {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Slingshot.DropItemCleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Slingshot::*)()>(&::GlobalNamespace::Slingshot::DropItemCleanup)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5738940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Slingshot*>(),
                    {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Slingshot.AutoGrabTrue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Slingshot::*)(bool)>(&::GlobalNamespace::Slingshot::AutoGrabTrue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5738968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Slingshot*>(),
                    {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Slingshot.ForLeftHandSlingshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Slingshot::*)()>(&::GlobalNamespace::Slingshot::ForLeftHandSlingshot)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5737f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Slingshot*>(),
                        {"ForLeftHandSlingshot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Slingshot.InDrawingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Slingshot::*)()>(&::GlobalNamespace::Slingshot::InDrawingState)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5737de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Slingshot*>(),
                        {"InDrawingState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Slingshot.GetLaunchPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Slingshot::*)()>(&::GlobalNamespace::Slingshot::GetLaunchPosition)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5738970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Slingshot*>(),
                    {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Slingshot.GetLaunchVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Slingshot::*)()>(&::GlobalNamespace::Slingshot::GetLaunchVelocity)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5738998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Slingshot*>(),
                    {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Slingshot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Slingshot::*)()>(&::GlobalNamespace::Slingshot::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5738bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Slingshot*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::Slingshot::__cordl_internal_get_disableLineRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableLineRenderer;
}
constexpr bool const& GlobalNamespace::Slingshot::__cordl_internal_get_disableLineRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableLineRenderer;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_disableLineRenderer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableLineRenderer = value;
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& GlobalNamespace::Slingshot::__cordl_internal_get_elasticLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elasticLeft;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GlobalNamespace::Slingshot::__cordl_internal_get_elasticLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elasticLeft;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_elasticLeft(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elasticLeft = value;
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& GlobalNamespace::Slingshot::__cordl_internal_get_elasticRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elasticRight;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GlobalNamespace::Slingshot::__cordl_internal_get_elasticRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elasticRight;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_elasticRight(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elasticRight = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Slingshot::__cordl_internal_get_leftArm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArm;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Slingshot::__cordl_internal_get_leftArm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArm;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_leftArm(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftArm = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Slingshot::__cordl_internal_get_rightArm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArm;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Slingshot::__cordl_internal_get_rightArm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArm;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_rightArm(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightArm = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Slingshot::__cordl_internal_get_center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Slingshot::__cordl_internal_get_center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_center(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___center = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Slingshot::__cordl_internal_get_centerOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Slingshot::__cordl_internal_get_centerOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerOrigin;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_centerOrigin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___centerOrigin = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::Slingshot::__cordl_internal_get_dummyProjectile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dummyProjectile;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::Slingshot::__cordl_internal_get_dummyProjectile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dummyProjectile;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_dummyProjectile(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dummyProjectile = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::Slingshot::__cordl_internal_get_drawingHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawingHand;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::Slingshot::__cordl_internal_get_drawingHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawingHand;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_drawingHand(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drawingHand = value;
}
constexpr ::UnityW<::GlobalNamespace::InteractionPoint>& GlobalNamespace::Slingshot::__cordl_internal_get_nock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nock;
}
constexpr ::UnityW<::GlobalNamespace::InteractionPoint> const& GlobalNamespace::Slingshot::__cordl_internal_get_nock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nock;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_nock(::UnityW<::GlobalNamespace::InteractionPoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nock = value;
}
constexpr ::UnityW<::GlobalNamespace::InteractionPoint>& GlobalNamespace::Slingshot::__cordl_internal_get_grip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grip;
}
constexpr ::UnityW<::GlobalNamespace::InteractionPoint> const& GlobalNamespace::Slingshot::__cordl_internal_get_grip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grip;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_grip(::UnityW<::GlobalNamespace::InteractionPoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grip = value;
}
constexpr float_t& GlobalNamespace::Slingshot::__cordl_internal_get_springConstant()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___springConstant;
}
constexpr float_t const& GlobalNamespace::Slingshot::__cordl_internal_get_springConstant() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___springConstant;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_springConstant(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___springConstant = value;
}
constexpr float_t& GlobalNamespace::Slingshot::__cordl_internal_get_maxDraw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDraw;
}
constexpr float_t const& GlobalNamespace::Slingshot::__cordl_internal_get_maxDraw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDraw;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_maxDraw(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDraw = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::Slingshot::__cordl_internal_get_disableInDraw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableInDraw;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::Slingshot::__cordl_internal_get_disableInDraw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableInDraw;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_disableInDraw(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableInDraw = value;
}
constexpr float_t& GlobalNamespace::Slingshot::__cordl_internal_get_minDrawDistanceToRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDrawDistanceToRelease;
}
constexpr float_t const& GlobalNamespace::Slingshot::__cordl_internal_get_minDrawDistanceToRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDrawDistanceToRelease;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_minDrawDistanceToRelease(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDrawDistanceToRelease = value;
}
constexpr bool& GlobalNamespace::Slingshot::__cordl_internal_get_playStretchingHaptics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playStretchingHaptics;
}
constexpr bool const& GlobalNamespace::Slingshot::__cordl_internal_get_playStretchingHaptics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playStretchingHaptics;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_playStretchingHaptics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playStretchingHaptics = value;
}
constexpr float_t& GlobalNamespace::Slingshot::__cordl_internal_get_hapticsStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticsStrength;
}
constexpr float_t const& GlobalNamespace::Slingshot::__cordl_internal_get_hapticsStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticsStrength;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_hapticsStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticsStrength = value;
}
constexpr float_t& GlobalNamespace::Slingshot::__cordl_internal_get_hapticsLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticsLength;
}
constexpr float_t const& GlobalNamespace::Slingshot::__cordl_internal_get_hapticsLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticsLength;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_hapticsLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticsLength = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& GlobalNamespace::Slingshot::__cordl_internal_get_StretchStartShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StretchStartShared;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& GlobalNamespace::Slingshot::__cordl_internal_get_StretchStartShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StretchStartShared;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_StretchStartShared(::UnityEngine::Events::UnityEvent_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StretchStartShared = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& GlobalNamespace::Slingshot::__cordl_internal_get_StretchEndShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StretchEndShared;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& GlobalNamespace::Slingshot::__cordl_internal_get_StretchEndShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StretchEndShared;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_StretchEndShared(::UnityEngine::Events::UnityEvent_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StretchEndShared = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& GlobalNamespace::Slingshot::__cordl_internal_get_StretchStartLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StretchStartLocal;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& GlobalNamespace::Slingshot::__cordl_internal_get_StretchStartLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StretchStartLocal;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_StretchStartLocal(::UnityEngine::Events::UnityEvent_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StretchStartLocal = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& GlobalNamespace::Slingshot::__cordl_internal_get_StretchEndLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StretchEndLocal;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& GlobalNamespace::Slingshot::__cordl_internal_get_StretchEndLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StretchEndLocal;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_StretchEndLocal(::UnityEngine::Events::UnityEvent_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StretchEndLocal = value;
}
constexpr bool& GlobalNamespace::Slingshot::__cordl_internal_get_wasStretching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasStretching;
}
constexpr bool const& GlobalNamespace::Slingshot::__cordl_internal_get_wasStretching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasStretching;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_wasStretching(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasStretching = value;
}
constexpr bool& GlobalNamespace::Slingshot::__cordl_internal_get_wasStretchingLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasStretchingLocal;
}
constexpr bool const& GlobalNamespace::Slingshot::__cordl_internal_get_wasStretchingLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasStretchingLocal;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_wasStretchingLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasStretchingLocal = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Slingshot::__cordl_internal_get_leftHandSnap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandSnap;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Slingshot::__cordl_internal_get_leftHandSnap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandSnap;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_leftHandSnap(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandSnap = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Slingshot::__cordl_internal_get_rightHandSnap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandSnap;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Slingshot::__cordl_internal_get_rightHandSnap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandSnap;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_rightHandSnap(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandSnap = value;
}
constexpr bool& GlobalNamespace::Slingshot::__cordl_internal_get_disableWhenNotInRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableWhenNotInRoom;
}
constexpr bool const& GlobalNamespace::Slingshot::__cordl_internal_get_disableWhenNotInRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableWhenNotInRoom;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_disableWhenNotInRoom(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableWhenNotInRoom = value;
}
constexpr bool& GlobalNamespace::Slingshot::__cordl_internal_get_hasDummyProjectile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasDummyProjectile;
}
constexpr bool const& GlobalNamespace::Slingshot::__cordl_internal_get_hasDummyProjectile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasDummyProjectile;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_hasDummyProjectile(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasDummyProjectile = value;
}
constexpr float_t& GlobalNamespace::Slingshot::__cordl_internal_get_delayLaunchTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayLaunchTime;
}
constexpr float_t const& GlobalNamespace::Slingshot::__cordl_internal_get_delayLaunchTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayLaunchTime;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_delayLaunchTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delayLaunchTime = value;
}
constexpr float_t& GlobalNamespace::Slingshot::__cordl_internal_get_minTimeToLaunch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTimeToLaunch;
}
constexpr float_t const& GlobalNamespace::Slingshot::__cordl_internal_get_minTimeToLaunch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTimeToLaunch;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_minTimeToLaunch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minTimeToLaunch = value;
}
constexpr float_t& GlobalNamespace::Slingshot::__cordl_internal_get_dummyProjectileColliderRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dummyProjectileColliderRadius;
}
constexpr float_t const& GlobalNamespace::Slingshot::__cordl_internal_get_dummyProjectileColliderRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dummyProjectileColliderRadius;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_dummyProjectileColliderRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dummyProjectileColliderRadius = value;
}
constexpr float_t& GlobalNamespace::Slingshot::__cordl_internal_get_dummyProjectileInitialScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dummyProjectileInitialScale;
}
constexpr float_t const& GlobalNamespace::Slingshot::__cordl_internal_get_dummyProjectileInitialScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dummyProjectileInitialScale;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_dummyProjectileInitialScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dummyProjectileInitialScale = value;
}
constexpr int32_t& GlobalNamespace::Slingshot::__cordl_internal_get_projectileCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileCount;
}
constexpr int32_t const& GlobalNamespace::Slingshot::__cordl_internal_get_projectileCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileCount;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_projectileCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileCount = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::Slingshot::__cordl_internal_get_elasticLeftPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elasticLeftPoints;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::Slingshot::__cordl_internal_get_elasticLeftPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elasticLeftPoints;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_elasticLeftPoints(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elasticLeftPoints = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::Slingshot::__cordl_internal_get_elasticRightPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elasticRightPoints;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::Slingshot::__cordl_internal_get_elasticRightPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elasticRightPoints;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_elasticRightPoints(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elasticRightPoints = value;
}
constexpr float_t& GlobalNamespace::Slingshot::__cordl_internal_get__elasticIntialWidthMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elasticIntialWidthMultiplier;
}
constexpr float_t const& GlobalNamespace::Slingshot::__cordl_internal_get__elasticIntialWidthMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elasticIntialWidthMultiplier;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set__elasticIntialWidthMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____elasticIntialWidthMultiplier = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::Slingshot::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::Slingshot::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GlobalNamespace::Slingshot::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
inline void GlobalNamespace::Slingshot::DestroyDummyProjectile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Slingshot*>(),
                        {"DestroyDummyProjectile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Slingshot::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Slingshot::OnSpawn(::GlobalNamespace::VRRig*  rig)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::Slingshot::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Slingshot::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Slingshot::LateUpdateShared()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Slingshot::LateUpdateLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Slingshot::LateUpdateReplicated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::Slingshot::IsSlingShotEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Slingshot*>(),
                        {"IsSlingShotEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::Slingshot::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline bool GlobalNamespace::Slingshot::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GlobalNamespace::Slingshot::DropItemCleanup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::Slingshot::AutoGrabTrue(bool  leftGrabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, leftGrabbingHand);
}
inline bool GlobalNamespace::Slingshot::ForLeftHandSlingshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Slingshot*>(),
                        {"ForLeftHandSlingshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::Slingshot::InDrawingState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Slingshot*>(),
                        {"InDrawingState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Slingshot::GetLaunchPosition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Slingshot::GetLaunchVelocity()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Slingshot*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::Slingshot::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Slingshot*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Slingshot* GlobalNamespace::Slingshot::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Slingshot*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Slingshot::Slingshot()   {
}
