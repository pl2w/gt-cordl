#pragma once
// IWYU pragma private; include "GlobalNamespace/GameDock.hpp"
#include "GlobalNamespace/zzzz__GameDockType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameDock_def.hpp"
#include "GlobalNamespace/zzzz__AbilityHaptic_def.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_def.hpp"
#include "GlobalNamespace/zzzz__GameDockable_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameDock.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDock::*)()>(&::GlobalNamespace::GameDock::Awake)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5811918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDock*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDock.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDock::*)()>(&::GlobalNamespace::GameDock::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5811a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDock*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDock.CanDock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameDock::*)(::GlobalNamespace::GameDockable*)>(&::GlobalNamespace::GameDock::CanDock)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5811a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDock*>(),
                        {"CanDock", {}, {::i2c::type_of<::GlobalNamespace::GameDockable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDock.GetDockedCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameDock::*)()>(&::GlobalNamespace::GameDock::GetDockedCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5811aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDock*>(),
                        {"GetDockedCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDock.OnDock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDock::*)(::GlobalNamespace::GameEntity*, ::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GameDock::OnDock)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5811ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDock*>(),
                        {"OnDock", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDock.OnUndock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDock::*)(::GlobalNamespace::GameEntity*, ::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GameDock::OnUndock)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5811bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDock*>(),
                        {"OnUndock", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameDock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameDock::*)()>(&::GlobalNamespace::GameDock::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5811c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDock*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GameDock::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GameDock::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GameDock::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr ::GlobalNamespace::GameDockType& GlobalNamespace::GameDock::__cordl_internal_get_dockType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dockType;
}
constexpr ::GlobalNamespace::GameDockType const& GlobalNamespace::GameDock::__cordl_internal_get_dockType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dockType;
}
constexpr void GlobalNamespace::GameDock::__cordl_internal_set_dockType(::GlobalNamespace::GameDockType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dockType = value;
}
constexpr float_t& GlobalNamespace::GameDock::__cordl_internal_get_dockRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dockRadius;
}
constexpr float_t const& GlobalNamespace::GameDock::__cordl_internal_get_dockRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dockRadius;
}
constexpr void GlobalNamespace::GameDock::__cordl_internal_set_dockRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dockRadius = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GameDock::__cordl_internal_get_dockSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dockSound;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GameDock::__cordl_internal_get_dockSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dockSound;
}
constexpr void GlobalNamespace::GameDock::__cordl_internal_set_dockSound(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dockSound = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GameDock::__cordl_internal_get_undockSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___undockSound;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GameDock::__cordl_internal_get_undockSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___undockSound;
}
constexpr void GlobalNamespace::GameDock::__cordl_internal_set_undockSound(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___undockSound = value;
}
constexpr ::GlobalNamespace::AbilityHaptic*& GlobalNamespace::GameDock::__cordl_internal_get_dockHaptic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dockHaptic;
}
constexpr ::GlobalNamespace::AbilityHaptic* const& GlobalNamespace::GameDock::__cordl_internal_get_dockHaptic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dockHaptic;
}
constexpr void GlobalNamespace::GameDock::__cordl_internal_set_dockHaptic(::GlobalNamespace::AbilityHaptic*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dockHaptic = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GameDock::__cordl_internal_get_dockMarker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dockMarker;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GameDock::__cordl_internal_get_dockMarker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dockMarker;
}
constexpr void GlobalNamespace::GameDock::__cordl_internal_set_dockMarker(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dockMarker = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*& GlobalNamespace::GameDock::__cordl_internal_get_docked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___docked;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* const& GlobalNamespace::GameDock::__cordl_internal_get_docked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___docked;
}
constexpr void GlobalNamespace::GameDock::__cordl_internal_set_docked(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___docked = value;
}
inline void GlobalNamespace::GameDock::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDock*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameDock::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDock*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GameDock::CanDock(::GlobalNamespace::GameDockable*  dockable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDock*>(),
                        {"CanDock", {}, {::i2c::type_of<::GlobalNamespace::GameDockable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dockable);
}
inline int32_t GlobalNamespace::GameDock::GetDockedCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDock*>(),
                        {"GetDockedCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GameDock::OnDock(::GlobalNamespace::GameEntity*  attachedGameEntity, ::GlobalNamespace::GameEntity*  attachedToGameEntity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDock*>(),
                        {"OnDock", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attachedGameEntity, attachedToGameEntity);
}
inline void GlobalNamespace::GameDock::OnUndock(::GlobalNamespace::GameEntity*  gameEntity, ::GlobalNamespace::GameEntity*  attachedToGameEntity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDock*>(),
                        {"OnUndock", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameEntity, attachedToGameEntity);
}
inline void GlobalNamespace::GameDock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameDock*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameDock* GlobalNamespace::GameDock::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameDock*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameDock::GameDock()   {
}
