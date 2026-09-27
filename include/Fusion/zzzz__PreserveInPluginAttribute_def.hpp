#pragma once
// IWYU pragma private; include "Fusion/PreserveInPluginAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(PreserveInPluginAttribute)
// Forward declare root types
namespace Fusion {
class PreserveInPluginAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::PreserveInPluginAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::PreserveInPluginAttribute*, "Fusion", "PreserveInPluginAttribute");
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.PreserveInPluginAttribute
class CORDL_TYPE PreserveInPluginAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_KeepNonStateMembers, put=set_KeepNonStateMembers)) bool  KeepNonStateMembers;

/// @brief Field <KeepNonStateMembers>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__KeepNonStateMembers_k__BackingField, put=__cordl_internal_set__KeepNonStateMembers_k__BackingField)) bool  _KeepNonStateMembers_k__BackingField;

static inline ::Fusion::PreserveInPluginAttribute* New_ctor() ;

constexpr bool const& __cordl_internal_get__KeepNonStateMembers_k__BackingField() const;

constexpr bool& __cordl_internal_get__KeepNonStateMembers_k__BackingField() ;

constexpr void __cordl_internal_set__KeepNonStateMembers_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x5f70360, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_KeepNonStateMembers, addr 0x5f70370, size 0x8, virtual false, abstract: false, final false
inline bool get_KeepNonStateMembers() ;

/// [CompilerGenerated]
/// @brief Method set_KeepNonStateMembers, addr 0x5f70378, size 0x8, virtual false, abstract: false, final false
inline void set_KeepNonStateMembers(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PreserveInPluginAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PreserveInPluginAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PreserveInPluginAttribute(PreserveInPluginAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PreserveInPluginAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PreserveInPluginAttribute(PreserveInPluginAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18815};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <KeepNonStateMembers>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____KeepNonStateMembers_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::PreserveInPluginAttribute, ____KeepNonStateMembers_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::PreserveInPluginAttribute) == 0x18, "Size mismatch!");

} // namespace end def Fusion
