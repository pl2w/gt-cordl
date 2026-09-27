#pragma once
// IWYU pragma private; include "VYaml/Internal/StringEncoding.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Internal/zzzz__StringEncoding_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
inline void VYaml::Internal::StringEncoding::setStaticF_Utf8(::System::Text::Encoding*  value)  {
::cordl_internals::setStaticField<::System::Text::Encoding*, "Utf8", ::VYaml::Internal::StringEncoding*>(std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* VYaml::Internal::StringEncoding::getStaticF_Utf8()  {
return ::cordl_internals::getStaticField<::System::Text::Encoding*, "Utf8", ::VYaml::Internal::StringEncoding*>();
}
// Ctor Parameters []
constexpr ::VYaml::Internal::StringEncoding::StringEncoding()   {
}
