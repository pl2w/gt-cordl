#pragma once
// IWYU pragma private; include "GlobalNamespace/SuperInfectionSnapPoint.hpp"
#include "GlobalNamespace/zzzz__SnapJointType_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__GTHardCodedBones_SturdyEBone_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionSnapPoint_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GamePlayer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionSnapPoint.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionSnapPoint::*)()>(&::GlobalNamespace::SuperInfectionSnapPoint::Initialize)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x58423e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPoint*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionSnapPoint.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionSnapPoint::*)()>(&::GlobalNamespace::SuperInfectionSnapPoint::Clear)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x584272c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPoint*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionSnapPoint.Snapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionSnapPoint::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::SuperInfectionSnapPoint::Snapped)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5842854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPoint*>(),
                        {"Snapped", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionSnapPoint.Unsnapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionSnapPoint::*)()>(&::GlobalNamespace::SuperInfectionSnapPoint::Unsnapped)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5842730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPoint*>(),
                        {"Unsnapped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionSnapPoint.HasSnapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SuperInfectionSnapPoint::*)()>(&::GlobalNamespace::SuperInfectionSnapPoint::HasSnapped)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58418a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPoint*>(),
                        {"HasSnapped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionSnapPoint.GetSnappedEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameEntity> (::GlobalNamespace::SuperInfectionSnapPoint::*)()>(&::GlobalNamespace::SuperInfectionSnapPoint::GetSnappedEntity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5842948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPoint*>(),
                        {"GetSnappedEntity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionSnapPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionSnapPoint::*)()>(&::GlobalNamespace::SuperInfectionSnapPoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5842950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GamePlayer>& GlobalNamespace::SuperInfectionSnapPoint::__cordl_internal_get_playerForPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerForPoint;
}
constexpr ::UnityW<::GlobalNamespace::GamePlayer> const& GlobalNamespace::SuperInfectionSnapPoint::__cordl_internal_get_playerForPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerForPoint;
}
constexpr void GlobalNamespace::SuperInfectionSnapPoint::__cordl_internal_set_playerForPoint(::UnityW<::GlobalNamespace::GamePlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerForPoint = value;
}
constexpr ::GlobalNamespace::SnapJointType& GlobalNamespace::SuperInfectionSnapPoint::__cordl_internal_get_jointType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jointType;
}
constexpr ::GlobalNamespace::SnapJointType const& GlobalNamespace::SuperInfectionSnapPoint::__cordl_internal_get_jointType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jointType;
}
constexpr void GlobalNamespace::SuperInfectionSnapPoint::__cordl_internal_set_jointType(::GlobalNamespace::SnapJointType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jointType = value;
}
constexpr ::GlobalNamespace::GTHardCodedBones_SturdyEBone& GlobalNamespace::SuperInfectionSnapPoint::__cordl_internal_get_parentBone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentBone;
}
constexpr ::GlobalNamespace::GTHardCodedBones_SturdyEBone const& GlobalNamespace::SuperInfectionSnapPoint::__cordl_internal_get_parentBone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentBone;
}
constexpr void GlobalNamespace::SuperInfectionSnapPoint::__cordl_internal_set_parentBone(::GlobalNamespace::GTHardCodedBones_SturdyEBone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentBone = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SuperInfectionSnapPoint::__cordl_internal_get_overrideParentTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideParentTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SuperInfectionSnapPoint::__cordl_internal_get_overrideParentTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideParentTransform;
}
constexpr void GlobalNamespace::SuperInfectionSnapPoint::__cordl_internal_set_overrideParentTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideParentTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SuperInfectionSnapPoint::__cordl_internal_get_parentTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SuperInfectionSnapPoint::__cordl_internal_get_parentTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentTransform;
}
constexpr void GlobalNamespace::SuperInfectionSnapPoint::__cordl_internal_set_parentTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentTransform = value;
}
constexpr bool& GlobalNamespace::SuperInfectionSnapPoint::__cordl_internal_get_canSnapOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canSnapOverride;
}
constexpr bool const& GlobalNamespace::SuperInfectionSnapPoint::__cordl_internal_get_canSnapOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canSnapOverride;
}
constexpr void GlobalNamespace::SuperInfectionSnapPoint::__cordl_internal_set_canSnapOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canSnapOverride = value;
}
constexpr float_t& GlobalNamespace::SuperInfectionSnapPoint::__cordl_internal_get_snapPointRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapPointRadius;
}
constexpr float_t const& GlobalNamespace::SuperInfectionSnapPoint::__cordl_internal_get_snapPointRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapPointRadius;
}
constexpr void GlobalNamespace::SuperInfectionSnapPoint::__cordl_internal_set_snapPointRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapPointRadius = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::SuperInfectionSnapPoint::__cordl_internal_get_snappedEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snappedEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::SuperInfectionSnapPoint::__cordl_internal_get_snappedEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snappedEntity;
}
constexpr void GlobalNamespace::SuperInfectionSnapPoint::__cordl_internal_set_snappedEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snappedEntity = value;
}
inline void GlobalNamespace::SuperInfectionSnapPoint::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPoint*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionSnapPoint::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPoint*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionSnapPoint::Snapped(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPoint*>(),
                        {"Snapped", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline void GlobalNamespace::SuperInfectionSnapPoint::Unsnapped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPoint*>(),
                        {"Unsnapped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SuperInfectionSnapPoint::HasSnapped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPoint*>(),
                        {"HasSnapped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GameEntity> GlobalNamespace::SuperInfectionSnapPoint::GetSnappedEntity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPoint*>(),
                        {"GetSnappedEntity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameEntity>>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionSnapPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SuperInfectionSnapPoint* GlobalNamespace::SuperInfectionSnapPoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SuperInfectionSnapPoint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SuperInfectionSnapPoint::SuperInfectionSnapPoint()   {
}
