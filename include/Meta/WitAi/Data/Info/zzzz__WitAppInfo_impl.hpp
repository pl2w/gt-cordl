#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Info/WitAppInfo.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitAppTrainingStatus_impl.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitEntityInfo_impl.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitIntentInfo_impl.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitTraitInfo_impl.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitVersionTagInfo_impl.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitVoiceInfo_impl.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitAppInfo_def.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitEntityInfo_def.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitIntentInfo_def.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitTraitInfo_def.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitVersionTagInfo_def.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitVoiceInfo_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lang", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isPrivate", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "createdAt", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "trainingStatus", ty: "::Meta::WitAi::Data::Info::WitAppTrainingStatus", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastTrainDuration", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastTrainedAt", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nextTrainAt", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "intents", ty: "::ArrayW<::Meta::WitAi::Data::Info::WitIntentInfo>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "entities", ty: "::ArrayW<::Meta::WitAi::Data::Info::WitEntityInfo>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "traits", ty: "::ArrayW<::Meta::WitAi::Data::Info::WitTraitInfo*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "versionTags", ty: "::ArrayW<::Meta::WitAi::Data::Info::WitVersionTagInfo>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "voices", ty: "::ArrayW<::Meta::WitAi::Data::Info::WitVoiceInfo>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::WitAi::Data::Info::WitAppInfo::WitAppInfo(::StringW  name, ::StringW  id, ::StringW  lang, bool  isPrivate, ::StringW  createdAt, ::Meta::WitAi::Data::Info::WitAppTrainingStatus  trainingStatus, int32_t  lastTrainDuration, ::StringW  lastTrainedAt, ::StringW  nextTrainAt, ::ArrayW<::Meta::WitAi::Data::Info::WitIntentInfo>  intents, ::ArrayW<::Meta::WitAi::Data::Info::WitEntityInfo>  entities, ::ArrayW<::Meta::WitAi::Data::Info::WitTraitInfo*>  traits, ::ArrayW<::Meta::WitAi::Data::Info::WitVersionTagInfo>  versionTags, ::ArrayW<::Meta::WitAi::Data::Info::WitVoiceInfo>  voices) noexcept  {
this->name = name;
this->id = id;
this->lang = lang;
this->isPrivate = isPrivate;
this->createdAt = createdAt;
this->trainingStatus = trainingStatus;
this->lastTrainDuration = lastTrainDuration;
this->lastTrainedAt = lastTrainedAt;
this->nextTrainAt = nextTrainAt;
this->intents = intents;
this->entities = entities;
this->traits = traits;
this->versionTags = versionTags;
this->voices = voices;
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::Info::WitAppInfo::WitAppInfo()   {
}
