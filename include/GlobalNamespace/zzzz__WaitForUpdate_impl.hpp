#pragma once
// IWYU pragma private; include "GlobalNamespace/WaitForUpdate.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__CustomYieldInstruction_impl.hpp"
#include "GlobalNamespace/zzzz__WaitForUpdate_def.hpp"
#include "GlobalNamespace/zzzz__WaitForUpdate_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WaitForUpdate.get_keepWaiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::WaitForUpdate::*)()>(&::GlobalNamespace::WaitForUpdate::get_keepWaiting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3454c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::WaitForUpdate*>(),
                    {::i2c::class_of<::GlobalNamespace::WaitForUpdate*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaitForUpdate.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::WaitForUpdate_MainThreadAwaiter* (::GlobalNamespace::WaitForUpdate::*)()>(&::GlobalNamespace::WaitForUpdate::GetAwaiter)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f34554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate*>(),
                        {"GetAwaiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaitForUpdate.CoroutineWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(::System::Collections::IEnumerator*, ::GlobalNamespace::WaitForUpdate_MainThreadAwaiter*)>(&::GlobalNamespace::WaitForUpdate::CoroutineWrapper)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f345c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate*>(),
                        {"CoroutineWrapper", {}, {::i2c::type_of<::System::Collections::IEnumerator*>(), ::i2c::type_of<::GlobalNamespace::WaitForUpdate_MainThreadAwaiter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaitForUpdate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaitForUpdate::*)()>(&::GlobalNamespace::WaitForUpdate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f34674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::WaitForUpdate::get_keepWaiting()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::WaitForUpdate*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::WaitForUpdate_MainThreadAwaiter* GlobalNamespace::WaitForUpdate::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate*>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::WaitForUpdate_MainThreadAwaiter*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::WaitForUpdate::CoroutineWrapper(::System::Collections::IEnumerator*  theWorker, ::GlobalNamespace::WaitForUpdate_MainThreadAwaiter*  awaiter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate*>(),
                        {"CoroutineWrapper", {}, {::i2c::type_of<::System::Collections::IEnumerator*>(), ::i2c::type_of<::GlobalNamespace::WaitForUpdate_MainThreadAwaiter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, theWorker, awaiter);
}
inline void GlobalNamespace::WaitForUpdate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WaitForUpdate* GlobalNamespace::WaitForUpdate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WaitForUpdate*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WaitForUpdate::WaitForUpdate()   {
}
//  Writing Method size for method: ::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::*)(int32_t)>(&::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f3464c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::*)()>(&::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f346bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::*)()>(&::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f346c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::*)()>(&::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f34748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::*)()>(&::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f34750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::*)()>(&::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f34788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::System::Collections::IEnumerator*& GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::__cordl_internal_get_theWorker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___theWorker;
}
constexpr ::System::Collections::IEnumerator* const& GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::__cordl_internal_get_theWorker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___theWorker;
}
constexpr void GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::__cordl_internal_set_theWorker(::System::Collections::IEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___theWorker = value;
}
constexpr ::GlobalNamespace::WaitForUpdate_MainThreadAwaiter*& GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::__cordl_internal_get_awaiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awaiter;
}
constexpr ::GlobalNamespace::WaitForUpdate_MainThreadAwaiter* const& GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::__cordl_internal_get_awaiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awaiter;
}
constexpr void GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::__cordl_internal_set_awaiter(::GlobalNamespace::WaitForUpdate_MainThreadAwaiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___awaiter = value;
}
inline void GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4* GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WaitForUpdate__CoroutineWrapper_d__4::WaitForUpdate__CoroutineWrapper_d__4()   {
}
//  Writing Method size for method: ::GlobalNamespace::WaitForUpdate_MainThreadAwaiter.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::WaitForUpdate_MainThreadAwaiter::*)()>(&::GlobalNamespace::WaitForUpdate_MainThreadAwaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3467c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate_MainThreadAwaiter*>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaitForUpdate_MainThreadAwaiter.set_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaitForUpdate_MainThreadAwaiter::*)(bool)>(&::GlobalNamespace::WaitForUpdate_MainThreadAwaiter::set_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f34684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate_MainThreadAwaiter*>(),
                        {"set_IsCompleted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaitForUpdate_MainThreadAwaiter.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaitForUpdate_MainThreadAwaiter::*)()>(&::GlobalNamespace::WaitForUpdate_MainThreadAwaiter::GetResult)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f3468c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate_MainThreadAwaiter*>(),
                        {"GetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaitForUpdate_MainThreadAwaiter.Complete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaitForUpdate_MainThreadAwaiter::*)()>(&::GlobalNamespace::WaitForUpdate_MainThreadAwaiter::Complete)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f34690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate_MainThreadAwaiter*>(),
                        {"Complete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaitForUpdate_MainThreadAwaiter.System_Runtime_CompilerServices_INotifyCompletion_OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaitForUpdate_MainThreadAwaiter::*)(::System::Action*)>(&::GlobalNamespace::WaitForUpdate_MainThreadAwaiter::System_Runtime_CompilerServices_INotifyCompletion_OnCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f346b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate_MainThreadAwaiter*>(),
                        {"System.Runtime.CompilerServices.INotifyCompletion.OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaitForUpdate_MainThreadAwaiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaitForUpdate_MainThreadAwaiter::*)()>(&::GlobalNamespace::WaitForUpdate_MainThreadAwaiter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f345bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate_MainThreadAwaiter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::WaitForUpdate_MainThreadAwaiter::__cordl_internal_get_continuation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuation;
}
constexpr ::System::Action* const& GlobalNamespace::WaitForUpdate_MainThreadAwaiter::__cordl_internal_get_continuation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuation;
}
constexpr void GlobalNamespace::WaitForUpdate_MainThreadAwaiter::__cordl_internal_set_continuation(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuation = value;
}
constexpr bool& GlobalNamespace::WaitForUpdate_MainThreadAwaiter::__cordl_internal_get__IsCompleted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsCompleted_k__BackingField;
}
constexpr bool const& GlobalNamespace::WaitForUpdate_MainThreadAwaiter::__cordl_internal_get__IsCompleted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsCompleted_k__BackingField;
}
constexpr void GlobalNamespace::WaitForUpdate_MainThreadAwaiter::__cordl_internal_set__IsCompleted_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsCompleted_k__BackingField = value;
}
inline bool GlobalNamespace::WaitForUpdate_MainThreadAwaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate_MainThreadAwaiter*>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::WaitForUpdate_MainThreadAwaiter::set_IsCompleted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate_MainThreadAwaiter*>(),
                        {"set_IsCompleted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::WaitForUpdate_MainThreadAwaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate_MainThreadAwaiter*>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WaitForUpdate_MainThreadAwaiter::Complete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate_MainThreadAwaiter*>(),
                        {"Complete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WaitForUpdate_MainThreadAwaiter::System_Runtime_CompilerServices_INotifyCompletion_OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate_MainThreadAwaiter*>(),
                        {"System.Runtime.CompilerServices.INotifyCompletion.OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation);
}
inline void GlobalNamespace::WaitForUpdate_MainThreadAwaiter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaitForUpdate_MainThreadAwaiter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WaitForUpdate_MainThreadAwaiter* GlobalNamespace::WaitForUpdate_MainThreadAwaiter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WaitForUpdate_MainThreadAwaiter*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr  GlobalNamespace::WaitForUpdate_MainThreadAwaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*() noexcept {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* GlobalNamespace::WaitForUpdate_MainThreadAwaiter::i___System__Runtime__CompilerServices__INotifyCompletion() noexcept {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WaitForUpdate_MainThreadAwaiter::WaitForUpdate_MainThreadAwaiter()   {
}
