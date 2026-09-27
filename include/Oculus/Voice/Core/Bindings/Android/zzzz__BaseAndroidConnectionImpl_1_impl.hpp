#pragma once
// IWYU pragma private; include "Oculus/Voice/Core/Bindings/Android/BaseAndroidConnectionImpl_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Voice/Core/Bindings/Android/zzzz__BaseAndroidConnectionImpl_1_def.hpp"
#include "Oculus/Voice/Core/Bindings/Android/zzzz__AndroidServiceConnection_def.hpp"
template<typename T>
constexpr ::StringW& Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<T>::__cordl_internal_get_fragmentClassName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fragmentClassName;
}
template<typename T>
constexpr ::StringW const& Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<T>::__cordl_internal_get_fragmentClassName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fragmentClassName;
}
template<typename T>
constexpr void Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<T>::__cordl_internal_set_fragmentClassName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fragmentClassName = value;
}
template<typename T>
constexpr T& Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<T>::__cordl_internal_get_service()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___service;
}
template<typename T>
constexpr T const& Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<T>::__cordl_internal_get_service() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___service;
}
template<typename T>
constexpr void Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<T>::__cordl_internal_set_service(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___service = value;
}
template<typename T>
constexpr ::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*& Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<T>::__cordl_internal_get_serviceConnection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serviceConnection;
}
template<typename T>
constexpr ::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection* const& Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<T>::__cordl_internal_get_serviceConnection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serviceConnection;
}
template<typename T>
constexpr void Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<T>::__cordl_internal_set_serviceConnection(::Oculus::Voice::Core::Bindings::Android::AndroidServiceConnection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serviceConnection = value;
}
template<typename T>
inline void Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<T>::_ctor(::StringW  className)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, className);
}
template<typename T>
inline void Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<T>::Connect(::StringW  version)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, version);
}
template<typename T>
inline void Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<T>::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<T>* Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<T>::New_ctor(::StringW  className)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<T>*>(className));
}
// Ctor Parameters []
template<typename T>
constexpr ::Oculus::Voice::Core::Bindings::Android::BaseAndroidConnectionImpl_1<T>::BaseAndroidConnectionImpl_1()   {
}
