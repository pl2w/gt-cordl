#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticArrayBag_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StaticArrayBag_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<T>>*& GlobalNamespace::StaticArrayBag_1<T>::__cordl_internal_get_m_bag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bag;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<T>>* const& GlobalNamespace::StaticArrayBag_1<T>::__cordl_internal_get_m_bag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bag;
}
template<typename T>
constexpr void GlobalNamespace::StaticArrayBag_1<T>::__cordl_internal_set_m_bag(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<T>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_bag = value;
}
template<typename T>
inline ::ArrayW<T> GlobalNamespace::StaticArrayBag_1<T>::GetStaticArray(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StaticArrayBag_1<T>*>(),
                        {"GetStaticArray", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method, size);
}
template<typename T>
inline void GlobalNamespace::StaticArrayBag_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StaticArrayBag_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::StaticArrayBag_1<T>* GlobalNamespace::StaticArrayBag_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StaticArrayBag_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::StaticArrayBag_1<T>::StaticArrayBag_1()   {
}
