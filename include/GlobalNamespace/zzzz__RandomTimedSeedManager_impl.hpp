#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomTimedSeedManager.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "GlobalNamespace/zzzz__RandomTimedSeedManager_RandomTimedSeedManagerData_impl.hpp"
#include "GlobalNamespace/zzzz__RandomTimedSeedManager_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__RandomTimedSeedManager_RandomTimedSeedManagerData_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::RandomTimedSeedManager> (*)()>(&::GlobalNamespace::RandomTimedSeedManager::get_instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5693258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager.set_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::RandomTimedSeedManager*)>(&::GlobalNamespace::RandomTimedSeedManager::set_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56932a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"set_instance", {}, {::i2c::type_of<::GlobalNamespace::RandomTimedSeedManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager.get_seed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RandomTimedSeedManager::*)()>(&::GlobalNamespace::RandomTimedSeedManager::get_seed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56932f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"get_seed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager.set_seed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomTimedSeedManager::*)(int32_t)>(&::GlobalNamespace::RandomTimedSeedManager::set_seed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5693300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"set_seed", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager.get_currentSyncTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RandomTimedSeedManager::*)()>(&::GlobalNamespace::RandomTimedSeedManager::get_currentSyncTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5693308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"get_currentSyncTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager.set_currentSyncTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomTimedSeedManager::*)(float_t)>(&::GlobalNamespace::RandomTimedSeedManager::set_currentSyncTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5693310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"set_currentSyncTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomTimedSeedManager::*)()>(&::GlobalNamespace::RandomTimedSeedManager::Awake)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5693318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                    {::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager.AddCallbackOnSeedChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomTimedSeedManager::*)(::System::Action*)>(&::GlobalNamespace::RandomTimedSeedManager::AddCallbackOnSeedChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x56933f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"AddCallbackOnSeedChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager.RemoveCallbackOnSeedChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomTimedSeedManager::*)(::System::Action*)>(&::GlobalNamespace::RandomTimedSeedManager::RemoveCallbackOnSeedChanged)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56934a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"RemoveCallbackOnSeedChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager.ITickSystemTick_get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RandomTimedSeedManager::*)()>(&::GlobalNamespace::RandomTimedSeedManager::ITickSystemTick_get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56934fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"ITickSystemTick.get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager.ITickSystemTick_set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomTimedSeedManager::*)(bool)>(&::GlobalNamespace::RandomTimedSeedManager::ITickSystemTick_set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5693504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"ITickSystemTick.set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager.ITickSystemTick_Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomTimedSeedManager::*)()>(&::GlobalNamespace::RandomTimedSeedManager::ITickSystemTick_Tick)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x569350c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"ITickSystemTick.Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData (::GlobalNamespace::RandomTimedSeedManager::*)()>(&::GlobalNamespace::RandomTimedSeedManager::get_Data)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x56935a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomTimedSeedManager::*)(::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData)>(&::GlobalNamespace::RandomTimedSeedManager::set_Data)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5693600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomTimedSeedManager::*)()>(&::GlobalNamespace::RandomTimedSeedManager::WriteDataFusion)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x569365c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                    {::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomTimedSeedManager::*)()>(&::GlobalNamespace::RandomTimedSeedManager::ReadDataFusion)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5693700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                    {::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomTimedSeedManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::RandomTimedSeedManager::WriteDataPUN)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x56939c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                    {::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomTimedSeedManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::RandomTimedSeedManager::ReadDataPUN)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5693a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                    {::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager.ReadDataShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomTimedSeedManager::*)(int32_t, float_t)>(&::GlobalNamespace::RandomTimedSeedManager::ReadDataShared)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x56937fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"ReadDataShared", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomTimedSeedManager::*)()>(&::GlobalNamespace::RandomTimedSeedManager::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5693b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomTimedSeedManager::*)(bool)>(&::GlobalNamespace::RandomTimedSeedManager::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5693c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                    {::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomTimedSeedManager.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomTimedSeedManager::*)()>(&::GlobalNamespace::RandomTimedSeedManager::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5693c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                    {::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Action*>*& GlobalNamespace::RandomTimedSeedManager::__cordl_internal_get_callbacksOnSeedChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbacksOnSeedChanged;
}
constexpr ::System::Collections::Generic::List_1<::System::Action*>* const& GlobalNamespace::RandomTimedSeedManager::__cordl_internal_get_callbacksOnSeedChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbacksOnSeedChanged;
}
constexpr void GlobalNamespace::RandomTimedSeedManager::__cordl_internal_set_callbacksOnSeedChanged(::System::Collections::Generic::List_1<::System::Action*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callbacksOnSeedChanged = value;
}
constexpr int32_t& GlobalNamespace::RandomTimedSeedManager::__cordl_internal_get__seed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____seed_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::RandomTimedSeedManager::__cordl_internal_get__seed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____seed_k__BackingField;
}
constexpr void GlobalNamespace::RandomTimedSeedManager::__cordl_internal_set__seed_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____seed_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::RandomTimedSeedManager::__cordl_internal_get_idealSyncTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idealSyncTime;
}
constexpr float_t const& GlobalNamespace::RandomTimedSeedManager::__cordl_internal_get_idealSyncTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idealSyncTime;
}
constexpr void GlobalNamespace::RandomTimedSeedManager::__cordl_internal_set_idealSyncTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idealSyncTime = value;
}
constexpr float_t& GlobalNamespace::RandomTimedSeedManager::__cordl_internal_get__currentSyncTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSyncTime_k__BackingField;
}
constexpr float_t const& GlobalNamespace::RandomTimedSeedManager::__cordl_internal_get__currentSyncTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSyncTime_k__BackingField;
}
constexpr void GlobalNamespace::RandomTimedSeedManager::__cordl_internal_set__currentSyncTime_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentSyncTime_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::RandomTimedSeedManager::__cordl_internal_get_cachedSeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedSeed;
}
constexpr int32_t const& GlobalNamespace::RandomTimedSeedManager::__cordl_internal_get_cachedSeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedSeed;
}
constexpr void GlobalNamespace::RandomTimedSeedManager::__cordl_internal_set_cachedSeed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedSeed = value;
}
constexpr bool& GlobalNamespace::RandomTimedSeedManager::__cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemTick_TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::RandomTimedSeedManager::__cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemTick_TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::RandomTimedSeedManager::__cordl_internal_set__ITickSystemTick_TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ITickSystemTick_TickRunning_k__BackingField = value;
}
constexpr ::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData& GlobalNamespace::RandomTimedSeedManager::__cordl_internal_get__Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr ::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData const& GlobalNamespace::RandomTimedSeedManager::__cordl_internal_get__Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr void GlobalNamespace::RandomTimedSeedManager::__cordl_internal_set__Data(::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data = value;
}
inline void GlobalNamespace::RandomTimedSeedManager::setStaticF__instance_k__BackingField(::UnityW<::GlobalNamespace::RandomTimedSeedManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::RandomTimedSeedManager>, "<instance>k__BackingField", ::GlobalNamespace::RandomTimedSeedManager*>(std::forward<::UnityW<::GlobalNamespace::RandomTimedSeedManager>>(value));
}
inline ::UnityW<::GlobalNamespace::RandomTimedSeedManager> GlobalNamespace::RandomTimedSeedManager::getStaticF__instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::RandomTimedSeedManager>, "<instance>k__BackingField", ::GlobalNamespace::RandomTimedSeedManager*>();
}
inline ::UnityW<::GlobalNamespace::RandomTimedSeedManager> GlobalNamespace::RandomTimedSeedManager::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::RandomTimedSeedManager>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RandomTimedSeedManager::set_instance(::GlobalNamespace::RandomTimedSeedManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"set_instance", {}, {::i2c::type_of<::GlobalNamespace::RandomTimedSeedManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::RandomTimedSeedManager::get_seed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"get_seed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::RandomTimedSeedManager::set_seed(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"set_seed", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::RandomTimedSeedManager::get_currentSyncTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"get_currentSyncTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::RandomTimedSeedManager::set_currentSyncTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"set_currentSyncTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::RandomTimedSeedManager::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomTimedSeedManager::AddCallbackOnSeedChanged(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"AddCallbackOnSeedChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void GlobalNamespace::RandomTimedSeedManager::RemoveCallbackOnSeedChanged(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"RemoveCallbackOnSeedChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline bool GlobalNamespace::RandomTimedSeedManager::ITickSystemTick_get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"ITickSystemTick.get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RandomTimedSeedManager::ITickSystemTick_set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"ITickSystemTick.set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::RandomTimedSeedManager::ITickSystemTick_Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"ITickSystemTick.Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData GlobalNamespace::RandomTimedSeedManager::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData>(this, ___internal_method);
}
inline void GlobalNamespace::RandomTimedSeedManager::set_Data(::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::RandomTimedSeedManager::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomTimedSeedManager::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomTimedSeedManager::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::RandomTimedSeedManager::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::RandomTimedSeedManager::ReadDataShared(int32_t  seedVal, float_t  testTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {"ReadDataShared", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seedVal, testTime);
}
inline void GlobalNamespace::RandomTimedSeedManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomTimedSeedManager::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::RandomTimedSeedManager::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RandomTimedSeedManager*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RandomTimedSeedManager* GlobalNamespace::RandomTimedSeedManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RandomTimedSeedManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::RandomTimedSeedManager::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::RandomTimedSeedManager::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RandomTimedSeedManager::RandomTimedSeedManager()   {
}
