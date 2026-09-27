#pragma once
// IWYU pragma private; include "PlayFab/Internal/SingletonMonoBehaviour_1.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "PlayFab/Internal/zzzz__SingletonMonoBehaviour_1_def.hpp"
template<typename T>
constexpr bool& PlayFab::Internal::SingletonMonoBehaviour_1<T>::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
template<typename T>
constexpr bool const& PlayFab::Internal::SingletonMonoBehaviour_1<T>::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
template<typename T>
constexpr void PlayFab::Internal::SingletonMonoBehaviour_1<T>::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
template<typename T>
inline void PlayFab::Internal::SingletonMonoBehaviour_1<T>::setStaticF__instance(T  value)  {
::cordl_internals::setStaticField<T, "_instance", ::PlayFab::Internal::SingletonMonoBehaviour_1<T>*>(std::forward<T>(value));
}
template<typename T>
inline T PlayFab::Internal::SingletonMonoBehaviour_1<T>::getStaticF__instance()  {
return ::cordl_internals::getStaticField<T, "_instance", ::PlayFab::Internal::SingletonMonoBehaviour_1<T>*>();
}
template<typename T>
inline T PlayFab::Internal::SingletonMonoBehaviour_1<T>::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::SingletonMonoBehaviour_1<T>*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template<typename T>
inline void PlayFab::Internal::SingletonMonoBehaviour_1<T>::CreateInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::SingletonMonoBehaviour_1<T>*>(),
                        {"CreateInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
inline void PlayFab::Internal::SingletonMonoBehaviour_1<T>::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Internal::SingletonMonoBehaviour_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void PlayFab::Internal::SingletonMonoBehaviour_1<T>::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Internal::SingletonMonoBehaviour_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void PlayFab::Internal::SingletonMonoBehaviour_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::SingletonMonoBehaviour_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::PlayFab::Internal::SingletonMonoBehaviour_1<T>* PlayFab::Internal::SingletonMonoBehaviour_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Internal::SingletonMonoBehaviour_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::PlayFab::Internal::SingletonMonoBehaviour_1<T>::SingletonMonoBehaviour_1()   {
}
