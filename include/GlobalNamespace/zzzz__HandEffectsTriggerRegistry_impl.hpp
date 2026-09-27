#pragma once
// IWYU pragma private; include "GlobalNamespace/HandEffectsTriggerRegistry.hpp"
#include "GlobalNamespace/zzzz__HandEffectsTriggerRegistry_HandEffectsJob_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HandEffectsTriggerRegistry_def.hpp"
#include "GlobalNamespace/zzzz__HandEffectsTriggerRegistry_HandEffectsJob_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemPost_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GorillaTag/Shared/Scripts/Utilities/zzzz__GTBitArray_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TagEffects/zzzz__IHandEffectsTrigger_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTriggerRegistry.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HandEffectsTriggerRegistry::*)()>(&::GlobalNamespace::HandEffectsTriggerRegistry::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56be9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTriggerRegistry.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsTriggerRegistry::*)(bool)>(&::GlobalNamespace::HandEffectsTriggerRegistry::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56be9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTriggerRegistry.get_PostTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HandEffectsTriggerRegistry::*)()>(&::GlobalNamespace::HandEffectsTriggerRegistry::get_PostTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56be9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"get_PostTickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTriggerRegistry.set_PostTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsTriggerRegistry::*)(bool)>(&::GlobalNamespace::HandEffectsTriggerRegistry::set_PostTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56be9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"set_PostTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTriggerRegistry.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::HandEffectsTriggerRegistry> (*)()>(&::GlobalNamespace::HandEffectsTriggerRegistry::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x56be9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTriggerRegistry.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::HandEffectsTriggerRegistry*)>(&::GlobalNamespace::HandEffectsTriggerRegistry::set_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56bea28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::HandEffectsTriggerRegistry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTriggerRegistry.get_HasInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::HandEffectsTriggerRegistry::get_HasInstance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x56bea80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"get_HasInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTriggerRegistry.set_HasInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::HandEffectsTriggerRegistry::set_HasInstance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x56beac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"set_HasInstance", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTriggerRegistry.FindInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::HandEffectsTriggerRegistry::FindInstance)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x56bda74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"FindInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTriggerRegistry.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsTriggerRegistry::*)()>(&::GlobalNamespace::HandEffectsTriggerRegistry::Awake)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x56beb18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTriggerRegistry.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsTriggerRegistry::*)()>(&::GlobalNamespace::HandEffectsTriggerRegistry::OnEnable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x56bec54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTriggerRegistry.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsTriggerRegistry::*)()>(&::GlobalNamespace::HandEffectsTriggerRegistry::OnDisable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x56bece0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTriggerRegistry.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsTriggerRegistry::*)(::TagEffects::IHandEffectsTrigger*)>(&::GlobalNamespace::HandEffectsTriggerRegistry::Register)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x56bdb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"Register", {}, {::i2c::type_of<::TagEffects::IHandEffectsTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTriggerRegistry.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsTriggerRegistry::*)(::TagEffects::IHandEffectsTrigger*)>(&::GlobalNamespace::HandEffectsTriggerRegistry::Unregister)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56bdc84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"Unregister", {}, {::i2c::type_of<::TagEffects::IHandEffectsTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTriggerRegistry.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsTriggerRegistry::*)()>(&::GlobalNamespace::HandEffectsTriggerRegistry::OnDestroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x56bed6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTriggerRegistry.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsTriggerRegistry::*)()>(&::GlobalNamespace::HandEffectsTriggerRegistry::Tick)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x56bee0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTriggerRegistry.PostTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsTriggerRegistry::*)()>(&::GlobalNamespace::HandEffectsTriggerRegistry::PostTick)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56befc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"PostTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTriggerRegistry.CheckForHandEffectOnProcessedOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsTriggerRegistry::*)()>(&::GlobalNamespace::HandEffectsTriggerRegistry::CheckForHandEffectOnProcessedOutput)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x56befe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"CheckForHandEffectOnProcessedOutput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTriggerRegistry.CopyInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsTriggerRegistry::*)()>(&::GlobalNamespace::HandEffectsTriggerRegistry::CopyInput)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x56bee90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"CopyInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandEffectsTriggerRegistry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandEffectsTriggerRegistry::*)()>(&::GlobalNamespace::HandEffectsTriggerRegistry::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x56bf388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::TagEffects::IHandEffectsTrigger*>*& GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_get_triggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggers;
}
constexpr ::System::Collections::Generic::List_1<::TagEffects::IHandEffectsTrigger*>* const& GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_get_triggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggers;
}
constexpr void GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_set_triggers(::System::Collections::Generic::List_1<::TagEffects::IHandEffectsTrigger*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggers = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_get_triggerTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerTimes;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_get_triggerTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerTimes;
}
constexpr void GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_set_triggerTimes(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerTimes = value;
}
constexpr ::GorillaTag::Shared::Scripts::Utilities::GTBitArray*& GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_get_existingCollisionBits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___existingCollisionBits;
}
constexpr ::GorillaTag::Shared::Scripts::Utilities::GTBitArray* const& GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_get_existingCollisionBits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___existingCollisionBits;
}
constexpr void GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_set_existingCollisionBits(::GorillaTag::Shared::Scripts::Utilities::GTBitArray*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___existingCollisionBits = value;
}
constexpr ::GorillaTag::Shared::Scripts::Utilities::GTBitArray*& GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_get_newCollisionBits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newCollisionBits;
}
constexpr ::GorillaTag::Shared::Scripts::Utilities::GTBitArray* const& GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_get_newCollisionBits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newCollisionBits;
}
constexpr void GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_set_newCollisionBits(::GorillaTag::Shared::Scripts::Utilities::GTBitArray*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newCollisionBits = value;
}
constexpr int32_t& GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_get_actualListSz()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actualListSz;
}
constexpr int32_t const& GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_get_actualListSz() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actualListSz;
}
constexpr void GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_set_actualListSz(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actualListSz = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_get_jobHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobHandle;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_get_jobHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobHandle;
}
constexpr void GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_set_jobHandle(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jobHandle = value;
}
constexpr ::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob& GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_get_job()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___job;
}
constexpr ::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob const& GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_get_job() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___job;
}
constexpr void GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_set_job(::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___job = value;
}
constexpr bool& GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
constexpr bool& GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_get__PostTickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PostTickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_get__PostTickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PostTickRunning_k__BackingField;
}
constexpr void GlobalNamespace::HandEffectsTriggerRegistry::__cordl_internal_set__PostTickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PostTickRunning_k__BackingField = value;
}
inline void GlobalNamespace::HandEffectsTriggerRegistry::setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::HandEffectsTriggerRegistry>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::HandEffectsTriggerRegistry>, "<Instance>k__BackingField", ::GlobalNamespace::HandEffectsTriggerRegistry*>(std::forward<::UnityW<::GlobalNamespace::HandEffectsTriggerRegistry>>(value));
}
inline ::UnityW<::GlobalNamespace::HandEffectsTriggerRegistry> GlobalNamespace::HandEffectsTriggerRegistry::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::HandEffectsTriggerRegistry>, "<Instance>k__BackingField", ::GlobalNamespace::HandEffectsTriggerRegistry*>();
}
inline void GlobalNamespace::HandEffectsTriggerRegistry::setStaticF__HasInstance_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<HasInstance>k__BackingField", ::GlobalNamespace::HandEffectsTriggerRegistry*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::HandEffectsTriggerRegistry::getStaticF__HasInstance_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<HasInstance>k__BackingField", ::GlobalNamespace::HandEffectsTriggerRegistry*>();
}
inline bool GlobalNamespace::HandEffectsTriggerRegistry::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectsTriggerRegistry::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::HandEffectsTriggerRegistry::get_PostTickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"get_PostTickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectsTriggerRegistry::set_PostTickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"set_PostTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::HandEffectsTriggerRegistry> GlobalNamespace::HandEffectsTriggerRegistry::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::HandEffectsTriggerRegistry>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::HandEffectsTriggerRegistry::set_Instance(::GlobalNamespace::HandEffectsTriggerRegistry*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::HandEffectsTriggerRegistry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::HandEffectsTriggerRegistry::get_HasInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"get_HasInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::HandEffectsTriggerRegistry::set_HasInstance(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"set_HasInstance", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::HandEffectsTriggerRegistry::FindInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"FindInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::HandEffectsTriggerRegistry::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectsTriggerRegistry::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectsTriggerRegistry::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectsTriggerRegistry::Register(::TagEffects::IHandEffectsTrigger*  trigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"Register", {}, {::i2c::type_of<::TagEffects::IHandEffectsTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trigger);
}
inline void GlobalNamespace::HandEffectsTriggerRegistry::Unregister(::TagEffects::IHandEffectsTrigger*  trigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"Unregister", {}, {::i2c::type_of<::TagEffects::IHandEffectsTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trigger);
}
inline void GlobalNamespace::HandEffectsTriggerRegistry::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectsTriggerRegistry::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectsTriggerRegistry::PostTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"PostTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectsTriggerRegistry::CheckForHandEffectOnProcessedOutput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"CheckForHandEffectOnProcessedOutput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectsTriggerRegistry::CopyInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {"CopyInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandEffectsTriggerRegistry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandEffectsTriggerRegistry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HandEffectsTriggerRegistry* GlobalNamespace::HandEffectsTriggerRegistry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HandEffectsTriggerRegistry*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::HandEffectsTriggerRegistry::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::HandEffectsTriggerRegistry::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr  GlobalNamespace::HandEffectsTriggerRegistry::operator ::GlobalNamespace::ITickSystemPost*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPost*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* GlobalNamespace::HandEffectsTriggerRegistry::i___GlobalNamespace__ITickSystemPost() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPost*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandEffectsTriggerRegistry::HandEffectsTriggerRegistry()   {
}
