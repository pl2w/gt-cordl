#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/WebMessageObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebMessageObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct WebMessageObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::WebMessageObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::WebMessageObject, "Modio.API.SchemaDefinitions", "WebMessageObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.WebMessageObject
struct CORDL_TYPE WebMessageObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fee8d8, size 0x14, virtual false, abstract: false, final false
inline void _ctor(int64_t  code, bool  success, ::StringW  message) ;

// Ctor Parameters []
// @brief default ctor
constexpr WebMessageObject() ;

// Ctor Parameters [CppParam { name: "Code", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Success", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr WebMessageObject(int64_t  Code, bool  Success, ::StringW  Message) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18191};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Code, offset: 0x0, size: 0x8, def value: None
 int64_t  Code;

/// @brief Field Success, offset: 0x8, size: 0x1, def value: None
 bool  Success;

/// @brief Field Message, offset: 0x10, size: 0x8, def value: None
 ::StringW  Message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::WebMessageObject, Code) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::WebMessageObject, Success) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::WebMessageObject, Message) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::WebMessageObject) == 0x18, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
