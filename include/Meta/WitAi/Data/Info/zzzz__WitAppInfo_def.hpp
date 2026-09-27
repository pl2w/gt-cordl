#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Info/WitAppInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Data/Info/zzzz__WitAppTrainingStatus_def.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitEntityInfo_def.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitIntentInfo_def.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitTraitInfo_def.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitVersionTagInfo_def.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitVoiceInfo_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WitAppInfo)
namespace Meta::WitAi::Data::Info {
struct WitEntityInfo;
}
namespace Meta::WitAi::Data::Info {
struct WitIntentInfo;
}
namespace Meta::WitAi::Data::Info {
class WitTraitInfo;
}
namespace Meta::WitAi::Data::Info {
struct WitVersionTagInfo;
}
namespace Meta::WitAi::Data::Info {
struct WitVoiceInfo;
}
// Forward declare root types
namespace Meta::WitAi::Data::Info {
struct WitAppInfo;
}
// Write type traits
MARK_VAL_T(::Meta::WitAi::Data::Info::WitAppInfo);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::Info::WitAppInfo, "Meta.WitAi.Data.Info", "WitAppInfo");
// Dependencies Meta.WitAi.Data.Info.WitAppTrainingStatus, Meta.WitAi.Data.Info.WitEntityInfo, Meta.WitAi.Data.Info.WitIntentInfo, Meta.WitAi.Data.Info.WitTraitInfo, Meta.WitAi.Data.Info.WitVersionTagInfo, Meta.WitAi.Data.Info.WitVoiceInfo
namespace Meta::WitAi::Data::Info {
// Is value type: true
// CS Name: Meta.WitAi.Data.Info.WitAppInfo
struct CORDL_TYPE WitAppInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr WitAppInfo() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "lang", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "isPrivate", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "createdAt", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "trainingStatus", ty: "::Meta::WitAi::Data::Info::WitAppTrainingStatus", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastTrainDuration", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastTrainedAt", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "nextTrainAt", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "intents", ty: "::ArrayW<::Meta::WitAi::Data::Info::WitIntentInfo>", modifiers: "", def_value: None, comment: None }, CppParam { name: "entities", ty: "::ArrayW<::Meta::WitAi::Data::Info::WitEntityInfo>", modifiers: "", def_value: None, comment: None }, CppParam { name: "traits", ty: "::ArrayW<::Meta::WitAi::Data::Info::WitTraitInfo*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "versionTags", ty: "::ArrayW<::Meta::WitAi::Data::Info::WitVersionTagInfo>", modifiers: "", def_value: None, comment: None }, CppParam { name: "voices", ty: "::ArrayW<::Meta::WitAi::Data::Info::WitVoiceInfo>", modifiers: "", def_value: None, comment: None }]
constexpr WitAppInfo(::StringW  name, ::StringW  id, ::StringW  lang, bool  isPrivate, ::StringW  createdAt, ::Meta::WitAi::Data::Info::WitAppTrainingStatus  trainingStatus, int32_t  lastTrainDuration, ::StringW  lastTrainedAt, ::StringW  nextTrainAt, ::ArrayW<::Meta::WitAi::Data::Info::WitIntentInfo>  intents, ::ArrayW<::Meta::WitAi::Data::Info::WitEntityInfo>  entities, ::ArrayW<::Meta::WitAi::Data::Info::WitTraitInfo*>  traits, ::ArrayW<::Meta::WitAi::Data::Info::WitVersionTagInfo>  versionTags, ::ArrayW<::Meta::WitAi::Data::Info::WitVoiceInfo>  voices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31039};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// [Header("App Info")]
/// [SerializeField]
/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// [SerializeField]
/// @brief Field id, offset: 0x8, size: 0x8, def value: None
 ::StringW  id;

/// [SerializeField]
/// @brief Field lang, offset: 0x10, size: 0x8, def value: None
 ::StringW  lang;

/// [SerializeField]
/// [JsonProperty("private")]
/// @brief Field isPrivate, offset: 0x18, size: 0x1, def value: None
 bool  isPrivate;

/// [SerializeField]
/// [JsonProperty("created_at")]
/// @brief Field createdAt, offset: 0x20, size: 0x8, def value: None
 ::StringW  createdAt;

/// [Header("Training Info")]
/// [JsonProperty("training_status")]
/// @brief Field trainingStatus, offset: 0x28, size: 0x4, def value: None
 ::Meta::WitAi::Data::Info::WitAppTrainingStatus  trainingStatus;

/// [JsonProperty("last_training_duration_secs")]
/// @brief Field lastTrainDuration, offset: 0x2c, size: 0x4, def value: None
 int32_t  lastTrainDuration;

/// [JsonProperty("last_trained_at")]
/// @brief Field lastTrainedAt, offset: 0x30, size: 0x8, def value: None
 ::StringW  lastTrainedAt;

/// [JsonProperty("will_train_at")]
/// @brief Field nextTrainAt, offset: 0x38, size: 0x8, def value: None
 ::StringW  nextTrainAt;

/// [Header("NLU Info")]
/// @brief Field intents, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::Meta::WitAi::Data::Info::WitIntentInfo>  intents;

/// @brief Field entities, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::Meta::WitAi::Data::Info::WitEntityInfo>  entities;

/// @brief Field traits, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::Meta::WitAi::Data::Info::WitTraitInfo*>  traits;

/// @brief Field versionTags, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::Meta::WitAi::Data::Info::WitVersionTagInfo>  versionTags;

/// [Header("TTS Info")]
/// @brief Field voices, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::Meta::WitAi::Data::Info::WitVoiceInfo>  voices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::Info::WitAppInfo, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitAppInfo, id) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitAppInfo, lang) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitAppInfo, isPrivate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitAppInfo, createdAt) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitAppInfo, trainingStatus) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitAppInfo, lastTrainDuration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitAppInfo, lastTrainedAt) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitAppInfo, nextTrainAt) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitAppInfo, intents) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitAppInfo, entities) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitAppInfo, traits) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitAppInfo, versionTags) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitAppInfo, voices) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::Info::WitAppInfo) == 0x68, "Size mismatch!");

} // namespace end def Meta::WitAi::Data::Info
