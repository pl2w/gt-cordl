#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TemplateAsset_AttributeOverride.hpp"
#include "UnityEngine/UIElements/zzzz__TemplateAsset_AttributeOverride_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TemplateAsset_AttributeOverride.NamesPathMatchesElementNamesPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TemplateAsset_AttributeOverride::*)(::System::Collections::Generic::IList_1<::StringW>*)>(&::GlobalNamespace::TemplateAsset_AttributeOverride::NamesPathMatchesElementNamesPath)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0xb7b4244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TemplateAsset_AttributeOverride>(),
                        {"NamesPathMatchesElementNamesPath", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::TemplateAsset_AttributeOverride::NamesPathMatchesElementNamesPath(::System::Collections::Generic::IList_1<::StringW>*  elementNamesPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TemplateAsset_AttributeOverride>(),
                        {"NamesPathMatchesElementNamesPath", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, elementNamesPath);
}
// Ctor Parameters [CppParam { name: "m_ElementName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_NamesPath", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AttributeName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Value", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TemplateAsset_AttributeOverride::TemplateAsset_AttributeOverride(::StringW  m_ElementName, ::ArrayW<::StringW>  m_NamesPath, ::StringW  m_AttributeName, ::StringW  m_Value) noexcept  {
this->m_ElementName = m_ElementName;
this->m_NamesPath = m_NamesPath;
this->m_AttributeName = m_AttributeName;
this->m_Value = m_Value;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TemplateAsset_AttributeOverride::TemplateAsset_AttributeOverride()   {
}
