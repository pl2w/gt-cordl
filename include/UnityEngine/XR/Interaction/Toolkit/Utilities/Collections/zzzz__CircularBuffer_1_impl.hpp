#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/Collections/CircularBuffer_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Collections/zzzz__CircularBuffer_1_def.hpp"
template<typename T>
constexpr ::ArrayW<T>& UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>::__cordl_internal_get_m_Buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Buffer;
}
template<typename T>
constexpr ::ArrayW<T> const& UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>::__cordl_internal_get_m_Buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Buffer;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>::__cordl_internal_set_m_Buffer(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Buffer = value;
}
template<typename T>
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>::__cordl_internal_get_m_Start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Start;
}
template<typename T>
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>::__cordl_internal_get_m_Start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Start;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>::__cordl_internal_set_m_Start(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Start = value;
}
template<typename T>
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>::__cordl_internal_get_m_Count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Count;
}
template<typename T>
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>::__cordl_internal_get_m_Count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Count;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>::__cordl_internal_set_m_Count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Count = value;
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename T>
inline int32_t UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>::get_count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>*>(),
                        {"get_count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline int32_t UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>::get_capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>*>(),
                        {"get_capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>::Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>*>(),
                        {"Add", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline T UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>*>(capacity));
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>::CircularBuffer_1()   {
}
