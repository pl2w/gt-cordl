#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ModerationRulesWebhookTestRequestObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ModerationRulesWebhookTestRequestObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct ModerationRulesWebhookTestRequestObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::ModerationRulesWebhookTestRequestObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::ModerationRulesWebhookTestRequestObject, "Modio.API.SchemaDefinitions", "ModerationRulesWebhookTestRequestObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.ModerationRulesWebhookTestRequestObject
struct CORDL_TYPE ModerationRulesWebhookTestRequestObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fed4c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  url) ;

// Ctor Parameters []
// @brief default ctor
constexpr ModerationRulesWebhookTestRequestObject() ;

// Ctor Parameters [CppParam { name: "Url", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr ModerationRulesWebhookTestRequestObject(::StringW  Url) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18147};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Url, offset: 0x0, size: 0x8, def value: None
 ::StringW  Url;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::ModerationRulesWebhookTestRequestObject, Url) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::ModerationRulesWebhookTestRequestObject) == 0x8, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
