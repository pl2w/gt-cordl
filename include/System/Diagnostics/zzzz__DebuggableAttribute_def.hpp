#pragma once
// IWYU pragma private; include "System/Diagnostics/DebuggableAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/zzzz__DebuggableAttribute_DebuggingModes_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DebuggableAttribute)
namespace GlobalNamespace {
struct DebuggableAttribute_DebuggingModes;
}
// Forward declare root types
namespace System::Diagnostics {
class DebuggableAttribute;
}
// Write type traits
MARK_REF_T(::System::Diagnostics::DebuggableAttribute*);
DEFINE_IL2CPP_CLASS(::System::Diagnostics::DebuggableAttribute*, "System.Diagnostics", "DebuggableAttribute");
// [ComVisible(true)]
// [AttributeUsage((System.AttributeTargets)3, AllowMultiple = false)]
// Dependencies System.Attribute, System.Diagnostics.DebuggableAttribute::DebuggingModes
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.DebuggableAttribute
class CORDL_TYPE DebuggableAttribute : public ::System::Attribute {
public:
// Declarations
using DebuggingModes = ::GlobalNamespace::DebuggableAttribute_DebuggingModes;

/// @brief Field m_debuggingModes, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_debuggingModes, put=__cordl_internal_set_m_debuggingModes)) ::GlobalNamespace::DebuggableAttribute_DebuggingModes  m_debuggingModes;

static inline ::System::Diagnostics::DebuggableAttribute* New_ctor(::GlobalNamespace::DebuggableAttribute_DebuggingModes  modes) ;

constexpr ::GlobalNamespace::DebuggableAttribute_DebuggingModes const& __cordl_internal_get_m_debuggingModes() const;

constexpr ::GlobalNamespace::DebuggableAttribute_DebuggingModes& __cordl_internal_get_m_debuggingModes() ;

constexpr void __cordl_internal_set_m_debuggingModes(::GlobalNamespace::DebuggableAttribute_DebuggingModes  value) ;

/// @brief Method .ctor, addr 0xa25e298, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::DebuggableAttribute_DebuggingModes  modes) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebuggableAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebuggableAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebuggableAttribute(DebuggableAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebuggableAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebuggableAttribute(DebuggableAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6785};

/// @brief Field m_debuggingModes, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::DebuggableAttribute_DebuggingModes  ___m_debuggingModes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::DebuggableAttribute, ___m_debuggingModes) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Diagnostics::DebuggableAttribute) == 0x18, "Size mismatch!");

} // namespace end def System::Diagnostics
