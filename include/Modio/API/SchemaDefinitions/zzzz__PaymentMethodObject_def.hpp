#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/PaymentMethodObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PaymentMethodObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct PaymentMethodObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::PaymentMethodObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::PaymentMethodObject, "Modio.API.SchemaDefinitions", "PaymentMethodObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.PaymentMethodObject
struct CORDL_TYPE PaymentMethodObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fee018, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  id, int64_t  amount, ::StringW  display_amount) ;

// Ctor Parameters []
// @brief default ctor
constexpr PaymentMethodObject() ;

// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Id", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Amount", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DisplayAmount", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr PaymentMethodObject(::StringW  Name, ::StringW  Id, int64_t  Amount, ::StringW  DisplayAmount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18162};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Name, offset: 0x0, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field Id, offset: 0x8, size: 0x8, def value: None
 ::StringW  Id;

/// @brief Field Amount, offset: 0x10, size: 0x8, def value: None
 int64_t  Amount;

/// @brief Field DisplayAmount, offset: 0x18, size: 0x8, def value: None
 ::StringW  DisplayAmount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::PaymentMethodObject, Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::PaymentMethodObject, Id) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::PaymentMethodObject, Amount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::PaymentMethodObject, DisplayAmount) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::PaymentMethodObject) == 0x20, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
