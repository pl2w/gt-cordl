#pragma once
// IWYU pragma private; include "Fusion/UnitAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__DecoratingPropertyAttribute_def.hpp"
#include "Fusion/zzzz__Units_def.hpp"
CORDL_MODULE_EXPORT(UnitAttribute)
namespace Fusion {
struct Units;
}
// Forward declare root types
namespace Fusion {
class UnitAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::UnitAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::UnitAttribute*, "Fusion", "UnitAttribute");
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies Fusion.DecoratingPropertyAttribute, Fusion.Units
namespace Fusion {
// Is value type: false
// CS Name: Fusion.UnitAttribute
class CORDL_TYPE UnitAttribute : public ::Fusion::DecoratingPropertyAttribute {
public:
// Declarations
/// @brief Field <Unit>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Unit_k__BackingField, put=__cordl_internal_set__Unit_k__BackingField)) ::Fusion::Units  _Unit_k__BackingField;

static inline ::Fusion::UnitAttribute* New_ctor(::Fusion::Units  units) ;

constexpr ::Fusion::Units const& __cordl_internal_get__Unit_k__BackingField() const;

constexpr ::Fusion::Units& __cordl_internal_get__Unit_k__BackingField() ;

constexpr void __cordl_internal_set__Unit_k__BackingField(::Fusion::Units  value) ;

/// @brief Method .ctor, addr 0x5f3d83c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Units  units) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnitAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnitAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnitAttribute(UnitAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnitAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnitAttribute(UnitAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31286};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Unit>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::Fusion::Units  ____Unit_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::UnitAttribute, ____Unit_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::UnitAttribute) == 0x20, "Size mismatch!");

} // namespace end def Fusion
