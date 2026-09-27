#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/PooledObject_1.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/zzzz__PooledObject_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/zzzz__LinkedPool_1_def.hpp"
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::PooledObject_1<T>::_ctor(T  value, ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>*  pool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::PooledObject_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, pool);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::PooledObject_1<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::PooledObject_1<T>>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::PooledObject_1<T>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::PooledObject_1<T>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ToReturn", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Pool", ty: "::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::PooledObject_1<T>::PooledObject_1(T  m_ToReturn, ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<T>*  m_Pool) noexcept  {
this->m_ToReturn = m_ToReturn;
this->m_Pool = m_Pool;
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::PooledObject_1<T>::PooledObject_1()   {
}
