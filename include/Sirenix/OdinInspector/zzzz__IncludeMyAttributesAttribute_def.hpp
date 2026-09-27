#pragma once
// IWYU pragma private; include "Sirenix/OdinInspector/IncludeMyAttributesAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(IncludeMyAttributesAttribute)
// Forward declare root types
namespace Sirenix::OdinInspector {
class IncludeMyAttributesAttribute;
}
// Write type traits
MARK_REF_T(::Sirenix::OdinInspector::IncludeMyAttributesAttribute*);
DEFINE_IL2CPP_CLASS(::Sirenix::OdinInspector::IncludeMyAttributesAttribute*, "Sirenix.OdinInspector", "IncludeMyAttributesAttribute");
// [AttributeUsage((System.AttributeTargets)4)]
// Dependencies System.Attribute
namespace Sirenix::OdinInspector {
// Is value type: false
// CS Name: Sirenix.OdinInspector.IncludeMyAttributesAttribute
class CORDL_TYPE IncludeMyAttributesAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Sirenix::OdinInspector::IncludeMyAttributesAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e86c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IncludeMyAttributesAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IncludeMyAttributesAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IncludeMyAttributesAttribute(IncludeMyAttributesAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IncludeMyAttributesAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IncludeMyAttributesAttribute(IncludeMyAttributesAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33050};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Sirenix::OdinInspector::IncludeMyAttributesAttribute) == 0x10, "Size mismatch!");

} // namespace end def Sirenix::OdinInspector
