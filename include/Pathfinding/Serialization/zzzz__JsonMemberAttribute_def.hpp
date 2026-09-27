#pragma once
// IWYU pragma private; include "Pathfinding/Serialization/JsonMemberAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(JsonMemberAttribute)
// Forward declare root types
namespace Pathfinding::Serialization {
class JsonMemberAttribute;
}
// Write type traits
MARK_REF_T(::Pathfinding::Serialization::JsonMemberAttribute*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Serialization::JsonMemberAttribute*, "Pathfinding.Serialization", "JsonMemberAttribute");
// Dependencies System.Attribute
namespace Pathfinding::Serialization {
// Is value type: false
// CS Name: Pathfinding.Serialization.JsonMemberAttribute
class CORDL_TYPE JsonMemberAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Pathfinding::Serialization::JsonMemberAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5ed233c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonMemberAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonMemberAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonMemberAttribute(JsonMemberAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonMemberAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonMemberAttribute(JsonMemberAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21453};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Serialization::JsonMemberAttribute) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding::Serialization
