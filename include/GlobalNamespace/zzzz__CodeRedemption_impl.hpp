#pragma once
// IWYU pragma private; include "GlobalNamespace/CodeRedemption.hpp"
#include "System/zzzz__DateTimeOffset_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CodeRedemption_def.hpp"
#include "GlobalNamespace/zzzz__CodeRedemption_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CodeRedemption.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CodeRedemption::*)()>(&::GlobalNamespace::CodeRedemption::Awake)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x574fa24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CodeRedemption.HandleCodeRedemption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CodeRedemption::*)(::StringW)>(&::GlobalNamespace::CodeRedemption::HandleCodeRedemption)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x574fb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption*>(),
                        {"HandleCodeRedemption", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CodeRedemption.OnCodeRedemptionResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CodeRedemption::*)(::UnityEngine::Networking::UnityWebRequest*)>(&::GlobalNamespace::CodeRedemption::OnCodeRedemptionResponse)> {
  constexpr static std::size_t size = 0x808;
  constexpr static std::size_t addrs = 0x574fec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption*>(),
                        {"OnCodeRedemptionResponse", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CodeRedemption.CheckProcessExternalUnlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::CodeRedemption::*)(::ArrayW<::StringW>, bool, bool, bool)>(&::GlobalNamespace::CodeRedemption::CheckProcessExternalUnlock)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x57506cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption*>(),
                        {"CheckProcessExternalUnlock", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CodeRedemption.ProcessWebRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(::StringW, ::StringW, ::StringW, ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*)>(&::GlobalNamespace::CodeRedemption::ProcessWebRequest)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x574fe0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption*>(),
                        {"ProcessWebRequest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CodeRedemption._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CodeRedemption::*)()>(&::GlobalNamespace::CodeRedemption::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57507a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CodeRedemption::setStaticF_Instance(::UnityW<::GlobalNamespace::CodeRedemption>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::CodeRedemption>, "Instance", ::GlobalNamespace::CodeRedemption*>(std::forward<::UnityW<::GlobalNamespace::CodeRedemption>>(value));
}
inline ::UnityW<::GlobalNamespace::CodeRedemption> GlobalNamespace::CodeRedemption::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::CodeRedemption>, "Instance", ::GlobalNamespace::CodeRedemption*>();
}
inline void GlobalNamespace::CodeRedemption::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CodeRedemption::HandleCodeRedemption(::StringW  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption*>(),
                        {"HandleCodeRedemption", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline void GlobalNamespace::CodeRedemption::OnCodeRedemptionResponse(::UnityEngine::Networking::UnityWebRequest*  completedRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption*>(),
                        {"OnCodeRedemptionResponse", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, completedRequest);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CodeRedemption::CheckProcessExternalUnlock(::ArrayW<::StringW>  itemIDs, bool  autoEquip, bool  isLeftHand, bool  destroyOnFinish)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption*>(),
                        {"CheckProcessExternalUnlock", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, itemIDs, autoEquip, isLeftHand, destroyOnFinish);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::CodeRedemption::ProcessWebRequest(::StringW  url, ::StringW  data, ::StringW  contentType, ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption*>(),
                        {"ProcessWebRequest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, url, data, contentType, callback);
}
inline void GlobalNamespace::CodeRedemption::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CodeRedemption* GlobalNamespace::CodeRedemption::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CodeRedemption*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CodeRedemption::CodeRedemption()   {
}
//  Writing Method size for method: ::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::*)(int32_t)>(&::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5750780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::*)()>(&::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57509c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::*)()>(&::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::MoveNext)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x57509c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::*)()>(&::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5750a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::*)()>(&::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5750a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::*)()>(&::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5750ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::StringW& GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::__cordl_internal_get_url()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___url;
}
constexpr ::StringW const& GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::__cordl_internal_get_url() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___url;
}
constexpr void GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::__cordl_internal_set_url(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___url = value;
}
constexpr ::StringW& GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::StringW const& GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::__cordl_internal_set_data(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::StringW& GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::__cordl_internal_get_contentType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contentType;
}
constexpr ::StringW const& GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::__cordl_internal_get_contentType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contentType;
}
constexpr void GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::__cordl_internal_set_contentType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contentType = value;
}
constexpr ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*& GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* const& GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::__cordl_internal_set_callback(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
inline void GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8* GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CodeRedemption__ProcessWebRequest_d__8::CodeRedemption__ProcessWebRequest_d__8()   {
}
//  Writing Method size for method: ::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::*)(int32_t)>(&::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5750758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::*)()>(&::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57507b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::*)()>(&::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x57507bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::*)()>(&::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5750978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::*)()>(&::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5750980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::*)()>(&::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57509b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::__cordl_internal_get_itemIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemIDs;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::__cordl_internal_get_itemIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemIDs;
}
constexpr void GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::__cordl_internal_set_itemIDs(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemIDs = value;
}
constexpr bool& GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::__cordl_internal_get_autoEquip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoEquip;
}
constexpr bool const& GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::__cordl_internal_get_autoEquip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoEquip;
}
constexpr void GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::__cordl_internal_set_autoEquip(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoEquip = value;
}
constexpr bool& GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::__cordl_internal_get_isLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHand;
}
constexpr bool const& GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::__cordl_internal_get_isLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHand;
}
constexpr void GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::__cordl_internal_set_isLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLeftHand = value;
}
inline void GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7* GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CodeRedemption__CheckProcessExternalUnlock_d__7::CodeRedemption__CheckProcessExternalUnlock_d__7()   {
}
//  Writing Method size for method: ::GlobalNamespace::CodeRedemption_CodeRedemptionResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CodeRedemption_CodeRedemptionResponse::*)()>(&::GlobalNamespace::CodeRedemption_CodeRedemptionResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57507b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption_CodeRedemptionResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::CodeRedemption_CodeRedemptionResponse::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr ::StringW const& GlobalNamespace::CodeRedemption_CodeRedemptionResponse::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void GlobalNamespace::CodeRedemption_CodeRedemptionResponse::__cordl_internal_set_result(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
constexpr ::StringW& GlobalNamespace::CodeRedemption_CodeRedemptionResponse::__cordl_internal_get_itemID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemID;
}
constexpr ::StringW const& GlobalNamespace::CodeRedemption_CodeRedemptionResponse::__cordl_internal_get_itemID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemID;
}
constexpr void GlobalNamespace::CodeRedemption_CodeRedemptionResponse::__cordl_internal_set_itemID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemID = value;
}
constexpr ::StringW& GlobalNamespace::CodeRedemption_CodeRedemptionResponse::__cordl_internal_get_playFabItemName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabItemName;
}
constexpr ::StringW const& GlobalNamespace::CodeRedemption_CodeRedemptionResponse::__cordl_internal_get_playFabItemName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabItemName;
}
constexpr void GlobalNamespace::CodeRedemption_CodeRedemptionResponse::__cordl_internal_set_playFabItemName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playFabItemName = value;
}
constexpr ::System::Nullable_1<::System::DateTimeOffset>& GlobalNamespace::CodeRedemption_CodeRedemptionResponse::__cordl_internal_get_startTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr ::System::Nullable_1<::System::DateTimeOffset> const& GlobalNamespace::CodeRedemption_CodeRedemptionResponse::__cordl_internal_get_startTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr void GlobalNamespace::CodeRedemption_CodeRedemptionResponse::__cordl_internal_set_startTime(::System::Nullable_1<::System::DateTimeOffset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startTime = value;
}
constexpr ::System::Nullable_1<::System::DateTimeOffset>& GlobalNamespace::CodeRedemption_CodeRedemptionResponse::__cordl_internal_get_endTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endTime;
}
constexpr ::System::Nullable_1<::System::DateTimeOffset> const& GlobalNamespace::CodeRedemption_CodeRedemptionResponse::__cordl_internal_get_endTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endTime;
}
constexpr void GlobalNamespace::CodeRedemption_CodeRedemptionResponse::__cordl_internal_set_endTime(::System::Nullable_1<::System::DateTimeOffset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endTime = value;
}
inline void GlobalNamespace::CodeRedemption_CodeRedemptionResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption_CodeRedemptionResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CodeRedemption_CodeRedemptionResponse* GlobalNamespace::CodeRedemption_CodeRedemptionResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CodeRedemption_CodeRedemptionResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CodeRedemption_CodeRedemptionResponse::CodeRedemption_CodeRedemptionResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::CodeRedemption_CodeRedemptionRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CodeRedemption_CodeRedemptionRequest::*)()>(&::GlobalNamespace::CodeRedemption_CodeRedemptionRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x574fe04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption_CodeRedemptionRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::CodeRedemption_CodeRedemptionRequest::__cordl_internal_get_itemGUID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemGUID;
}
constexpr ::StringW const& GlobalNamespace::CodeRedemption_CodeRedemptionRequest::__cordl_internal_get_itemGUID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemGUID;
}
constexpr void GlobalNamespace::CodeRedemption_CodeRedemptionRequest::__cordl_internal_set_itemGUID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemGUID = value;
}
constexpr ::StringW& GlobalNamespace::CodeRedemption_CodeRedemptionRequest::__cordl_internal_get_playFabID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabID;
}
constexpr ::StringW const& GlobalNamespace::CodeRedemption_CodeRedemptionRequest::__cordl_internal_get_playFabID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabID;
}
constexpr void GlobalNamespace::CodeRedemption_CodeRedemptionRequest::__cordl_internal_set_playFabID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playFabID = value;
}
constexpr ::StringW& GlobalNamespace::CodeRedemption_CodeRedemptionRequest::__cordl_internal_get_playFabSessionTicket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabSessionTicket;
}
constexpr ::StringW const& GlobalNamespace::CodeRedemption_CodeRedemptionRequest::__cordl_internal_get_playFabSessionTicket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playFabSessionTicket;
}
constexpr void GlobalNamespace::CodeRedemption_CodeRedemptionRequest::__cordl_internal_set_playFabSessionTicket(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playFabSessionTicket = value;
}
constexpr ::StringW& GlobalNamespace::CodeRedemption_CodeRedemptionRequest::__cordl_internal_get_mothershipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipId;
}
constexpr ::StringW const& GlobalNamespace::CodeRedemption_CodeRedemptionRequest::__cordl_internal_get_mothershipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipId;
}
constexpr void GlobalNamespace::CodeRedemption_CodeRedemptionRequest::__cordl_internal_set_mothershipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mothershipId = value;
}
constexpr ::StringW& GlobalNamespace::CodeRedemption_CodeRedemptionRequest::__cordl_internal_get_mothershipToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipToken;
}
constexpr ::StringW const& GlobalNamespace::CodeRedemption_CodeRedemptionRequest::__cordl_internal_get_mothershipToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipToken;
}
constexpr void GlobalNamespace::CodeRedemption_CodeRedemptionRequest::__cordl_internal_set_mothershipToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mothershipToken = value;
}
constexpr ::StringW& GlobalNamespace::CodeRedemption_CodeRedemptionRequest::__cordl_internal_get_mothershipEnvId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipEnvId;
}
constexpr ::StringW const& GlobalNamespace::CodeRedemption_CodeRedemptionRequest::__cordl_internal_get_mothershipEnvId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipEnvId;
}
constexpr void GlobalNamespace::CodeRedemption_CodeRedemptionRequest::__cordl_internal_set_mothershipEnvId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mothershipEnvId = value;
}
inline void GlobalNamespace::CodeRedemption_CodeRedemptionRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CodeRedemption_CodeRedemptionRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CodeRedemption_CodeRedemptionRequest* GlobalNamespace::CodeRedemption_CodeRedemptionRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CodeRedemption_CodeRedemptionRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CodeRedemption_CodeRedemptionRequest::CodeRedemption_CodeRedemptionRequest()   {
}
