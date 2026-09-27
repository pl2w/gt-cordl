#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StyleSheetCache_SheetHandleKey.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleSheetCache_SheetHandleKey_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StyleSheetCache_SheetHandleKey._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StyleSheetCache_SheetHandleKey::*)(::UnityEngine::UIElements::StyleSheet*, int32_t)>(&::GlobalNamespace::StyleSheetCache_SheetHandleKey::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb8150d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StyleSheetCache_SheetHandleKey>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StyleSheetCache_SheetHandleKey::_ctor(::UnityEngine::UIElements::StyleSheet*  sheet, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StyleSheetCache_SheetHandleKey>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sheet, index);
}
// Ctor Parameters [CppParam { name: "sheetInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StyleSheetCache_SheetHandleKey::StyleSheetCache_SheetHandleKey(int32_t  sheetInstanceID, int32_t  index) noexcept  {
this->sheetInstanceID = sheetInstanceID;
this->index = index;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StyleSheetCache_SheetHandleKey::StyleSheetCache_SheetHandleKey()   {
}
