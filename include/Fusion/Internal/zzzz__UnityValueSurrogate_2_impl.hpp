#pragma once
// IWYU pragma private; include "Fusion/Internal/UnityValueSurrogate_2.hpp"
#include "Fusion/Internal/zzzz__UnitySurrogateBase_impl.hpp"
#include "Fusion/Internal/zzzz__UnityValueSurrogate_2_def.hpp"
#include "Fusion/Internal/zzzz__IUnitySurrogate_def.hpp"
#include "Fusion/Internal/zzzz__IUnityValueSurrogate_1_def.hpp"
template<typename T,typename TReaderWriter>
inline T Fusion::Internal::UnityValueSurrogate_2<T,TReaderWriter>::get_DataProperty()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Internal::UnityValueSurrogate_2<T,TReaderWriter>*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T,typename TReaderWriter>
inline void Fusion::Internal::UnityValueSurrogate_2<T,TReaderWriter>::set_DataProperty(T  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Internal::UnityValueSurrogate_2<T,TReaderWriter>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T,typename TReaderWriter>
inline void Fusion::Internal::UnityValueSurrogate_2<T,TReaderWriter>::Read(int32_t*  data, int32_t  capacity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Internal::UnityValueSurrogate_2<T,TReaderWriter>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, capacity);
}
template<typename T,typename TReaderWriter>
inline void Fusion::Internal::UnityValueSurrogate_2<T,TReaderWriter>::Write(int32_t*  data, int32_t  capacity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Internal::UnityValueSurrogate_2<T,TReaderWriter>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, capacity);
}
template<typename T,typename TReaderWriter>
inline void Fusion::Internal::UnityValueSurrogate_2<T,TReaderWriter>::Init(int32_t  capacity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Internal::UnityValueSurrogate_2<T,TReaderWriter>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename T,typename TReaderWriter>
inline void Fusion::Internal::UnityValueSurrogate_2<T,TReaderWriter>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Internal::UnityValueSurrogate_2<T,TReaderWriter>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T,typename TReaderWriter>
inline ::Fusion::Internal::UnityValueSurrogate_2<T,TReaderWriter>* Fusion::Internal::UnityValueSurrogate_2<T,TReaderWriter>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Internal::UnityValueSurrogate_2<T,TReaderWriter>*>());
}
/// @brief Convert operator to "::Fusion::Internal::IUnityValueSurrogate_1<T>"
template<typename T,typename TReaderWriter>
constexpr  Fusion::Internal::UnityValueSurrogate_2<T,TReaderWriter>::operator ::Fusion::Internal::IUnityValueSurrogate_1<T>*() noexcept {
return static_cast<::Fusion::Internal::IUnityValueSurrogate_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Internal::IUnityValueSurrogate_1<T>"
template<typename T,typename TReaderWriter>
constexpr ::Fusion::Internal::IUnityValueSurrogate_1<T>* Fusion::Internal::UnityValueSurrogate_2<T,TReaderWriter>::i___Fusion__Internal__IUnityValueSurrogate_1_T_() noexcept {
return static_cast<::Fusion::Internal::IUnityValueSurrogate_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::Internal::IUnitySurrogate"
template<typename T,typename TReaderWriter>
constexpr  Fusion::Internal::UnityValueSurrogate_2<T,TReaderWriter>::operator ::Fusion::Internal::IUnitySurrogate*() noexcept {
return static_cast<::Fusion::Internal::IUnitySurrogate*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Internal::IUnitySurrogate"
template<typename T,typename TReaderWriter>
constexpr ::Fusion::Internal::IUnitySurrogate* Fusion::Internal::UnityValueSurrogate_2<T,TReaderWriter>::i___Fusion__Internal__IUnitySurrogate() noexcept {
return static_cast<::Fusion::Internal::IUnitySurrogate*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T,typename TReaderWriter>
constexpr ::Fusion::Internal::UnityValueSurrogate_2<T,TReaderWriter>::UnityValueSurrogate_2()   {
}
