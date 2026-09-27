#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextResourceManager_FontAssetRef.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextResourceManager_FontAssetRef_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextResourceManager_FontAssetRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextResourceManager_FontAssetRef::*)(int32_t, int32_t, int32_t, ::UnityEngine::TextCore::Text::FontAsset*)>(&::GlobalNamespace::TextResourceManager_FontAssetRef::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb6f730c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextResourceManager_FontAssetRef>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TextResourceManager_FontAssetRef::_ctor(int32_t  nameHashCode, int32_t  familyNameHashCode, int32_t  styleNameHashCode, ::UnityEngine::TextCore::Text::FontAsset*  fontAsset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextResourceManager_FontAssetRef>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nameHashCode, familyNameHashCode, styleNameHashCode, fontAsset);
}
// Ctor Parameters [CppParam { name: "nameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "familyNameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "styleNameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "familyNameAndStyleHashCode", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fontAsset", ty: "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TextResourceManager_FontAssetRef::TextResourceManager_FontAssetRef(int32_t  nameHashCode, int32_t  familyNameHashCode, int32_t  styleNameHashCode, int64_t  familyNameAndStyleHashCode, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>  fontAsset) noexcept  {
this->nameHashCode = nameHashCode;
this->familyNameHashCode = familyNameHashCode;
this->styleNameHashCode = styleNameHashCode;
this->familyNameAndStyleHashCode = familyNameAndStyleHashCode;
this->fontAsset = fontAsset;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextResourceManager_FontAssetRef::TextResourceManager_FontAssetRef()   {
}
