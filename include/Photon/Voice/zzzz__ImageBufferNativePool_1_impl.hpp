#pragma once
// IWYU pragma private; include "Photon/Voice/ImageBufferNativePool_1.hpp"
#include "Photon/Voice/zzzz__ImageBufferInfo_impl.hpp"
#include "Photon/Voice/zzzz__ObjectPool_2_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Photon/Voice/zzzz__ImageBufferNativePool_1_def.hpp"
#include "Photon/Voice/zzzz__ImageBufferInfo_def.hpp"
#include "Photon/Voice/zzzz__ImageBufferNativePool_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr ::Photon::Voice::ImageBufferNativePool_1_Factory<T>*& Photon::Voice::ImageBufferNativePool_1<T>::__cordl_internal_get_factory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___factory;
}
template<typename T>
constexpr ::Photon::Voice::ImageBufferNativePool_1_Factory<T>* const& Photon::Voice::ImageBufferNativePool_1<T>::__cordl_internal_get_factory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___factory;
}
template<typename T>
constexpr void Photon::Voice::ImageBufferNativePool_1<T>::__cordl_internal_set_factory(::Photon::Voice::ImageBufferNativePool_1_Factory<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___factory = value;
}
template<typename T>
inline void Photon::Voice::ImageBufferNativePool_1<T>::_ctor(int32_t  capacity, ::Photon::Voice::ImageBufferNativePool_1_Factory<T>*  factory, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferNativePool_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Voice::ImageBufferNativePool_1_Factory<T>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, factory, name);
}
template<typename T>
inline void Photon::Voice::ImageBufferNativePool_1<T>::_ctor(int32_t  capacity, ::Photon::Voice::ImageBufferNativePool_1_Factory<T>*  factory, ::StringW  name, ::Photon::Voice::ImageBufferInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferNativePool_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Voice::ImageBufferNativePool_1_Factory<T>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Voice::ImageBufferInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, factory, name, info);
}
template<typename T>
inline T Photon::Voice::ImageBufferNativePool_1<T>::createObject(::Photon::Voice::ImageBufferInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ImageBufferNativePool_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, info);
}
template<typename T>
inline void Photon::Voice::ImageBufferNativePool_1<T>::destroyObject(T  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ImageBufferNativePool_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
template<typename T>
inline bool Photon::Voice::ImageBufferNativePool_1<T>::infosMatch(::Photon::Voice::ImageBufferInfo  i0, ::Photon::Voice::ImageBufferInfo  i1)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ImageBufferNativePool_1<T>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, i0, i1);
}
template<typename T>
inline ::Photon::Voice::ImageBufferNativePool_1<T>* Photon::Voice::ImageBufferNativePool_1<T>::New_ctor(int32_t  capacity, ::Photon::Voice::ImageBufferNativePool_1_Factory<T>*  factory, ::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::ImageBufferNativePool_1<T>*>(capacity, factory, name));
}
template<typename T>
inline ::Photon::Voice::ImageBufferNativePool_1<T>* Photon::Voice::ImageBufferNativePool_1<T>::New_ctor(int32_t  capacity, ::Photon::Voice::ImageBufferNativePool_1_Factory<T>*  factory, ::StringW  name, ::Photon::Voice::ImageBufferInfo  info)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::ImageBufferNativePool_1<T>*>(capacity, factory, name, info));
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::ImageBufferNativePool_1<T>::ImageBufferNativePool_1()   {
}
template<typename T>
inline void Photon::Voice::ImageBufferNativePool_1_Factory<T>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ImageBufferNativePool_1_Factory<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename T>
inline T Photon::Voice::ImageBufferNativePool_1_Factory<T>::Invoke(::Photon::Voice::ImageBufferNativePool_1<T>*  pool, ::Photon::Voice::ImageBufferInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ImageBufferNativePool_1_Factory<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, pool, info);
}
template<typename T>
inline ::System::IAsyncResult* Photon::Voice::ImageBufferNativePool_1_Factory<T>::BeginInvoke(::Photon::Voice::ImageBufferNativePool_1<T>*  pool, ::Photon::Voice::ImageBufferInfo  info, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ImageBufferNativePool_1_Factory<T>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pool, info, callback, object);
}
template<typename T>
inline T Photon::Voice::ImageBufferNativePool_1_Factory<T>::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::ImageBufferNativePool_1_Factory<T>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, result);
}
template<typename T>
inline ::Photon::Voice::ImageBufferNativePool_1_Factory<T>* Photon::Voice::ImageBufferNativePool_1_Factory<T>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::ImageBufferNativePool_1_Factory<T>*>(object, method));
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::ImageBufferNativePool_1_Factory<T>::ImageBufferNativePool_1_Factory()   {
}
