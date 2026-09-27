#pragma once
// IWYU pragma private; include "Fusion/RenderWeavedAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(RenderWeavedAttribute)
// Forward declare root types
namespace Fusion {
class RenderWeavedAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::RenderWeavedAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::RenderWeavedAttribute*, "Fusion", "RenderWeavedAttribute");
// [AttributeUsage((System.AttributeTargets)128, AllowMultiple = false, Inherited = false)]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.RenderWeavedAttribute
class CORDL_TYPE RenderWeavedAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Fusion::RenderWeavedAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5f703e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RenderWeavedAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RenderWeavedAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderWeavedAttribute(RenderWeavedAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderWeavedAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderWeavedAttribute(RenderWeavedAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18817};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::RenderWeavedAttribute) == 0x10, "Size mismatch!");

} // namespace end def Fusion
