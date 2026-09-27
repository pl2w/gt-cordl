#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendshipCharm.hpp"
#include "GlobalNamespace/zzzz__HoldableObject_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "GlobalNamespace/zzzz__FriendshipCharm_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FriendshipCharm.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendshipCharm::*)()>(&::GlobalNamespace::FriendshipCharm::Awake)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x574f170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendshipCharm.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendshipCharm::*)()>(&::GlobalNamespace::FriendshipCharm::LateUpdate)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x574f1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendshipCharm.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendshipCharm::*)()>(&::GlobalNamespace::FriendshipCharm::OnEnable)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x574f42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendshipCharm.DestroyBracelet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendshipCharm::*)()>(&::GlobalNamespace::FriendshipCharm::DestroyBracelet)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x574f32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(),
                        {"DestroyBracelet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendshipCharm.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendshipCharm::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::FriendshipCharm::OnGrab)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x574f508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(),
                    {::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendshipCharm.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FriendshipCharm::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::FriendshipCharm::OnRelease)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x574f758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(),
                    {::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendshipCharm.UpdatePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendshipCharm::*)()>(&::GlobalNamespace::FriendshipCharm::UpdatePosition)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x574f470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(),
                        {"UpdatePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendshipCharm.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendshipCharm::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::FriendshipCharm::OnCollisionEnter)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x574f960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendshipCharm.OnHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendshipCharm::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::FriendshipCharm::OnHover)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x574fa0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(),
                    {::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendshipCharm.DropItemCleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendshipCharm::*)()>(&::GlobalNamespace::FriendshipCharm::DropItemCleanup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x574fa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(),
                    {::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FriendshipCharm._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FriendshipCharm::*)()>(&::GlobalNamespace::FriendshipCharm::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x574fa14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::InteractionPoint>& GlobalNamespace::FriendshipCharm::__cordl_internal_get_interactionPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactionPoint;
}
constexpr ::UnityW<::GlobalNamespace::InteractionPoint> const& GlobalNamespace::FriendshipCharm::__cordl_internal_get_interactionPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactionPoint;
}
constexpr void GlobalNamespace::FriendshipCharm::__cordl_internal_set_interactionPoint(::UnityW<::GlobalNamespace::InteractionPoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactionPoint = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FriendshipCharm::__cordl_internal_get_rightHandHoldAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandHoldAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FriendshipCharm::__cordl_internal_get_rightHandHoldAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandHoldAnchor;
}
constexpr void GlobalNamespace::FriendshipCharm::__cordl_internal_set_rightHandHoldAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandHoldAnchor = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FriendshipCharm::__cordl_internal_get_leftHandHoldAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandHoldAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FriendshipCharm::__cordl_internal_get_leftHandHoldAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandHoldAnchor;
}
constexpr void GlobalNamespace::FriendshipCharm::__cordl_internal_set_leftHandHoldAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandHoldAnchor = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::FriendshipCharm::__cordl_internal_get_meshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::FriendshipCharm::__cordl_internal_get_meshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr void GlobalNamespace::FriendshipCharm::__cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FriendshipCharm::__cordl_internal_get_lineStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineStart;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FriendshipCharm::__cordl_internal_get_lineStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineStart;
}
constexpr void GlobalNamespace::FriendshipCharm::__cordl_internal_set_lineStart(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineStart = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FriendshipCharm::__cordl_internal_get_lineEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineEnd;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FriendshipCharm::__cordl_internal_get_lineEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineEnd;
}
constexpr void GlobalNamespace::FriendshipCharm::__cordl_internal_set_lineEnd(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineEnd = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FriendshipCharm::__cordl_internal_get_releasePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releasePosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FriendshipCharm::__cordl_internal_get_releasePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releasePosition;
}
constexpr void GlobalNamespace::FriendshipCharm::__cordl_internal_set_releasePosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___releasePosition = value;
}
constexpr float_t& GlobalNamespace::FriendshipCharm::__cordl_internal_get_breakBraceletLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakBraceletLength;
}
constexpr float_t const& GlobalNamespace::FriendshipCharm::__cordl_internal_get_breakBraceletLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakBraceletLength;
}
constexpr void GlobalNamespace::FriendshipCharm::__cordl_internal_set_breakBraceletLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___breakBraceletLength = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::FriendshipCharm::__cordl_internal_get_breakItemLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakItemLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::FriendshipCharm::__cordl_internal_get_breakItemLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakItemLayerMask;
}
constexpr void GlobalNamespace::FriendshipCharm::__cordl_internal_set_breakItemLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___breakItemLayerMask = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::FriendshipCharm::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::FriendshipCharm::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
constexpr void GlobalNamespace::FriendshipCharm::__cordl_internal_set_parent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
constexpr bool& GlobalNamespace::FriendshipCharm::__cordl_internal_get_isBroken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBroken;
}
constexpr bool const& GlobalNamespace::FriendshipCharm::__cordl_internal_get_isBroken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBroken;
}
constexpr void GlobalNamespace::FriendshipCharm::__cordl_internal_set_isBroken(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isBroken = value;
}
inline void GlobalNamespace::FriendshipCharm::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendshipCharm::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendshipCharm::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendshipCharm::DestroyBracelet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(),
                        {"DestroyBracelet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendshipCharm::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline bool GlobalNamespace::FriendshipCharm::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GlobalNamespace::FriendshipCharm::UpdatePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(),
                        {"UpdatePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendshipCharm::OnCollisionEnter(::UnityEngine::Collision*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::FriendshipCharm::OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointHovered, hoveringHand);
}
inline void GlobalNamespace::FriendshipCharm::DropItemCleanup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FriendshipCharm::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FriendshipCharm*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FriendshipCharm* GlobalNamespace::FriendshipCharm::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FriendshipCharm*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendshipCharm::FriendshipCharm()   {
}
