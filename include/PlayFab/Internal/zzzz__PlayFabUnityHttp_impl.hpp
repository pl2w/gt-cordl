#pragma once
// IWYU pragma private; include "PlayFab/Internal/PlayFabUnityHttp.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/Internal/zzzz__PlayFabUnityHttp_def.hpp"
#include "PlayFab/Internal/zzzz__CallRequestContainer_def.hpp"
#include "PlayFab/Internal/zzzz__PlayFabUnityHttp_def.hpp"
#include "PlayFab/zzzz__IPlayFabPlugin_def.hpp"
#include "PlayFab/zzzz__ITransportPlugin_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp.get_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayFab::Internal::PlayFabUnityHttp::*)()>(&::PlayFab::Internal::PlayFabUnityHttp::get_IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa846e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabUnityHttp::*)()>(&::PlayFab::Internal::PlayFabUnityHttp::Initialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa846e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabUnityHttp::*)()>(&::PlayFab::Internal::PlayFabUnityHttp::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa846e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabUnityHttp::*)()>(&::PlayFab::Internal::PlayFabUnityHttp::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa846e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp.SimpleGetCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabUnityHttp::*)(::StringW, ::System::Action_1<::ArrayW<uint8_t>>*, ::System::Action_1<::StringW>*)>(&::PlayFab::Internal::PlayFabUnityHttp::SimpleGetCall)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa846e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"SimpleGetCall", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp.SimplePutCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabUnityHttp::*)(::StringW, ::ArrayW<uint8_t>, ::System::Action_1<::ArrayW<uint8_t>>*, ::System::Action_1<::StringW>*)>(&::PlayFab::Internal::PlayFabUnityHttp::SimplePutCall)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa846fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"SimplePutCall", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp.SimplePostCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabUnityHttp::*)(::StringW, ::ArrayW<uint8_t>, ::System::Action_1<::ArrayW<uint8_t>>*, ::System::Action_1<::StringW>*)>(&::PlayFab::Internal::PlayFabUnityHttp::SimplePostCall)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa847080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"SimplePostCall", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp.SimpleCallCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (*)(::StringW, ::StringW, ::ArrayW<uint8_t>, ::System::Action_1<::ArrayW<uint8_t>>*, ::System::Action_1<::StringW>*)>(&::PlayFab::Internal::PlayFabUnityHttp::SimpleCallCoroutine)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa846f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"SimpleCallCoroutine", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp.MakeApiCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabUnityHttp::*)(::System::Object*)>(&::PlayFab::Internal::PlayFabUnityHttp::MakeApiCall)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0xa847154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"MakeApiCall", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp.Post
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::PlayFab::Internal::PlayFabUnityHttp::*)(::PlayFab::Internal::CallRequestContainer*)>(&::PlayFab::Internal::PlayFabUnityHttp::Post)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa8475a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"Post", {}, {::i2c::type_of<::PlayFab::Internal::CallRequestContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp.GetPendingMessages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::PlayFab::Internal::PlayFabUnityHttp::*)()>(&::PlayFab::Internal::PlayFabUnityHttp::GetPendingMessages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa847658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"GetPendingMessages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp.OnResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabUnityHttp::*)(::StringW, ::PlayFab::Internal::CallRequestContainer*)>(&::PlayFab::Internal::PlayFabUnityHttp::OnResponse)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0xa847660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"OnResponse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::PlayFab::Internal::CallRequestContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp.OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabUnityHttp::*)(::StringW, ::PlayFab::Internal::CallRequestContainer*)>(&::PlayFab::Internal::PlayFabUnityHttp::OnError)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa847bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"OnError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::PlayFab::Internal::CallRequestContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabUnityHttp::*)()>(&::PlayFab::Internal::PlayFabUnityHttp::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa847ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& PlayFab::Internal::PlayFabUnityHttp::__cordl_internal_get__isInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInitialized;
}
constexpr bool const& PlayFab::Internal::PlayFabUnityHttp::__cordl_internal_get__isInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInitialized;
}
constexpr void PlayFab::Internal::PlayFabUnityHttp::__cordl_internal_set__isInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isInitialized = value;
}
constexpr int32_t& PlayFab::Internal::PlayFabUnityHttp::__cordl_internal_get__pendingWwwMessages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingWwwMessages;
}
constexpr int32_t const& PlayFab::Internal::PlayFabUnityHttp::__cordl_internal_get__pendingWwwMessages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingWwwMessages;
}
constexpr void PlayFab::Internal::PlayFabUnityHttp::__cordl_internal_set__pendingWwwMessages(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pendingWwwMessages = value;
}
constexpr int32_t& PlayFab::Internal::PlayFabUnityHttp::__cordl_internal_get_count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
constexpr int32_t const& PlayFab::Internal::PlayFabUnityHttp::__cordl_internal_get_count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
constexpr void PlayFab::Internal::PlayFabUnityHttp::__cordl_internal_set_count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___count = value;
}
inline bool PlayFab::Internal::PlayFabUnityHttp::get_IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void PlayFab::Internal::PlayFabUnityHttp::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Internal::PlayFabUnityHttp::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Internal::PlayFabUnityHttp::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Internal::PlayFabUnityHttp::SimpleGetCall(::StringW  fullUrl, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"SimpleGetCall", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fullUrl, successCallback, errorCallback);
}
inline void PlayFab::Internal::PlayFabUnityHttp::SimplePutCall(::StringW  fullUrl, ::ArrayW<uint8_t>  payload, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"SimplePutCall", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fullUrl, payload, successCallback, errorCallback);
}
inline void PlayFab::Internal::PlayFabUnityHttp::SimplePostCall(::StringW  fullUrl, ::ArrayW<uint8_t>  payload, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"SimplePostCall", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fullUrl, payload, successCallback, errorCallback);
}
inline ::System::Collections::IEnumerator* PlayFab::Internal::PlayFabUnityHttp::SimpleCallCoroutine(::StringW  method, ::StringW  fullUrl, ::ArrayW<uint8_t>  payload, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"SimpleCallCoroutine", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Action_1<::ArrayW<uint8_t>>*>(), ::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(nullptr, ___internal_method, method, fullUrl, payload, successCallback, errorCallback);
}
inline void PlayFab::Internal::PlayFabUnityHttp::MakeApiCall(::System::Object*  reqContainerObj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"MakeApiCall", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reqContainerObj);
}
inline ::System::Collections::IEnumerator* PlayFab::Internal::PlayFabUnityHttp::Post(::PlayFab::Internal::CallRequestContainer*  reqContainer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"Post", {}, {::i2c::type_of<::PlayFab::Internal::CallRequestContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, reqContainer);
}
inline int32_t PlayFab::Internal::PlayFabUnityHttp::GetPendingMessages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"GetPendingMessages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void PlayFab::Internal::PlayFabUnityHttp::OnResponse(::StringW  response, ::PlayFab::Internal::CallRequestContainer*  reqContainer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"OnResponse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::PlayFab::Internal::CallRequestContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response, reqContainer);
}
inline void PlayFab::Internal::PlayFabUnityHttp::OnError(::StringW  error, ::PlayFab::Internal::CallRequestContainer*  reqContainer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {"OnError", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::PlayFab::Internal::CallRequestContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, reqContainer);
}
inline void PlayFab::Internal::PlayFabUnityHttp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::Internal::PlayFabUnityHttp* PlayFab::Internal::PlayFabUnityHttp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Internal::PlayFabUnityHttp*>());
}
/// @brief Convert operator to "::PlayFab::ITransportPlugin"
constexpr  PlayFab::Internal::PlayFabUnityHttp::operator ::PlayFab::ITransportPlugin*() noexcept {
return static_cast<::PlayFab::ITransportPlugin*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayFab::ITransportPlugin"
constexpr ::PlayFab::ITransportPlugin* PlayFab::Internal::PlayFabUnityHttp::i___PlayFab__ITransportPlugin() noexcept {
return static_cast<::PlayFab::ITransportPlugin*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::PlayFab::IPlayFabPlugin"
constexpr  PlayFab::Internal::PlayFabUnityHttp::operator ::PlayFab::IPlayFabPlugin*() noexcept {
return static_cast<::PlayFab::IPlayFabPlugin*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayFab::IPlayFabPlugin"
constexpr ::PlayFab::IPlayFabPlugin* PlayFab::Internal::PlayFabUnityHttp::i___PlayFab__IPlayFabPlugin() noexcept {
return static_cast<::PlayFab::IPlayFabPlugin*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::PlayFab::Internal::PlayFabUnityHttp::PlayFabUnityHttp()   {
}
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::*)(int32_t)>(&::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa84712c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::*)()>(&::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa8485e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::*)()>(&::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0xa848604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::*)()>(&::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa848acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::*)()>(&::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa848b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::*)()>(&::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa848b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::*)()>(&::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa848bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::ArrayW<uint8_t>& PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__cordl_internal_get_payload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___payload;
}
constexpr ::ArrayW<uint8_t> const& PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__cordl_internal_get_payload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___payload;
}
constexpr void PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__cordl_internal_set_payload(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___payload = value;
}
constexpr ::StringW& PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__cordl_internal_get_fullUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullUrl;
}
constexpr ::StringW const& PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__cordl_internal_get_fullUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullUrl;
}
constexpr void PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__cordl_internal_set_fullUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullUrl = value;
}
constexpr ::System::Action_1<::StringW>*& PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__cordl_internal_get_errorCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallback;
}
constexpr ::System::Action_1<::StringW>* const& PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__cordl_internal_get_errorCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorCallback;
}
constexpr void PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__cordl_internal_set_errorCallback(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorCallback = value;
}
constexpr ::System::Action_1<::ArrayW<uint8_t>>*& PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__cordl_internal_get_successCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr ::System::Action_1<::ArrayW<uint8_t>>* const& PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__cordl_internal_get_successCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___successCallback;
}
constexpr void PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__cordl_internal_set_successCallback(::System::Action_1<::ArrayW<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___successCallback = value;
}
constexpr ::StringW& PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__cordl_internal_get_method()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method;
}
constexpr ::StringW const& PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__cordl_internal_get_method() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method;
}
constexpr void PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__cordl_internal_set_method(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___method = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__cordl_internal_get__www_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____www_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__cordl_internal_get__www_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____www_5__2;
}
constexpr void PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__cordl_internal_set__www_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____www_5__2 = value;
}
inline void PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11* PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11::PlayFabUnityHttp__SimpleCallCoroutine_d__11()   {
}
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp__Post_d__13._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabUnityHttp__Post_d__13::*)(int32_t)>(&::PlayFab::Internal::PlayFabUnityHttp__Post_d__13::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa847630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__Post_d__13*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp__Post_d__13.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabUnityHttp__Post_d__13::*)()>(&::PlayFab::Internal::PlayFabUnityHttp__Post_d__13::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa847cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__Post_d__13*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp__Post_d__13.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayFab::Internal::PlayFabUnityHttp__Post_d__13::*)()>(&::PlayFab::Internal::PlayFabUnityHttp__Post_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x8f0;
  constexpr static std::size_t addrs = 0xa847cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__Post_d__13*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp__Post_d__13.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::PlayFab::Internal::PlayFabUnityHttp__Post_d__13::*)()>(&::PlayFab::Internal::PlayFabUnityHttp__Post_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8485a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__Post_d__13*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp__Post_d__13.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::PlayFabUnityHttp__Post_d__13::*)()>(&::PlayFab::Internal::PlayFabUnityHttp__Post_d__13::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa8485a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__Post_d__13*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUnityHttp__Post_d__13.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::PlayFab::Internal::PlayFabUnityHttp__Post_d__13::*)()>(&::PlayFab::Internal::PlayFabUnityHttp__Post_d__13::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8485e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__Post_d__13*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PlayFab::Internal::PlayFabUnityHttp__Post_d__13::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& PlayFab::Internal::PlayFabUnityHttp__Post_d__13::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void PlayFab::Internal::PlayFabUnityHttp__Post_d__13::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& PlayFab::Internal::PlayFabUnityHttp__Post_d__13::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& PlayFab::Internal::PlayFabUnityHttp__Post_d__13::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void PlayFab::Internal::PlayFabUnityHttp__Post_d__13::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::PlayFab::Internal::CallRequestContainer*& PlayFab::Internal::PlayFabUnityHttp__Post_d__13::__cordl_internal_get_reqContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reqContainer;
}
constexpr ::PlayFab::Internal::CallRequestContainer* const& PlayFab::Internal::PlayFabUnityHttp__Post_d__13::__cordl_internal_get_reqContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reqContainer;
}
constexpr void PlayFab::Internal::PlayFabUnityHttp__Post_d__13::__cordl_internal_set_reqContainer(::PlayFab::Internal::CallRequestContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reqContainer = value;
}
constexpr ::PlayFab::Internal::PlayFabUnityHttp*& PlayFab::Internal::PlayFabUnityHttp__Post_d__13::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::PlayFab::Internal::PlayFabUnityHttp* const& PlayFab::Internal::PlayFabUnityHttp__Post_d__13::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void PlayFab::Internal::PlayFabUnityHttp__Post_d__13::__cordl_internal_set___4__this(::PlayFab::Internal::PlayFabUnityHttp*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& PlayFab::Internal::PlayFabUnityHttp__Post_d__13::__cordl_internal_get__www_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____www_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& PlayFab::Internal::PlayFabUnityHttp__Post_d__13::__cordl_internal_get__www_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____www_5__2;
}
constexpr void PlayFab::Internal::PlayFabUnityHttp__Post_d__13::__cordl_internal_set__www_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____www_5__2 = value;
}
inline void PlayFab::Internal::PlayFabUnityHttp__Post_d__13::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__Post_d__13*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void PlayFab::Internal::PlayFabUnityHttp__Post_d__13::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__Post_d__13*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool PlayFab::Internal::PlayFabUnityHttp__Post_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__Post_d__13*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* PlayFab::Internal::PlayFabUnityHttp__Post_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__Post_d__13*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void PlayFab::Internal::PlayFabUnityHttp__Post_d__13::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__Post_d__13*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* PlayFab::Internal::PlayFabUnityHttp__Post_d__13::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUnityHttp__Post_d__13*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::PlayFab::Internal::PlayFabUnityHttp__Post_d__13* PlayFab::Internal::PlayFabUnityHttp__Post_d__13::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Internal::PlayFabUnityHttp__Post_d__13*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  PlayFab::Internal::PlayFabUnityHttp__Post_d__13::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* PlayFab::Internal::PlayFabUnityHttp__Post_d__13::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  PlayFab::Internal::PlayFabUnityHttp__Post_d__13::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* PlayFab::Internal::PlayFabUnityHttp__Post_d__13::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  PlayFab::Internal::PlayFabUnityHttp__Post_d__13::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* PlayFab::Internal::PlayFabUnityHttp__Post_d__13::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::PlayFab::Internal::PlayFabUnityHttp__Post_d__13::PlayFabUnityHttp__Post_d__13()   {
}
