#pragma once
// IWYU pragma private; include "GorillaTag/Reactions/FireManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/Reactions/zzzz__FireManager_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemPost_def.hpp"
#include "GlobalNamespace/zzzz__SinglePool_def.hpp"
#include "GorillaTag/Reactions/zzzz__FireInstance_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Reactions::FireManager.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::Reactions::FireManager* (*)()>(&::GorillaTag::Reactions::FireManager::get_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d3d934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FireManager.set_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTag::Reactions::FireManager*)>(&::GorillaTag::Reactions::FireManager::set_instance)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5d3d98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"set_instance", {}, {::i2c::type_of<::GorillaTag::Reactions::FireManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FireManager.get_hasInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaTag::Reactions::FireManager::get_hasInstance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d3d9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"get_hasInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FireManager.set_hasInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GorillaTag::Reactions::FireManager::set_hasInstance)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d3da4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"set_hasInstance", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FireManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTag::Reactions::FireManager::Initialize)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5d3daac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FireManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTag::Reactions::FireInstance*)>(&::GorillaTag::Reactions::FireManager::Register)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0x5d3dca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"Register", {}, {::i2c::type_of<::GorillaTag::Reactions::FireInstance*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FireManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTag::Reactions::FireInstance*)>(&::GorillaTag::Reactions::FireManager::Unregister)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5d3e320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::GorillaTag::Reactions::FireInstance*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FireManager.GetSpatialGridPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (*)(::UnityEngine::Vector3)>(&::GorillaTag::Reactions::FireManager::GetSpatialGridPos)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5d3e408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"GetSpatialGridPos", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FireManager.ResetFireValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTag::Reactions::FireInstance*)>(&::GorillaTag::Reactions::FireManager::ResetFireValues)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d3e45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"ResetFireValues", {}, {::i2c::type_of<::GorillaTag::Reactions::FireInstance*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FireManager.SpawnFire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SinglePool*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GorillaTag::Reactions::FireManager::SpawnFire)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d3e49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"SpawnFire", {}, {::i2c::type_of<::GlobalNamespace::SinglePool*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FireManager.SpawnFire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SinglePool*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::System::Nullable_1<::UnityEngine::Quaternion>)>(&::GorillaTag::Reactions::FireManager::SpawnFire)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5d3e564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"SpawnFire", {}, {::i2c::type_of<::GlobalNamespace::SinglePool*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FireManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTag::Reactions::FireInstance*)>(&::GorillaTag::Reactions::FireManager::OnEnable)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x5d3e828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"OnEnable", {}, {::i2c::type_of<::GorillaTag::Reactions::FireInstance*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FireManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTag::Reactions::FireInstance*)>(&::GorillaTag::Reactions::FireManager::OnDisable)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5d3ec44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"OnDisable", {}, {::i2c::type_of<::GorillaTag::Reactions::FireInstance*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FireManager.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTag::Reactions::FireInstance*, ::UnityEngine::Collider*)>(&::GorillaTag::Reactions::FireManager::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d3ed80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::GorillaTag::Reactions::FireInstance*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FireManager.Extinguish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, float_t)>(&::GorillaTag::Reactions::FireManager::Extinguish)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5d3ee70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"Extinguish", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FireManager.ITickSystemPost_get_PostTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Reactions::FireManager::*)()>(&::GorillaTag::Reactions::FireManager::ITickSystemPost_get_PostTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3f05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"ITickSystemPost.get_PostTickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FireManager.ITickSystemPost_set_PostTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::FireManager::*)(bool)>(&::GorillaTag::Reactions::FireManager::ITickSystemPost_set_PostTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3f064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"ITickSystemPost.set_PostTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FireManager.ITickSystemPost_PostTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::FireManager::*)()>(&::GorillaTag::Reactions::FireManager::ITickSystemPost_PostTick)> {
  constexpr static std::size_t size = 0x83c;
  constexpr static std::size_t addrs = 0x5d3f06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"ITickSystemPost.PostTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FireManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::FireManager::*)()>(&::GorillaTag::Reactions::FireManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3dca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTag::Reactions::FireManager::__cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemPost_PostTickRunning_k__BackingField;
}
constexpr bool const& GorillaTag::Reactions::FireManager::__cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemPost_PostTickRunning_k__BackingField;
}
constexpr void GorillaTag::Reactions::FireManager::__cordl_internal_set__ITickSystemPost_PostTickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ITickSystemPost_PostTickRunning_k__BackingField = value;
}
inline void GorillaTag::Reactions::FireManager::setStaticF__instance_k__BackingField(::GorillaTag::Reactions::FireManager*  value)  {
::cordl_internals::setStaticField<::GorillaTag::Reactions::FireManager*, "<instance>k__BackingField", ::GorillaTag::Reactions::FireManager*>(std::forward<::GorillaTag::Reactions::FireManager*>(value));
}
inline ::GorillaTag::Reactions::FireManager* GorillaTag::Reactions::FireManager::getStaticF__instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::GorillaTag::Reactions::FireManager*, "<instance>k__BackingField", ::GorillaTag::Reactions::FireManager*>();
}
inline void GorillaTag::Reactions::FireManager::setStaticF__hasInstance_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<hasInstance>k__BackingField", ::GorillaTag::Reactions::FireManager*>(std::forward<bool>(value));
}
inline bool GorillaTag::Reactions::FireManager::getStaticF__hasInstance_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<hasInstance>k__BackingField", ::GorillaTag::Reactions::FireManager*>();
}
inline void GorillaTag::Reactions::FireManager::setStaticF__kGObjInstId_to_fire(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaTag::Reactions::FireInstance>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaTag::Reactions::FireInstance>>*, "_kGObjInstId_to_fire", ::GorillaTag::Reactions::FireManager*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaTag::Reactions::FireInstance>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaTag::Reactions::FireInstance>>* GorillaTag::Reactions::FireManager::getStaticF__kGObjInstId_to_fire()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaTag::Reactions::FireInstance>>*, "_kGObjInstId_to_fire", ::GorillaTag::Reactions::FireManager*>();
}
inline void GorillaTag::Reactions::FireManager::setStaticF__kEnabledReactions(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Reactions::FireInstance>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Reactions::FireInstance>>*, "_kEnabledReactions", ::GorillaTag::Reactions::FireManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Reactions::FireInstance>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Reactions::FireInstance>>* GorillaTag::Reactions::FireManager::getStaticF__kEnabledReactions()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Reactions::FireInstance>>*, "_kEnabledReactions", ::GorillaTag::Reactions::FireManager*>();
}
inline void GorillaTag::Reactions::FireManager::setStaticF__kFiresToDespawn(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Reactions::FireInstance>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Reactions::FireInstance>>*, "_kFiresToDespawn", ::GorillaTag::Reactions::FireManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Reactions::FireInstance>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Reactions::FireInstance>>* GorillaTag::Reactions::FireManager::getStaticF__kFiresToDespawn()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Reactions::FireInstance>>*, "_kFiresToDespawn", ::GorillaTag::Reactions::FireManager*>();
}
inline void GorillaTag::Reactions::FireManager::setStaticF__fireSpatialGrid(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int,int32_t>*, "_fireSpatialGrid", ::GorillaTag::Reactions::FireManager*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int,int32_t>* GorillaTag::Reactions::FireManager::getStaticF__fireSpatialGrid()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int,int32_t>*, "_fireSpatialGrid", ::GorillaTag::Reactions::FireManager*>();
}
inline void GorillaTag::Reactions::FireManager::setStaticF__activeAudioSources(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_activeAudioSources", ::GorillaTag::Reactions::FireManager*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTag::Reactions::FireManager::getStaticF__activeAudioSources()  {
return ::cordl_internals::getStaticField<int32_t, "_activeAudioSources", ::GorillaTag::Reactions::FireManager*>();
}
inline void GorillaTag::Reactions::FireManager::setStaticF_shaderProp_EmissionColor(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "shaderProp_EmissionColor", ::GorillaTag::Reactions::FireManager*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTag::Reactions::FireManager::getStaticF_shaderProp_EmissionColor()  {
return ::cordl_internals::getStaticField<int32_t, "shaderProp_EmissionColor", ::GorillaTag::Reactions::FireManager*>();
}
inline ::GorillaTag::Reactions::FireManager* GorillaTag::Reactions::FireManager::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::Reactions::FireManager*>(nullptr, ___internal_method);
}
inline void GorillaTag::Reactions::FireManager::set_instance(::GorillaTag::Reactions::FireManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"set_instance", {}, {::i2c::type_of<::GorillaTag::Reactions::FireManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GorillaTag::Reactions::FireManager::get_hasInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"get_hasInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GorillaTag::Reactions::FireManager::set_hasInstance(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"set_hasInstance", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GorillaTag::Reactions::FireManager::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTag::Reactions::FireManager::Register(::GorillaTag::Reactions::FireInstance*  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"Register", {}, {::i2c::type_of<::GorillaTag::Reactions::FireInstance*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, f);
}
inline void GorillaTag::Reactions::FireManager::Unregister(::GorillaTag::Reactions::FireInstance*  reactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::GorillaTag::Reactions::FireInstance*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reactable);
}
inline ::UnityEngine::Vector3Int GorillaTag::Reactions::FireManager::GetSpatialGridPos(::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"GetSpatialGridPos", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(nullptr, ___internal_method, pos);
}
inline void GorillaTag::Reactions::FireManager::ResetFireValues(::GorillaTag::Reactions::FireInstance*  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"ResetFireValues", {}, {::i2c::type_of<::GorillaTag::Reactions::FireInstance*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, f);
}
inline void GorillaTag::Reactions::FireManager::SpawnFire(::GlobalNamespace::SinglePool*  pool, ::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  normal, float_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"SpawnFire", {}, {::i2c::type_of<::GlobalNamespace::SinglePool*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pool, pos, normal, scale);
}
inline void GorillaTag::Reactions::FireManager::SpawnFire(::GlobalNamespace::SinglePool*  pool, ::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  normal, float_t  scale, ::System::Nullable_1<::UnityEngine::Quaternion>  rotationOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"SpawnFire", {}, {::i2c::type_of<::GlobalNamespace::SinglePool*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pool, pos, normal, scale, rotationOverride);
}
inline void GorillaTag::Reactions::FireManager::OnEnable(::GorillaTag::Reactions::FireInstance*  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"OnEnable", {}, {::i2c::type_of<::GorillaTag::Reactions::FireInstance*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, f);
}
inline void GorillaTag::Reactions::FireManager::OnDisable(::GorillaTag::Reactions::FireInstance*  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"OnDisable", {}, {::i2c::type_of<::GorillaTag::Reactions::FireInstance*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, f);
}
inline void GorillaTag::Reactions::FireManager::OnTriggerEnter(::GorillaTag::Reactions::FireInstance*  f, ::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::GorillaTag::Reactions::FireInstance*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, f, other);
}
inline void GorillaTag::Reactions::FireManager::Extinguish(::UnityEngine::GameObject*  gObj, float_t  extinguishAmount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"Extinguish", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gObj, extinguishAmount);
}
inline bool GorillaTag::Reactions::FireManager::ITickSystemPost_get_PostTickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"ITickSystemPost.get_PostTickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Reactions::FireManager::ITickSystemPost_set_PostTickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"ITickSystemPost.set_PostTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Reactions::FireManager::ITickSystemPost_PostTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {"ITickSystemPost.PostTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Reactions::FireManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Reactions::FireManager* GorillaTag::Reactions::FireManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Reactions::FireManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr  GorillaTag::Reactions::FireManager::operator ::GlobalNamespace::ITickSystemPost*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPost*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* GorillaTag::Reactions::FireManager::i___GlobalNamespace__ITickSystemPost() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPost*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Reactions::FireManager::FireManager()   {
}
