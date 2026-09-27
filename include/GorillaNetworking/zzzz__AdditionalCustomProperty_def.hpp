#pragma once
// IWYU pragma private; include "GorillaNetworking/AdditionalCustomProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AdditionalCustomProperty)
// Forward declare root types
namespace GorillaNetworking {
struct AdditionalCustomProperty;
}
// Write type traits
MARK_VAL_T(::GorillaNetworking::AdditionalCustomProperty);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::AdditionalCustomProperty, "GorillaNetworking", "AdditionalCustomProperty");
// Dependencies 
namespace GorillaNetworking {
// Is value type: true
// CS Name: GorillaNetworking.AdditionalCustomProperty
struct CORDL_TYPE AdditionalCustomProperty {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AdditionalCustomProperty() ;

// Ctor Parameters [CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr AdditionalCustomProperty(::StringW  key, ::StringW  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4343};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key, offset: 0x0, size: 0x8, def value: None
 ::StringW  key;

/// @brief Field value, offset: 0x8, size: 0x8, def value: None
 ::StringW  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::AdditionalCustomProperty, key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::AdditionalCustomProperty, value) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::AdditionalCustomProperty) == 0x10, "Size mismatch!");

} // namespace end def GorillaNetworking
