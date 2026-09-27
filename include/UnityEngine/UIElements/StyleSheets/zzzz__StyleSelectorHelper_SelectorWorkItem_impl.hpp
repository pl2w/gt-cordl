#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StyleSelectorHelper_SelectorWorkItem.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_OrderedSelectorType_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleSelectorHelper_SelectorWorkItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_OrderedSelectorType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StyleSelectorHelper_SelectorWorkItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StyleSelectorHelper_SelectorWorkItem::*)(::GlobalNamespace::StyleSheet_OrderedSelectorType, ::StringW)>(&::GlobalNamespace::StyleSelectorHelper_SelectorWorkItem::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb8150c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StyleSelectorHelper_SelectorWorkItem>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::StyleSheet_OrderedSelectorType>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StyleSelectorHelper_SelectorWorkItem::_ctor(::GlobalNamespace::StyleSheet_OrderedSelectorType  type, ::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StyleSelectorHelper_SelectorWorkItem>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::StyleSheet_OrderedSelectorType>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, input);
}
// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::StyleSheet_OrderedSelectorType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "input", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StyleSelectorHelper_SelectorWorkItem::StyleSelectorHelper_SelectorWorkItem(::GlobalNamespace::StyleSheet_OrderedSelectorType  type, ::StringW  input) noexcept  {
this->type = type;
this->input = input;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StyleSelectorHelper_SelectorWorkItem::StyleSelectorHelper_SelectorWorkItem()   {
}
