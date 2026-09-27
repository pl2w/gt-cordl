#pragma once
// IWYU pragma private; include "Meta/WitAi/WitResultUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WitResultUtilities)
namespace Meta::WitAi::Data::Intents {
class WitIntentData;
}
namespace Meta::WitAi::Json {
class WitResponseArray;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi {
class WitResponseReference;
}
// Forward declare root types
namespace Meta::WitAi {
class WitResultUtilities;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::WitResultUtilities*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::WitResultUtilities*, "Meta.WitAi", "WitResultUtilities");
// [Extension]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.WitResultUtilities
class CORDL_TYPE WitResultUtilities : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method AsWitIntent, addr 0x9e7f0b8, size 0x5c, virtual false, abstract: false, final false
static inline ::Meta::WitAi::Data::Intents::WitIntentData* AsWitIntent(::Meta::WitAi::Json::WitResponseNode*  witResponse) ;

/// [Extension]
/// @brief Method EntityCount, addr 0x9e7effc, size 0xbc, virtual false, abstract: false, final false
static inline int32_t EntityCount(::Meta::WitAi::Json::WitResponseNode*  response) ;

/// @brief Method GetArray, addr 0x9e7ef04, size 0x30, virtual false, abstract: false, final false
static inline ::Meta::WitAi::Json::WitResponseArray* GetArray(::Meta::WitAi::Json::WitResponseNode*  witResponse, ::StringW  key) ;

/// [Extension]
/// @brief Method GetError, addr 0x9e7eaa4, size 0xe8, virtual false, abstract: false, final false
static inline ::StringW GetError(::Meta::WitAi::Json::WitResponseNode*  witResponse) ;

/// [Extension]
/// @brief Method GetFirstEntityValue, addr 0x9e7ef34, size 0xc8, virtual false, abstract: false, final false
static inline ::StringW GetFirstEntityValue(::Meta::WitAi::Json::WitResponseNode*  witResponse, ::StringW  name) ;

/// [Extension]
/// @brief Method GetFirstIntent, addr 0x9e7f114, size 0x9c, virtual false, abstract: false, final false
static inline ::Meta::WitAi::Json::WitResponseNode* GetFirstIntent(::Meta::WitAi::Json::WitResponseNode*  witResponse) ;

/// [Extension]
/// @brief Method GetFirstIntentData, addr 0x9e764d4, size 0x1c, virtual false, abstract: false, final false
static inline ::Meta::WitAi::Data::Intents::WitIntentData* GetFirstIntentData(::Meta::WitAi::Json::WitResponseNode*  witResponse) ;

/// [Extension]
/// @brief Method GetHasTranscription, addr 0x9e7ee20, size 0xe4, virtual false, abstract: false, final false
static inline bool GetHasTranscription(::Meta::WitAi::Json::WitResponseNode*  witResponse) ;

/// [Extension]
/// @brief Method GetIntents, addr 0x9e76bbc, size 0x13c, virtual false, abstract: false, final false
static inline ::ArrayW<::Meta::WitAi::Data::Intents::WitIntentData*> GetIntents(::Meta::WitAi::Json::WitResponseNode*  witResponse) ;

/// [Extension]
/// @brief Method GetIsTranscriptionFinal, addr 0x9e7ed64, size 0xbc, virtual false, abstract: false, final false
static inline bool GetIsTranscriptionFinal(::Meta::WitAi::Json::WitResponseNode*  witResponse) ;

/// [Extension]
/// @brief Method GetResponseType, addr 0x9e7ed00, size 0x64, virtual false, abstract: false, final false
static inline ::StringW GetResponseType(::Meta::WitAi::Json::WitResponseNode*  witResponse) ;

/// [Extension]
/// @brief Method GetStatusCode, addr 0x9e7e9c8, size 0xdc, virtual false, abstract: false, final false
static inline int32_t GetStatusCode(::Meta::WitAi::Json::WitResponseNode*  witResponse) ;

/// [Extension]
/// @brief Method GetTranscription, addr 0x9e7eb8c, size 0xe8, virtual false, abstract: false, final false
static inline ::StringW GetTranscription(::Meta::WitAi::Json::WitResponseNode*  witResponse) ;

/// @brief Method GetWitResponseReference, addr 0x9e7f1b0, size 0x210, virtual false, abstract: false, final false
static inline ::Meta::WitAi::WitResponseReference* GetWitResponseReference(::StringW  path) ;

/// [Extension]
/// @brief Method SafeGet, addr 0x9e7ec74, size 0x8c, virtual false, abstract: false, final false
static inline ::Meta::WitAi::Json::WitResponseNode* SafeGet(::Meta::WitAi::Json::WitResponseNode*  witResponse, ::StringW  key) ;

/// @brief Method SplitArrays, addr 0x9e7f3c8, size 0xa8, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> SplitArrays(::StringW  nodeName) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitResultUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitResultUtilities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitResultUtilities(WitResultUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitResultUtilities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitResultUtilities(WitResultUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25562};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::WitResultUtilities) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi
