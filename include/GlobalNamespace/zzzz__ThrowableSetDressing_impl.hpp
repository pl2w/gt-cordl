#pragma once
// IWYU pragma private; include "GlobalNamespace/ThrowableSetDressing.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ThrowableSetDressing_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__MagicIngredientType_def.hpp"
#include "GlobalNamespace/zzzz__NetworkView_def.hpp"
#include "GlobalNamespace/zzzz__ThrowableSetDressing_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__CapsuleCollider_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ThrowableSetDressing.get_inInitialPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ThrowableSetDressing::*)()>(&::GlobalNamespace::ThrowableSetDressing::get_inInitialPose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b34800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(),
                        {"get_inInitialPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableSetDressing.set_inInitialPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableSetDressing::*)(bool)>(&::GlobalNamespace::ThrowableSetDressing::set_inInitialPose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b34808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(),
                        {"set_inInitialPose", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableSetDressing.ShouldBeKinematic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ThrowableSetDressing::*)()>(&::GlobalNamespace::ThrowableSetDressing::ShouldBeKinematic)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b34810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(),
                    {::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableSetDressing.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableSetDressing::*)()>(&::GlobalNamespace::ThrowableSetDressing::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b34828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(),
                    {::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableSetDressing.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableSetDressing::*)()>(&::GlobalNamespace::ThrowableSetDressing::Start)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b3488c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(),
                    {::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableSetDressing.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableSetDressing::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::ThrowableSetDressing::OnGrab)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b348fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(),
                    {::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableSetDressing.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ThrowableSetDressing::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::ThrowableSetDressing::OnRelease)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b3494c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(),
                    {::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableSetDressing.DropItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableSetDressing::*)()>(&::GlobalNamespace::ThrowableSetDressing::DropItem)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b34a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(),
                    {::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableSetDressing.StopRespawnTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableSetDressing::*)()>(&::GlobalNamespace::ThrowableSetDressing::StopRespawnTimer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b3491c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(),
                        {"StopRespawnTimer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableSetDressing.SetWillTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableSetDressing::*)()>(&::GlobalNamespace::ThrowableSetDressing::SetWillTeleport)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b34a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(),
                        {"SetWillTeleport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableSetDressing.StartRespawnTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableSetDressing::*)(float_t)>(&::GlobalNamespace::ThrowableSetDressing::StartRespawnTimer)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b34984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(),
                        {"StartRespawnTimer", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableSetDressing.RespawnTimerCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ThrowableSetDressing::*)(float_t)>(&::GlobalNamespace::ThrowableSetDressing::RespawnTimerCoroutine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b34a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(),
                        {"RespawnTimerCoroutine", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableSetDressing._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableSetDressing::*)()>(&::GlobalNamespace::ThrowableSetDressing::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b34b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ThrowableSetDressing::__cordl_internal_get_respawnTimerDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnTimerDuration;
}
constexpr float_t const& GlobalNamespace::ThrowableSetDressing::__cordl_internal_get_respawnTimerDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnTimerDuration;
}
constexpr void GlobalNamespace::ThrowableSetDressing::__cordl_internal_set_respawnTimerDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___respawnTimerDuration = value;
}
constexpr bool& GlobalNamespace::ThrowableSetDressing::__cordl_internal_get__inInitialPose_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inInitialPose_k__BackingField;
}
constexpr bool const& GlobalNamespace::ThrowableSetDressing::__cordl_internal_get__inInitialPose_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inInitialPose_k__BackingField;
}
constexpr void GlobalNamespace::ThrowableSetDressing::__cordl_internal_set__inInitialPose_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inInitialPose_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::MagicIngredientType>& GlobalNamespace::ThrowableSetDressing::__cordl_internal_get_IngredientTypeSO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IngredientTypeSO;
}
constexpr ::UnityW<::GlobalNamespace::MagicIngredientType> const& GlobalNamespace::ThrowableSetDressing::__cordl_internal_get_IngredientTypeSO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IngredientTypeSO;
}
constexpr void GlobalNamespace::ThrowableSetDressing::__cordl_internal_set_IngredientTypeSO(::UnityW<::GlobalNamespace::MagicIngredientType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IngredientTypeSO = value;
}
constexpr float_t& GlobalNamespace::ThrowableSetDressing::__cordl_internal_get__respawnTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____respawnTimestamp;
}
constexpr float_t const& GlobalNamespace::ThrowableSetDressing::__cordl_internal_get__respawnTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____respawnTimestamp;
}
constexpr void GlobalNamespace::ThrowableSetDressing::__cordl_internal_set__respawnTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____respawnTimestamp = value;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider>& GlobalNamespace::ThrowableSetDressing::__cordl_internal_get_capsuleCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___capsuleCollider;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& GlobalNamespace::ThrowableSetDressing::__cordl_internal_get_capsuleCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___capsuleCollider;
}
constexpr void GlobalNamespace::ThrowableSetDressing::__cordl_internal_set_capsuleCollider(::UnityW<::UnityEngine::CapsuleCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___capsuleCollider = value;
}
constexpr ::UnityW<::GlobalNamespace::NetworkView>& GlobalNamespace::ThrowableSetDressing::__cordl_internal_get_netView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netView;
}
constexpr ::UnityW<::GlobalNamespace::NetworkView> const& GlobalNamespace::ThrowableSetDressing::__cordl_internal_get_netView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netView;
}
constexpr void GlobalNamespace::ThrowableSetDressing::__cordl_internal_set_netView(::UnityW<::GlobalNamespace::NetworkView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netView = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ThrowableSetDressing::__cordl_internal_get_respawnAtPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnAtPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ThrowableSetDressing::__cordl_internal_get_respawnAtPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnAtPos;
}
constexpr void GlobalNamespace::ThrowableSetDressing::__cordl_internal_set_respawnAtPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___respawnAtPos = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::ThrowableSetDressing::__cordl_internal_get_respawnAtRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnAtRot;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::ThrowableSetDressing::__cordl_internal_get_respawnAtRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnAtRot;
}
constexpr void GlobalNamespace::ThrowableSetDressing::__cordl_internal_set_respawnAtRot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___respawnAtRot = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::ThrowableSetDressing::__cordl_internal_get_respawnTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnTimer;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::ThrowableSetDressing::__cordl_internal_get_respawnTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnTimer;
}
constexpr void GlobalNamespace::ThrowableSetDressing::__cordl_internal_set_respawnTimer(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___respawnTimer = value;
}
inline bool GlobalNamespace::ThrowableSetDressing::get_inInitialPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(),
                        {"get_inInitialPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableSetDressing::set_inInitialPose(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(),
                        {"set_inInitialPose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::ThrowableSetDressing::ShouldBeKinematic()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableSetDressing::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableSetDressing::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableSetDressing::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline bool GlobalNamespace::ThrowableSetDressing::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GlobalNamespace::ThrowableSetDressing::DropItem()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableSetDressing::StopRespawnTimer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(),
                        {"StopRespawnTimer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableSetDressing::SetWillTeleport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(),
                        {"SetWillTeleport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableSetDressing::StartRespawnTimer(float_t  overrideTimer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(),
                        {"StartRespawnTimer", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, overrideTimer);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ThrowableSetDressing::RespawnTimerCoroutine(float_t  timerDuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(),
                        {"RespawnTimerCoroutine", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, timerDuration);
}
inline void GlobalNamespace::ThrowableSetDressing::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ThrowableSetDressing* GlobalNamespace::ThrowableSetDressing::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ThrowableSetDressing*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ThrowableSetDressing::ThrowableSetDressing()   {
}
//  Writing Method size for method: ::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::*)(int32_t)>(&::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b34ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::*)()>(&::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b34b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::*)()>(&::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5b34b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::*)()>(&::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b34ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::*)()>(&::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b34ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::*)()>(&::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b34ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr float_t& GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::__cordl_internal_get_timerDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timerDuration;
}
constexpr float_t const& GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::__cordl_internal_get_timerDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timerDuration;
}
constexpr void GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::__cordl_internal_set_timerDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timerDuration = value;
}
constexpr ::UnityW<::GlobalNamespace::ThrowableSetDressing>& GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::ThrowableSetDressing> const& GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ThrowableSetDressing>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21* GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21::ThrowableSetDressing__RespawnTimerCoroutine_d__21()   {
}
