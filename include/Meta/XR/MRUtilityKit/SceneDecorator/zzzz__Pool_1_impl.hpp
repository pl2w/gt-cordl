#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/Pool_1.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Pool`1_Callbacks_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Pool`1_Entry_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Pool_1_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Pool`1_Callbacks_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Pool`1_Entry_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
template<typename T>
constexpr ::ArrayW<::GlobalNamespace::Pool_1_Entry<T>>& Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>::__cordl_internal_get_pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pool;
}
template<typename T>
constexpr ::ArrayW<::GlobalNamespace::Pool_1_Entry<T>> const& Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>::__cordl_internal_get_pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pool;
}
template<typename T>
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>::__cordl_internal_set_pool(::ArrayW<::GlobalNamespace::Pool_1_Entry<T>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pool = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<T,int32_t>*& Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>::__cordl_internal_get_indices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indices;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<T,int32_t>* const& Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>::__cordl_internal_get_indices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indices;
}
template<typename T>
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>::__cordl_internal_set_indices(::System::Collections::Generic::Dictionary_2<T,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indices = value;
}
template<typename T>
constexpr int32_t& Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
template<typename T>
constexpr int32_t const& Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
template<typename T>
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
template<typename T>
constexpr ::GlobalNamespace::Pool_1_Callbacks<T>& Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>::__cordl_internal_get_callbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbacks;
}
template<typename T>
constexpr ::GlobalNamespace::Pool_1_Callbacks<T> const& Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>::__cordl_internal_get_callbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbacks;
}
template<typename T>
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>::__cordl_internal_set_callbacks(::GlobalNamespace::Pool_1_Callbacks<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callbacks = value;
}
template<typename T>
inline int32_t Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>::get_CountAll()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline int32_t Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>::get_CountActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline int32_t Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>::get_CountInactive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline T Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>::Get()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>::Release(T  t)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
template<typename T>
inline void Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>::Swap(int32_t  i0, int32_t  i1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>*>(),
                        {"Swap", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i0, i1);
}
template<typename T>
inline void Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>* Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<T>::Pool_1()   {
}
