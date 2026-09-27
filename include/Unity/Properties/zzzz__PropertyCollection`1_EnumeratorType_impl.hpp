#pragma once
// IWYU pragma private; include "Unity/Properties/PropertyCollection`1_EnumeratorType.hpp"
#include "Unity/Properties/zzzz__PropertyCollection`1_EnumeratorType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TContainer>
constexpr ::GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer>::PropertyCollection_1_EnumeratorType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
template<typename TContainer>
constexpr ::GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer>::PropertyCollection_1_EnumeratorType()   {
}
template<typename TContainer>
constexpr ::GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer>  GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer>::Empty{static_cast<int32_t>(0x0)};
template<typename TContainer>
constexpr ::GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer>  GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer>::Enumerable{static_cast<int32_t>(0x1)};
template<typename TContainer>
constexpr ::GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer>  GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer>::List{static_cast<int32_t>(0x2)};
template<typename TContainer>
constexpr ::GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer>  GlobalNamespace::PropertyCollection_1_EnumeratorType<TContainer>::IndexedCollectionPropertyBag{static_cast<int32_t>(0x3)};
