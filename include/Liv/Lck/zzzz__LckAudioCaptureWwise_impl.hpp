#pragma once
// IWYU pragma private; include "Liv/Lck/LckAudioCaptureWwise.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/zzzz__LckAudioCaptureWwise_def.hpp"
#include "Liv/Lck/Collections/zzzz__AudioBuffer_def.hpp"
#include "Liv/Lck/zzzz__ILckAudioSource_def.hpp"
#include "Liv/Lck/zzzz__LckAudioCaptureWwise_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureWwise.IsCapturing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckAudioCaptureWwise::*)()>(&::Liv::Lck::LckAudioCaptureWwise::IsCapturing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdd838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise*>(),
                        {"IsCapturing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureWwise.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Liv::Lck::LckAudioCaptureWwise::*)()>(&::Liv::Lck::LckAudioCaptureWwise::Start)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9cdd840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureWwise.EnableCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCaptureWwise::*)()>(&::Liv::Lck::LckAudioCaptureWwise::EnableCapture)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9cdd8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise*>(),
                    {::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureWwise.DisableCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCaptureWwise::*)()>(&::Liv::Lck::LckAudioCaptureWwise::DisableCapture)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9cdd958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise*>(),
                    {::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureWwise.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCaptureWwise::*)()>(&::Liv::Lck::LckAudioCaptureWwise::OnDestroy)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9cdd9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureWwise.GetAudioData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCaptureWwise::*)(::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*)>(&::Liv::Lck::LckAudioCaptureWwise::GetAudioData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9cdda88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise*>(),
                        {"GetAudioData", {}, {::i2c::type_of<::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureWwise._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCaptureWwise::*)()>(&::Liv::Lck::LckAudioCaptureWwise::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9cdda8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Liv::Lck::LckAudioCaptureWwise::__cordl_internal_get__captureAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____captureAudio;
}
constexpr bool const& Liv::Lck::LckAudioCaptureWwise::__cordl_internal_get__captureAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____captureAudio;
}
constexpr void Liv::Lck::LckAudioCaptureWwise::__cordl_internal_set__captureAudio(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____captureAudio = value;
}
constexpr ::Liv::Lck::Collections::AudioBuffer*& Liv::Lck::LckAudioCaptureWwise::__cordl_internal_get__audioBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioBuffer;
}
constexpr ::Liv::Lck::Collections::AudioBuffer* const& Liv::Lck::LckAudioCaptureWwise::__cordl_internal_get__audioBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioBuffer;
}
constexpr void Liv::Lck::LckAudioCaptureWwise::__cordl_internal_set__audioBuffer(::Liv::Lck::Collections::AudioBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioBuffer = value;
}
inline bool Liv::Lck::LckAudioCaptureWwise::IsCapturing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise*>(),
                        {"IsCapturing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Liv::Lck::LckAudioCaptureWwise::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Liv::Lck::LckAudioCaptureWwise::EnableCapture()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckAudioCaptureWwise::DisableCapture()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckAudioCaptureWwise::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckAudioCaptureWwise::GetAudioData(::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise*>(),
                        {"GetAudioData", {}, {::i2c::type_of<::Liv::Lck::ILckAudioSource_AudioDataCallbackDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void Liv::Lck::LckAudioCaptureWwise::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckAudioCaptureWwise* Liv::Lck::LckAudioCaptureWwise::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckAudioCaptureWwise*>());
}
/// @brief Convert operator to "::Liv::Lck::ILckAudioSource"
constexpr  Liv::Lck::LckAudioCaptureWwise::operator ::Liv::Lck::ILckAudioSource*() noexcept {
return static_cast<::Liv::Lck::ILckAudioSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckAudioSource"
constexpr ::Liv::Lck::ILckAudioSource* Liv::Lck::LckAudioCaptureWwise::i___Liv__Lck__ILckAudioSource() noexcept {
return static_cast<::Liv::Lck::ILckAudioSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckAudioCaptureWwise::LckAudioCaptureWwise()   {
}
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureWwise__Start_d__3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCaptureWwise__Start_d__3::*)(int32_t)>(&::Liv::Lck::LckAudioCaptureWwise__Start_d__3::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9cdd898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise__Start_d__3*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureWwise__Start_d__3.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCaptureWwise__Start_d__3::*)()>(&::Liv::Lck::LckAudioCaptureWwise__Start_d__3::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9cddb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise__Start_d__3*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureWwise__Start_d__3.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckAudioCaptureWwise__Start_d__3::*)()>(&::Liv::Lck::LckAudioCaptureWwise__Start_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9cddb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise__Start_d__3*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureWwise__Start_d__3.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::LckAudioCaptureWwise__Start_d__3::*)()>(&::Liv::Lck::LckAudioCaptureWwise__Start_d__3::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cddb5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise__Start_d__3*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureWwise__Start_d__3.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioCaptureWwise__Start_d__3::*)()>(&::Liv::Lck::LckAudioCaptureWwise__Start_d__3::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9cddb64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise__Start_d__3*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioCaptureWwise__Start_d__3.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::LckAudioCaptureWwise__Start_d__3::*)()>(&::Liv::Lck::LckAudioCaptureWwise__Start_d__3::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cddb9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise__Start_d__3*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Liv::Lck::LckAudioCaptureWwise__Start_d__3::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Liv::Lck::LckAudioCaptureWwise__Start_d__3::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Liv::Lck::LckAudioCaptureWwise__Start_d__3::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Liv::Lck::LckAudioCaptureWwise__Start_d__3::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Liv::Lck::LckAudioCaptureWwise__Start_d__3::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Liv::Lck::LckAudioCaptureWwise__Start_d__3::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
inline void Liv::Lck::LckAudioCaptureWwise__Start_d__3::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise__Start_d__3*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Liv::Lck::LckAudioCaptureWwise__Start_d__3::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise__Start_d__3*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::LckAudioCaptureWwise__Start_d__3::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise__Start_d__3*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::LckAudioCaptureWwise__Start_d__3::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise__Start_d__3*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Liv::Lck::LckAudioCaptureWwise__Start_d__3::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise__Start_d__3*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::LckAudioCaptureWwise__Start_d__3::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioCaptureWwise__Start_d__3*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Liv::Lck::LckAudioCaptureWwise__Start_d__3* Liv::Lck::LckAudioCaptureWwise__Start_d__3::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckAudioCaptureWwise__Start_d__3*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Liv::Lck::LckAudioCaptureWwise__Start_d__3::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Liv::Lck::LckAudioCaptureWwise__Start_d__3::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Liv::Lck::LckAudioCaptureWwise__Start_d__3::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Liv::Lck::LckAudioCaptureWwise__Start_d__3::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::LckAudioCaptureWwise__Start_d__3::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::LckAudioCaptureWwise__Start_d__3::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckAudioCaptureWwise__Start_d__3::LckAudioCaptureWwise__Start_d__3()   {
}
