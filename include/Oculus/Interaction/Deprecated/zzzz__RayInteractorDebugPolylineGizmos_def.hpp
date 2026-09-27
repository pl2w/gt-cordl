#pragma once
// IWYU pragma private; include "Oculus/Interaction/Deprecated/RayInteractorDebugPolylineGizmos.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RayInteractorDebugPolylineGizmos)
// Forward declare root types
namespace Oculus::Interaction::Deprecated {
class RayInteractorDebugPolylineGizmos;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Deprecated::RayInteractorDebugPolylineGizmos*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Deprecated::RayInteractorDebugPolylineGizmos*, "Oculus.Interaction.Deprecated", "RayInteractorDebugPolylineGizmos");
// [Obsolete("Replaced by RayInteractorDebugGizmos")]
// Dependencies System.Object
namespace Oculus::Interaction::Deprecated {
// Is value type: false
// CS Name: Oculus.Interaction.Deprecated.RayInteractorDebugPolylineGizmos
class CORDL_TYPE RayInteractorDebugPolylineGizmos : public ::System::Object {
public:
// Declarations
static inline ::Oculus::Interaction::Deprecated::RayInteractorDebugPolylineGizmos* New_ctor() ;

/// @brief Method .ctor, addr 0xa4b87a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RayInteractorDebugPolylineGizmos() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RayInteractorDebugPolylineGizmos", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RayInteractorDebugPolylineGizmos(RayInteractorDebugPolylineGizmos && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RayInteractorDebugPolylineGizmos", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RayInteractorDebugPolylineGizmos(RayInteractorDebugPolylineGizmos const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16238};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Deprecated::RayInteractorDebugPolylineGizmos) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Deprecated
