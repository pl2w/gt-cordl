#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ObjectPool`1_PooledObject.hpp"
#include "UnityEngine/Rendering/zzzz__ObjectPool`1_PooledObject_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__ObjectPool_1_def.hpp"
template<typename T>
inline void GlobalNamespace::ObjectPool_1_PooledObject<T>::_ctor(T  value, ::UnityEngine::Rendering::ObjectPool_1<T>*  pool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPool_1_PooledObject<T>>(),
                        {".ctor", {}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Rendering::ObjectPool_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, pool);
}
template<typename T>
inline void GlobalNamespace::ObjectPool_1_PooledObject<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectPool_1_PooledObject<T>>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  GlobalNamespace::ObjectPool_1_PooledObject<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* GlobalNamespace::ObjectPool_1_PooledObject<T>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ToReturn", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Pool", ty: "::UnityEngine::Rendering::ObjectPool_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::ObjectPool_1_PooledObject<T>::ObjectPool_1_PooledObject(T  m_ToReturn, ::UnityEngine::Rendering::ObjectPool_1<T>*  m_Pool) noexcept  {
this->m_ToReturn = m_ToReturn;
this->m_Pool = m_Pool;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::ObjectPool_1_PooledObject<T>::ObjectPool_1_PooledObject()   {
}
