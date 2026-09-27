#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/PoolManager_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__PoolManager_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
template<typename K,typename P>
constexpr ::System::Collections::Generic::Dictionary_2<K,P>*& Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<K,P>::__cordl_internal_get_pools()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pools;
}
template<typename K,typename P>
constexpr ::System::Collections::Generic::Dictionary_2<K,P>* const& Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<K,P>::__cordl_internal_get_pools() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pools;
}
template<typename K,typename P>
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<K,P>::__cordl_internal_set_pools(::System::Collections::Generic::Dictionary_2<K,P>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pools = value;
}
template<typename K,typename P>
inline void Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<K,P>::AddPool(K  primitive, P  pool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<K,P>*>(),
                        {"AddPool", {}, {::i2c::type_of<K>(), ::i2c::type_of<P>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, primitive, pool);
}
template<typename K,typename P>
inline bool Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<K,P>::ContainsPool(K  primitive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<K,P>*>(),
                        {"ContainsPool", {}, {::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, primitive);
}
template<typename K,typename P>
inline P Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<K,P>::GetPool(K  primitive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<K,P>*>(),
                        {"GetPool", {}, {::i2c::type_of<K>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<P>(this, ___internal_method, primitive);
}
template<typename K,typename P>
inline void Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<K,P>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<K,P>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename K,typename P>
inline ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<K,P>* Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<K,P>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<K,P>*>());
}
// Ctor Parameters []
template<typename K,typename P>
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<K,P>::PoolManager_2()   {
}
