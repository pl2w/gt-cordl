#pragma once
// IWYU pragma private; include "Oculus/Interaction/ConeUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ConeUtils)
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class ConeUtils;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ConeUtils*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ConeUtils*, "Oculus.Interaction", "ConeUtils");
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ConeUtils
class CORDL_TYPE ConeUtils : public ::System::Object {
public:
// Declarations
static inline ::Oculus::Interaction::ConeUtils* New_ctor() ;

/// @brief Method RayWithinCone, addr 0xa48afb4, size 0x108, virtual false, abstract: false, final false
static inline bool RayWithinCone(::UnityEngine::Ray  ray, ::UnityEngine::Vector3  position, float_t  apertureDegrees) ;

/// @brief Method .ctor, addr 0xa48b0bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConeUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConeUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConeUtils(ConeUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConeUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConeUtils(ConeUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16012};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::ConeUtils) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
