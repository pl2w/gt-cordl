#pragma once
// IWYU pragma private; include "GorillaTag/ListProcessor_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/zzzz__ListProcessor_1_def.hpp"
#include "GorillaTag/zzzz__InAction_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>*& GorillaTag::ListProcessor_1<T>::__cordl_internal_get_m_list()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_list;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>* const& GorillaTag::ListProcessor_1<T>::__cordl_internal_get_m_list() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_list;
}
template<typename T>
constexpr void GorillaTag::ListProcessor_1<T>::__cordl_internal_set_m_list(::System::Collections::Generic::List_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_list = value;
}
template<typename T>
constexpr int32_t& GorillaTag::ListProcessor_1<T>::__cordl_internal_get_m_currentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_currentIndex;
}
template<typename T>
constexpr int32_t const& GorillaTag::ListProcessor_1<T>::__cordl_internal_get_m_currentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_currentIndex;
}
template<typename T>
constexpr void GorillaTag::ListProcessor_1<T>::__cordl_internal_set_m_currentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_currentIndex = value;
}
template<typename T>
constexpr int32_t& GorillaTag::ListProcessor_1<T>::__cordl_internal_get_m_listCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_listCount;
}
template<typename T>
constexpr int32_t const& GorillaTag::ListProcessor_1<T>::__cordl_internal_get_m_listCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_listCount;
}
template<typename T>
constexpr void GorillaTag::ListProcessor_1<T>::__cordl_internal_set_m_listCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_listCount = value;
}
template<typename T>
constexpr ::GorillaTag::InAction_1<T>*& GorillaTag::ListProcessor_1<T>::__cordl_internal_get_m_itemProcessorDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_itemProcessorDelegate;
}
template<typename T>
constexpr ::GorillaTag::InAction_1<T>* const& GorillaTag::ListProcessor_1<T>::__cordl_internal_get_m_itemProcessorDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_itemProcessorDelegate;
}
template<typename T>
constexpr void GorillaTag::ListProcessor_1<T>::__cordl_internal_set_m_itemProcessorDelegate(::GorillaTag::InAction_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_itemProcessorDelegate = value;
}
template<typename T>
inline int32_t GorillaTag::ListProcessor_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ListProcessor_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline ::GorillaTag::InAction_1<T>* GorillaTag::ListProcessor_1<T>::get_ItemProcessor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ListProcessor_1<T>*>(),
                        {"get_ItemProcessor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::InAction_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void GorillaTag::ListProcessor_1<T>::set_ItemProcessor(::GorillaTag::InAction_1<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ListProcessor_1<T>*>(),
                        {"set_ItemProcessor", {}, {::i2c::type_of<::GorillaTag::InAction_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void GorillaTag::ListProcessor_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ListProcessor_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GorillaTag::ListProcessor_1<T>::_ctor(int32_t  capacity, ::GorillaTag::InAction_1<T>*  itemProcessorDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ListProcessor_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GorillaTag::InAction_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, itemProcessorDelegate);
}
template<typename T>
inline void GorillaTag::ListProcessor_1<T>::Add(/* [IsReadOnly] */ ::by_ref<T>  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::ListProcessor_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline bool GorillaTag::ListProcessor_1<T>::Remove(/* [IsReadOnly] */ ::by_ref<T>  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::ListProcessor_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline void GorillaTag::ListProcessor_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ListProcessor_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool GorillaTag::ListProcessor_1<T>::Contains(/* [IsReadOnly] */ ::by_ref<T>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ListProcessor_1<T>*>(),
                        {"Contains", {}, {::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline void GorillaTag::ListProcessor_1<T>::ProcessListSafe()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::ListProcessor_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GorillaTag::ListProcessor_1<T>::ProcessListSafe(::GorillaTag::InAction_1<T>*  customDelegate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::ListProcessor_1<T>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, customDelegate);
}
template<typename T>
inline void GorillaTag::ListProcessor_1<T>::ProcessList()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::ListProcessor_1<T>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GorillaTag::ListProcessor_1<T>::ProcessList(::GorillaTag::InAction_1<T>*  customDelegate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::ListProcessor_1<T>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, customDelegate);
}
template<typename T>
inline ::System::Collections::Generic::IReadOnlyList_1<T>* GorillaTag::ListProcessor_1<T>::GetReadonlyList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ListProcessor_1<T>*>(),
                        {"GetReadonlyList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<T>*>(this, ___internal_method);
}
template<typename T>
inline ::GorillaTag::ListProcessor_1<T>* GorillaTag::ListProcessor_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::ListProcessor_1<T>*>());
}
template<typename T>
inline ::GorillaTag::ListProcessor_1<T>* GorillaTag::ListProcessor_1<T>::New_ctor(int32_t  capacity, ::GorillaTag::InAction_1<T>*  itemProcessorDelegate)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::ListProcessor_1<T>*>(capacity, itemProcessorDelegate));
}
// Ctor Parameters []
template<typename T>
constexpr ::GorillaTag::ListProcessor_1<T>::ListProcessor_1()   {
}
