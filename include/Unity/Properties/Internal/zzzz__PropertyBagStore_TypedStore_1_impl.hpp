#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/PropertyBagStore_TypedStore_1.hpp"
#include "Unity/Properties/Internal/zzzz__PropertyBagStore_TypedStore_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
template<typename TContainer>
inline void GlobalNamespace::PropertyBagStore_TypedStore_1<TContainer>::setStaticF_PropertyBag(::Unity::Properties::IPropertyBag_1<TContainer>*  value)  {
::cordl_internals::setStaticField<::Unity::Properties::IPropertyBag_1<TContainer>*, "PropertyBag", ::GlobalNamespace::PropertyBagStore_TypedStore_1<TContainer>>(std::forward<::Unity::Properties::IPropertyBag_1<TContainer>*>(value));
}
template<typename TContainer>
inline ::Unity::Properties::IPropertyBag_1<TContainer>* GlobalNamespace::PropertyBagStore_TypedStore_1<TContainer>::getStaticF_PropertyBag()  {
return ::cordl_internals::getStaticField<::Unity::Properties::IPropertyBag_1<TContainer>*, "PropertyBag", ::GlobalNamespace::PropertyBagStore_TypedStore_1<TContainer>>();
}
// Ctor Parameters []
template<typename TContainer>
constexpr ::GlobalNamespace::PropertyBagStore_TypedStore_1<TContainer>::PropertyBagStore_TypedStore_1()   {
}
