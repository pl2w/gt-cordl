#pragma once
// IWYU pragma private; include "emotitron/Compression/LiteCrusher_1.hpp"
#include "emotitron/Compression/zzzz__LiteCrusher_impl.hpp"
#include "emotitron/Compression/zzzz__LiteCrusher_1_def.hpp"
template<typename T>
inline uint64_t emotitron::Compression::LiteCrusher_1<T>::Encode(T  val)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::emotitron::Compression::LiteCrusher_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, val);
}
template<typename T>
inline T emotitron::Compression::LiteCrusher_1<T>::Decode(uint32_t  val)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::emotitron::Compression::LiteCrusher_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, val);
}
template<typename T>
inline uint64_t emotitron::Compression::LiteCrusher_1<T>::WriteValue(T  val, ::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::emotitron::Compression::LiteCrusher_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, val, buffer, bitposition);
}
template<typename T>
inline void emotitron::Compression::LiteCrusher_1<T>::WriteCValue(uint32_t  val, ::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::emotitron::Compression::LiteCrusher_1<T>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val, buffer, bitposition);
}
template<typename T>
inline T emotitron::Compression::LiteCrusher_1<T>::ReadValue(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::emotitron::Compression::LiteCrusher_1<T>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, buffer, bitposition);
}
template<typename T>
inline void emotitron::Compression::LiteCrusher_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::LiteCrusher_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::emotitron::Compression::LiteCrusher_1<T>* emotitron::Compression::LiteCrusher_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::emotitron::Compression::LiteCrusher_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::emotitron::Compression::LiteCrusher_1<T>::LiteCrusher_1()   {
}
