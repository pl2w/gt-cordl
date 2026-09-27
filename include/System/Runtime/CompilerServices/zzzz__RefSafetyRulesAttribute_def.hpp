#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/RefSafetyRulesAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RefSafetyRulesAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class RefSafetyRulesAttribute;
}
// Write type traits
MARK_REF_T(::System::Runtime::CompilerServices::RefSafetyRulesAttribute*);
DEFINE_IL2CPP_CLASS(::System::Runtime::CompilerServices::RefSafetyRulesAttribute*, "System.Runtime.CompilerServices", "RefSafetyRulesAttribute");
// [CompilerGenerated]
// [Embedded]
// [AttributeUsage((System.AttributeTargets)2, AllowMultiple = false, Inherited = false)]
// Dependencies System.Attribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.RefSafetyRulesAttribute
class CORDL_TYPE RefSafetyRulesAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field Version, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Version, put=__cordl_internal_set_Version)) int32_t  Version;

static inline ::System::Runtime::CompilerServices::RefSafetyRulesAttribute* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

constexpr int32_t const& __cordl_internal_get_Version() const;

constexpr int32_t& __cordl_internal_get_Version() ;

constexpr void __cordl_internal_set_Version(int32_t  value) ;

/// @brief Method .ctor, addr 0x9caed24, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RefSafetyRulesAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RefSafetyRulesAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RefSafetyRulesAttribute(RefSafetyRulesAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RefSafetyRulesAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RefSafetyRulesAttribute(RefSafetyRulesAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30867};

/// @brief Field Version, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::RefSafetyRulesAttribute, ___Version) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Runtime::CompilerServices::RefSafetyRulesAttribute) == 0x18, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
