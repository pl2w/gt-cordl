#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/ComponentLocatorUtility_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__ComponentLocatorUtility_1_def.hpp"
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1<T>::setStaticF_s_ComponentCache(T  value)  {
::cordl_internals::setStaticField<T, "s_ComponentCache", ::UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1<T>*>(std::forward<T>(value));
}
template<typename T>
inline T UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1<T>::getStaticF_s_ComponentCache()  {
return ::cordl_internals::getStaticField<T, "s_ComponentCache", ::UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1<T>*>();
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1<T>::setStaticF_s_LastTryFindFrame(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_LastTryFindFrame", ::UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1<T>*>(std::forward<int32_t>(value));
}
template<typename T>
inline int32_t UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1<T>::getStaticF_s_LastTryFindFrame()  {
return ::cordl_internals::getStaticField<int32_t, "s_LastTryFindFrame", ::UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1<T>*>();
}
template<typename T>
inline T UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1<T>::get_componentCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1<T>*>(),
                        {"get_componentCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1<T>::FindWasPerformedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1<T>*>(),
                        {"FindWasPerformedThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
template<typename T>
inline T UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1<T>::FindOrCreateComponent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1<T>*>(),
                        {"FindOrCreateComponent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template<typename T>
inline T UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1<T>::FindComponent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1<T>*>(),
                        {"FindComponent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1<T>::TryFindComponent(::by_ref<T>  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1<T>*>(),
                        {"TryFindComponent", {}, {::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, component);
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1<T>::TryFindComponent(::by_ref<T>  component, bool  limitTryFindPerFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1<T>*>(),
                        {"TryFindComponent", {}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, component, limitTryFindPerFrame);
}
template<typename T>
inline T UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1<T>::Find()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1<T>*>(),
                        {"Find", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1<T>::ComponentLocatorUtility_1()   {
}
