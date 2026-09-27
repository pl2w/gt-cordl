#pragma once
// IWYU pragma private; include "GlobalNamespace/PooledList_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PooledList_1_def.hpp"
#include "GorillaTag/zzzz__ObjectPoolEvents_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>*& GlobalNamespace::PooledList_1<T>::__cordl_internal_get_List()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___List;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>* const& GlobalNamespace::PooledList_1<T>::__cordl_internal_get_List() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___List;
}
template<typename T>
constexpr void GlobalNamespace::PooledList_1<T>::__cordl_internal_set_List(::System::Collections::Generic::List_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___List = value;
}
template<typename T>
inline void GlobalNamespace::PooledList_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PooledList_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::PooledList_1<T>::GorillaTag_ObjectPoolEvents_OnTaken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PooledList_1<T>*>(),
                        {"GorillaTag.ObjectPoolEvents.OnTaken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::PooledList_1<T>::GorillaTag_ObjectPoolEvents_OnReturned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PooledList_1<T>*>(),
                        {"GorillaTag.ObjectPoolEvents.OnReturned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::PooledList_1<T>* GlobalNamespace::PooledList_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PooledList_1<T>*>());
}
/// @brief Convert operator to "::GorillaTag::ObjectPoolEvents"
template<typename T>
constexpr  GlobalNamespace::PooledList_1<T>::operator ::GorillaTag::ObjectPoolEvents*() noexcept {
return static_cast<::GorillaTag::ObjectPoolEvents*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ObjectPoolEvents"
template<typename T>
constexpr ::GorillaTag::ObjectPoolEvents* GlobalNamespace::PooledList_1<T>::i___GorillaTag__ObjectPoolEvents() noexcept {
return static_cast<::GorillaTag::ObjectPoolEvents*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::PooledList_1<T>::PooledList_1()   {
}
