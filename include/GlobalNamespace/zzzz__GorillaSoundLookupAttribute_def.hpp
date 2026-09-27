#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSoundLookupAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(GorillaSoundLookupAttribute)
// Forward declare root types
namespace GlobalNamespace {
class GorillaSoundLookupAttribute;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaSoundLookupAttribute*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaSoundLookupAttribute*, "", "GorillaSoundLookupAttribute");
// [IncludeMyAttributes]
// Dependencies System.Attribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaSoundLookupAttribute
class CORDL_TYPE GorillaSoundLookupAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::GlobalNamespace::GorillaSoundLookupAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5675620, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaSoundLookupAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaSoundLookupAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaSoundLookupAttribute(GorillaSoundLookupAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaSoundLookupAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaSoundLookupAttribute(GorillaSoundLookupAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{836};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaSoundLookupAttribute) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
