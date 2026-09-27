#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/RequiresLocationAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(RequiresLocationAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class RequiresLocationAttribute;
}
// Write type traits
MARK_REF_T(::System::Runtime::CompilerServices::RequiresLocationAttribute*);
DEFINE_IL2CPP_CLASS(::System::Runtime::CompilerServices::RequiresLocationAttribute*, "System.Runtime.CompilerServices", "RequiresLocationAttribute");
// [CompilerGenerated]
// [Embedded]
// Dependencies System.Attribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.RequiresLocationAttribute
class CORDL_TYPE RequiresLocationAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::System::Runtime::CompilerServices::RequiresLocationAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5f6b8d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RequiresLocationAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RequiresLocationAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RequiresLocationAttribute(RequiresLocationAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RequiresLocationAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RequiresLocationAttribute(RequiresLocationAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18781};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::CompilerServices::RequiresLocationAttribute) == 0x10, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
