#pragma once
// IWYU pragma private; include "Meta/Conduit/ConduitParameterValue.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ConduitParameterValue)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::Conduit {
struct ConduitParameterValue;
}
// Write type traits
MARK_VAL_T(::Meta::Conduit::ConduitParameterValue);
DEFINE_IL2CPP_CLASS(::Meta::Conduit::ConduitParameterValue, "Meta.Conduit", "ConduitParameterValue");
// Dependencies 
namespace Meta::Conduit {
// Is value type: true
// CS Name: Meta.Conduit.ConduitParameterValue
struct CORDL_TYPE ConduitParameterValue {
public:
// Declarations
/// [Preserve]
/// @brief Method .ctor, addr 0x9e1f134, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9e1f178, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  value, ::System::Type*  dataType) ;

// Ctor Parameters []
// @brief default ctor
constexpr ConduitParameterValue() ;

// Ctor Parameters [CppParam { name: "Value", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "DataType", ty: "::System::Type*", modifiers: "", def_value: None, comment: None }]
constexpr ConduitParameterValue(::System::Object*  Value, ::System::Type*  DataType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25411};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Value, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  Value;

/// @brief Field DataType, offset: 0x8, size: 0x8, def value: None
 ::System::Type*  DataType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Conduit::ConduitParameterValue, Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ConduitParameterValue, DataType) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Meta::Conduit::ConduitParameterValue) == 0x10, "Size mismatch!");

} // namespace end def Meta::Conduit
