#pragma once
// IWYU pragma private; include "Photon/Voice/PrimitiveArrayPool_1.hpp"
#include "Photon/Voice/zzzz__ObjectPool_2_impl.hpp"
#include "Photon/Voice/zzzz__PrimitiveArrayPool_1_def.hpp"
template<typename T>
inline void Photon::Voice::PrimitiveArrayPool_1<T>::_ctor(int32_t  capacity, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PrimitiveArrayPool_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, name);
}
template<typename T>
inline void Photon::Voice::PrimitiveArrayPool_1<T>::_ctor(int32_t  capacity, ::StringW  name, int32_t  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::PrimitiveArrayPool_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, name, info);
}
template<typename T>
inline ::ArrayW<T> Photon::Voice::PrimitiveArrayPool_1<T>::createObject(int32_t  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::PrimitiveArrayPool_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method, info);
}
template<typename T>
inline void Photon::Voice::PrimitiveArrayPool_1<T>::destroyObject(::ArrayW<T>  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::PrimitiveArrayPool_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
template<typename T>
inline bool Photon::Voice::PrimitiveArrayPool_1<T>::infosMatch(int32_t  i0, int32_t  i1)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::PrimitiveArrayPool_1<T>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, i0, i1);
}
template<typename T>
inline ::Photon::Voice::PrimitiveArrayPool_1<T>* Photon::Voice::PrimitiveArrayPool_1<T>::New_ctor(int32_t  capacity, ::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::PrimitiveArrayPool_1<T>*>(capacity, name));
}
template<typename T>
inline ::Photon::Voice::PrimitiveArrayPool_1<T>* Photon::Voice::PrimitiveArrayPool_1<T>::New_ctor(int32_t  capacity, ::StringW  name, int32_t  info)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::PrimitiveArrayPool_1<T>*>(capacity, name, info));
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::PrimitiveArrayPool_1<T>::PrimitiveArrayPool_1()   {
}
