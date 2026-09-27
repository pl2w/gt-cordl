#pragma once
// IWYU pragma private; include "Unity/Properties/TypeUtility_Cache_1.hpp"
#include "Unity/Properties/zzzz__TypeUtility_Cache_1_def.hpp"
#include "Unity/Properties/zzzz__TypeUtility_def.hpp"
template<typename T>
inline void GlobalNamespace::TypeUtility_Cache_1<T>::setStaticF_TypeConstructor(::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*  value)  {
::cordl_internals::setStaticField<::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*, "TypeConstructor", ::GlobalNamespace::TypeUtility_Cache_1<T>>(std::forward<::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*>(value));
}
template<typename T>
inline ::Unity::Properties::TypeUtility_ITypeConstructor_1<T>* GlobalNamespace::TypeUtility_Cache_1<T>::getStaticF_TypeConstructor()  {
return ::cordl_internals::getStaticField<::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*, "TypeConstructor", ::GlobalNamespace::TypeUtility_Cache_1<T>>();
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::TypeUtility_Cache_1<T>::TypeUtility_Cache_1()   {
}
