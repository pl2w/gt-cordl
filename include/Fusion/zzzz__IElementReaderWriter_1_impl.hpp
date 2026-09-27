#pragma once
// IWYU pragma private; include "Fusion/IElementReaderWriter_1.hpp"
#include "Fusion/zzzz__IElementReaderWriter_1_def.hpp"
template<typename T>
inline T Fusion::IElementReaderWriter_1<T>::Read(uint8_t*  data, int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::IElementReaderWriter_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, data, index);
}
template<typename T>
inline void Fusion::IElementReaderWriter_1<T>::Write(uint8_t*  data, int32_t  index, T  element)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::IElementReaderWriter_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, index, element);
}
template<typename T>
inline int32_t Fusion::IElementReaderWriter_1<T>::GetElementWordCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::IElementReaderWriter_1<T>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline ::by_ref<T> Fusion::IElementReaderWriter_1<T>::ReadRef(uint8_t*  data, int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::IElementReaderWriter_1<T>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(this, ___internal_method, data, index);
}
template<typename T>
inline int32_t Fusion::IElementReaderWriter_1<T>::GetElementHashCode(T  element)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::IElementReaderWriter_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, element);
}
