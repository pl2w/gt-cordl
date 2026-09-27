#pragma once
// IWYU pragma private; include "Sirenix/OdinInspector/ISelfValidator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISelfValidator)
// Forward declare root types
namespace Sirenix::OdinInspector {
class ISelfValidator;
}
// Write type traits
MARK_REF_T(::Sirenix::OdinInspector::ISelfValidator*);
DEFINE_IL2CPP_CLASS(::Sirenix::OdinInspector::ISelfValidator*, "Sirenix.OdinInspector", "ISelfValidator");
// Dependencies 
namespace Sirenix::OdinInspector {
// Is value type: false
// CS Name: Sirenix.OdinInspector.ISelfValidator
class CORDL_TYPE ISelfValidator {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "ISelfValidator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISelfValidator(ISelfValidator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33051};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Sirenix::OdinInspector
