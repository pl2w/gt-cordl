#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipHttpRunner.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipHttpRunner_def.hpp"
#include "GlobalNamespace/zzzz__MothershipHTTPRequest_def.hpp"
#include "GlobalNamespace/zzzz__MothershipHTTPResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipHttpRunner_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipHttpRunner.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MothershipHttpRunner> (*)()>(&::GlobalNamespace::MothershipHttpRunner::get_instance)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x53c05c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpRunner*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHttpRunner.CreateInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::MothershipHttpRunner::CreateInstance)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x53c074c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpRunner*>(),
                        {"CreateInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHttpRunner.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipHttpRunner::*)()>(&::GlobalNamespace::MothershipHttpRunner::Awake)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x53c0898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipHttpRunner*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipHttpRunner*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHttpRunner.SendRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipHttpRunner::*)(::UnityEngine::Networking::UnityWebRequest*, ::GlobalNamespace::MothershipHTTPRequest*, ::System::Action_1<::GlobalNamespace::MothershipHTTPResponse*>*)>(&::GlobalNamespace::MothershipHttpRunner::SendRequest)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x53c0614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpRunner*>(),
                        {"SendRequest", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>(), ::i2c::type_of<::GlobalNamespace::MothershipHTTPRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::MothershipHTTPResponse*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHttpRunner.SendRequestInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MothershipHttpRunner::*)(::UnityEngine::Networking::UnityWebRequest*, ::GlobalNamespace::MothershipHTTPRequest*, ::System::Action_1<::GlobalNamespace::MothershipHTTPResponse*>*)>(&::GlobalNamespace::MothershipHttpRunner::SendRequestInternal)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x53c09c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpRunner*>(),
                        {"SendRequestInternal", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>(), ::i2c::type_of<::GlobalNamespace::MothershipHTTPRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::MothershipHTTPResponse*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHttpRunner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipHttpRunner::*)()>(&::GlobalNamespace::MothershipHttpRunner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x53c0a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpRunner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MothershipHttpRunner::setStaticF__instance(::UnityW<::GlobalNamespace::MothershipHttpRunner>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::MothershipHttpRunner>, "_instance", ::GlobalNamespace::MothershipHttpRunner*>(std::forward<::UnityW<::GlobalNamespace::MothershipHttpRunner>>(value));
}
inline ::UnityW<::GlobalNamespace::MothershipHttpRunner> GlobalNamespace::MothershipHttpRunner::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::MothershipHttpRunner>, "_instance", ::GlobalNamespace::MothershipHttpRunner*>();
}
inline ::UnityW<::GlobalNamespace::MothershipHttpRunner> GlobalNamespace::MothershipHttpRunner::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpRunner*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MothershipHttpRunner>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MothershipHttpRunner::CreateInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpRunner*>(),
                        {"CreateInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MothershipHttpRunner::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipHttpRunner*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipHttpRunner::SendRequest(::UnityEngine::Networking::UnityWebRequest*  uwr, ::GlobalNamespace::MothershipHTTPRequest*  request, ::System::Action_1<::GlobalNamespace::MothershipHTTPResponse*>*  responseCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpRunner*>(),
                        {"SendRequest", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>(), ::i2c::type_of<::GlobalNamespace::MothershipHTTPRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::MothershipHTTPResponse*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uwr, request, responseCallback);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MothershipHttpRunner::SendRequestInternal(::UnityEngine::Networking::UnityWebRequest*  uwr, ::GlobalNamespace::MothershipHTTPRequest*  request, ::System::Action_1<::GlobalNamespace::MothershipHTTPResponse*>*  responseCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpRunner*>(),
                        {"SendRequestInternal", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>(), ::i2c::type_of<::GlobalNamespace::MothershipHTTPRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::MothershipHTTPResponse*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, uwr, request, responseCallback);
}
inline void GlobalNamespace::MothershipHttpRunner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpRunner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MothershipHttpRunner* GlobalNamespace::MothershipHttpRunner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipHttpRunner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipHttpRunner::MothershipHttpRunner()   {
}
//  Writing Method size for method: ::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::*)(int32_t)>(&::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x53c0a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::*)()>(&::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x53c0a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::*)()>(&::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x53c0a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::*)()>(&::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x53c0bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::*)()>(&::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x53c0bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::*)()>(&::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x53c0c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::__cordl_internal_get_uwr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uwr;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::__cordl_internal_get_uwr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uwr;
}
constexpr void GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::__cordl_internal_set_uwr(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uwr = value;
}
constexpr ::GlobalNamespace::MothershipHTTPRequest*& GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::GlobalNamespace::MothershipHTTPRequest* const& GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::__cordl_internal_set_request(::GlobalNamespace::MothershipHTTPRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
constexpr ::System::Action_1<::GlobalNamespace::MothershipHTTPResponse*>*& GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::__cordl_internal_get_responseCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseCallback;
}
constexpr ::System::Action_1<::GlobalNamespace::MothershipHTTPResponse*>* const& GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::__cordl_internal_get_responseCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseCallback;
}
constexpr void GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::__cordl_internal_set_responseCallback(::System::Action_1<::GlobalNamespace::MothershipHTTPResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___responseCallback = value;
}
inline void GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6* GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipHttpRunner__SendRequestInternal_d__6::MothershipHttpRunner__SendRequestInternal_d__6()   {
}
