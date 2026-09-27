#pragma once
// IWYU pragma private; include "GlobalNamespace/VoxelInteractor.hpp"
#include "GlobalNamespace/zzzz__VoxelAction_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VoxelInteractor_def.hpp"
#include "GlobalNamespace/zzzz__VoxelInteractor_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "Voxels/zzzz__VoxelWorld_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VoxelInteractor.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelInteractor::*)()>(&::GlobalNamespace::VoxelInteractor::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5dfa628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelInteractor.StartOngoingAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelInteractor::*)()>(&::GlobalNamespace::VoxelInteractor::StartOngoingAction)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5dfa670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor*>(),
                        {"StartOngoingAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelInteractor.StopOngoingAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelInteractor::*)()>(&::GlobalNamespace::VoxelInteractor::StopOngoingAction)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dfa62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor*>(),
                        {"StopOngoingAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelInteractor.PerformAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelInteractor::*)()>(&::GlobalNamespace::VoxelInteractor::PerformAction)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5dfa744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor*>(),
                        {"PerformAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelInteractor.PerformActionOmnidirectional
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelInteractor::*)()>(&::GlobalNamespace::VoxelInteractor::PerformActionOmnidirectional)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x5dfa974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor*>(),
                        {"PerformActionOmnidirectional", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelInteractor.DoContinuousAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::VoxelInteractor::*)()>(&::GlobalNamespace::VoxelInteractor::DoContinuousAction)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5dfa6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor*>(),
                        {"DoContinuousAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelInteractor.ApplyVoxelAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VoxelInteractor::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::VoxelInteractor::ApplyVoxelAction)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5dfada8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor*>(),
                        {"ApplyVoxelAction", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelInteractor.ApplyVoxelAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VoxelInteractor::*)(::UnityEngine::RaycastHit)>(&::GlobalNamespace::VoxelInteractor::ApplyVoxelAction)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5dfaeb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor*>(),
                        {"ApplyVoxelAction", {}, {::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelInteractor.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelInteractor::*)()>(&::GlobalNamespace::VoxelInteractor::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5dfafd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelInteractor::*)()>(&::GlobalNamespace::VoxelInteractor::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dfb0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& GlobalNamespace::VoxelInteractor::__cordl_internal_get_layerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::VoxelInteractor::__cordl_internal_get_layerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr void GlobalNamespace::VoxelInteractor::__cordl_internal_set_layerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerMask = value;
}
constexpr float_t& GlobalNamespace::VoxelInteractor::__cordl_internal_get_rayLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayLength;
}
constexpr float_t const& GlobalNamespace::VoxelInteractor::__cordl_internal_get_rayLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayLength;
}
constexpr void GlobalNamespace::VoxelInteractor::__cordl_internal_set_rayLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rayLength = value;
}
constexpr float_t& GlobalNamespace::VoxelInteractor::__cordl_internal_get_cooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldown;
}
constexpr float_t const& GlobalNamespace::VoxelInteractor::__cordl_internal_get_cooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldown;
}
constexpr void GlobalNamespace::VoxelInteractor::__cordl_internal_set_cooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldown = value;
}
constexpr ::GlobalNamespace::VoxelAction& GlobalNamespace::VoxelInteractor::__cordl_internal_get_action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr ::GlobalNamespace::VoxelAction const& GlobalNamespace::VoxelInteractor::__cordl_internal_get_action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr void GlobalNamespace::VoxelInteractor::__cordl_internal_set_action(::GlobalNamespace::VoxelAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___action = value;
}
constexpr bool& GlobalNamespace::VoxelInteractor::__cordl_internal_get__active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____active;
}
constexpr bool const& GlobalNamespace::VoxelInteractor::__cordl_internal_get__active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____active;
}
constexpr void GlobalNamespace::VoxelInteractor::__cordl_internal_set__active(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____active = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::VoxelInteractor::__cordl_internal_get__actionRoutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____actionRoutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::VoxelInteractor::__cordl_internal_get__actionRoutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____actionRoutine;
}
constexpr void GlobalNamespace::VoxelInteractor::__cordl_internal_set__actionRoutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____actionRoutine = value;
}
constexpr float_t& GlobalNamespace::VoxelInteractor::__cordl_internal_get__nextActionTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextActionTime;
}
constexpr float_t const& GlobalNamespace::VoxelInteractor::__cordl_internal_get__nextActionTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextActionTime;
}
constexpr void GlobalNamespace::VoxelInteractor::__cordl_internal_set__nextActionTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextActionTime = value;
}
inline void GlobalNamespace::VoxelInteractor::setStaticF__hitWorlds(::System::Collections::Generic::List_1<::UnityW<::Voxels::VoxelWorld>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::Voxels::VoxelWorld>>*, "_hitWorlds", ::GlobalNamespace::VoxelInteractor*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::Voxels::VoxelWorld>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::Voxels::VoxelWorld>>* GlobalNamespace::VoxelInteractor::getStaticF__hitWorlds()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::Voxels::VoxelWorld>>*, "_hitWorlds", ::GlobalNamespace::VoxelInteractor*>();
}
inline void GlobalNamespace::VoxelInteractor::setStaticF__hitColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::Collider>>, "_hitColliders", ::GlobalNamespace::VoxelInteractor*>(std::forward<::ArrayW<::UnityW<::UnityEngine::Collider>>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> GlobalNamespace::VoxelInteractor::getStaticF__hitColliders()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::Collider>>, "_hitColliders", ::GlobalNamespace::VoxelInteractor*>();
}
inline void GlobalNamespace::VoxelInteractor::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoxelInteractor::StartOngoingAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor*>(),
                        {"StartOngoingAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoxelInteractor::StopOngoingAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor*>(),
                        {"StopOngoingAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoxelInteractor::PerformAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor*>(),
                        {"PerformAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoxelInteractor::PerformActionOmnidirectional()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor*>(),
                        {"PerformActionOmnidirectional", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::VoxelInteractor::DoContinuousAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor*>(),
                        {"DoContinuousAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline bool GlobalNamespace::VoxelInteractor::ApplyVoxelAction(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor*>(),
                        {"ApplyVoxelAction", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, collision);
}
inline bool GlobalNamespace::VoxelInteractor::ApplyVoxelAction(::UnityEngine::RaycastHit  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor*>(),
                        {"ApplyVoxelAction", {}, {::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hit);
}
inline void GlobalNamespace::VoxelInteractor::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoxelInteractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VoxelInteractor* GlobalNamespace::VoxelInteractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VoxelInteractor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoxelInteractor::VoxelInteractor()   {
}
//  Writing Method size for method: ::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::*)(int32_t)>(&::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5dfad80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::*)()>(&::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5dfb134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::*)()>(&::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::MoveNext)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5dfb138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::*)()>(&::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dfb1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::*)()>(&::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5dfb1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::*)()>(&::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dfb230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::VoxelInteractor>& GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::VoxelInteractor> const& GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::VoxelInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14* GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoxelInteractor__DoContinuousAction_d__14::VoxelInteractor__DoContinuousAction_d__14()   {
}
