#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightCookieManager_WorkSlice_1.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_WorkSlice_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
template<typename T>
inline void GlobalNamespace::LightCookieManager_WorkSlice_1<T>::_ctor(::ArrayW<T>  src, int32_t  srcLen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightCookieManager_WorkSlice_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, src, srcLen);
}
template<typename T>
inline void GlobalNamespace::LightCookieManager_WorkSlice_1<T>::_ctor(::ArrayW<T>  src, int32_t  srcStart, int32_t  srcLen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightCookieManager_WorkSlice_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, src, srcStart, srcLen);
}
template<typename T>
inline T GlobalNamespace::LightCookieManager_WorkSlice_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightCookieManager_WorkSlice_1<T>>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template<typename T>
inline void GlobalNamespace::LightCookieManager_WorkSlice_1<T>::set_Item(int32_t  index, T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightCookieManager_WorkSlice_1<T>>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
template<typename T>
inline int32_t GlobalNamespace::LightCookieManager_WorkSlice_1<T>::get_length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightCookieManager_WorkSlice_1<T>>(),
                        {"get_length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline int32_t GlobalNamespace::LightCookieManager_WorkSlice_1<T>::get_capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightCookieManager_WorkSlice_1<T>>(),
                        {"get_capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::LightCookieManager_WorkSlice_1<T>::Sort(::System::Func_3<T,T,int32_t>*  compare)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightCookieManager_WorkSlice_1<T>>(),
                        {"Sort", {}, {::i2c::type_of<::System::Func_3<T,T,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, compare);
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "::ArrayW<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Start", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::LightCookieManager_WorkSlice_1<T>::LightCookieManager_WorkSlice_1(::ArrayW<T>  m_Data, int32_t  m_Start, int32_t  m_Length) noexcept  {
this->m_Data = m_Data;
this->m_Start = m_Start;
this->m_Length = m_Length;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::LightCookieManager_WorkSlice_1<T>::LightCookieManager_WorkSlice_1()   {
}
