#pragma once
// IWYU pragma private; include "Fusion/NetworkAssetSourceStatic_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkAssetSourceStatic_1_def.hpp"
template<typename T>
constexpr T& Fusion::NetworkAssetSourceStatic_1<T>::__cordl_internal_get_Object()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Object;
}
template<typename T>
constexpr T const& Fusion::NetworkAssetSourceStatic_1<T>::__cordl_internal_get_Object() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Object;
}
template<typename T>
constexpr void Fusion::NetworkAssetSourceStatic_1<T>::__cordl_internal_set_Object(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Object = value;
}
template<typename T>
inline T Fusion::NetworkAssetSourceStatic_1<T>::get_Prefab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceStatic_1<T>*>(),
                        {"get_Prefab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Fusion::NetworkAssetSourceStatic_1<T>::set_Prefab(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceStatic_1<T>*>(),
                        {"set_Prefab", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline bool Fusion::NetworkAssetSourceStatic_1<T>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceStatic_1<T>*>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void Fusion::NetworkAssetSourceStatic_1<T>::Acquire(bool  synchronous)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceStatic_1<T>*>(),
                        {"Acquire", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, synchronous);
}
template<typename T>
inline void Fusion::NetworkAssetSourceStatic_1<T>::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceStatic_1<T>*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline T Fusion::NetworkAssetSourceStatic_1<T>::WaitForResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceStatic_1<T>*>(),
                        {"WaitForResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline ::StringW Fusion::NetworkAssetSourceStatic_1<T>::get_Description()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceStatic_1<T>*>(),
                        {"get_Description", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline void Fusion::NetworkAssetSourceStatic_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceStatic_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Fusion::NetworkAssetSourceStatic_1<T>* Fusion::NetworkAssetSourceStatic_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkAssetSourceStatic_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Fusion::NetworkAssetSourceStatic_1<T>::NetworkAssetSourceStatic_1()   {
}
