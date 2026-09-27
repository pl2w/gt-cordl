#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/ScriptableSingletonCache_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__ScriptableSingletonCache_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSingletonCache_1<T>::setStaticF_s_Instance(T  value)  {
::cordl_internals::setStaticField<T, "s_Instance", ::UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSingletonCache_1<T>*>(std::forward<T>(value));
}
template<typename T>
inline T UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSingletonCache_1<T>::getStaticF_s_Instance()  {
return ::cordl_internals::getStaticField<T, "s_Instance", ::UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSingletonCache_1<T>*>();
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSingletonCache_1<T>::setStaticF_s_UsersPerInstance(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ScriptableObject>,::System::Collections::Generic::HashSet_1<::System::Object*>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ScriptableObject>,::System::Collections::Generic::HashSet_1<::System::Object*>*>*, "s_UsersPerInstance", ::UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSingletonCache_1<T>*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ScriptableObject>,::System::Collections::Generic::HashSet_1<::System::Object*>*>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ScriptableObject>,::System::Collections::Generic::HashSet_1<::System::Object*>*>* UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSingletonCache_1<T>::getStaticF_s_UsersPerInstance()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ScriptableObject>,::System::Collections::Generic::HashSet_1<::System::Object*>*>*, "s_UsersPerInstance", ::UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSingletonCache_1<T>*>();
}
template<typename T>
inline T UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSingletonCache_1<T>::GetInstance(::System::Object*  user)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSingletonCache_1<T>*>(),
                        {"GetInstance", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, user);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSingletonCache_1<T>::ReleaseInstance(::System::Object*  user)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSingletonCache_1<T>*>(),
                        {"ReleaseInstance", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, user);
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSingletonCache_1<T>::ScriptableSingletonCache_1()   {
}
