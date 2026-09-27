#pragma once
// IWYU pragma private; include "Oculus/Interaction/VectorExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VectorExtensions)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class VectorExtensions;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::VectorExtensions*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::VectorExtensions*, "Oculus.Interaction", "VectorExtensions");
// [Extension]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.VectorExtensions
class CORDL_TYPE VectorExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method Approximately, addr 0xa403130, size 0x30, virtual false, abstract: false, final false
static inline bool Approximately(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, float_t  epsilon) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VectorExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VectorExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VectorExtensions(VectorExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VectorExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VectorExtensions(VectorExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15708};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::VectorExtensions) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
