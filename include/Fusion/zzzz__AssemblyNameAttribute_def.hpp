#pragma once
// IWYU pragma private; include "Fusion/AssemblyNameAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__DrawerPropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(AssemblyNameAttribute)
// Forward declare root types
namespace Fusion {
class AssemblyNameAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::AssemblyNameAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::AssemblyNameAttribute*, "Fusion", "AssemblyNameAttribute");
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies Fusion.DrawerPropertyAttribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.AssemblyNameAttribute
class CORDL_TYPE AssemblyNameAttribute : public ::Fusion::DrawerPropertyAttribute {
public:
// Declarations
 __declspec(property(put=set_RequiresUnsafeCode)) bool  RequiresUnsafeCode;

/// @brief Field <RequiresUnsafeCode>k__BackingField, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get__RequiresUnsafeCode_k__BackingField, put=__cordl_internal_set__RequiresUnsafeCode_k__BackingField)) bool  _RequiresUnsafeCode_k__BackingField;

static inline ::Fusion::AssemblyNameAttribute* New_ctor() ;

constexpr bool const& __cordl_internal_get__RequiresUnsafeCode_k__BackingField() const;

constexpr bool& __cordl_internal_get__RequiresUnsafeCode_k__BackingField() ;

constexpr void __cordl_internal_set__RequiresUnsafeCode_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x5f3d3b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method set_RequiresUnsafeCode, addr 0x5f3d3b0, size 0x8, virtual false, abstract: false, final false
inline void set_RequiresUnsafeCode(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssemblyNameAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssemblyNameAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AssemblyNameAttribute(AssemblyNameAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyNameAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssemblyNameAttribute(AssemblyNameAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31264};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <RequiresUnsafeCode>k__BackingField, offset: 0x15, size: 0x1, def value: None
 bool  ____RequiresUnsafeCode_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::AssemblyNameAttribute, ____RequiresUnsafeCode_k__BackingField) == 0x15, "Offset mismatch!");

static_assert(sizeof(::Fusion::AssemblyNameAttribute) == 0x18, "Size mismatch!");

} // namespace end def Fusion
