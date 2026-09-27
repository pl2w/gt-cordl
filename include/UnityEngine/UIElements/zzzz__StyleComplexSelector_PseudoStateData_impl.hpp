#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleComplexSelector_PseudoStateData.hpp"
#include "UnityEngine/UIElements/zzzz__PseudoStates_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleComplexSelector_PseudoStateData_def.hpp"
#include "UnityEngine/UIElements/zzzz__PseudoStates_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StyleComplexSelector_PseudoStateData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StyleComplexSelector_PseudoStateData::*)(::UnityEngine::UIElements::PseudoStates, bool)>(&::GlobalNamespace::StyleComplexSelector_PseudoStateData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb78dc7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StyleComplexSelector_PseudoStateData>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::PseudoStates>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StyleComplexSelector_PseudoStateData::_ctor(::UnityEngine::UIElements::PseudoStates  state, bool  negate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StyleComplexSelector_PseudoStateData>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::PseudoStates>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, state, negate);
}
// Ctor Parameters [CppParam { name: "state", ty: "::UnityEngine::UIElements::PseudoStates", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "negate", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StyleComplexSelector_PseudoStateData::StyleComplexSelector_PseudoStateData(::UnityEngine::UIElements::PseudoStates  state, bool  negate) noexcept  {
this->state = state;
this->negate = negate;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StyleComplexSelector_PseudoStateData::StyleComplexSelector_PseudoStateData()   {
}
