#pragma once
// IWYU pragma private; include "UnityEngine/Splines/RamerDouglasPeucker_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Splines/zzzz__RamerDouglasPeucker_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Splines/zzzz__RamerDouglasPeucker`1_Range_def.hpp"
template<typename T>
constexpr T& UnityEngine::Splines::RamerDouglasPeucker_1<T>::__cordl_internal_get_m_Points()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Points;
}
template<typename T>
constexpr T const& UnityEngine::Splines::RamerDouglasPeucker_1<T>::__cordl_internal_get_m_Points() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Points;
}
template<typename T>
constexpr void UnityEngine::Splines::RamerDouglasPeucker_1<T>::__cordl_internal_set_m_Points(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Points = value;
}
template<typename T>
constexpr ::ArrayW<bool>& UnityEngine::Splines::RamerDouglasPeucker_1<T>::__cordl_internal_get_m_Keep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Keep;
}
template<typename T>
constexpr ::ArrayW<bool> const& UnityEngine::Splines::RamerDouglasPeucker_1<T>::__cordl_internal_get_m_Keep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Keep;
}
template<typename T>
constexpr void UnityEngine::Splines::RamerDouglasPeucker_1<T>::__cordl_internal_set_m_Keep(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Keep = value;
}
template<typename T>
constexpr float_t& UnityEngine::Splines::RamerDouglasPeucker_1<T>::__cordl_internal_get_m_Epsilon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Epsilon;
}
template<typename T>
constexpr float_t const& UnityEngine::Splines::RamerDouglasPeucker_1<T>::__cordl_internal_get_m_Epsilon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Epsilon;
}
template<typename T>
constexpr void UnityEngine::Splines::RamerDouglasPeucker_1<T>::__cordl_internal_set_m_Epsilon(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Epsilon = value;
}
template<typename T>
constexpr int32_t& UnityEngine::Splines::RamerDouglasPeucker_1<T>::__cordl_internal_get_m_KeepCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeepCount;
}
template<typename T>
constexpr int32_t const& UnityEngine::Splines::RamerDouglasPeucker_1<T>::__cordl_internal_get_m_KeepCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeepCount;
}
template<typename T>
constexpr void UnityEngine::Splines::RamerDouglasPeucker_1<T>::__cordl_internal_set_m_KeepCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_KeepCount = value;
}
template<typename T>
inline void UnityEngine::Splines::RamerDouglasPeucker_1<T>::_ctor(T  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::RamerDouglasPeucker_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points);
}
template<typename T>
inline void UnityEngine::Splines::RamerDouglasPeucker_1<T>::Reduce(::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  results, float_t  epsilon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::RamerDouglasPeucker_1<T>*>(),
                        {"Reduce", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results, epsilon);
}
template<typename T>
inline void UnityEngine::Splines::RamerDouglasPeucker_1<T>::Keep(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::RamerDouglasPeucker_1<T>*>(),
                        {"Keep", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
template<typename T>
inline void UnityEngine::Splines::RamerDouglasPeucker_1<T>::Discard(::GlobalNamespace::RamerDouglasPeucker_1_Range<T>  range)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::RamerDouglasPeucker_1<T>*>(),
                        {"Discard", {}, {::i2c::type_of<::GlobalNamespace::RamerDouglasPeucker_1_Range<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, range);
}
template<typename T>
inline void UnityEngine::Splines::RamerDouglasPeucker_1<T>::Reduce(::GlobalNamespace::RamerDouglasPeucker_1_Range<T>  range)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::RamerDouglasPeucker_1<T>*>(),
                        {"Reduce", {}, {::i2c::type_of<::GlobalNamespace::RamerDouglasPeucker_1_Range<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, range);
}
template<typename T>
inline ::System::ValueTuple_2<int32_t,float_t> UnityEngine::Splines::RamerDouglasPeucker_1<T>::FindFarthest(::GlobalNamespace::RamerDouglasPeucker_1_Range<T>  range)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::RamerDouglasPeucker_1<T>*>(),
                        {"FindFarthest", {}, {::i2c::type_of<::GlobalNamespace::RamerDouglasPeucker_1_Range<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t,float_t>>(this, ___internal_method, range);
}
template<typename T>
inline ::UnityEngine::Splines::RamerDouglasPeucker_1<T>* UnityEngine::Splines::RamerDouglasPeucker_1<T>::New_ctor(T  points)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::RamerDouglasPeucker_1<T>*>(points));
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::Splines::RamerDouglasPeucker_1<T>::RamerDouglasPeucker_1()   {
}
