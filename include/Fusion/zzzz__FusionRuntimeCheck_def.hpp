#pragma once
// IWYU pragma private; include "Fusion/FusionRuntimeCheck.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FusionRuntimeCheck)
// Forward declare root types
namespace Fusion {
class FusionRuntimeCheck;
}
// Write type traits
MARK_REF_T(::Fusion::FusionRuntimeCheck*);
DEFINE_IL2CPP_CLASS(::Fusion::FusionRuntimeCheck*, "Fusion", "FusionRuntimeCheck");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionRuntimeCheck
class CORDL_TYPE FusionRuntimeCheck : public ::System::Object {
public:
// Declarations
/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// @brief Method RuntimeCheck, addr 0x60e1b70, size 0x20, virtual false, abstract: false, final false
static inline void RuntimeCheck() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionRuntimeCheck() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionRuntimeCheck", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionRuntimeCheck(FusionRuntimeCheck && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionRuntimeCheck", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionRuntimeCheck(FusionRuntimeCheck const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23425};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::FusionRuntimeCheck) == 0x10, "Size mismatch!");

} // namespace end def Fusion
