#pragma once
// IWYU pragma private; include "GlobalNamespace/GRDropZone.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GRDropZone_def.hpp"
#include "GlobalNamespace/zzzz__GRDropZone_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRDropZone.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDropZone::*)()>(&::GlobalNamespace::GRDropZone::Awake)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5877684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropZone*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDropZone.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDropZone::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GRDropZone::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5877784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropZone*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDropZone.GetRepelDirectionWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GRDropZone::*)()>(&::GlobalNamespace::GRDropZone::GetRepelDirectionWorld)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58778d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropZone*>(),
                        {"GetRepelDirectionWorld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDropZone.PlayEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDropZone::*)()>(&::GlobalNamespace::GRDropZone::PlayEffect)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x58778dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropZone*>(),
                        {"PlayEffect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDropZone.DelayedStopEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GRDropZone::*)()>(&::GlobalNamespace::GRDropZone::DelayedStopEffect)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5877a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropZone*>(),
                        {"DelayedStopEffect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDropZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDropZone::*)()>(&::GlobalNamespace::GRDropZone::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5877b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRDropZone::__cordl_internal_get_vfxRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vfxRoot;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRDropZone::__cordl_internal_get_vfxRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vfxRoot;
}
constexpr void GlobalNamespace::GRDropZone::__cordl_internal_set_vfxRoot(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vfxRoot = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRDropZone::__cordl_internal_get_sfxPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sfxPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRDropZone::__cordl_internal_get_sfxPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sfxPrefab;
}
constexpr void GlobalNamespace::GRDropZone::__cordl_internal_set_sfxPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sfxPrefab = value;
}
constexpr float_t& GlobalNamespace::GRDropZone::__cordl_internal_get_effectDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectDuration;
}
constexpr float_t const& GlobalNamespace::GRDropZone::__cordl_internal_get_effectDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectDuration;
}
constexpr void GlobalNamespace::GRDropZone::__cordl_internal_set_effectDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effectDuration = value;
}
constexpr bool& GlobalNamespace::GRDropZone::__cordl_internal_get_playingEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playingEffect;
}
constexpr bool const& GlobalNamespace::GRDropZone::__cordl_internal_get_playingEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playingEffect;
}
constexpr void GlobalNamespace::GRDropZone::__cordl_internal_set_playingEffect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playingEffect = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRDropZone::__cordl_internal_get_repelDirectionLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repelDirectionLocal;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRDropZone::__cordl_internal_get_repelDirectionLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repelDirectionLocal;
}
constexpr void GlobalNamespace::GRDropZone::__cordl_internal_set_repelDirectionLocal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___repelDirectionLocal = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRDropZone::__cordl_internal_get_repelDirectionWorld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repelDirectionWorld;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRDropZone::__cordl_internal_get_repelDirectionWorld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repelDirectionWorld;
}
constexpr void GlobalNamespace::GRDropZone::__cordl_internal_set_repelDirectionWorld(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___repelDirectionWorld = value;
}
inline void GlobalNamespace::GRDropZone::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropZone*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRDropZone::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropZone*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GRDropZone::GetRepelDirectionWorld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropZone*>(),
                        {"GetRepelDirectionWorld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::GRDropZone::PlayEffect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropZone*>(),
                        {"PlayEffect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GRDropZone::DelayedStopEffect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropZone*>(),
                        {"DelayedStopEffect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::GRDropZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRDropZone* GlobalNamespace::GRDropZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRDropZone*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRDropZone::GRDropZone()   {
}
//  Writing Method size for method: ::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::*)(int32_t)>(&::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5877af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::*)()>(&::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5877b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::*)()>(&::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::MoveNext)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5877ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::*)()>(&::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5877c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::*)()>(&::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5877c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::*)()>(&::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5877cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GRDropZone>& GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GRDropZone> const& GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GRDropZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10* GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRDropZone__DelayedStopEffect_d__10::GRDropZone__DelayedStopEffect_d__10()   {
}
