#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/RegistrationList_1.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__BaseRegistrationList_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__RegistrationList_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_get_m_UnorderedBufferedAdd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnorderedBufferedAdd;
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<T>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_get_m_UnorderedBufferedAdd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnorderedBufferedAdd;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_set_m_UnorderedBufferedAdd(::System::Collections::Generic::HashSet_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UnorderedBufferedAdd = value;
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_get_m_UnorderedBufferedRemove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnorderedBufferedRemove;
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<T>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_get_m_UnorderedBufferedRemove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnorderedBufferedRemove;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_set_m_UnorderedBufferedRemove(::System::Collections::Generic::HashSet_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UnorderedBufferedRemove = value;
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_get_m_UnorderedRegisteredSnapshot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnorderedRegisteredSnapshot;
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<T>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_get_m_UnorderedRegisteredSnapshot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnorderedRegisteredSnapshot;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_set_m_UnorderedRegisteredSnapshot(::System::Collections::Generic::HashSet_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UnorderedRegisteredSnapshot = value;
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_get_m_UnorderedRegisteredItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnorderedRegisteredItems;
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<T>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_get_m_UnorderedRegisteredItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnorderedRegisteredItems;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_set_m_UnorderedRegisteredItems(::System::Collections::Generic::HashSet_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UnorderedRegisteredItems = value;
}
template<typename T>
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_get_m_BufferedRemoveEmpty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BufferedRemoveEmpty;
}
template<typename T>
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_get_m_BufferedRemoveEmpty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BufferedRemoveEmpty;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::__cordl_internal_set_m_BufferedRemoveEmpty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BufferedRemoveEmpty = value;
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::IsRegistered(T  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::IsStillRegistered(T  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::Register(T  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::Unregister(T  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::GetRegisteredItems(::System::Collections::Generic::List_1<T>*  results)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results);
}
template<typename T>
inline T UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::GetRegisteredItemAt(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::OnItemMovedImmediately(T  item, int32_t  newIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, newIndex);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<T>::RegistrationList_1()   {
}
