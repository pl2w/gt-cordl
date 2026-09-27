#pragma once
// IWYU pragma private; include "UnityEngine/Localization/CallbackArray_1.hpp"
#include "UnityEngine/Localization/zzzz__CallbackArray_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename TDelegate>
inline TDelegate UnityEngine::Localization::CallbackArray_1<TDelegate>::get_SingleDelegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::CallbackArray_1<TDelegate>>(),
                        {"get_SingleDelegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TDelegate>(*this, ___internal_method);
}
template<typename TDelegate>
inline ::ArrayW<TDelegate> UnityEngine::Localization::CallbackArray_1<TDelegate>::get_MultiDelegates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::CallbackArray_1<TDelegate>>(),
                        {"get_MultiDelegates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TDelegate>>(*this, ___internal_method);
}
template<typename TDelegate>
inline int32_t UnityEngine::Localization::CallbackArray_1<TDelegate>::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::CallbackArray_1<TDelegate>>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename TDelegate>
inline void UnityEngine::Localization::CallbackArray_1<TDelegate>::Add(TDelegate  callback, int32_t  capacityIncrement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::CallbackArray_1<TDelegate>>(),
                        {"Add", {}, {::i2c::type_of<TDelegate>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, callback, capacityIncrement);
}
template<typename TDelegate>
inline void UnityEngine::Localization::CallbackArray_1<TDelegate>::RemoveByMovingTail(TDelegate  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::CallbackArray_1<TDelegate>>(),
                        {"RemoveByMovingTail", {}, {::i2c::type_of<TDelegate>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, callback);
}
template<typename TDelegate>
inline void UnityEngine::Localization::CallbackArray_1<TDelegate>::LockForChanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::CallbackArray_1<TDelegate>>(),
                        {"LockForChanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TDelegate>
inline void UnityEngine::Localization::CallbackArray_1<TDelegate>::UnlockForChanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::CallbackArray_1<TDelegate>>(),
                        {"UnlockForChanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TDelegate>
inline void UnityEngine::Localization::CallbackArray_1<TDelegate>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::CallbackArray_1<TDelegate>>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_SingleDelegate", ty: "TDelegate", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MultipleDelegates", ty: "::ArrayW<TDelegate>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AddCallbacks", ty: "::System::Collections::Generic::List_1<TDelegate>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_RemoveCallbacks", ty: "::System::Collections::Generic::List_1<TDelegate>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CannotMutateCallbacksArray", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MutatedDuringCallback", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TDelegate>
constexpr ::UnityEngine::Localization::CallbackArray_1<TDelegate>::CallbackArray_1(TDelegate  m_SingleDelegate, ::ArrayW<TDelegate>  m_MultipleDelegates, ::System::Collections::Generic::List_1<TDelegate>*  m_AddCallbacks, ::System::Collections::Generic::List_1<TDelegate>*  m_RemoveCallbacks, int32_t  m_Length, bool  m_CannotMutateCallbacksArray, bool  m_MutatedDuringCallback) noexcept  {
this->m_SingleDelegate = m_SingleDelegate;
this->m_MultipleDelegates = m_MultipleDelegates;
this->m_AddCallbacks = m_AddCallbacks;
this->m_RemoveCallbacks = m_RemoveCallbacks;
this->m_Length = m_Length;
this->m_CannotMutateCallbacksArray = m_CannotMutateCallbacksArray;
this->m_MutatedDuringCallback = m_MutatedDuringCallback;
}
// Ctor Parameters []
template<typename TDelegate>
constexpr ::UnityEngine::Localization::CallbackArray_1<TDelegate>::CallbackArray_1()   {
}
