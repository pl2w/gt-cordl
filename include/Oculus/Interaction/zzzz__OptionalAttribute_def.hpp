#pragma once
// IWYU pragma private; include "Oculus/Interaction/OptionalAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__OptionalAttribute_Flag_def.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(OptionalAttribute)
namespace GlobalNamespace {
struct OptionalAttribute_Flag;
}
// Forward declare root types
namespace Oculus::Interaction {
class OptionalAttribute;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::OptionalAttribute*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::OptionalAttribute*, "Oculus.Interaction", "OptionalAttribute");
// Dependencies Oculus.Interaction.OptionalAttribute::Flag, UnityEngine.PropertyAttribute
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.OptionalAttribute
class CORDL_TYPE OptionalAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
using Flag = ::GlobalNamespace::OptionalAttribute_Flag;

 __declspec(property(get=get_Flags, put=set_Flags)) ::GlobalNamespace::OptionalAttribute_Flag  Flags;

/// @brief Field <Flags>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Flags_k__BackingField, put=__cordl_internal_set__Flags_k__BackingField)) ::GlobalNamespace::OptionalAttribute_Flag  _Flags_k__BackingField;

static inline ::Oculus::Interaction::OptionalAttribute* New_ctor() ;

static inline ::Oculus::Interaction::OptionalAttribute* New_ctor(::GlobalNamespace::OptionalAttribute_Flag  flags) ;

constexpr ::GlobalNamespace::OptionalAttribute_Flag const& __cordl_internal_get__Flags_k__BackingField() const;

constexpr ::GlobalNamespace::OptionalAttribute_Flag& __cordl_internal_get__Flags_k__BackingField() ;

constexpr void __cordl_internal_set__Flags_k__BackingField(::GlobalNamespace::OptionalAttribute_Flag  value) ;

/// @brief Method .ctor, addr 0xa3ffd9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa3ffda4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OptionalAttribute_Flag  flags) ;

/// [CompilerGenerated]
/// @brief Method get_Flags, addr 0xa3ffd8c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OptionalAttribute_Flag get_Flags() ;

/// [CompilerGenerated]
/// @brief Method set_Flags, addr 0xa3ffd94, size 0x8, virtual false, abstract: false, final false
inline void set_Flags(::GlobalNamespace::OptionalAttribute_Flag  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OptionalAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OptionalAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OptionalAttribute(OptionalAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OptionalAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OptionalAttribute(OptionalAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15690};

/// [CompilerGenerated]
/// @brief Field <Flags>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::OptionalAttribute_Flag  ____Flags_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::OptionalAttribute, ____Flags_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::OptionalAttribute) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction
