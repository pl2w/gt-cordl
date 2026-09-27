#pragma once
// IWYU pragma private; include "GlobalNamespace/GameHittable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameHittable_def.hpp"
#include "GlobalNamespace/zzzz__GRDamageFlash_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GameHitData_def.hpp"
#include "GlobalNamespace/zzzz__GameHittable_def.hpp"
#include "GlobalNamespace/zzzz__IGameHittable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameHittable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameHittable::*)()>(&::GlobalNamespace::GameHittable::Awake)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5833d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHittable*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameHittable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameHittable::*)()>(&::GlobalNamespace::GameHittable::OnEnable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5833ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHittable*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameHittable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameHittable::*)()>(&::GlobalNamespace::GameHittable::OnDisable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5833fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHittable*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameHittable.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameHittable::*)()>(&::GlobalNamespace::GameHittable::OnUpdate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x58340e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHittable*>(),
                        {"OnUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameHittable.RequestHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameHittable::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GameHittable::RequestHit)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5834174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHittable*>(),
                        {"RequestHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameHittable.ApplyHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameHittable::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GameHittable::ApplyHit)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x58341d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHittable*>(),
                        {"ApplyHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameHittable.GetHittablePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameHittable_HittablePoint* (::GlobalNamespace::GameHittable::*)(int32_t)>(&::GlobalNamespace::GameHittable::GetHittablePoint)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5834780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHittable*>(),
                        {"GetHittablePoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameHittable.IsHitValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameHittable::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GameHittable::IsHitValid)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5834804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHittable*>(),
                        {"IsHitValid", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameHittable.FindHittablePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameHittable::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GameHittable::FindHittablePoint)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5834988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHittable*>(),
                        {"FindHittablePoint", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameHittable.IsColliderValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameHittable::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GameHittable::IsColliderValid)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5834a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHittable*>(),
                        {"IsColliderValid", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameHittable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameHittable::*)()>(&::GlobalNamespace::GameHittable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5834b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHittable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GameHittable::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GameHittable::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GameHittable::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameHittable_HittablePoint*>*& GlobalNamespace::GameHittable::__cordl_internal_get_hittablePoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hittablePoints;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameHittable_HittablePoint*>* const& GlobalNamespace::GameHittable::__cordl_internal_get_hittablePoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hittablePoints;
}
constexpr void GlobalNamespace::GameHittable::__cordl_internal_set_hittablePoints(::System::Collections::Generic::List_1<::GlobalNamespace::GameHittable_HittablePoint*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hittablePoints = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameHittable*>*& GlobalNamespace::GameHittable::__cordl_internal_get_components()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___components;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameHittable*>* const& GlobalNamespace::GameHittable::__cordl_internal_get_components() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___components;
}
constexpr void GlobalNamespace::GameHittable::__cordl_internal_set_components(::System::Collections::Generic::List_1<::GlobalNamespace::IGameHittable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___components = value;
}
inline void GlobalNamespace::GameHittable::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHittable*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameHittable::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHittable*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameHittable::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHittable*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameHittable::OnUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHittable*>(),
                        {"OnUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameHittable::RequestHit(::GlobalNamespace::GameHitData  hitData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHittable*>(),
                        {"RequestHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitData);
}
inline void GlobalNamespace::GameHittable::ApplyHit(::GlobalNamespace::GameHitData  hitData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHittable*>(),
                        {"ApplyHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitData);
}
inline ::GlobalNamespace::GameHittable_HittablePoint* GlobalNamespace::GameHittable::GetHittablePoint(int32_t  hittablePoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHittable*>(),
                        {"GetHittablePoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameHittable_HittablePoint*>(this, ___internal_method, hittablePoint);
}
inline bool GlobalNamespace::GameHittable::IsHitValid(::GlobalNamespace::GameHitData  hitData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHittable*>(),
                        {"IsHitValid", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hitData);
}
inline int32_t GlobalNamespace::GameHittable::FindHittablePoint(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHittable*>(),
                        {"FindHittablePoint", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, collider);
}
inline bool GlobalNamespace::GameHittable::IsColliderValid(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHittable*>(),
                        {"IsColliderValid", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, collider);
}
inline void GlobalNamespace::GameHittable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHittable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameHittable* GlobalNamespace::GameHittable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameHittable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameHittable::GameHittable()   {
}
//  Writing Method size for method: ::GlobalNamespace::GameHittable_HittablePoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameHittable_HittablePoint::*)()>(&::GlobalNamespace::GameHittable_HittablePoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5834b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHittable_HittablePoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::GameHittable_HittablePoint::__cordl_internal_get_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::GameHittable_HittablePoint::__cordl_internal_get_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr void GlobalNamespace::GameHittable_HittablePoint::__cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliders = value;
}
constexpr ::GlobalNamespace::GRDamageFlash*& GlobalNamespace::GameHittable_HittablePoint::__cordl_internal_get_damageFlash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageFlash;
}
constexpr ::GlobalNamespace::GRDamageFlash* const& GlobalNamespace::GameHittable_HittablePoint::__cordl_internal_get_damageFlash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageFlash;
}
constexpr void GlobalNamespace::GameHittable_HittablePoint::__cordl_internal_set_damageFlash(::GlobalNamespace::GRDamageFlash*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damageFlash = value;
}
inline void GlobalNamespace::GameHittable_HittablePoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameHittable_HittablePoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameHittable_HittablePoint* GlobalNamespace::GameHittable_HittablePoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameHittable_HittablePoint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameHittable_HittablePoint::GameHittable_HittablePoint()   {
}
