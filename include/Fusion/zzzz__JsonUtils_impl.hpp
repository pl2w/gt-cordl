#pragma once
// IWYU pragma private; include "Fusion/JsonUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__JsonUtils_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
//  Writing Method size for method: ::Fusion::JsonUtils.RemoveExtraReferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Fusion::JsonUtils::RemoveExtraReferences)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5f3e6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtils*>(),
                        {"RemoveExtraReferences", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::JsonUtils::setStaticF_ReferencesRegex(::System::Text::RegularExpressions::Regex*  value)  {
::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "ReferencesRegex", ::Fusion::JsonUtils*>(std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* Fusion::JsonUtils::getStaticF_ReferencesRegex()  {
return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "ReferencesRegex", ::Fusion::JsonUtils*>();
}
inline ::StringW Fusion::JsonUtils::RemoveExtraReferences(::StringW  baseJson)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtils*>(),
                        {"RemoveExtraReferences", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, baseJson);
}
// Ctor Parameters []
constexpr ::Fusion::JsonUtils::JsonUtils()   {
}
