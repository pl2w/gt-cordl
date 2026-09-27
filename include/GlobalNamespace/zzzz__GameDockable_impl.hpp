#pragma once
// IWYU pragma private; include "GlobalNamespace/GameDockable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameDockable_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameDockable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDockable::*)()>(&::GlobalNamespace::GameDockable::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5811c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDockable*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDockable.BestDock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameEntityId (::GlobalNamespace::GameDockable::*)()>(&::GlobalNamespace::GameDockable::BestDock)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0x5811c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDockable*>(),
                        {"BestDock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDockable.GetDockablePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::GameDockable::*)()>(&::GlobalNamespace::GameDockable::GetDockablePoint)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5812260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDockable*>(),
                        {"GetDockablePoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDockable.OnDock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDockable::*)(::GlobalNamespace::GameEntity*, ::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GameDockable::OnDock)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58122e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDockable*>(),
                        {"OnDock", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDockable.OnUndock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDockable::*)(::GlobalNamespace::GameEntity*, ::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GameDockable::OnUndock)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58122e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDockable*>(),
                        {"OnUndock", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDockable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDockable::*)()>(&::GlobalNamespace::GameDockable::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58122e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDockable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GameDockable::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GameDockable::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GameDockable::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr float_t& GlobalNamespace::GameDockable::__cordl_internal_get_dockableRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dockableRadius;
}
constexpr float_t const& GlobalNamespace::GameDockable::__cordl_internal_get_dockableRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dockableRadius;
}
constexpr void GlobalNamespace::GameDockable::__cordl_internal_set_dockableRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dockableRadius = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GameDockable::__cordl_internal_get_dockablePoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dockablePoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GameDockable::__cordl_internal_get_dockablePoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dockablePoint;
}
constexpr void GlobalNamespace::GameDockable::__cordl_internal_set_dockablePoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dockablePoint = value;
}
inline void GlobalNamespace::GameDockable::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDockable*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameEntityId GlobalNamespace::GameDockable::BestDock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDockable*>(),
                        {"BestDock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameEntityId>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::GameDockable::GetDockablePoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDockable*>(),
                        {"GetDockablePoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void GlobalNamespace::GameDockable::OnDock(::GlobalNamespace::GameEntity*  gameEntity, ::GlobalNamespace::GameEntity*  attachedToGameEntity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDockable*>(),
                        {"OnDock", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameEntity, attachedToGameEntity);
}
inline void GlobalNamespace::GameDockable::OnUndock(::GlobalNamespace::GameEntity*  gameEntity, ::GlobalNamespace::GameEntity*  attachedToGameEntity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDockable*>(),
                        {"OnUndock", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameEntity, attachedToGameEntity);
}
inline void GlobalNamespace::GameDockable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDockable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameDockable* GlobalNamespace::GameDockable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameDockable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameDockable::GameDockable()   {
}
