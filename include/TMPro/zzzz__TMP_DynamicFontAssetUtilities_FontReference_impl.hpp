#pragma once
// IWYU pragma private; include "TMPro/TMP_DynamicFontAssetUtilities_FontReference.hpp"
#include "TMPro/zzzz__TMP_DynamicFontAssetUtilities_FontReference_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference::*)(::StringW, ::StringW, int32_t)>(&::GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference::_ctor)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0xb359ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference::_ctor(::StringW  fontFilePath, ::StringW  faceNameAndStyle, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, fontFilePath, faceNameAndStyle, index);
}
// Ctor Parameters [CppParam { name: "familyName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "styleName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "faceIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hashCode", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference::TMP_DynamicFontAssetUtilities_FontReference(::StringW  familyName, ::StringW  styleName, int32_t  faceIndex, ::StringW  filePath, uint64_t  hashCode) noexcept  {
this->familyName = familyName;
this->styleName = styleName;
this->faceIndex = faceIndex;
this->filePath = filePath;
this->hashCode = hashCode;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TMP_DynamicFontAssetUtilities_FontReference::TMP_DynamicFontAssetUtilities_FontReference()   {
}
