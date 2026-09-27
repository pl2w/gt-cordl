#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StylePropertyAnimationSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundPosition_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundRepeat_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundSize_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Background_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FontDefinition_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Length_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Rotate_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Scale_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_AnimationDataSet_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_Values`1_EmptyData_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_Values`1_StyleData_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_Values`1_TimingData_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextShadow_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TransformOrigin_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Translate_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundRepeat_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__Background_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__FontDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStylePropertyAnimationSystem_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__Rotate_def.hpp"
#include "UnityEngine/UIElements/zzzz__Scale_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_AnimationDataSet_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_ElementPropertyPair_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_TransitionState_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_Values`1_EmptyData_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_Values`1_StyleData_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_Values`1_TimingData_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextShadow_def.hpp"
#include "UnityEngine/UIElements/zzzz__TransformOrigin_def.hpp"
#include "UnityEngine/UIElements/zzzz__Translate_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb788848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, float_t, float_t, int32_t, int32_t, ::System::Func_2<float_t,float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb78895c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, int32_t, int32_t, int32_t, int32_t, ::System::Func_2<float_t,float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb788a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, int32_t, int32_t, ::System::Func_2<float_t,float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb788b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::Length>(), ::i2c::type_of<::UnityEngine::UIElements::Length>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::Color, ::UnityEngine::Color, int32_t, int32_t, ::System::Func_2<float_t,float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb788bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransitionEnum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, int32_t, int32_t, int32_t, int32_t, ::System::Func_2<float_t,float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransitionEnum)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb788cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransitionEnum", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::Background, ::UnityEngine::UIElements::Background, int32_t, int32_t, ::System::Func_2<float_t,float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb788dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::Background>(), ::i2c::type_of<::UnityEngine::UIElements::Background>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::FontDefinition, ::UnityEngine::UIElements::FontDefinition, int32_t, int32_t, ::System::Func_2<float_t,float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb788eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::FontDefinition>(), ::i2c::type_of<::UnityEngine::UIElements::FontDefinition>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::Font*, ::UnityEngine::Font*, int32_t, int32_t, ::System::Func_2<float_t,float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb788fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, int32_t, int32_t, ::System::Func_2<float_t,float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb789080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::TextShadow>(), ::i2c::type_of<::UnityEngine::UIElements::TextShadow>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, int32_t, int32_t, ::System::Func_2<float_t,float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb78917c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::Scale>(), ::i2c::type_of<::UnityEngine::UIElements::Scale>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, int32_t, int32_t, ::System::Func_2<float_t,float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb78926c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::Rotate>(), ::i2c::type_of<::UnityEngine::UIElements::Rotate>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, int32_t, int32_t, ::System::Func_2<float_t,float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb789368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::Translate>(), ::i2c::type_of<::UnityEngine::UIElements::Translate>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, int32_t, int32_t, ::System::Func_2<float_t,float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb789464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::TransformOrigin>(), ::i2c::type_of<::UnityEngine::UIElements::TransformOrigin>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::BackgroundPosition, ::UnityEngine::UIElements::BackgroundPosition, int32_t, int32_t, ::System::Func_2<float_t,float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb789560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::BackgroundPosition>(), ::i2c::type_of<::UnityEngine::UIElements::BackgroundPosition>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::BackgroundRepeat, ::UnityEngine::UIElements::BackgroundRepeat, int32_t, int32_t, ::System::Func_2<float_t,float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb789650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::BackgroundRepeat>(), ::i2c::type_of<::UnityEngine::UIElements::BackgroundRepeat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.StartTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::BackgroundSize, ::UnityEngine::UIElements::BackgroundSize, int32_t, int32_t, ::System::Func_2<float_t,float_t>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb78972c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::BackgroundSize>(), ::i2c::type_of<::UnityEngine::UIElements::BackgroundSize>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.CancelAllAnimations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::CancelAllAnimations)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xb789828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"CancelAllAnimations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.CancelAllAnimations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::CancelAllAnimations)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0xb78995c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"CancelAllAnimations", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.CancelAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::CancelAnimation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb789bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"CancelAnimation", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.UpdateAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::UpdateAnimation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb789c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"UpdateAnimation", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.GetAllAnimations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)(::UnityEngine::UIElements::VisualElement*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::GetAllAnimations)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb789d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"GetAllAnimations", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.CurrentTimeMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::CurrentTimeMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb789e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"CurrentTimeMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem::Update)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb789e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_CurrentTimeMs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentTimeMs;
}
constexpr int64_t const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_CurrentTimeMs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentTimeMs;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_CurrentTimeMs(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentTimeMs = value;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Floats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Floats;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Floats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Floats;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Floats(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Floats = value;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Ints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ints;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Ints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ints;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Ints(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Ints = value;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Lengths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Lengths;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Lengths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Lengths;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Lengths(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Lengths = value;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Colors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Colors;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Colors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Colors;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Colors(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Colors = value;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Enums()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Enums;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Enums() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Enums;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Enums(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Enums = value;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Backgrounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Backgrounds;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Backgrounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Backgrounds;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Backgrounds(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Backgrounds = value;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_FontDefinitions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FontDefinitions;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_FontDefinitions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FontDefinitions;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_FontDefinitions(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FontDefinitions = value;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Fonts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Fonts;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Fonts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Fonts;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Fonts(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Fonts = value;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_TextShadows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TextShadows;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_TextShadows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TextShadows;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_TextShadows(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TextShadows = value;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Scale;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Scale;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Scale(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Scale = value;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Rotate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Rotate;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Rotate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Rotate;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Rotate(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Rotate = value;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Translate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Translate;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_Translate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Translate;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_Translate(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Translate = value;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_TransformOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TransformOrigin;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_TransformOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TransformOrigin;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_TransformOrigin(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TransformOrigin = value;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_BackgroundPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BackgroundPosition;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_BackgroundPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BackgroundPosition;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_BackgroundPosition(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BackgroundPosition = value;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_BackgroundRepeat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BackgroundRepeat;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_BackgroundRepeat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BackgroundRepeat;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_BackgroundRepeat(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BackgroundRepeat = value;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_BackgroundSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BackgroundSize;
}
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_BackgroundSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BackgroundSize;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_BackgroundSize(::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BackgroundSize = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_AllValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllValues;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_AllValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllValues;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_AllValues(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllValues = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>*& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_PropertyToValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertyToValues;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>* const& UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_get_m_PropertyToValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertyToValues;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem::__cordl_internal_set_m_PropertyToValues(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PropertyToValues = value;
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::default_constructor_constraint<T>)
inline T UnityEngine::UIElements::StylePropertyAnimationSystem::GetOrCreate(::by_ref<T>  values)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                    {"GetOrCreate", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, values);
}
template<typename T>
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, T  startValue, T  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve, ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*  values)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                    {"StartTransition", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<T>(), ::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>(), ::i2c::type_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve, values);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, float_t  startValue, float_t  endValue, int32_t  durationMs, int32_t  delayMs, /* [NotNull] */ ::System::Func_2<float_t,float_t>*  easingCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, int32_t  startValue, int32_t  endValue, int32_t  durationMs, int32_t  delayMs, /* [NotNull] */ ::System::Func_2<float_t,float_t>*  easingCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::Length  startValue, ::UnityEngine::UIElements::Length  endValue, int32_t  durationMs, int32_t  delayMs, /* [NotNull] */ ::System::Func_2<float_t,float_t>*  easingCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::Length>(), ::i2c::type_of<::UnityEngine::UIElements::Length>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::Color  startValue, ::UnityEngine::Color  endValue, int32_t  durationMs, int32_t  delayMs, /* [NotNull] */ ::System::Func_2<float_t,float_t>*  easingCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransitionEnum(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, int32_t  startValue, int32_t  endValue, int32_t  durationMs, int32_t  delayMs, /* [NotNull] */ ::System::Func_2<float_t,float_t>*  easingCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransitionEnum", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::Background  startValue, ::UnityEngine::UIElements::Background  endValue, int32_t  durationMs, int32_t  delayMs, /* [NotNull] */ ::System::Func_2<float_t,float_t>*  easingCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::Background>(), ::i2c::type_of<::UnityEngine::UIElements::Background>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::FontDefinition  startValue, ::UnityEngine::UIElements::FontDefinition  endValue, int32_t  durationMs, int32_t  delayMs, /* [NotNull] */ ::System::Func_2<float_t,float_t>*  easingCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::FontDefinition>(), ::i2c::type_of<::UnityEngine::UIElements::FontDefinition>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::Font*  startValue, ::UnityEngine::Font*  endValue, int32_t  durationMs, int32_t  delayMs, /* [NotNull] */ ::System::Func_2<float_t,float_t>*  easingCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<::UnityEngine::Font*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::TextShadow  startValue, ::UnityEngine::UIElements::TextShadow  endValue, int32_t  durationMs, int32_t  delayMs, /* [NotNull] */ ::System::Func_2<float_t,float_t>*  easingCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::TextShadow>(), ::i2c::type_of<::UnityEngine::UIElements::TextShadow>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::Scale  startValue, ::UnityEngine::UIElements::Scale  endValue, int32_t  durationMs, int32_t  delayMs, /* [NotNull] */ ::System::Func_2<float_t,float_t>*  easingCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::Scale>(), ::i2c::type_of<::UnityEngine::UIElements::Scale>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::Rotate  startValue, ::UnityEngine::UIElements::Rotate  endValue, int32_t  durationMs, int32_t  delayMs, /* [NotNull] */ ::System::Func_2<float_t,float_t>*  easingCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::Rotate>(), ::i2c::type_of<::UnityEngine::UIElements::Rotate>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::Translate  startValue, ::UnityEngine::UIElements::Translate  endValue, int32_t  durationMs, int32_t  delayMs, /* [NotNull] */ ::System::Func_2<float_t,float_t>*  easingCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::Translate>(), ::i2c::type_of<::UnityEngine::UIElements::Translate>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::TransformOrigin  startValue, ::UnityEngine::UIElements::TransformOrigin  endValue, int32_t  durationMs, int32_t  delayMs, /* [NotNull] */ ::System::Func_2<float_t,float_t>*  easingCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::TransformOrigin>(), ::i2c::type_of<::UnityEngine::UIElements::TransformOrigin>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::BackgroundPosition  startValue, ::UnityEngine::UIElements::BackgroundPosition  endValue, int32_t  durationMs, int32_t  delayMs, /* [NotNull] */ ::System::Func_2<float_t,float_t>*  easingCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::BackgroundPosition>(), ::i2c::type_of<::UnityEngine::UIElements::BackgroundPosition>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::BackgroundRepeat  startValue, ::UnityEngine::UIElements::BackgroundRepeat  endValue, int32_t  durationMs, int32_t  delayMs, /* [NotNull] */ ::System::Func_2<float_t,float_t>*  easingCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::BackgroundRepeat>(), ::i2c::type_of<::UnityEngine::UIElements::BackgroundRepeat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem::StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::UnityEngine::UIElements::BackgroundSize  startValue, ::UnityEngine::UIElements::BackgroundSize  endValue, int32_t  durationMs, int32_t  delayMs, /* [NotNull] */ ::System::Func_2<float_t,float_t>*  easingCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::BackgroundSize>(), ::i2c::type_of<::UnityEngine::UIElements::BackgroundSize>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem::CancelAllAnimations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"CancelAllAnimations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem::CancelAllAnimations(::UnityEngine::UIElements::VisualElement*  owner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"CancelAllAnimations", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem::CancelAnimation(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"CancelAnimation", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, id);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem::UpdateAnimation(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"UpdateAnimation", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, id);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem::GetAllAnimations(::UnityEngine::UIElements::VisualElement*  owner, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  propertyIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"GetAllAnimations", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, propertyIds);
}
template<typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem::UpdateTracking(::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*  values)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                    {"UpdateTracking", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values);
}
inline int64_t UnityEngine::UIElements::StylePropertyAnimationSystem::CurrentTimeMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"CurrentTimeMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem* UnityEngine::UIElements::StylePropertyAnimationSystem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StylePropertyAnimationSystem*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::IStylePropertyAnimationSystem"
constexpr  UnityEngine::UIElements::StylePropertyAnimationSystem::operator ::UnityEngine::UIElements::IStylePropertyAnimationSystem*() noexcept {
return static_cast<::UnityEngine::UIElements::IStylePropertyAnimationSystem*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IStylePropertyAnimationSystem"
constexpr ::UnityEngine::UIElements::IStylePropertyAnimationSystem* UnityEngine::UIElements::StylePropertyAnimationSystem::i___UnityEngine__UIElements__IStylePropertyAnimationSystem() noexcept {
return static_cast<::UnityEngine::UIElements::IStylePropertyAnimationSystem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem::StylePropertyAnimationSystem()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize.get_SameFunc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::UnityEngine::UIElements::BackgroundSize,::UnityEngine::UIElements::BackgroundSize,bool>* (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb78cd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize.IsSame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::BackgroundSize, ::UnityEngine::UIElements::BackgroundSize)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::IsSame)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb78cd78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>(),
                        {"IsSame", {}, {::i2c::type_of<::UnityEngine::UIElements::BackgroundSize>(), ::i2c::type_of<::UnityEngine::UIElements::BackgroundSize>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize.ConvertUnits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::by_ref<::UnityEngine::UIElements::BackgroundSize>, ::by_ref<::UnityEngine::UIElements::BackgroundSize>)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::ConvertUnits)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb78cdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>(),
                        {"ConvertUnits", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BackgroundSize>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BackgroundSize>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb78cde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::*)(int32_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb78cec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BackgroundSize (*)(::UnityEngine::UIElements::BackgroundSize, ::UnityEngine::UIElements::BackgroundSize, float_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::Lerp)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb78cf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::UIElements::BackgroundSize>(), ::i2c::type_of<::UnityEngine::UIElements::BackgroundSize>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize.UpdateValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::UpdateValues)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb78d03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>(),
                        {"UpdateValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb78d120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::UnityEngine::UIElements::BackgroundSize,::UnityEngine::UIElements::BackgroundSize,bool>*& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::__cordl_internal_get__SameFunc_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SameFunc_k__BackingField;
}
constexpr ::System::Func_3<::UnityEngine::UIElements::BackgroundSize,::UnityEngine::UIElements::BackgroundSize,bool>* const& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::__cordl_internal_get__SameFunc_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::__cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::BackgroundSize,::UnityEngine::UIElements::BackgroundSize,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SameFunc_k__BackingField = value;
}
inline ::System::Func_3<::UnityEngine::UIElements::BackgroundSize,::UnityEngine::UIElements::BackgroundSize,bool>* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::get_SameFunc()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::UIElements::BackgroundSize,::UnityEngine::UIElements::BackgroundSize,bool>*>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::IsSame(::UnityEngine::UIElements::BackgroundSize  a, ::UnityEngine::UIElements::BackgroundSize  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>(),
                        {"IsSame", {}, {::i2c::type_of<::UnityEngine::UIElements::BackgroundSize>(), ::i2c::type_of<::UnityEngine::UIElements::BackgroundSize>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::ConvertUnits(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::by_ref<::UnityEngine::UIElements::BackgroundSize>  a, ::by_ref<::UnityEngine::UIElements::BackgroundSize>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>(),
                        {"ConvertUnits", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BackgroundSize>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BackgroundSize>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, owner, prop, a, b);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::UpdateComputedStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::UpdateComputedStyle(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::BackgroundSize UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::Lerp(::UnityEngine::UIElements::BackgroundSize  a, ::UnityEngine::UIElements::BackgroundSize  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::UIElements::BackgroundSize>(), ::i2c::type_of<::UnityEngine::UIElements::BackgroundSize>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundSize>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::UpdateValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>(),
                        {"UpdateValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundSize::StylePropertyAnimationSystem_ValuesBackgroundSize()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb78cbb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat::*)(int32_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb78cc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb78cd28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat::UpdateComputedStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat::UpdateComputedStyle(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundRepeat::StylePropertyAnimationSystem_ValuesBackgroundRepeat()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb78c9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition::*)(int32_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb78cabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb78cb6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition::UpdateComputedStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition::UpdateComputedStyle(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackgroundPosition::StylePropertyAnimationSystem_ValuesBackgroundPosition()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin.get_SameFunc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::UnityEngine::UIElements::TransformOrigin,::UnityEngine::UIElements::TransformOrigin,bool>* (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb78c5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin.IsSame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::IsSame)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb78c5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>(),
                        {"IsSame", {}, {::i2c::type_of<::UnityEngine::UIElements::TransformOrigin>(), ::i2c::type_of<::UnityEngine::UIElements::TransformOrigin>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin.ConvertUnits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::by_ref<::UnityEngine::UIElements::TransformOrigin>, ::by_ref<::UnityEngine::UIElements::TransformOrigin>)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::ConvertUnits)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb78c5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>(),
                        {"ConvertUnits", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::TransformOrigin>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::TransformOrigin>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb78c610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::*)(int32_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb78c6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TransformOrigin (*)(::UnityEngine::UIElements::TransformOrigin, ::UnityEngine::UIElements::TransformOrigin, float_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::Lerp)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb78c7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::UIElements::TransformOrigin>(), ::i2c::type_of<::UnityEngine::UIElements::TransformOrigin>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin.UpdateValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::UpdateValues)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb78c864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>(),
                        {"UpdateValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb78c938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::UnityEngine::UIElements::TransformOrigin,::UnityEngine::UIElements::TransformOrigin,bool>*& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::__cordl_internal_get__SameFunc_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SameFunc_k__BackingField;
}
constexpr ::System::Func_3<::UnityEngine::UIElements::TransformOrigin,::UnityEngine::UIElements::TransformOrigin,bool>* const& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::__cordl_internal_get__SameFunc_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::__cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::TransformOrigin,::UnityEngine::UIElements::TransformOrigin,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SameFunc_k__BackingField = value;
}
inline ::System::Func_3<::UnityEngine::UIElements::TransformOrigin,::UnityEngine::UIElements::TransformOrigin,bool>* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::get_SameFunc()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::UIElements::TransformOrigin,::UnityEngine::UIElements::TransformOrigin,bool>*>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::IsSame(::UnityEngine::UIElements::TransformOrigin  a, ::UnityEngine::UIElements::TransformOrigin  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>(),
                        {"IsSame", {}, {::i2c::type_of<::UnityEngine::UIElements::TransformOrigin>(), ::i2c::type_of<::UnityEngine::UIElements::TransformOrigin>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::ConvertUnits(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::by_ref<::UnityEngine::UIElements::TransformOrigin>  a, ::by_ref<::UnityEngine::UIElements::TransformOrigin>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>(),
                        {"ConvertUnits", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::TransformOrigin>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::TransformOrigin>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, owner, prop, a, b);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::UpdateComputedStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::UpdateComputedStyle(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::TransformOrigin UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::Lerp(::UnityEngine::UIElements::TransformOrigin  a, ::UnityEngine::UIElements::TransformOrigin  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::UIElements::TransformOrigin>(), ::i2c::type_of<::UnityEngine::UIElements::TransformOrigin>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TransformOrigin>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::UpdateValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>(),
                        {"UpdateValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTransformOrigin::StylePropertyAnimationSystem_ValuesTransformOrigin()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate.get_SameFunc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::UnityEngine::UIElements::Translate,::UnityEngine::UIElements::Translate,bool>* (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb78c164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate.IsSame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::IsSame)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb78c16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>(),
                        {"IsSame", {}, {::i2c::type_of<::UnityEngine::UIElements::Translate>(), ::i2c::type_of<::UnityEngine::UIElements::Translate>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate.ConvertUnits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::by_ref<::UnityEngine::UIElements::Translate>, ::by_ref<::UnityEngine::UIElements::Translate>)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::ConvertUnits)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb78c1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>(),
                        {"ConvertUnits", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Translate>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Translate>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb78c1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::*)(int32_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb78c2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Translate (*)(::UnityEngine::UIElements::Translate, ::UnityEngine::UIElements::Translate, float_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::Lerp)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb78c384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::UIElements::Translate>(), ::i2c::type_of<::UnityEngine::UIElements::Translate>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate.UpdateValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::UpdateValues)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb78c428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>(),
                        {"UpdateValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb78c4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::UnityEngine::UIElements::Translate,::UnityEngine::UIElements::Translate,bool>*& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::__cordl_internal_get__SameFunc_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SameFunc_k__BackingField;
}
constexpr ::System::Func_3<::UnityEngine::UIElements::Translate,::UnityEngine::UIElements::Translate,bool>* const& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::__cordl_internal_get__SameFunc_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::__cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::Translate,::UnityEngine::UIElements::Translate,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SameFunc_k__BackingField = value;
}
inline ::System::Func_3<::UnityEngine::UIElements::Translate,::UnityEngine::UIElements::Translate,bool>* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::get_SameFunc()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::UIElements::Translate,::UnityEngine::UIElements::Translate,bool>*>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::IsSame(::UnityEngine::UIElements::Translate  a, ::UnityEngine::UIElements::Translate  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>(),
                        {"IsSame", {}, {::i2c::type_of<::UnityEngine::UIElements::Translate>(), ::i2c::type_of<::UnityEngine::UIElements::Translate>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::ConvertUnits(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::by_ref<::UnityEngine::UIElements::Translate>  a, ::by_ref<::UnityEngine::UIElements::Translate>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>(),
                        {"ConvertUnits", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Translate>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Translate>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, owner, prop, a, b);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::UpdateComputedStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::UpdateComputedStyle(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::Translate UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::Lerp(::UnityEngine::UIElements::Translate  a, ::UnityEngine::UIElements::Translate  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::UIElements::Translate>(), ::i2c::type_of<::UnityEngine::UIElements::Translate>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Translate>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::UpdateValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>(),
                        {"UpdateValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTranslate::StylePropertyAnimationSystem_ValuesTranslate()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate.get_SameFunc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::UnityEngine::UIElements::Rotate,::UnityEngine::UIElements::Rotate,bool>* (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb78bd68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate.IsSame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::IsSame)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb78bd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>(),
                        {"IsSame", {}, {::i2c::type_of<::UnityEngine::UIElements::Rotate>(), ::i2c::type_of<::UnityEngine::UIElements::Rotate>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb78bdb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::*)(int32_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb78bea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Rotate (*)(::UnityEngine::UIElements::Rotate, ::UnityEngine::UIElements::Rotate, float_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::Lerp)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb78bf68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::UIElements::Rotate>(), ::i2c::type_of<::UnityEngine::UIElements::Rotate>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate.UpdateValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::UpdateValues)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb78bfec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>(),
                        {"UpdateValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb78c0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::UnityEngine::UIElements::Rotate,::UnityEngine::UIElements::Rotate,bool>*& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::__cordl_internal_get__SameFunc_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SameFunc_k__BackingField;
}
constexpr ::System::Func_3<::UnityEngine::UIElements::Rotate,::UnityEngine::UIElements::Rotate,bool>* const& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::__cordl_internal_get__SameFunc_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::__cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::Rotate,::UnityEngine::UIElements::Rotate,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SameFunc_k__BackingField = value;
}
inline ::System::Func_3<::UnityEngine::UIElements::Rotate,::UnityEngine::UIElements::Rotate,bool>* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::get_SameFunc()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::UIElements::Rotate,::UnityEngine::UIElements::Rotate,bool>*>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::IsSame(::UnityEngine::UIElements::Rotate  a, ::UnityEngine::UIElements::Rotate  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>(),
                        {"IsSame", {}, {::i2c::type_of<::UnityEngine::UIElements::Rotate>(), ::i2c::type_of<::UnityEngine::UIElements::Rotate>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::UpdateComputedStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::UpdateComputedStyle(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::Rotate UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::Lerp(::UnityEngine::UIElements::Rotate  a, ::UnityEngine::UIElements::Rotate  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::UIElements::Rotate>(), ::i2c::type_of<::UnityEngine::UIElements::Rotate>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Rotate>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::UpdateValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>(),
                        {"UpdateValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesRotate::StylePropertyAnimationSystem_ValuesRotate()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale.get_SameFunc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::UnityEngine::UIElements::Scale,::UnityEngine::UIElements::Scale,bool>* (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb78ba34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale.IsSame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::IsSame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb78ba3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>(),
                        {"IsSame", {}, {::i2c::type_of<::UnityEngine::UIElements::Scale>(), ::i2c::type_of<::UnityEngine::UIElements::Scale>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb78ba44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::*)(int32_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb78bb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Scale (*)(::UnityEngine::UIElements::Scale, ::UnityEngine::UIElements::Scale, float_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::Lerp)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb78bbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::UIElements::Scale>(), ::i2c::type_of<::UnityEngine::UIElements::Scale>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale.UpdateValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::UpdateValues)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb78bc28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>(),
                        {"UpdateValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb78bcc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::UnityEngine::UIElements::Scale,::UnityEngine::UIElements::Scale,bool>*& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::__cordl_internal_get__SameFunc_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SameFunc_k__BackingField;
}
constexpr ::System::Func_3<::UnityEngine::UIElements::Scale,::UnityEngine::UIElements::Scale,bool>* const& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::__cordl_internal_get__SameFunc_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::__cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::Scale,::UnityEngine::UIElements::Scale,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SameFunc_k__BackingField = value;
}
inline ::System::Func_3<::UnityEngine::UIElements::Scale,::UnityEngine::UIElements::Scale,bool>* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::get_SameFunc()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::UIElements::Scale,::UnityEngine::UIElements::Scale,bool>*>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::IsSame(::UnityEngine::UIElements::Scale  a, ::UnityEngine::UIElements::Scale  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>(),
                        {"IsSame", {}, {::i2c::type_of<::UnityEngine::UIElements::Scale>(), ::i2c::type_of<::UnityEngine::UIElements::Scale>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::UpdateComputedStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::UpdateComputedStyle(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline ::UnityEngine::UIElements::Scale UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::Lerp(::UnityEngine::UIElements::Scale  a, ::UnityEngine::UIElements::Scale  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::UIElements::Scale>(), ::i2c::type_of<::UnityEngine::UIElements::Scale>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Scale>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::UpdateValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>(),
                        {"UpdateValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesScale::StylePropertyAnimationSystem_ValuesScale()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow.get_SameFunc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::UnityEngine::UIElements::TextShadow,::UnityEngine::UIElements::TextShadow,bool>* (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb78b630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow.IsSame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::IsSame)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb78b638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>(),
                        {"IsSame", {}, {::i2c::type_of<::UnityEngine::UIElements::TextShadow>(), ::i2c::type_of<::UnityEngine::UIElements::TextShadow>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TextShadow (*)(::UnityEngine::UIElements::TextShadow, ::UnityEngine::UIElements::TextShadow, float_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::Lerp)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb78b680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::UIElements::TextShadow>(), ::i2c::type_of<::UnityEngine::UIElements::TextShadow>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow.UpdateValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::UpdateValues)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb78b6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>(),
                        {"UpdateValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb78b7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::*)(int32_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb78b8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb78b990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::UnityEngine::UIElements::TextShadow,::UnityEngine::UIElements::TextShadow,bool>*& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::__cordl_internal_get__SameFunc_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SameFunc_k__BackingField;
}
constexpr ::System::Func_3<::UnityEngine::UIElements::TextShadow,::UnityEngine::UIElements::TextShadow,bool>* const& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::__cordl_internal_get__SameFunc_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::__cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::TextShadow,::UnityEngine::UIElements::TextShadow,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SameFunc_k__BackingField = value;
}
inline ::System::Func_3<::UnityEngine::UIElements::TextShadow,::UnityEngine::UIElements::TextShadow,bool>* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::get_SameFunc()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::UIElements::TextShadow,::UnityEngine::UIElements::TextShadow,bool>*>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::IsSame(::UnityEngine::UIElements::TextShadow  a, ::UnityEngine::UIElements::TextShadow  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>(),
                        {"IsSame", {}, {::i2c::type_of<::UnityEngine::UIElements::TextShadow>(), ::i2c::type_of<::UnityEngine::UIElements::TextShadow>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::UIElements::TextShadow UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::Lerp(::UnityEngine::UIElements::TextShadow  a, ::UnityEngine::UIElements::TextShadow  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::UIElements::TextShadow>(), ::i2c::type_of<::UnityEngine::UIElements::TextShadow>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextShadow>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::UpdateValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>(),
                        {"UpdateValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::UpdateComputedStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::UpdateComputedStyle(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesTextShadow::StylePropertyAnimationSystem_ValuesTextShadow()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb78b474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont::*)(int32_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb78b540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb78b5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont::UpdateComputedStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont::UpdateComputedStyle(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFont::StylePropertyAnimationSystem_ValuesFont()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb78b2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition::*)(int32_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb78b384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb78b42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition::UpdateComputedStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition::UpdateComputedStyle(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFontDefinition::StylePropertyAnimationSystem_ValuesFontDefinition()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb78b0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground::*)(int32_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb78b1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb78b26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground::UpdateComputedStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground::UpdateComputedStyle(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesBackground::StylePropertyAnimationSystem_ValuesBackground()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb78af14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum::*)(int32_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb78afe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb78b088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum::UpdateComputedStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum::UpdateComputedStyle(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesEnum::StylePropertyAnimationSystem_ValuesEnum()   {
}
template<typename T>
constexpr ::System::Func_3<T,T,bool>*& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>::__cordl_internal_get__SameFunc_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SameFunc_k__BackingField;
}
template<typename T>
constexpr ::System::Func_3<T,T,bool>* const& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>::__cordl_internal_get__SameFunc_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SameFunc_k__BackingField;
}
template<typename T>
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>::__cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<T,T,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SameFunc_k__BackingField = value;
}
template<typename T>
inline ::System::Func_3<T,T,bool>* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>::get_SameFunc()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<T,T,bool>*>(this, ___internal_method);
}
template<typename T>
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>::IsSame(T  a, T  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>*>(),
                        {"IsSame", {}, {::i2c::type_of<T>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
template<typename T>
inline T UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>::Lerp(T  a, T  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>*>(),
                        {"Lerp", {}, {::i2c::type_of<T>(), ::i2c::type_of<T>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, a, b, t);
}
template<typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>::UpdateValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>*>(),
                        {"UpdateValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesDiscrete_1<T>::StylePropertyAnimationSystem_ValuesDiscrete_1()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor.get_SameFunc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::UnityEngine::Color,::UnityEngine::Color,bool>* (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb78aaf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor.IsSame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Color, ::UnityEngine::Color)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::IsSame)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xb78aafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>(),
                        {"IsSame", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color, ::UnityEngine::Color, float_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::Lerp)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb78ac34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor.UpdateValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::UpdateValues)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb78ac6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>(),
                        {"UpdateValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb78acf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::*)(int32_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb78adc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb78ae70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::UnityEngine::Color,::UnityEngine::Color,bool>*& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::__cordl_internal_get__SameFunc_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SameFunc_k__BackingField;
}
constexpr ::System::Func_3<::UnityEngine::Color,::UnityEngine::Color,bool>* const& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::__cordl_internal_get__SameFunc_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::__cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::Color,::UnityEngine::Color,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SameFunc_k__BackingField = value;
}
inline ::System::Func_3<::UnityEngine::Color,::UnityEngine::Color,bool>* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::get_SameFunc()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::Color,::UnityEngine::Color,bool>*>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::IsSame(::UnityEngine::Color  c, ::UnityEngine::Color  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>(),
                        {"IsSame", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c, d);
}
inline ::UnityEngine::Color UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::Lerp(::UnityEngine::Color  a, ::UnityEngine::Color  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::UpdateValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>(),
                        {"UpdateValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::UpdateComputedStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::UpdateComputedStyle(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesColor::StylePropertyAnimationSystem_ValuesColor()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength.get_SameFunc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::Length,bool>* (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb78a724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength.IsSame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::IsSame)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb78a72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>(),
                        {"IsSame", {}, {::i2c::type_of<::UnityEngine::UIElements::Length>(), ::i2c::type_of<::UnityEngine::UIElements::Length>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength.ConvertUnits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::by_ref<::UnityEngine::UIElements::Length>, ::by_ref<::UnityEngine::UIElements::Length>)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::ConvertUnits)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb78a7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>(),
                        {"ConvertUnits", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Length>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Length>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (*)(::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length, float_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::Lerp)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb78a7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::UIElements::Length>(), ::i2c::type_of<::UnityEngine::UIElements::Length>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength.UpdateValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::UpdateValues)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb78a82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>(),
                        {"UpdateValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb78a8dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::*)(int32_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb78a9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb78aa50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::Length,bool>*& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::__cordl_internal_get__SameFunc_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SameFunc_k__BackingField;
}
constexpr ::System::Func_3<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::Length,bool>* const& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::__cordl_internal_get__SameFunc_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::__cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::Length,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SameFunc_k__BackingField = value;
}
inline ::System::Func_3<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::Length,bool>* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::get_SameFunc()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::UIElements::Length,::UnityEngine::UIElements::Length,bool>*>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::IsSame(::UnityEngine::UIElements::Length  a, ::UnityEngine::UIElements::Length  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>(),
                        {"IsSame", {}, {::i2c::type_of<::UnityEngine::UIElements::Length>(), ::i2c::type_of<::UnityEngine::UIElements::Length>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::ConvertUnits(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::by_ref<::UnityEngine::UIElements::Length>  a, ::by_ref<::UnityEngine::UIElements::Length>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>(),
                        {"ConvertUnits", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Length>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Length>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, owner, prop, a, b);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::Lerp(::UnityEngine::UIElements::Length  a, ::UnityEngine::UIElements::Length  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::UIElements::Length>(), ::i2c::type_of<::UnityEngine::UIElements::Length>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::UpdateValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>(),
                        {"UpdateValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::UpdateComputedStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::UpdateComputedStyle(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesLength::StylePropertyAnimationSystem_ValuesLength()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt.get_SameFunc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<int32_t,int32_t,bool>* (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb78a374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt.IsSame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::IsSame)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb78a37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>(),
                        {"IsSame", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, float_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::Lerp)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb78a388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>(),
                        {"Lerp", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt.UpdateValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::UpdateValues)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb78a474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>(),
                        {"UpdateValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb78a50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::*)(int32_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb78a5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb78a680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<int32_t,int32_t,bool>*& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::__cordl_internal_get__SameFunc_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SameFunc_k__BackingField;
}
constexpr ::System::Func_3<int32_t,int32_t,bool>* const& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::__cordl_internal_get__SameFunc_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::__cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<int32_t,int32_t,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SameFunc_k__BackingField = value;
}
inline ::System::Func_3<int32_t,int32_t,bool>* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::get_SameFunc()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<int32_t,int32_t,bool>*>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::IsSame(int32_t  a, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>(),
                        {"IsSame", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline int32_t UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::Lerp(int32_t  a, int32_t  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>(),
                        {"Lerp", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b, t);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::UpdateValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>(),
                        {"UpdateValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::UpdateComputedStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::UpdateComputedStyle(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesInt::StylePropertyAnimationSystem_ValuesInt()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat.get_SameFunc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<float_t,float_t,bool>* (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::get_SameFunc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb78a038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat.IsSame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, float_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::IsSame)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb78a040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>(),
                        {"IsSame", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, ::by_ref<float_t>, float_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::Lerp)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb78a0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>(),
                        {"Lerp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat.UpdateValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::UpdateValues)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb78a0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>(),
                        {"UpdateValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb78a15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::*)(int32_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb78a228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb78a2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<float_t,float_t,bool>*& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::__cordl_internal_get__SameFunc_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SameFunc_k__BackingField;
}
constexpr ::System::Func_3<float_t,float_t,bool>* const& UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::__cordl_internal_get__SameFunc_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SameFunc_k__BackingField;
}
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::__cordl_internal_set__SameFunc_k__BackingField(::System::Func_3<float_t,float_t,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SameFunc_k__BackingField = value;
}
inline ::System::Func_3<float_t,float_t,bool>* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::get_SameFunc()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<float_t,float_t,bool>*>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::IsSame(float_t  a, float_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>(),
                        {"IsSame", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::Lerp(float_t  a, float_t  b, ::by_ref<float_t>  result, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>(),
                        {"Lerp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b, result, t);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::UpdateValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>(),
                        {"UpdateValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::UpdateComputedStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>(),
                        {"UpdateComputedStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::UpdateComputedStyle(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>(),
                        {"UpdateComputedStyle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat* UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_ValuesFloat::StylePropertyAnimationSystem_ValuesFloat()   {
}
template<typename T>
constexpr int64_t& UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_get_m_CurrentTimeMs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentTimeMs;
}
template<typename T>
constexpr int64_t const& UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_get_m_CurrentTimeMs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentTimeMs;
}
template<typename T>
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_set_m_CurrentTimeMs(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentTimeMs = value;
}
template<typename T>
constexpr ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*& UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_get_m_CurrentFrameEventsState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentFrameEventsState;
}
template<typename T>
constexpr ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>* const& UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_get_m_CurrentFrameEventsState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentFrameEventsState;
}
template<typename T>
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_set_m_CurrentFrameEventsState(::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentFrameEventsState = value;
}
template<typename T>
constexpr ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*& UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_get_m_NextFrameEventsState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NextFrameEventsState;
}
template<typename T>
constexpr ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>* const& UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_get_m_NextFrameEventsState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NextFrameEventsState;
}
template<typename T>
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_set_m_NextFrameEventsState(::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NextFrameEventsState = value;
}
template<typename T>
constexpr ::GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<::GlobalNamespace::Values_1_StylePropertyAnimationSystem_TimingData<T>,::GlobalNamespace::Values_1_StylePropertyAnimationSystem_StyleData<T>>& UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_get_running()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___running;
}
template<typename T>
constexpr ::GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<::GlobalNamespace::Values_1_StylePropertyAnimationSystem_TimingData<T>,::GlobalNamespace::Values_1_StylePropertyAnimationSystem_StyleData<T>> const& UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_get_running() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___running;
}
template<typename T>
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_set_running(::GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<::GlobalNamespace::Values_1_StylePropertyAnimationSystem_TimingData<T>,::GlobalNamespace::Values_1_StylePropertyAnimationSystem_StyleData<T>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___running = value;
}
template<typename T>
constexpr ::GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<::GlobalNamespace::Values_1_StylePropertyAnimationSystem_EmptyData<T>,T>& UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_get_completed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
template<typename T>
constexpr ::GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<::GlobalNamespace::Values_1_StylePropertyAnimationSystem_EmptyData<T>,T> const& UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_get_completed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
template<typename T>
constexpr void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::__cordl_internal_set_completed(::GlobalNamespace::StylePropertyAnimationSystem_AnimationDataSet_2<::GlobalNamespace::Values_1_StylePropertyAnimationSystem_EmptyData<T>,T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completed = value;
}
template<typename T>
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::get_isEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(),
                        {"get_isEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline ::System::Func_3<T,T,bool>* UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::get_SameFunc()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<T,T,bool>*>(this, ___internal_method);
}
template<typename T>
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::ConvertUnits(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, ::by_ref<T>  a, ::by_ref<T>  b)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, owner, prop, a, b);
}
template<typename T>
inline T UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::Copy(T  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, value);
}
template<typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::SwapFrameStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(),
                        {"SwapFrameStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::QueueEvent(::UnityEngine::UIElements::EventBase*  evt, ::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair  epp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(),
                        {"QueueEvent", {}, {::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, epp);
}
template<typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::ClearEventQueue(::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair  epp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(),
                        {"ClearEventQueue", {}, {::i2c::type_of<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, epp);
}
template<typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::QueueTransitionRunEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(),
                        {"QueueTransitionRunEvent", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, runningIndex);
}
template<typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::QueueTransitionStartEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(),
                        {"QueueTransitionStartEvent", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, runningIndex);
}
template<typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::QueueTransitionEndEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(),
                        {"QueueTransitionEndEvent", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, runningIndex);
}
template<typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::QueueTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(),
                        {"QueueTransitionCancelEvent", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, runningIndex, panelElapsedMs);
}
template<typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::SendTransitionCancelEvent(::UnityEngine::UIElements::VisualElement*  ve, int32_t  runningIndex, int64_t  panelElapsedMs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(),
                        {"SendTransitionCancelEvent", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, runningIndex, panelElapsedMs);
}
template<typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::CancelAllAnimations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(),
                        {"CancelAllAnimations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::CancelAllAnimations(::UnityEngine::UIElements::VisualElement*  ve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(),
                        {"CancelAllAnimations", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
template<typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::CancelAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(),
                        {"CancelAnimation", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, id);
}
template<typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::UpdateAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(),
                        {"UpdateAnimation", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, id);
}
template<typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::GetAllAnimations(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outPropertyIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(),
                        {"GetAllAnimations", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, outPropertyIds);
}
template<typename T>
inline float_t UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::ComputeReversingShorteningFactor(int32_t  oldIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(),
                        {"ComputeReversingShorteningFactor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, oldIndex);
}
template<typename T>
inline int32_t UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::ComputeReversingDuration(int32_t  newTransitionDurationMs, float_t  newReversingShorteningFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(),
                        {"ComputeReversingDuration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, newTransitionDurationMs, newReversingShorteningFactor);
}
template<typename T>
inline int32_t UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::ComputeReversingDelay(int32_t  delayMs, float_t  newReversingShorteningFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(),
                        {"ComputeReversingDelay", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, delayMs, newReversingShorteningFactor);
}
template<typename T>
inline bool UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::StartTransition(::UnityEngine::UIElements::VisualElement*  owner, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  prop, T  startValue, T  endValue, int32_t  durationMs, int32_t  delayMs, ::System::Func_2<float_t,float_t>*  easingCurve, int64_t  currentTimeMs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(),
                        {"StartTransition", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<T>(), ::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t,float_t>*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, owner, prop, startValue, endValue, durationMs, delayMs, easingCurve, currentTimeMs);
}
template<typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::ForceComputedStyleEndValue(int32_t  runningIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(),
                        {"ForceComputedStyleEndValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runningIndex);
}
template<typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::Update(int64_t  currentTimeMs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(),
                        {"Update", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTimeMs);
}
template<typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::ProcessEventQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(),
                        {"ProcessEventQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::UpdateProgress(int64_t  currentTimeMs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>(),
                        {"UpdateProgress", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTimeMs);
}
template<typename T>
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>* UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values_1<T>::StylePropertyAnimationSystem_Values_1()   {
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair,::GlobalNamespace::StylePropertyAnimationSystem_TransitionState>*& UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::__cordl_internal_get_elementPropertyStateDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementPropertyStateDelta;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair,::GlobalNamespace::StylePropertyAnimationSystem_TransitionState>* const& UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::__cordl_internal_get_elementPropertyStateDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementPropertyStateDelta;
}
template<typename T>
constexpr void UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::__cordl_internal_set_elementPropertyStateDelta(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair,::GlobalNamespace::StylePropertyAnimationSystem_TransitionState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementPropertyStateDelta = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*& UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::__cordl_internal_get_elementPropertyQueuedEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementPropertyQueuedEvents;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* const& UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::__cordl_internal_get_elementPropertyQueuedEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementPropertyQueuedEvents;
}
template<typename T>
constexpr void UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::__cordl_internal_set_elementPropertyQueuedEvents(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair,::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementPropertyQueuedEvents = value;
}
template<typename T>
constexpr ::UnityEngine::UIElements::IPanel*& UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::__cordl_internal_get_panel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
template<typename T>
constexpr ::UnityEngine::UIElements::IPanel* const& UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::__cordl_internal_get_panel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___panel;
}
template<typename T>
constexpr void UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::__cordl_internal_set_panel(::UnityEngine::UIElements::IPanel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___panel = value;
}
template<typename T>
constexpr int32_t& UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::__cordl_internal_get_m_ChangesCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ChangesCount;
}
template<typename T>
constexpr int32_t const& UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::__cordl_internal_get_m_ChangesCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ChangesCount;
}
template<typename T>
constexpr void UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::__cordl_internal_set_m_ChangesCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ChangesCount = value;
}
template<typename T>
inline void UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::setStaticF_k_EventQueuePool(::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*, "k_EventQueuePool", ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*>(value));
}
template<typename T>
inline ::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>* UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::getStaticF_k_EventQueuePool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>*, "k_EventQueuePool", ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*>();
}
template<typename T>
inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::GetPooledQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*>(),
                        {"GetPooledQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>(nullptr, ___internal_method);
}
template<typename T>
inline void UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::RegisterChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*>(),
                        {"RegisterChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::UnregisterChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*>(),
                        {"UnregisterChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::StateChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*>(),
                        {"StateChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>* UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::UIElements::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState<T>::Values_1_StylePropertyAnimationSystem_TransitionEventsFrameState()   {
}
template<typename T>
inline void UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>::setStaticF___9(::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>*, "<>9", ::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>*>(std::forward<::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>*>(value));
}
template<typename T>
inline ::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>* UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>*, "<>9", ::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>*>();
}
template<typename T>
inline void UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>* UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>::__cctor_b__11_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>*>(),
                        {"<.cctor>b__11_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventBase*>*>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>* UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::UIElements::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c<T>::TransitionEventsFrameState_Values_1_StylePropertyAnimationSystem___c()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values.CancelAllAnimations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::CancelAllAnimations)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values.CancelAllAnimations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::CancelAllAnimations)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values.CancelAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::CancelAnimation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values.UpdateAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::UpdateAnimation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values.GetAllAnimations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::*)(::UnityEngine::UIElements::VisualElement*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::GetAllAnimations)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::*)(int64_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values.UpdateValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::UpdateValues)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values.UpdateComputedStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::*)(int32_t)>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::UpdateComputedStyle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(),
                    {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::*)()>(&::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb78a030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values::CancelAllAnimations()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values::CancelAllAnimations(::UnityEngine::UIElements::VisualElement*  ve)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values::CancelAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, id);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values::UpdateAnimation(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  id)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, id);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values::GetAllAnimations(::UnityEngine::UIElements::VisualElement*  ve, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*  outPropertyIds)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, outPropertyIds);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values::Update(int64_t  currentTimeMs)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTimeMs);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values::UpdateValues()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values::UpdateComputedStyle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values::UpdateComputedStyle(int32_t  i)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline void UnityEngine::UIElements::StylePropertyAnimationSystem_Values::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values* UnityEngine::UIElements::StylePropertyAnimationSystem_Values::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::StylePropertyAnimationSystem_Values*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StylePropertyAnimationSystem_Values::StylePropertyAnimationSystem_Values()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::*)(::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair, ::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair)>(&::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb789fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>(), ::i2c::type_of<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::*)(::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair)>(&::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb789ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::*)()>(&::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb789fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::Equals(::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair  x, ::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>(), ::i2c::type_of<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::GetHashCode(::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer* UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>"
constexpr  UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>* UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___GlobalNamespace__StylePropertyAnimationSystem_ElementPropertyPair_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer::ElementPropertyPair_StylePropertyAnimationSystem_EqualityComparer()   {
}
