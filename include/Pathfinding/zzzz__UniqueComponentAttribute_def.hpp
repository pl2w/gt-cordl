#pragma once
// IWYU pragma private; include "Pathfinding/UniqueComponentAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UniqueComponentAttribute)
// Forward declare root types
namespace Pathfinding {
class UniqueComponentAttribute;
}
// Write type traits
MARK_REF_T(::Pathfinding::UniqueComponentAttribute*);
DEFINE_IL2CPP_CLASS(::Pathfinding::UniqueComponentAttribute*, "Pathfinding", "UniqueComponentAttribute");
// [AttributeUsage((System.AttributeTargets)4, AllowMultiple = true)]
// Dependencies System.Attribute
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.UniqueComponentAttribute
class CORDL_TYPE UniqueComponentAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field tag, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tag, put=__cordl_internal_set_tag)) ::StringW  tag;

static inline ::Pathfinding::UniqueComponentAttribute* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_tag() const;

constexpr ::StringW& __cordl_internal_get_tag() ;

constexpr void __cordl_internal_set_tag(::StringW  value) ;

/// @brief Method .ctor, addr 0x5eab580, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniqueComponentAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniqueComponentAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniqueComponentAttribute(UniqueComponentAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniqueComponentAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniqueComponentAttribute(UniqueComponentAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21386};

/// @brief Field tag, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___tag;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::UniqueComponentAttribute, ___tag) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::UniqueComponentAttribute) == 0x18, "Size mismatch!");

} // namespace end def Pathfinding
