#pragma once
// IWYU pragma private; include "Fusion/UnityPropertyAttributeProxyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(UnityPropertyAttributeProxyAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace Fusion {
class UnityPropertyAttributeProxyAttribute;
}
// Write type traits
MARK_REF_T(::Fusion::UnityPropertyAttributeProxyAttribute*);
DEFINE_IL2CPP_CLASS(::Fusion::UnityPropertyAttributeProxyAttribute*, "Fusion", "UnityPropertyAttributeProxyAttribute");
// [AttributeUsage((System.AttributeTargets)4)]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.UnityPropertyAttributeProxyAttribute
class CORDL_TYPE UnityPropertyAttributeProxyAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Fusion::UnityPropertyAttributeProxyAttribute* New_ctor(::System::Type*  type) ;

/// @brief Method .ctor, addr 0x5f703f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  type) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityPropertyAttributeProxyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityPropertyAttributeProxyAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityPropertyAttributeProxyAttribute(UnityPropertyAttributeProxyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityPropertyAttributeProxyAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityPropertyAttributeProxyAttribute(UnityPropertyAttributeProxyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18819};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::UnityPropertyAttributeProxyAttribute) == 0x10, "Size mismatch!");

} // namespace end def Fusion
