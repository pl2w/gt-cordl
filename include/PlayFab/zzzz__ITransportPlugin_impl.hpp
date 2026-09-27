#pragma once
// IWYU pragma private; include "PlayFab/ITransportPlugin.hpp"
#include "PlayFab/zzzz__ITransportPlugin_def.hpp"
#include "PlayFab/zzzz__IPlayFabPlugin_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::ITransportPlugin.get_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayFab::ITransportPlugin::*)()>(&::PlayFab::ITransportPlugin::get_IsInitialized)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::ITransportPlugin*>(),
                    {::i2c::class_of<::PlayFab::ITransportPlugin*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::ITransportPlugin.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ITransportPlugin::*)()>(&::PlayFab::ITransportPlugin::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::ITransportPlugin*>(),
                    {::i2c::class_of<::PlayFab::ITransportPlugin*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::ITransportPlugin.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ITransportPlugin::*)()>(&::PlayFab::ITransportPlugin::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::ITransportPlugin*>(),
                    {::i2c::class_of<::PlayFab::ITransportPlugin*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::ITransportPlugin.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ITransportPlugin::*)()>(&::PlayFab::ITransportPlugin::OnDestroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::ITransportPlugin*>(),
                    {::i2c::class_of<::PlayFab::ITransportPlugin*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::ITransportPlugin.SimpleGetCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ITransportPlugin::*)(::StringW, ::System::Action_1<::ArrayW<uint8_t>>*, ::System::Action_1<::StringW>*)>(&::PlayFab::ITransportPlugin::SimpleGetCall)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::ITransportPlugin*>(),
                    {::i2c::class_of<::PlayFab::ITransportPlugin*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::ITransportPlugin.SimplePutCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ITransportPlugin::*)(::StringW, ::ArrayW<uint8_t>, ::System::Action_1<::ArrayW<uint8_t>>*, ::System::Action_1<::StringW>*)>(&::PlayFab::ITransportPlugin::SimplePutCall)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::ITransportPlugin*>(),
                    {::i2c::class_of<::PlayFab::ITransportPlugin*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::ITransportPlugin.SimplePostCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ITransportPlugin::*)(::StringW, ::ArrayW<uint8_t>, ::System::Action_1<::ArrayW<uint8_t>>*, ::System::Action_1<::StringW>*)>(&::PlayFab::ITransportPlugin::SimplePostCall)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::ITransportPlugin*>(),
                    {::i2c::class_of<::PlayFab::ITransportPlugin*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::ITransportPlugin.MakeApiCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ITransportPlugin::*)(::System::Object*)>(&::PlayFab::ITransportPlugin::MakeApiCall)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::ITransportPlugin*>(),
                    {::i2c::class_of<::PlayFab::ITransportPlugin*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::ITransportPlugin.GetPendingMessages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::PlayFab::ITransportPlugin::*)()>(&::PlayFab::ITransportPlugin::GetPendingMessages)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::ITransportPlugin*>(),
                    {::i2c::class_of<::PlayFab::ITransportPlugin*>(), 8}
                ));
    return ___internal_method;
  }
};
inline bool PlayFab::ITransportPlugin::get_IsInitialized()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::ITransportPlugin*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void PlayFab::ITransportPlugin::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::ITransportPlugin*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::ITransportPlugin::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::ITransportPlugin*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::ITransportPlugin::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::ITransportPlugin*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::ITransportPlugin::SimpleGetCall(::StringW  fullUrl, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::ITransportPlugin*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fullUrl, successCallback, errorCallback);
}
inline void PlayFab::ITransportPlugin::SimplePutCall(::StringW  fullUrl, ::ArrayW<uint8_t>  payload, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::ITransportPlugin*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fullUrl, payload, successCallback, errorCallback);
}
inline void PlayFab::ITransportPlugin::SimplePostCall(::StringW  fullUrl, ::ArrayW<uint8_t>  payload, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::ITransportPlugin*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fullUrl, payload, successCallback, errorCallback);
}
inline void PlayFab::ITransportPlugin::MakeApiCall(::System::Object*  reqContainer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::ITransportPlugin*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reqContainer);
}
inline int32_t PlayFab::ITransportPlugin::GetPendingMessages()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::ITransportPlugin*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
/// @brief Convert operator to "::PlayFab::IPlayFabPlugin"
constexpr  PlayFab::ITransportPlugin::operator ::PlayFab::IPlayFabPlugin*() noexcept {
return static_cast<::PlayFab::IPlayFabPlugin*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayFab::IPlayFabPlugin"
constexpr ::PlayFab::IPlayFabPlugin* PlayFab::ITransportPlugin::i___PlayFab__IPlayFabPlugin() noexcept {
return static_cast<::PlayFab::IPlayFabPlugin*>(static_cast<void*>(this));
}
