#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/BaseRegistrationList_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__BaseRegistrationList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__BaseRegistrationList_1_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::__cordl_internal_get__registeredSnapshot_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____registeredSnapshot_k__BackingField;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::__cordl_internal_get__registeredSnapshot_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____registeredSnapshot_k__BackingField;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::__cordl_internal_set__registeredSnapshot_k__BackingField(::System::Collections::Generic::List_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____registeredSnapshot_k__BackingField = value;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::__cordl_internal_get_m_BufferedAdd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BufferedAdd;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::__cordl_internal_get_m_BufferedAdd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BufferedAdd;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::__cordl_internal_set_m_BufferedAdd(::System::Collections::Generic::List_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BufferedAdd = value;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::__cordl_internal_get_m_BufferedRemove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BufferedRemove;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::__cordl_internal_get_m_BufferedRemove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BufferedRemove;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::__cordl_internal_set_m_BufferedRemove(::System::Collections::Generic::List_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BufferedRemove = value;
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::setStaticF_s_BufferedListPool(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<T>*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<T>*>*, "s_BufferedListPool", ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<T>*>*>(value));
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<T>*>* UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::getStaticF_s_BufferedListPool()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<T>*>*, "s_BufferedListPool", ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>();
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::get_registeredSnapshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>(),
                        {"get_registeredSnapshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(this, ___internal_method);
}
template<typename T>
inline int32_t UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::get_flushedCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>(),
                        {"get_flushedCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline int32_t UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::get_bufferedAddCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>(),
                        {"get_bufferedAddCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline int32_t UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::get_bufferedRemoveCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>(),
                        {"get_bufferedRemoveCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::AddToBufferedAdd(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>(),
                        {"AddToBufferedAdd", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::RemoveFromBufferedAdd(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>(),
                        {"RemoveFromBufferedAdd", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::ClearBufferedAdd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>(),
                        {"ClearBufferedAdd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::AddToBufferedRemove(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>(),
                        {"AddToBufferedRemove", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::RemoveFromBufferedRemove(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>(),
                        {"RemoveFromBufferedRemove", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::ClearBufferedRemove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>(),
                        {"ClearBufferedRemove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::IsRegistered(T  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::IsStillRegistered(T  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::Register(T  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::Unregister(T  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::GetRegisteredItems(::System::Collections::Generic::List_1<T>*  results)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results);
}
template<typename T>
inline T UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::GetRegisteredItemAt(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::MoveItemImmediately(T  item, int32_t  newIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>(),
                        {"MoveItemImmediately", {}, {::i2c::type_of<T>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item, newIndex);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::OnItemMovedImmediately(T  item, int32_t  newIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, newIndex);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::UnregisterAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>(),
                        {"UnregisterAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::EnsureCapacity(::System::Collections::Generic::List_1<T>*  list, int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>(),
                        {"EnsureCapacity", {}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, capacity);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>::BaseRegistrationList_1()   {
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1___c<T>::setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1___c<T>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1___c<T>*, "<>9", ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1___c<T>*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1___c<T>*>(value));
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1___c<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1___c<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1___c<T>*, "<>9", ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1___c<T>*>();
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1___c<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1___c<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1___c<T>::__cctor_b__30_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1___c<T>*>(),
                        {"<.cctor>b__30_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1___c<T>::__cctor_b__30_1(::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1___c<T>*>(),
                        {"<.cctor>b__30_1", {}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1___c<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1___c<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1___c<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1___c<T>::BaseRegistrationList_1___c()   {
}
