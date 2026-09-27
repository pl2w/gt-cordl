#pragma once
// IWYU pragma private; include "GlobalNamespace/DebugReadOnlyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DebugReadOnlyAttribute)
// Forward declare root types
namespace GlobalNamespace {
class DebugReadOnlyAttribute;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DebugReadOnlyAttribute*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DebugReadOnlyAttribute*, "", "DebugReadOnlyAttribute");
// [IncludeMyAttributes]
// [Conditional("UNITY_EDITOR")]
// Dependencies System.Attribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: DebugReadOnlyAttribute
class CORDL_TYPE DebugReadOnlyAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::GlobalNamespace::DebugReadOnlyAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0x5a1aa7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugReadOnlyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugReadOnlyAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugReadOnlyAttribute(DebugReadOnlyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugReadOnlyAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugReadOnlyAttribute(DebugReadOnlyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2797};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DebugReadOnlyAttribute) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
