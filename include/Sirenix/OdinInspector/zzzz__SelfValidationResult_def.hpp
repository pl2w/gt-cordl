#pragma once
// IWYU pragma private; include "Sirenix/OdinInspector/SelfValidationResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SelfValidationResult)
// Forward declare root types
namespace Sirenix::OdinInspector {
class SelfValidationResult;
}
// Write type traits
MARK_REF_T(::Sirenix::OdinInspector::SelfValidationResult*);
DEFINE_IL2CPP_CLASS(::Sirenix::OdinInspector::SelfValidationResult*, "Sirenix.OdinInspector", "SelfValidationResult");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace Sirenix::OdinInspector {
// Is value type: false
// CS Name: Sirenix.OdinInspector.SelfValidationResult
class CORDL_TYPE SelfValidationResult : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr SelfValidationResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SelfValidationResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SelfValidationResult(SelfValidationResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelfValidationResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelfValidationResult(SelfValidationResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33052};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Sirenix::OdinInspector::SelfValidationResult) == 0x10, "Size mismatch!");

} // namespace end def Sirenix::OdinInspector
