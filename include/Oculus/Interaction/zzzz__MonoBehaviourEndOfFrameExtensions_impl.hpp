#pragma once
// IWYU pragma private; include "Oculus/Interaction/MonoBehaviourEndOfFrameExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__MonoBehaviourEndOfFrameExtensions_def.hpp"
#include "Oculus/Interaction/zzzz__MonoBehaviourEndOfFrameExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions.RegisterEndOfFrameCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::MonoBehaviour*, ::System::Action*)>(&::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions::RegisterEndOfFrameCallback)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa48bb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions*>(),
                        {"RegisterEndOfFrameCallback", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions.UnregisterEndOfFrameCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::MonoBehaviour*)>(&::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions::UnregisterEndOfFrameCallback)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa48bcb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions*>(),
                        {"UnregisterEndOfFrameCallback", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions.EndOfFrameCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(::System::Action*)>(&::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions::EndOfFrameCoroutine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa48bc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions*>(),
                        {"EndOfFrameCoroutine", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::MonoBehaviourEndOfFrameExtensions::setStaticF__endOfFrame(::UnityEngine::YieldInstruction*  value)  {
::cordl_internals::setStaticField<::UnityEngine::YieldInstruction*, "_endOfFrame", ::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions*>(std::forward<::UnityEngine::YieldInstruction*>(value));
}
inline ::UnityEngine::YieldInstruction* Oculus::Interaction::MonoBehaviourEndOfFrameExtensions::getStaticF__endOfFrame()  {
return ::cordl_internals::getStaticField<::UnityEngine::YieldInstruction*, "_endOfFrame", ::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions*>();
}
inline void Oculus::Interaction::MonoBehaviourEndOfFrameExtensions::setStaticF__routines(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::MonoBehaviour>,::UnityEngine::Coroutine*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::MonoBehaviour>,::UnityEngine::Coroutine*>*, "_routines", ::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::MonoBehaviour>,::UnityEngine::Coroutine*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::MonoBehaviour>,::UnityEngine::Coroutine*>* Oculus::Interaction::MonoBehaviourEndOfFrameExtensions::getStaticF__routines()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::MonoBehaviour>,::UnityEngine::Coroutine*>*, "_routines", ::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions*>();
}
inline void Oculus::Interaction::MonoBehaviourEndOfFrameExtensions::RegisterEndOfFrameCallback(::UnityEngine::MonoBehaviour*  monoBehaviour, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions*>(),
                        {"RegisterEndOfFrameCallback", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, monoBehaviour, callback);
}
inline void Oculus::Interaction::MonoBehaviourEndOfFrameExtensions::UnregisterEndOfFrameCallback(::UnityEngine::MonoBehaviour*  monoBehaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions*>(),
                        {"UnregisterEndOfFrameCallback", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, monoBehaviour);
}
inline ::System::Collections::IEnumerator* Oculus::Interaction::MonoBehaviourEndOfFrameExtensions::EndOfFrameCoroutine(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions*>(),
                        {"EndOfFrameCoroutine", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, callback);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions::MonoBehaviourEndOfFrameExtensions()   {
}
//  Writing Method size for method: ::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::*)(int32_t)>(&::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa48be08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::*)()>(&::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa48bf04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::*)()>(&::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::MoveNext)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa48bf08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::*)()>(&::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48bfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::*)()>(&::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa48bfc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::*)()>(&::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48c000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::System::Action*& Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action* const& Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::__cordl_internal_set_callback(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
inline void Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4* Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4()   {
}
