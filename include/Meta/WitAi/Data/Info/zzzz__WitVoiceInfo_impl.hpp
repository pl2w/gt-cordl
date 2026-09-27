#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Info/WitVoiceInfo.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitVoiceInfo_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "locale", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gender", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "styles", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "supported_features", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::WitAi::Data::Info::WitVoiceInfo::WitVoiceInfo(::StringW  name, ::StringW  locale, ::StringW  gender, ::ArrayW<::StringW>  styles, ::ArrayW<::StringW>  supported_features) noexcept  {
this->name = name;
this->locale = locale;
this->gender = gender;
this->styles = styles;
this->supported_features = supported_features;
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::Info::WitVoiceInfo::WitVoiceInfo()   {
}
