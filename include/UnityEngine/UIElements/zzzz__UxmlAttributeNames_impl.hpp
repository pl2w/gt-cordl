#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlAttributeNames.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAttributeNames_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeNames._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeNames::*)(::StringW, ::StringW, ::System::Type*, ::ArrayW<::StringW>)>(&::UnityEngine::UIElements::UxmlAttributeNames::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb7b7268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeNames>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UxmlAttributeNames::_ctor(::StringW  fieldName, ::StringW  uxmlName, ::System::Type*  typeReference, /* [ParamArray] */ ::ArrayW<::StringW>  obsoleteNames)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeNames>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, fieldName, uxmlName, typeReference, obsoleteNames);
}
// Ctor Parameters [CppParam { name: "fieldName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uxmlName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "typeReference", ty: "::System::Type*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "obsoleteNames", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::UxmlAttributeNames::UxmlAttributeNames(::StringW  fieldName, ::StringW  uxmlName, ::System::Type*  typeReference, ::ArrayW<::StringW>  obsoleteNames) noexcept  {
this->fieldName = fieldName;
this->uxmlName = uxmlName;
this->typeReference = typeReference;
this->obsoleteNames = obsoleteNames;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlAttributeNames::UxmlAttributeNames()   {
}
