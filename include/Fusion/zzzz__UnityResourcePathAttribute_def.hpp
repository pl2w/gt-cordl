#pragma once
// IWYU pragma private; include "Fusion/UnityResourcePathAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__DrawerPropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(UnityResourcePathAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace Fusion {
class UnityResourcePathAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::UnityResourcePathAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::UnityResourcePathAttribute*, "Fusion", "UnityResourcePathAttribute");
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies Fusion.DrawerPropertyAttribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.UnityResourcePathAttribute
class CORDL_TYPE UnityResourcePathAttribute : public ::Fusion::DrawerPropertyAttribute {
public:
// Declarations
/// @brief Field <ResourceType>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ResourceType_k__BackingField, put=__cordl_internal_set__ResourceType_k__BackingField)) ::System::Type*  _ResourceType_k__BackingField;

static inline ::Fusion::UnityResourcePathAttribute* New_ctor(::System::Type*  resourceType) ;

constexpr ::System::Type* const& __cordl_internal_get__ResourceType_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__ResourceType_k__BackingField() ;

constexpr void __cordl_internal_set__ResourceType_k__BackingField(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x5f3d874, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  resourceType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityResourcePathAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityResourcePathAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityResourcePathAttribute(UnityResourcePathAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityResourcePathAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityResourcePathAttribute(UnityResourcePathAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31288};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ResourceType>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ____ResourceType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::UnityResourcePathAttribute, ____ResourceType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::UnityResourcePathAttribute) == 0x20, "Size mismatch!");

} // namespace end def Fusion
