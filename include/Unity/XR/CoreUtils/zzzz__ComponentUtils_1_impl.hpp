#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/ComponentUtils_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__ComponentUtils_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
template<typename T>
inline void Unity::XR::CoreUtils::ComponentUtils_1<T>::setStaticF_k_RetrievalList(::System::Collections::Generic::List_1<T>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<T>*, "k_RetrievalList", ::Unity::XR::CoreUtils::ComponentUtils_1<T>*>(std::forward<::System::Collections::Generic::List_1<T>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Unity::XR::CoreUtils::ComponentUtils_1<T>::getStaticF_k_RetrievalList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<T>*, "k_RetrievalList", ::Unity::XR::CoreUtils::ComponentUtils_1<T>*>();
}
template<typename T>
inline T Unity::XR::CoreUtils::ComponentUtils_1<T>::GetComponent(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ComponentUtils_1<T>*>(),
                        {"GetComponent", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, gameObject);
}
template<typename T>
inline T Unity::XR::CoreUtils::ComponentUtils_1<T>::GetComponentInChildren(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ComponentUtils_1<T>*>(),
                        {"GetComponentInChildren", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, gameObject);
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::XR::CoreUtils::ComponentUtils_1<T>::ComponentUtils_1()   {
}
