#pragma once
// IWYU pragma private; include "GlobalNamespace/PlaySoundOnEnable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__PlaySoundOnEnable_def.hpp"
#include "GlobalNamespace/zzzz__PlaySoundOnEnable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlaySoundOnEnable.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaySoundOnEnable::*)()>(&::GlobalNamespace::PlaySoundOnEnable::Reset)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5646af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaySoundOnEnable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaySoundOnEnable::*)()>(&::GlobalNamespace::PlaySoundOnEnable::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5646bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaySoundOnEnable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaySoundOnEnable::*)()>(&::GlobalNamespace::PlaySoundOnEnable::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5646d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaySoundOnEnable.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaySoundOnEnable::*)()>(&::GlobalNamespace::PlaySoundOnEnable::Play)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5646bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable*>(),
                        {"Play", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaySoundOnEnable.DoLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::PlaySoundOnEnable::*)()>(&::GlobalNamespace::PlaySoundOnEnable::DoLoop)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5646d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable*>(),
                        {"DoLoop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaySoundOnEnable.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaySoundOnEnable::*)()>(&::GlobalNamespace::PlaySoundOnEnable::Stop)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5646d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaySoundOnEnable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaySoundOnEnable::*)()>(&::GlobalNamespace::PlaySoundOnEnable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5646de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::PlaySoundOnEnable::__cordl_internal_get__source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::PlaySoundOnEnable::__cordl_internal_get__source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr void GlobalNamespace::PlaySoundOnEnable::__cordl_internal_set__source(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____source = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::PlaySoundOnEnable::__cordl_internal_get__clips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::PlaySoundOnEnable::__cordl_internal_get__clips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clips;
}
constexpr void GlobalNamespace::PlaySoundOnEnable::__cordl_internal_set__clips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clips = value;
}
constexpr bool& GlobalNamespace::PlaySoundOnEnable::__cordl_internal_get__loop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loop;
}
constexpr bool const& GlobalNamespace::PlaySoundOnEnable::__cordl_internal_get__loop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loop;
}
constexpr void GlobalNamespace::PlaySoundOnEnable::__cordl_internal_set__loop(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loop = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::PlaySoundOnEnable::__cordl_internal_get__loopDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopDelay;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::PlaySoundOnEnable::__cordl_internal_get__loopDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopDelay;
}
constexpr void GlobalNamespace::PlaySoundOnEnable::__cordl_internal_set__loopDelay(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loopDelay = value;
}
inline void GlobalNamespace::PlaySoundOnEnable::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlaySoundOnEnable::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlaySoundOnEnable::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlaySoundOnEnable::Play()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable*>(),
                        {"Play", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::PlaySoundOnEnable::DoLoop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable*>(),
                        {"DoLoop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::PlaySoundOnEnable::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlaySoundOnEnable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlaySoundOnEnable* GlobalNamespace::PlaySoundOnEnable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlaySoundOnEnable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlaySoundOnEnable::PlaySoundOnEnable()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::*)(int32_t)>(&::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5646db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::*)()>(&::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5646de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::*)()>(&::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5646dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::*)()>(&::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5646f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::*)()>(&::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5646f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::*)()>(&::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5646f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::PlaySoundOnEnable>& GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PlaySoundOnEnable> const& GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlaySoundOnEnable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::__cordl_internal_get__waitEndTime_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitEndTime_5__2;
}
constexpr float_t const& GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::__cordl_internal_get__waitEndTime_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitEndTime_5__2;
}
constexpr void GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::__cordl_internal_set__waitEndTime_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waitEndTime_5__2 = value;
}
inline void GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8* GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlaySoundOnEnable__DoLoop_d__8::PlaySoundOnEnable__DoLoop_d__8()   {
}
