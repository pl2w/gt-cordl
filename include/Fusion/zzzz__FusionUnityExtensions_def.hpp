#pragma once
// IWYU pragma private; include "Fusion/FusionUnityExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FusionUnityExtensions)
// Forward declare root types
namespace Fusion {
class FusionUnityExtensions;
}
// Write type traits
MARK_REF_T(::Fusion::FusionUnityExtensions*);
DEFINE_IL2CPP_CLASS(::Fusion::FusionUnityExtensions*, "Fusion", "FusionUnityExtensions");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionUnityExtensions
class CORDL_TYPE FusionUnityExtensions : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionUnityExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionUnityExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionUnityExtensions(FusionUnityExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionUnityExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionUnityExtensions(FusionUnityExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23438};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::FusionUnityExtensions) == 0x10, "Size mismatch!");

} // namespace end def Fusion
