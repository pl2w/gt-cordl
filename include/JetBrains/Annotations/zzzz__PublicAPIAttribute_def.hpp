#pragma once
// IWYU pragma private; include "JetBrains/Annotations/PublicAPIAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(PublicAPIAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class PublicAPIAttribute;
}
// Write type traits
MARK_REF_T(::JetBrains::Annotations::PublicAPIAttribute*);
DEFINE_IL2CPP_CLASS(::JetBrains::Annotations::PublicAPIAttribute*, "JetBrains.Annotations", "PublicAPIAttribute");
// [AttributeUsage((System.AttributeTargets)32767, Inherited = false)]
// [MeansImplicitUse((JetBrains.Annotations.ImplicitUseTargetFlags)3)]
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.PublicAPIAttribute
class CORDL_TYPE PublicAPIAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::JetBrains::Annotations::PublicAPIAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xb560640, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PublicAPIAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PublicAPIAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PublicAPIAttribute(PublicAPIAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PublicAPIAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PublicAPIAttribute(PublicAPIAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14768};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JetBrains::Annotations::PublicAPIAttribute) == 0x10, "Size mismatch!");

} // namespace end def JetBrains::Annotations
