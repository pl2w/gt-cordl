#pragma once
// IWYU pragma private; include "TMPro/TMP_ResourceManager_FontAssetRef.hpp"
#include "TMPro/zzzz__TMP_ResourceManager_FontAssetRef_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TMP_ResourceManager_FontAssetRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TMP_ResourceManager_FontAssetRef::*)(int32_t, int32_t, int32_t, ::TMPro::TMP_FontAsset*)>(&::GlobalNamespace::TMP_ResourceManager_FontAssetRef::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb39d72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMP_ResourceManager_FontAssetRef>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::TMPro::TMP_FontAsset*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TMP_ResourceManager_FontAssetRef::_ctor(int32_t  nameHashCode, int32_t  familyNameHashCode, int32_t  styleNameHashCode, ::TMPro::TMP_FontAsset*  fontAsset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMP_ResourceManager_FontAssetRef>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::TMPro::TMP_FontAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nameHashCode, familyNameHashCode, styleNameHashCode, fontAsset);
}
// Ctor Parameters [CppParam { name: "nameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "familyNameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "styleNameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "familyNameAndStyleHashCode", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fontAsset", ty: "::UnityW<::TMPro::TMP_FontAsset>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TMP_ResourceManager_FontAssetRef::TMP_ResourceManager_FontAssetRef(int32_t  nameHashCode, int32_t  familyNameHashCode, int32_t  styleNameHashCode, int64_t  familyNameAndStyleHashCode, ::UnityW<::TMPro::TMP_FontAsset>  fontAsset) noexcept  {
this->nameHashCode = nameHashCode;
this->familyNameHashCode = familyNameHashCode;
this->styleNameHashCode = styleNameHashCode;
this->familyNameAndStyleHashCode = familyNameAndStyleHashCode;
this->fontAsset = fontAsset;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TMP_ResourceManager_FontAssetRef::TMP_ResourceManager_FontAssetRef()   {
}
