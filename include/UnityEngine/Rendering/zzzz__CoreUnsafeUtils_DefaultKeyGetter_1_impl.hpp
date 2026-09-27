#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CoreUnsafeUtils_DefaultKeyGetter_1.hpp"
#include "UnityEngine/Rendering/zzzz__CoreUnsafeUtils_DefaultKeyGetter_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CoreUnsafeUtils_def.hpp"
template<typename T>
inline T GlobalNamespace::CoreUnsafeUtils_DefaultKeyGetter_1<T>::Get(::by_ref<T>  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoreUnsafeUtils_DefaultKeyGetter_1<T>>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, v);
}
/// @brief Convert operator to "::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<T,T>"
template<typename T>
constexpr  GlobalNamespace::CoreUnsafeUtils_DefaultKeyGetter_1<T>::operator ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<T,T>*()  {
return static_cast<::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<T,T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<T,T>"
template<typename T>
constexpr ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<T,T>* GlobalNamespace::CoreUnsafeUtils_DefaultKeyGetter_1<T>::i___UnityEngine__Rendering__CoreUnsafeUtils_IKeyGetter_2_T_T_()  {
return static_cast<::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<T,T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::CoreUnsafeUtils_DefaultKeyGetter_1<T>::CoreUnsafeUtils_DefaultKeyGetter_1()   {
}
