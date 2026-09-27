#pragma once
// IWYU pragma private; include "Fusion/NetworkAssetSourceResource_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkAssetSourceResource_1_def.hpp"
#include "Fusion/zzzz__NetworkAssetSourceResource_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__ResourceRequest_def.hpp"
template<typename T>
constexpr ::StringW& Fusion::NetworkAssetSourceResource_1<T>::__cordl_internal_get_ResourcePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResourcePath;
}
template<typename T>
constexpr ::StringW const& Fusion::NetworkAssetSourceResource_1<T>::__cordl_internal_get_ResourcePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResourcePath;
}
template<typename T>
constexpr void Fusion::NetworkAssetSourceResource_1<T>::__cordl_internal_set_ResourcePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ResourcePath = value;
}
template<typename T>
constexpr ::StringW& Fusion::NetworkAssetSourceResource_1<T>::__cordl_internal_get_SubObjectName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubObjectName;
}
template<typename T>
constexpr ::StringW const& Fusion::NetworkAssetSourceResource_1<T>::__cordl_internal_get_SubObjectName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubObjectName;
}
template<typename T>
constexpr void Fusion::NetworkAssetSourceResource_1<T>::__cordl_internal_set_SubObjectName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SubObjectName = value;
}
template<typename T>
constexpr ::System::Object*& Fusion::NetworkAssetSourceResource_1<T>::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
template<typename T>
constexpr ::System::Object* const& Fusion::NetworkAssetSourceResource_1<T>::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
template<typename T>
constexpr void Fusion::NetworkAssetSourceResource_1<T>::__cordl_internal_set__state(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
template<typename T>
constexpr int32_t& Fusion::NetworkAssetSourceResource_1<T>::__cordl_internal_get__acquireCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____acquireCount;
}
template<typename T>
constexpr int32_t const& Fusion::NetworkAssetSourceResource_1<T>::__cordl_internal_get__acquireCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____acquireCount;
}
template<typename T>
constexpr void Fusion::NetworkAssetSourceResource_1<T>::__cordl_internal_set__acquireCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____acquireCount = value;
}
template<typename T>
inline void Fusion::NetworkAssetSourceResource_1<T>::Acquire(bool  synchronous)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceResource_1<T>*>(),
                        {"Acquire", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, synchronous);
}
template<typename T>
inline void Fusion::NetworkAssetSourceResource_1<T>::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceResource_1<T>*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool Fusion::NetworkAssetSourceResource_1<T>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceResource_1<T>*>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline T Fusion::NetworkAssetSourceResource_1<T>::WaitForResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceResource_1<T>*>(),
                        {"WaitForResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Fusion::NetworkAssetSourceResource_1<T>::FinishAsyncOp(::UnityEngine::ResourceRequest*  asyncOp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceResource_1<T>*>(),
                        {"FinishAsyncOp", {}, {::i2c::type_of<::UnityEngine::ResourceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncOp);
}
template<typename T>
inline T Fusion::NetworkAssetSourceResource_1<T>::LoadNamedResource(::StringW  resoucePath, ::StringW  subObjectName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceResource_1<T>*>(),
                        {"LoadNamedResource", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, resoucePath, subObjectName);
}
template<typename T>
inline void Fusion::NetworkAssetSourceResource_1<T>::LoadInternal(bool  synchronous)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceResource_1<T>*>(),
                        {"LoadInternal", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, synchronous);
}
template<typename T>
inline void Fusion::NetworkAssetSourceResource_1<T>::UnloadInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceResource_1<T>*>(),
                        {"UnloadInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::StringW Fusion::NetworkAssetSourceResource_1<T>::get_Description()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceResource_1<T>*>(),
                        {"get_Description", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline void Fusion::NetworkAssetSourceResource_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceResource_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Fusion::NetworkAssetSourceResource_1<T>* Fusion::NetworkAssetSourceResource_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkAssetSourceResource_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Fusion::NetworkAssetSourceResource_1<T>::NetworkAssetSourceResource_1()   {
}
template<typename T>
inline void Fusion::NetworkAssetSourceResource_1___c<T>::setStaticF___9(::Fusion::NetworkAssetSourceResource_1___c<T>*  value)  {
::cordl_internals::setStaticField<::Fusion::NetworkAssetSourceResource_1___c<T>*, "<>9", ::Fusion::NetworkAssetSourceResource_1___c<T>*>(std::forward<::Fusion::NetworkAssetSourceResource_1___c<T>*>(value));
}
template<typename T>
inline ::Fusion::NetworkAssetSourceResource_1___c<T>* Fusion::NetworkAssetSourceResource_1___c<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Fusion::NetworkAssetSourceResource_1___c<T>*, "<>9", ::Fusion::NetworkAssetSourceResource_1___c<T>*>();
}
template<typename T>
inline void Fusion::NetworkAssetSourceResource_1___c<T>::setStaticF___9__12_0(::System::Action_1<::UnityEngine::AsyncOperation*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::AsyncOperation*>*, "<>9__12_0", ::Fusion::NetworkAssetSourceResource_1___c<T>*>(std::forward<::System::Action_1<::UnityEngine::AsyncOperation*>*>(value));
}
template<typename T>
inline ::System::Action_1<::UnityEngine::AsyncOperation*>* Fusion::NetworkAssetSourceResource_1___c<T>::getStaticF___9__12_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::AsyncOperation*>*, "<>9__12_0", ::Fusion::NetworkAssetSourceResource_1___c<T>*>();
}
template<typename T>
inline void Fusion::NetworkAssetSourceResource_1___c<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceResource_1___c<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Fusion::NetworkAssetSourceResource_1___c<T>::_UnloadInternal_b__12_0(::UnityEngine::AsyncOperation*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkAssetSourceResource_1___c<T>*>(),
                        {"<UnloadInternal>b__12_0", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
template<typename T>
inline ::Fusion::NetworkAssetSourceResource_1___c<T>* Fusion::NetworkAssetSourceResource_1___c<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkAssetSourceResource_1___c<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Fusion::NetworkAssetSourceResource_1___c<T>::NetworkAssetSourceResource_1___c()   {
}
