#pragma once
// IWYU pragma private; include "GorillaTag/Audio/GTRecorder.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/Audio/zzzz__GTRecorder_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemPost_def.hpp"
#include "GorillaTag/Audio/zzzz__GTMicWrapper_def.hpp"
#include "GorillaTag/Audio/zzzz__GTRecorder_def.hpp"
#include "Photon/Voice/Unity/zzzz__MicWrapper_def.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceLogger_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: ::GorillaTag::Audio::GTRecorder.get_PostTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Audio::GTRecorder::*)()>(&::GorillaTag::Audio::GTRecorder::get_PostTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d51140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder*>(),
                        {"get_PostTickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTRecorder.set_PostTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTRecorder::*)(bool)>(&::GorillaTag::Audio::GTRecorder::set_PostTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d51148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder*>(),
                        {"set_PostTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTRecorder.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTRecorder::*)()>(&::GorillaTag::Audio::GTRecorder::OnEnable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d51150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTRecorder.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTRecorder::*)()>(&::GorillaTag::Audio::GTRecorder::OnDisable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d511bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTRecorder.CreateMicWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::Unity::MicWrapper* (::GorillaTag::Audio::GTRecorder::*)(::StringW, int32_t, ::Photon::Voice::Unity::VoiceLogger*)>(&::GorillaTag::Audio::GTRecorder::CreateMicWrapper)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5d51228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Audio::GTRecorder*>(),
                    {::i2c::class_of<::GorillaTag::Audio::GTRecorder*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTRecorder.DoTestEcho
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTag::Audio::GTRecorder::*)()>(&::GorillaTag::Audio::GTRecorder::DoTestEcho)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d512dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder*>(),
                        {"DoTestEcho", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTRecorder.PostTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTRecorder::*)()>(&::GorillaTag::Audio::GTRecorder::PostTick)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5d51370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder*>(),
                        {"PostTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTRecorder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTRecorder::*)()>(&::GorillaTag::Audio::GTRecorder::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d5139c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTag::Audio::GTRecorder::__cordl_internal_get_AllowPitchAdjustment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowPitchAdjustment;
}
constexpr bool const& GorillaTag::Audio::GTRecorder::__cordl_internal_get_AllowPitchAdjustment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowPitchAdjustment;
}
constexpr void GorillaTag::Audio::GTRecorder::__cordl_internal_set_AllowPitchAdjustment(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AllowPitchAdjustment = value;
}
constexpr float_t& GorillaTag::Audio::GTRecorder::__cordl_internal_get_PitchAdjustment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PitchAdjustment;
}
constexpr float_t const& GorillaTag::Audio::GTRecorder::__cordl_internal_get_PitchAdjustment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PitchAdjustment;
}
constexpr void GorillaTag::Audio::GTRecorder::__cordl_internal_set_PitchAdjustment(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PitchAdjustment = value;
}
constexpr bool& GorillaTag::Audio::GTRecorder::__cordl_internal_get_AllowVolumeAdjustment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowVolumeAdjustment;
}
constexpr bool const& GorillaTag::Audio::GTRecorder::__cordl_internal_get_AllowVolumeAdjustment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowVolumeAdjustment;
}
constexpr void GorillaTag::Audio::GTRecorder::__cordl_internal_set_AllowVolumeAdjustment(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AllowVolumeAdjustment = value;
}
constexpr float_t& GorillaTag::Audio::GTRecorder::__cordl_internal_get_VolumeAdjustment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VolumeAdjustment;
}
constexpr float_t const& GorillaTag::Audio::GTRecorder::__cordl_internal_get_VolumeAdjustment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VolumeAdjustment;
}
constexpr void GorillaTag::Audio::GTRecorder::__cordl_internal_set_VolumeAdjustment(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VolumeAdjustment = value;
}
constexpr float_t& GorillaTag::Audio::GTRecorder::__cordl_internal_get_DebugEchoLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugEchoLength;
}
constexpr float_t const& GorillaTag::Audio::GTRecorder::__cordl_internal_get_DebugEchoLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugEchoLength;
}
constexpr void GorillaTag::Audio::GTRecorder::__cordl_internal_set_DebugEchoLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugEchoLength = value;
}
constexpr ::GorillaTag::Audio::GTMicWrapper*& GorillaTag::Audio::GTRecorder::__cordl_internal_get__micWrapper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micWrapper;
}
constexpr ::GorillaTag::Audio::GTMicWrapper* const& GorillaTag::Audio::GTRecorder::__cordl_internal_get__micWrapper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micWrapper;
}
constexpr void GorillaTag::Audio::GTRecorder::__cordl_internal_set__micWrapper(::GorillaTag::Audio::GTMicWrapper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____micWrapper = value;
}
constexpr ::UnityEngine::Coroutine*& GorillaTag::Audio::GTRecorder::__cordl_internal_get__testEchoCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____testEchoCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GorillaTag::Audio::GTRecorder::__cordl_internal_get__testEchoCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____testEchoCoroutine;
}
constexpr void GorillaTag::Audio::GTRecorder::__cordl_internal_set__testEchoCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____testEchoCoroutine = value;
}
constexpr bool& GorillaTag::Audio::GTRecorder::__cordl_internal_get__PostTickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PostTickRunning_k__BackingField;
}
constexpr bool const& GorillaTag::Audio::GTRecorder::__cordl_internal_get__PostTickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PostTickRunning_k__BackingField;
}
constexpr void GorillaTag::Audio::GTRecorder::__cordl_internal_set__PostTickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PostTickRunning_k__BackingField = value;
}
inline bool GorillaTag::Audio::GTRecorder::get_PostTickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder*>(),
                        {"get_PostTickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Audio::GTRecorder::set_PostTickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder*>(),
                        {"set_PostTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Audio::GTRecorder::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Audio::GTRecorder::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::MicWrapper* GorillaTag::Audio::GTRecorder::CreateMicWrapper(::StringW  micDev, int32_t  samplingRateInt, ::Photon::Voice::Unity::VoiceLogger*  logger)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Audio::GTRecorder*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::Unity::MicWrapper*>(this, ___internal_method, micDev, samplingRateInt, logger);
}
inline ::System::Collections::IEnumerator* GorillaTag::Audio::GTRecorder::DoTestEcho()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder*>(),
                        {"DoTestEcho", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaTag::Audio::GTRecorder::PostTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder*>(),
                        {"PostTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Audio::GTRecorder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Audio::GTRecorder* GorillaTag::Audio::GTRecorder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Audio::GTRecorder*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr  GorillaTag::Audio::GTRecorder::operator ::GlobalNamespace::ITickSystemPost*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPost*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* GorillaTag::Audio::GTRecorder::i___GlobalNamespace__ITickSystemPost() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPost*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Audio::GTRecorder::GTRecorder()   {
}
//  Writing Method size for method: ::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::*)(int32_t)>(&::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5d51348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::*)()>(&::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d51408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::*)()>(&::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5d5140c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::*)()>(&::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d51528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::*)()>(&::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d51530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::*)()>(&::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d51568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTag::Audio::GTRecorder>& GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTag::Audio::GTRecorder> const& GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::__cordl_internal_set___4__this(::UnityW<::GorillaTag::Audio::GTRecorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14* GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Audio::GTRecorder__DoTestEcho_d__14::GTRecorder__DoTestEcho_d__14()   {
}
