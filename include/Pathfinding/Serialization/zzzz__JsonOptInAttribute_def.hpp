#pragma once
// IWYU pragma private; include "Pathfinding/Serialization/JsonOptInAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(JsonOptInAttribute)
// Forward declare root types
namespace Pathfinding::Serialization {
class JsonOptInAttribute;
}
// Write type traits
MARK_REF_T(::Pathfinding::Serialization::JsonOptInAttribute*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Serialization::JsonOptInAttribute*, "Pathfinding.Serialization", "JsonOptInAttribute");
// Dependencies System.Attribute
namespace Pathfinding::Serialization {
// Is value type: false
// CS Name: Pathfinding.Serialization.JsonOptInAttribute
class CORDL_TYPE JsonOptInAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Pathfinding::Serialization::JsonOptInAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5ed2344, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonOptInAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonOptInAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonOptInAttribute(JsonOptInAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonOptInAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonOptInAttribute(JsonOptInAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21454};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Serialization::JsonOptInAttribute) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding::Serialization
