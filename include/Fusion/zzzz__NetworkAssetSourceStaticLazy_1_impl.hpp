#pragma once
// IWYU pragma private; include "Fusion/NetworkAssetSourceStaticLazy_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LazyLoadReference_1_impl.hpp"
#include "Fusion/zzzz__NetworkAssetSourceStaticLazy_1_def.hpp"
#include "UnityEngine/zzzz__LazyLoadReference_1_def.hpp"
template<typename T>
constexpr ::UnityEngine::LazyLoadReference_1<T>& Fusion::NetworkAssetSourceStaticLazy_1<T>::__cordl_internal_get_Object()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Object;
}
template<typename T>
constexpr ::UnityEngine::LazyLoadReference_1<T> const& Fusion::NetworkAssetSourceStaticLazy_1<T>::__cordl_internal_get_Object() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Object;
}
template<typename T>
constexpr void Fusion::NetworkAssetSourceStaticLazy_1<T>::__cordl_internal_set_Object(::UnityEngine::LazyLoadReference_1<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Object = value;
}
template<typename T>
inline ::UnityEngine::LazyLoadReference_1<T> Fusion::NetworkAssetSourceStaticLazy_1<T>::get_Prefab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceStaticLazy_1<T>*>(),
                        {"get_Prefab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LazyLoadReference_1<T>>(this, ___internal_method);
}
template<typename T>
inline void Fusion::NetworkAssetSourceStaticLazy_1<T>::set_Prefab(::UnityEngine::LazyLoadReference_1<T>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceStaticLazy_1<T>*>(),
                        {"set_Prefab", {}, {::i2c::type_of<::UnityEngine::LazyLoadReference_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline bool Fusion::NetworkAssetSourceStaticLazy_1<T>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceStaticLazy_1<T>*>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void Fusion::NetworkAssetSourceStaticLazy_1<T>::Acquire(bool  synchronous)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceStaticLazy_1<T>*>(),
                        {"Acquire", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, synchronous);
}
template<typename T>
inline void Fusion::NetworkAssetSourceStaticLazy_1<T>::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceStaticLazy_1<T>*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline T Fusion::NetworkAssetSourceStaticLazy_1<T>::WaitForResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceStaticLazy_1<T>*>(),
                        {"WaitForResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline ::StringW Fusion::NetworkAssetSourceStaticLazy_1<T>::get_Description()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceStaticLazy_1<T>*>(),
                        {"get_Description", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline void Fusion::NetworkAssetSourceStaticLazy_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceStaticLazy_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Fusion::NetworkAssetSourceStaticLazy_1<T>* Fusion::NetworkAssetSourceStaticLazy_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkAssetSourceStaticLazy_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Fusion::NetworkAssetSourceStaticLazy_1<T>::NetworkAssetSourceStaticLazy_1()   {
}
