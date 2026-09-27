#pragma once
// IWYU pragma private; include "Fusion/Internal/UnityArraySurrogate_2.hpp"
#include "Fusion/Internal/zzzz__UnitySurrogateBase_impl.hpp"
#include "Fusion/Internal/zzzz__UnityArraySurrogate_2_def.hpp"
template<typename T,typename ReaderWriter>
inline ::ArrayW<T> Fusion::Internal::UnityArraySurrogate_2<T,ReaderWriter>::get_DataProperty()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Internal::UnityArraySurrogate_2<T,ReaderWriter>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template<typename T,typename ReaderWriter>
inline void Fusion::Internal::UnityArraySurrogate_2<T,ReaderWriter>::set_DataProperty(::ArrayW<T>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Internal::UnityArraySurrogate_2<T,ReaderWriter>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T,typename ReaderWriter>
inline void Fusion::Internal::UnityArraySurrogate_2<T,ReaderWriter>::Read(int32_t*  data, int32_t  capacity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Internal::UnityArraySurrogate_2<T,ReaderWriter>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, capacity);
}
template<typename T,typename ReaderWriter>
inline void Fusion::Internal::UnityArraySurrogate_2<T,ReaderWriter>::Write(int32_t*  data, int32_t  capacity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Internal::UnityArraySurrogate_2<T,ReaderWriter>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, capacity);
}
template<typename T,typename ReaderWriter>
inline void Fusion::Internal::UnityArraySurrogate_2<T,ReaderWriter>::Init(int32_t  capacity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Internal::UnityArraySurrogate_2<T,ReaderWriter>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename T,typename ReaderWriter>
inline void Fusion::Internal::UnityArraySurrogate_2<T,ReaderWriter>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Internal::UnityArraySurrogate_2<T,ReaderWriter>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T,typename ReaderWriter>
inline ::Fusion::Internal::UnityArraySurrogate_2<T,ReaderWriter>* Fusion::Internal::UnityArraySurrogate_2<T,ReaderWriter>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Internal::UnityArraySurrogate_2<T,ReaderWriter>*>());
}
// Ctor Parameters []
template<typename T,typename ReaderWriter>
constexpr ::Fusion::Internal::UnityArraySurrogate_2<T,ReaderWriter>::UnityArraySurrogate_2()   {
}
