#pragma once
// IWYU pragma private; include "Oculus/Interaction/Deprecated/PolylineGizmos.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PolylineGizmos)
// Forward declare root types
namespace Oculus::Interaction::Deprecated {
class PolylineGizmos;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Deprecated::PolylineGizmos*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Deprecated::PolylineGizmos*, "Oculus.Interaction.Deprecated", "PolylineGizmos");
// [Obsolete("Replaced by DebugGizmos")]
// Dependencies System.Object
namespace Oculus::Interaction::Deprecated {
// Is value type: false
// CS Name: Oculus.Interaction.Deprecated.PolylineGizmos
class CORDL_TYPE PolylineGizmos : public ::System::Object {
public:
// Declarations
static inline ::Oculus::Interaction::Deprecated::PolylineGizmos* New_ctor() ;

/// @brief Method .ctor, addr 0xa4b87b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PolylineGizmos() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PolylineGizmos", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PolylineGizmos(PolylineGizmos && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PolylineGizmos", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PolylineGizmos(PolylineGizmos const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16240};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Deprecated::PolylineGizmos) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Deprecated
