#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/EnumValues_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__EnumValues_1_def.hpp"
template<typename T>
inline void Unity::XR::CoreUtils::EnumValues_1<T>::setStaticF_Values(::ArrayW<T>  value)  {
::cordl_internals::setStaticField<::ArrayW<T>, "Values", ::Unity::XR::CoreUtils::EnumValues_1<T>*>(std::forward<::ArrayW<T>>(value));
}
template<typename T>
inline ::ArrayW<T> Unity::XR::CoreUtils::EnumValues_1<T>::getStaticF_Values()  {
return ::cordl_internals::getStaticField<::ArrayW<T>, "Values", ::Unity::XR::CoreUtils::EnumValues_1<T>*>();
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::XR::CoreUtils::EnumValues_1<T>::EnumValues_1()   {
}
