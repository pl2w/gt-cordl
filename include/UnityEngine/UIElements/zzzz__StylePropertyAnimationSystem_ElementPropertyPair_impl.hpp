#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StylePropertyAnimationSystem_ElementPropertyPair.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_ElementPropertyPair_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(&::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb789f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair::setStaticF_Comparer(::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>*, "Comparer", ::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>(std::forward<::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>*>(value));
}
inline ::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>* GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair::getStaticF_Comparer()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IEqualityComparer_1<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>*, "Comparer", ::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>();
}
inline void GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair::_ctor(::UnityEngine::UIElements::VisualElement*  element, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, element, property);
}
// Ctor Parameters [CppParam { name: "element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "property", ty: "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair::StylePropertyAnimationSystem_ElementPropertyPair(::UnityEngine::UIElements::VisualElement*  element, ::UnityEngine::UIElements::StyleSheets::StylePropertyId  property) noexcept  {
this->element = element;
this->property = property;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StylePropertyAnimationSystem_ElementPropertyPair::StylePropertyAnimationSystem_ElementPropertyPair()   {
}
