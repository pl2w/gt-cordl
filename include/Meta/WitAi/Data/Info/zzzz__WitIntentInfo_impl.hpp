#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Info/WitIntentInfo.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitIntentEntityInfo_impl.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitIntentInfo_def.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitIntentEntityInfo_def.hpp"
// Ctor Parameters [CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "entities", ty: "::ArrayW<::Meta::WitAi::Data::Info::WitIntentEntityInfo>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::WitAi::Data::Info::WitIntentInfo::WitIntentInfo(::StringW  id, ::StringW  name, ::ArrayW<::Meta::WitAi::Data::Info::WitIntentEntityInfo>  entities) noexcept  {
this->id = id;
this->name = name;
this->entities = entities;
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::Info::WitIntentInfo::WitIntentInfo()   {
}
