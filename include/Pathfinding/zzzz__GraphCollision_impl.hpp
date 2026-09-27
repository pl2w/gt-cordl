#pragma once
// IWYU pragma private; include "Pathfinding/GraphCollision.hpp"
#include "Pathfinding/zzzz__ColliderType_impl.hpp"
#include "Pathfinding/zzzz__RayDirection_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Collider2D_impl.hpp"
#include "UnityEngine/zzzz__ContactFilter2D_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__GraphCollision_def.hpp"
#include "Pathfinding/Serialization/zzzz__GraphSerializationContext_def.hpp"
#include "Pathfinding/Util/zzzz__GraphTransform_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::GraphCollision.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphCollision::*)(::Pathfinding::Util::GraphTransform*, float_t)>(&::Pathfinding::GraphCollision::Initialize)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5e6d37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphCollision*>(),
                        {"Initialize", {}, {::i2c::type_of<::Pathfinding::Util::GraphTransform*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphCollision.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::GraphCollision::*)(::UnityEngine::Vector3)>(&::Pathfinding::GraphCollision::Check)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x5e6d560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphCollision*>(),
                        {"Check", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphCollision.CheckHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::GraphCollision::*)(::UnityEngine::Vector3)>(&::Pathfinding::GraphCollision::CheckHeight)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e6d96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphCollision*>(),
                        {"CheckHeight", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphCollision.CheckHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::GraphCollision::*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, ::by_ref<bool>)>(&::Pathfinding::GraphCollision::CheckHeight)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x5e6d99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphCollision*>(),
                        {"CheckHeight", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphCollision.CheckHeightAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::RaycastHit> (::Pathfinding::GraphCollision::*)(::UnityEngine::Vector3, ::by_ref<int32_t>)>(&::Pathfinding::GraphCollision::CheckHeightAll)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5e6dca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphCollision*>(),
                        {"CheckHeightAll", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphCollision.DeserializeSettingsCompatibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphCollision::*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::GraphCollision::DeserializeSettingsCompatibility)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5e6decc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphCollision*>(),
                        {"DeserializeSettingsCompatibility", {}, {::i2c::type_of<::Pathfinding::Serialization::GraphSerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphCollision._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphCollision::*)()>(&::Pathfinding::GraphCollision::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e6e0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphCollision*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::ColliderType& Pathfinding::GraphCollision::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::Pathfinding::ColliderType const& Pathfinding::GraphCollision::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void Pathfinding::GraphCollision::__cordl_internal_set_type(::Pathfinding::ColliderType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr float_t& Pathfinding::GraphCollision::__cordl_internal_get_diameter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diameter;
}
constexpr float_t const& Pathfinding::GraphCollision::__cordl_internal_get_diameter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diameter;
}
constexpr void Pathfinding::GraphCollision::__cordl_internal_set_diameter(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diameter = value;
}
constexpr float_t& Pathfinding::GraphCollision::__cordl_internal_get_height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr float_t const& Pathfinding::GraphCollision::__cordl_internal_get_height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr void Pathfinding::GraphCollision::__cordl_internal_set_height(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___height = value;
}
constexpr float_t& Pathfinding::GraphCollision::__cordl_internal_get_collisionOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionOffset;
}
constexpr float_t const& Pathfinding::GraphCollision::__cordl_internal_get_collisionOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionOffset;
}
constexpr void Pathfinding::GraphCollision::__cordl_internal_set_collisionOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionOffset = value;
}
constexpr ::Pathfinding::RayDirection& Pathfinding::GraphCollision::__cordl_internal_get_rayDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayDirection;
}
constexpr ::Pathfinding::RayDirection const& Pathfinding::GraphCollision::__cordl_internal_get_rayDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayDirection;
}
constexpr void Pathfinding::GraphCollision::__cordl_internal_set_rayDirection(::Pathfinding::RayDirection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rayDirection = value;
}
constexpr ::UnityEngine::LayerMask& Pathfinding::GraphCollision::__cordl_internal_get_mask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mask;
}
constexpr ::UnityEngine::LayerMask const& Pathfinding::GraphCollision::__cordl_internal_get_mask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mask;
}
constexpr void Pathfinding::GraphCollision::__cordl_internal_set_mask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mask = value;
}
constexpr ::UnityEngine::LayerMask& Pathfinding::GraphCollision::__cordl_internal_get_heightMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightMask;
}
constexpr ::UnityEngine::LayerMask const& Pathfinding::GraphCollision::__cordl_internal_get_heightMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightMask;
}
constexpr void Pathfinding::GraphCollision::__cordl_internal_set_heightMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightMask = value;
}
constexpr float_t& Pathfinding::GraphCollision::__cordl_internal_get_fromHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromHeight;
}
constexpr float_t const& Pathfinding::GraphCollision::__cordl_internal_get_fromHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromHeight;
}
constexpr void Pathfinding::GraphCollision::__cordl_internal_set_fromHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fromHeight = value;
}
constexpr bool& Pathfinding::GraphCollision::__cordl_internal_get_thickRaycast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thickRaycast;
}
constexpr bool const& Pathfinding::GraphCollision::__cordl_internal_get_thickRaycast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thickRaycast;
}
constexpr void Pathfinding::GraphCollision::__cordl_internal_set_thickRaycast(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thickRaycast = value;
}
constexpr float_t& Pathfinding::GraphCollision::__cordl_internal_get_thickRaycastDiameter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thickRaycastDiameter;
}
constexpr float_t const& Pathfinding::GraphCollision::__cordl_internal_get_thickRaycastDiameter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thickRaycastDiameter;
}
constexpr void Pathfinding::GraphCollision::__cordl_internal_set_thickRaycastDiameter(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thickRaycastDiameter = value;
}
constexpr bool& Pathfinding::GraphCollision::__cordl_internal_get_unwalkableWhenNoGround()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unwalkableWhenNoGround;
}
constexpr bool const& Pathfinding::GraphCollision::__cordl_internal_get_unwalkableWhenNoGround() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unwalkableWhenNoGround;
}
constexpr void Pathfinding::GraphCollision::__cordl_internal_set_unwalkableWhenNoGround(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unwalkableWhenNoGround = value;
}
constexpr bool& Pathfinding::GraphCollision::__cordl_internal_get_use2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___use2D;
}
constexpr bool const& Pathfinding::GraphCollision::__cordl_internal_get_use2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___use2D;
}
constexpr void Pathfinding::GraphCollision::__cordl_internal_set_use2D(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___use2D = value;
}
constexpr bool& Pathfinding::GraphCollision::__cordl_internal_get_collisionCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionCheck;
}
constexpr bool const& Pathfinding::GraphCollision::__cordl_internal_get_collisionCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionCheck;
}
constexpr void Pathfinding::GraphCollision::__cordl_internal_set_collisionCheck(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionCheck = value;
}
constexpr bool& Pathfinding::GraphCollision::__cordl_internal_get_heightCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightCheck;
}
constexpr bool const& Pathfinding::GraphCollision::__cordl_internal_get_heightCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightCheck;
}
constexpr void Pathfinding::GraphCollision::__cordl_internal_set_heightCheck(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightCheck = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::GraphCollision::__cordl_internal_get_up()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___up;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::GraphCollision::__cordl_internal_get_up() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___up;
}
constexpr void Pathfinding::GraphCollision::__cordl_internal_set_up(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___up = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::GraphCollision::__cordl_internal_get_upheight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upheight;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::GraphCollision::__cordl_internal_get_upheight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upheight;
}
constexpr void Pathfinding::GraphCollision::__cordl_internal_set_upheight(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upheight = value;
}
constexpr ::UnityEngine::ContactFilter2D& Pathfinding::GraphCollision::__cordl_internal_get_contactFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contactFilter;
}
constexpr ::UnityEngine::ContactFilter2D const& Pathfinding::GraphCollision::__cordl_internal_get_contactFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contactFilter;
}
constexpr void Pathfinding::GraphCollision::__cordl_internal_set_contactFilter(::UnityEngine::ContactFilter2D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contactFilter = value;
}
constexpr float_t& Pathfinding::GraphCollision::__cordl_internal_get_finalRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalRadius;
}
constexpr float_t const& Pathfinding::GraphCollision::__cordl_internal_get_finalRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalRadius;
}
constexpr void Pathfinding::GraphCollision::__cordl_internal_set_finalRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finalRadius = value;
}
constexpr float_t& Pathfinding::GraphCollision::__cordl_internal_get_finalRaycastRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalRaycastRadius;
}
constexpr float_t const& Pathfinding::GraphCollision::__cordl_internal_get_finalRaycastRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalRaycastRadius;
}
constexpr void Pathfinding::GraphCollision::__cordl_internal_set_finalRaycastRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finalRaycastRadius = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& Pathfinding::GraphCollision::__cordl_internal_get_hitBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitBuffer;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& Pathfinding::GraphCollision::__cordl_internal_get_hitBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitBuffer;
}
constexpr void Pathfinding::GraphCollision::__cordl_internal_set_hitBuffer(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitBuffer = value;
}
inline void Pathfinding::GraphCollision::setStaticF_dummyArray(::ArrayW<::UnityW<::UnityEngine::Collider2D>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::Collider2D>>, "dummyArray", ::Pathfinding::GraphCollision*>(std::forward<::ArrayW<::UnityW<::UnityEngine::Collider2D>>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider2D>> Pathfinding::GraphCollision::getStaticF_dummyArray()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::Collider2D>>, "dummyArray", ::Pathfinding::GraphCollision*>();
}
inline void Pathfinding::GraphCollision::Initialize(::Pathfinding::Util::GraphTransform*  transform, float_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphCollision*>(),
                        {"Initialize", {}, {::i2c::type_of<::Pathfinding::Util::GraphTransform*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transform, scale);
}
inline bool Pathfinding::GraphCollision::Check(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphCollision*>(),
                        {"Check", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position);
}
inline ::UnityEngine::Vector3 Pathfinding::GraphCollision::CheckHeight(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphCollision*>(),
                        {"CheckHeight", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position);
}
inline ::UnityEngine::Vector3 Pathfinding::GraphCollision::CheckHeight(::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::RaycastHit>  hit, ::by_ref<bool>  walkable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphCollision*>(),
                        {"CheckHeight", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position, hit, walkable);
}
inline ::ArrayW<::UnityEngine::RaycastHit> Pathfinding::GraphCollision::CheckHeightAll(::UnityEngine::Vector3  position, ::by_ref<int32_t>  numHits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphCollision*>(),
                        {"CheckHeightAll", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::RaycastHit>>(this, ___internal_method, position, numHits);
}
inline void Pathfinding::GraphCollision::DeserializeSettingsCompatibility(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphCollision*>(),
                        {"DeserializeSettingsCompatibility", {}, {::i2c::type_of<::Pathfinding::Serialization::GraphSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline void Pathfinding::GraphCollision::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphCollision*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::GraphCollision* Pathfinding::GraphCollision::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::GraphCollision*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::GraphCollision::GraphCollision()   {
}
