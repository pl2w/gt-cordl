#pragma once
// IWYU pragma private; include "Fusion/WeaverGeneratedAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(WeaverGeneratedAttribute)
// Forward declare root types
namespace Fusion {
class WeaverGeneratedAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::WeaverGeneratedAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::WeaverGeneratedAttribute*, "Fusion", "WeaverGeneratedAttribute");
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.WeaverGeneratedAttribute
class CORDL_TYPE WeaverGeneratedAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Fusion::WeaverGeneratedAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5f704f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WeaverGeneratedAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WeaverGeneratedAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WeaverGeneratedAttribute(WeaverGeneratedAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WeaverGeneratedAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WeaverGeneratedAttribute(WeaverGeneratedAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18833};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::WeaverGeneratedAttribute) == 0x10, "Size mismatch!");

} // namespace end def Fusion
