#pragma once
// IWYU pragma private; include "GlobalNamespace/GameModeSpecificObjectRegistry.hpp"
#include "GorillaGameModes/zzzz__GameModeType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameModeSpecificObjectRegistry_def.hpp"
#include "GlobalNamespace/zzzz__GameModeSpecificObject_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameModeSpecificObjectRegistry.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSpecificObjectRegistry::*)()>(&::GlobalNamespace::GameModeSpecificObjectRegistry::OnEnable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x57eb9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObjectRegistry*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSpecificObjectRegistry.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSpecificObjectRegistry::*)()>(&::GlobalNamespace::GameModeSpecificObjectRegistry::OnDisable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x57ebb1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObjectRegistry*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSpecificObjectRegistry.GameModeSpecificObject_OnAwake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSpecificObjectRegistry::*)(::GlobalNamespace::GameModeSpecificObject*)>(&::GlobalNamespace::GameModeSpecificObjectRegistry::GameModeSpecificObject_OnAwake)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x57ebc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObjectRegistry*>(),
                        {"GameModeSpecificObject_OnAwake", {}, {::i2c::type_of<::GlobalNamespace::GameModeSpecificObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSpecificObjectRegistry.GameModeSpecificObject_OnDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSpecificObjectRegistry::*)(::GlobalNamespace::GameModeSpecificObject*)>(&::GlobalNamespace::GameModeSpecificObjectRegistry::GameModeSpecificObject_OnDestroyed)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x57ec050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObjectRegistry*>(),
                        {"GameModeSpecificObject_OnDestroyed", {}, {::i2c::type_of<::GlobalNamespace::GameModeSpecificObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSpecificObjectRegistry.GameMode_OnStartGameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSpecificObjectRegistry::*)(::GorillaGameModes::GameModeType)>(&::GlobalNamespace::GameModeSpecificObjectRegistry::GameMode_OnStartGameMode)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x57ec234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObjectRegistry*>(),
                        {"GameMode_OnStartGameMode", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSpecificObjectRegistry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSpecificObjectRegistry::*)()>(&::GlobalNamespace::GameModeSpecificObjectRegistry::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x57ec550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObjectRegistry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::GorillaGameModes::GameModeType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameModeSpecificObject>>*>*& GlobalNamespace::GameModeSpecificObjectRegistry::__cordl_internal_get_gameModeSpecificObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeSpecificObjects;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GorillaGameModes::GameModeType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameModeSpecificObject>>*>* const& GlobalNamespace::GameModeSpecificObjectRegistry::__cordl_internal_get_gameModeSpecificObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameModeSpecificObjects;
}
constexpr void GlobalNamespace::GameModeSpecificObjectRegistry::__cordl_internal_set_gameModeSpecificObjects(::System::Collections::Generic::Dictionary_2<::GorillaGameModes::GameModeType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameModeSpecificObject>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameModeSpecificObjects = value;
}
constexpr ::GorillaGameModes::GameModeType& GlobalNamespace::GameModeSpecificObjectRegistry::__cordl_internal_get_currentGameType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentGameType;
}
constexpr ::GorillaGameModes::GameModeType const& GlobalNamespace::GameModeSpecificObjectRegistry::__cordl_internal_get_currentGameType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentGameType;
}
constexpr void GlobalNamespace::GameModeSpecificObjectRegistry::__cordl_internal_set_currentGameType(::GorillaGameModes::GameModeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentGameType = value;
}
inline void GlobalNamespace::GameModeSpecificObjectRegistry::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObjectRegistry*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameModeSpecificObjectRegistry::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObjectRegistry*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameModeSpecificObjectRegistry::GameModeSpecificObject_OnAwake(::GlobalNamespace::GameModeSpecificObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObjectRegistry*>(),
                        {"GameModeSpecificObject_OnAwake", {}, {::i2c::type_of<::GlobalNamespace::GameModeSpecificObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GlobalNamespace::GameModeSpecificObjectRegistry::GameModeSpecificObject_OnDestroyed(::GlobalNamespace::GameModeSpecificObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObjectRegistry*>(),
                        {"GameModeSpecificObject_OnDestroyed", {}, {::i2c::type_of<::GlobalNamespace::GameModeSpecificObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GlobalNamespace::GameModeSpecificObjectRegistry::GameMode_OnStartGameMode(::GorillaGameModes::GameModeType  newGameModeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObjectRegistry*>(),
                        {"GameMode_OnStartGameMode", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newGameModeType);
}
inline void GlobalNamespace::GameModeSpecificObjectRegistry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSpecificObjectRegistry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameModeSpecificObjectRegistry* GlobalNamespace::GameModeSpecificObjectRegistry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameModeSpecificObjectRegistry*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameModeSpecificObjectRegistry::GameModeSpecificObjectRegistry()   {
}
