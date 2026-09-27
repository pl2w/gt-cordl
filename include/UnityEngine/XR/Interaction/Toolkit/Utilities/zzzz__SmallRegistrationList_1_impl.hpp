#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/SmallRegistrationList_1.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__BaseRegistrationList_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__SmallRegistrationList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename T>
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>::__cordl_internal_get_m_BufferChanges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BufferChanges;
}
template<typename T>
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>::__cordl_internal_get_m_BufferChanges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BufferChanges;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>::__cordl_internal_set_m_BufferChanges(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BufferChanges = value;
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>::get_bufferChanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>*>(),
                        {"get_bufferChanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>::set_bufferChanges(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>*>(),
                        {"set_bufferChanges", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>::IsRegistered(T  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>::IsStillRegistered(T  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>::Register(T  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>::Unregister(T  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>::GetRegisteredItems(::System::Collections::Generic::List_1<T>*  results)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results);
}
template<typename T>
inline T UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>::GetRegisteredItemAt(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<T>::SmallRegistrationList_1()   {
}
