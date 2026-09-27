#pragma once
// IWYU pragma private; include "Oculus/Interaction/Deprecated/PointableDebugPolylineGizmos.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PointableDebugPolylineGizmos)
// Forward declare root types
namespace Oculus::Interaction::Deprecated {
class PointableDebugPolylineGizmos;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Deprecated::PointableDebugPolylineGizmos*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Deprecated::PointableDebugPolylineGizmos*, "Oculus.Interaction.Deprecated", "PointableDebugPolylineGizmos");
// [Obsolete("Replaced by PointableDebugGizmos")]
// Dependencies System.Object
namespace Oculus::Interaction::Deprecated {
// Is value type: false
// CS Name: Oculus.Interaction.Deprecated.PointableDebugPolylineGizmos
class CORDL_TYPE PointableDebugPolylineGizmos : public ::System::Object {
public:
// Declarations
static inline ::Oculus::Interaction::Deprecated::PointableDebugPolylineGizmos* New_ctor() ;

/// @brief Method .ctor, addr 0xa4b87a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointableDebugPolylineGizmos() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointableDebugPolylineGizmos", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointableDebugPolylineGizmos(PointableDebugPolylineGizmos && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointableDebugPolylineGizmos", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointableDebugPolylineGizmos(PointableDebugPolylineGizmos const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16239};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Deprecated::PointableDebugPolylineGizmos) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Deprecated
