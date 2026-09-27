#pragma once
// IWYU pragma private; include "Fusion/NetworkAssetSourceAddressable_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_impl.hpp"
#include "Fusion/zzzz__NetworkAssetSourceAddressable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReference_def.hpp"
template<typename T>
constexpr ::StringW& Fusion::NetworkAssetSourceAddressable_1<T>::__cordl_internal_get_RuntimeKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RuntimeKey;
}
template<typename T>
constexpr ::StringW const& Fusion::NetworkAssetSourceAddressable_1<T>::__cordl_internal_get_RuntimeKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RuntimeKey;
}
template<typename T>
constexpr void Fusion::NetworkAssetSourceAddressable_1<T>::__cordl_internal_set_RuntimeKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RuntimeKey = value;
}
template<typename T>
constexpr int32_t& Fusion::NetworkAssetSourceAddressable_1<T>::__cordl_internal_get__acquireCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____acquireCount;
}
template<typename T>
constexpr int32_t const& Fusion::NetworkAssetSourceAddressable_1<T>::__cordl_internal_get__acquireCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____acquireCount;
}
template<typename T>
constexpr void Fusion::NetworkAssetSourceAddressable_1<T>::__cordl_internal_set__acquireCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____acquireCount = value;
}
template<typename T>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& Fusion::NetworkAssetSourceAddressable_1<T>::__cordl_internal_get__op()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____op;
}
template<typename T>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& Fusion::NetworkAssetSourceAddressable_1<T>::__cordl_internal_get__op() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____op;
}
template<typename T>
constexpr void Fusion::NetworkAssetSourceAddressable_1<T>::__cordl_internal_set__op(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____op = value;
}
template<typename T>
inline ::UnityEngine::AddressableAssets::AssetReference* Fusion::NetworkAssetSourceAddressable_1<T>::get_Address()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceAddressable_1<T>*>(),
                        {"get_Address", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::AssetReference*>(this, ___internal_method);
}
template<typename T>
inline void Fusion::NetworkAssetSourceAddressable_1<T>::set_Address(::UnityEngine::AddressableAssets::AssetReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceAddressable_1<T>*>(),
                        {"set_Address", {}, {::i2c::type_of<::UnityEngine::AddressableAssets::AssetReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Fusion::NetworkAssetSourceAddressable_1<T>::Acquire(bool  synchronous)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceAddressable_1<T>*>(),
                        {"Acquire", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, synchronous);
}
template<typename T>
inline void Fusion::NetworkAssetSourceAddressable_1<T>::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceAddressable_1<T>*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool Fusion::NetworkAssetSourceAddressable_1<T>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceAddressable_1<T>*>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline T Fusion::NetworkAssetSourceAddressable_1<T>::WaitForResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceAddressable_1<T>*>(),
                        {"WaitForResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Fusion::NetworkAssetSourceAddressable_1<T>::LoadInternal(bool  synchronous)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceAddressable_1<T>*>(),
                        {"LoadInternal", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, synchronous);
}
template<typename T>
inline void Fusion::NetworkAssetSourceAddressable_1<T>::UnloadInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceAddressable_1<T>*>(),
                        {"UnloadInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline T Fusion::NetworkAssetSourceAddressable_1<T>::ValidateResult(::System::Object*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceAddressable_1<T>*>(),
                        {"ValidateResult", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, result);
}
template<typename T>
inline ::StringW Fusion::NetworkAssetSourceAddressable_1<T>::get_Description()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceAddressable_1<T>*>(),
                        {"get_Description", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline void Fusion::NetworkAssetSourceAddressable_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceAddressable_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Fusion::NetworkAssetSourceAddressable_1<T>* Fusion::NetworkAssetSourceAddressable_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkAssetSourceAddressable_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Fusion::NetworkAssetSourceAddressable_1<T>::NetworkAssetSourceAddressable_1()   {
}
