#pragma once
// IWYU pragma private; include "GlobalNamespace/IVariable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVariable)
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class IVariable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IVariable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IVariable*, "", "IVariable");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IVariable
class CORDL_TYPE IVariable {
public:
// Declarations
 __declspec(property(get=get_ValueType)) ::System::Type*  ValueType;

/// @brief Method get_ValueType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Type* get_ValueType() ;

// Ctor Parameters [CppParam { name: "", ty: "IVariable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVariable(IVariable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2322};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
