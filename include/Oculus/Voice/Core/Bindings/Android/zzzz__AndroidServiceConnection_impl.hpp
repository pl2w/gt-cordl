#pragma once
// IWYU pragma private; include "Oculus/Voice/Core/Bindings/Android/AndroidServiceConnection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Voice/Core/Bindings/Android/zzzz__AndroidServiceConnection_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::*)(::StringW, ::StringW)>(&::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e3033c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::*)(::StringW)>(&::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::Connect)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x5e30380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*>(),
                        {"Connect", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::*)()>(&::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::Disconnect)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5e30794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*>(),
                        {"Disconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection.GetService
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AndroidJavaObject* (::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::*)()>(&::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::GetService)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5e30860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*>(),
                        {"GetService", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AndroidJavaObject*& Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::__cordl_internal_get_mAssistantServiceConnection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mAssistantServiceConnection;
}
constexpr ::UnityEngine::AndroidJavaObject* const& Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::__cordl_internal_get_mAssistantServiceConnection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mAssistantServiceConnection;
}
constexpr void Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::__cordl_internal_set_mAssistantServiceConnection(::UnityEngine::AndroidJavaObject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mAssistantServiceConnection = value;
}
constexpr ::StringW& Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::__cordl_internal_get_serviceFragmentClass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serviceFragmentClass;
}
constexpr ::StringW const& Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::__cordl_internal_get_serviceFragmentClass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serviceFragmentClass;
}
constexpr void Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::__cordl_internal_set_serviceFragmentClass(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serviceFragmentClass = value;
}
constexpr ::StringW& Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::__cordl_internal_get_serviceGetter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serviceGetter;
}
constexpr ::StringW const& Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::__cordl_internal_get_serviceGetter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serviceGetter;
}
constexpr void Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::__cordl_internal_set_serviceGetter(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serviceGetter = value;
}
inline void Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::_ctor(::StringW  serviceFragmentClassName, ::StringW  serviceGetterMethodName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serviceFragmentClassName, serviceGetterMethodName);
}
inline void Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::Connect(::StringW  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*>(),
                        {"Connect", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, version);
}
inline void Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::Disconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*>(),
                        {"Disconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AndroidJavaObject* Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::GetService()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*>(),
                        {"GetService", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AndroidJavaObject*>(this, ___internal_method);
}
inline ::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection* Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::New_ctor(::StringW  serviceFragmentClassName, ::StringW  serviceGetterMethodName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*>(serviceFragmentClassName, serviceGetterMethodName));
}
// Ctor Parameters []
constexpr ::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection::AndroidServiceConnection()   {
}
