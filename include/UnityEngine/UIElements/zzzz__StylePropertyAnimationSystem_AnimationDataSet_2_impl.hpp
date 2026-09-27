#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StylePropertyAnimationSystem_AnimationDataSet_2.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_AnimationDataSet_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_ElementPropertyPair_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
template<typename TTimingData,typename TStyleData>
inline int32_t GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>::get_capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>>(),
                        {"get_capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename TTimingData,typename TStyleData>
inline void GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>::set_capacity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>>(),
                        {"set_capacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename TTimingData,typename TStyleData>
inline void GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>::LocalInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>>(),
                        {"LocalInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TTimingData,typename TStyleData>
inline ::GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData> GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>>(nullptr, ___internal_method);
}
template<typename TTimingData,typename TStyleData>
inline bool GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>::IndexOf(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>>(),
                        {"IndexOf", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, ve, prop, index);
}
template<typename TTimingData,typename TStyleData>
inline void GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>::Add(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, TTimingData  timingData, TStyleData  styleData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<TTimingData>(), ::i2c::type_of<TStyleData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, owner, prop, timingData, styleData);
}
template<typename TTimingData,typename TStyleData>
inline void GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>::Remove(int32_t  cancelledIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>>(),
                        {"Remove", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cancelledIndex);
}
template<typename TTimingData,typename TStyleData>
inline void GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>::Replace(int32_t  index, TTimingData  timingData, TStyleData  styleData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>>(),
                        {"Replace", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<TTimingData>(), ::i2c::type_of<TStyleData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, timingData, styleData);
}
template<typename TTimingData,typename TStyleData>
inline void GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>::RemoveAll(::UnityEngine::UIElements::VisualElement*  ve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>>(),
                        {"RemoveAll", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ve);
}
template<typename TTimingData,typename TStyleData>
inline void GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>::RemoveAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>>(),
                        {"RemoveAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TTimingData,typename TStyleData>
inline void GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>::GetActivePropertiesForElement(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outProperties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>>(),
                        {"GetActivePropertiesForElement", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ve, outProperties);
}
// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<::UnityEngine::UIElements::VisualElement*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "timing", ty: "::ArrayW<TTimingData>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "style", ty: "::ArrayW<TStyleData>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "indices", ty: "::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair,int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TTimingData,typename TStyleData>
constexpr ::GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>::StylePropertyAnimationSystem_AnimationDataSet_2(::ArrayW<::UnityEngine::UIElements::VisualElement*>  elements, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId>  properties, ::ArrayW<TTimingData>  timing, ::ArrayW<TStyleData>  style, int32_t  count, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair,int32_t>*  indices) noexcept  {
this->elements = elements;
this->properties = properties;
this->timing = timing;
this->style = style;
this->count = count;
this->indices = indices;
}
// Ctor Parameters []
template<typename TTimingData,typename TStyleData>
constexpr ::GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<TTimingData,TStyleData>::StylePropertyAnimationSystem_AnimationDataSet_2()   {
}
