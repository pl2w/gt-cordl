#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Cinemachine3OrbitRig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Cinemachine3OrbitRig)
namespace GlobalNamespace {
struct Cinemachine3OrbitRig_OrbitSplineCache;
}
namespace GlobalNamespace {
struct Cinemachine3OrbitRig_Orbit;
}
namespace GlobalNamespace {
struct Cinemachine3OrbitRig_Settings;
}
// Forward declare root types
namespace Unity::Cinemachine {
class Cinemachine3OrbitRig;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::Cinemachine3OrbitRig*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::Cinemachine3OrbitRig*, "Unity.Cinemachine", "Cinemachine3OrbitRig");
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.Cinemachine3OrbitRig
class CORDL_TYPE Cinemachine3OrbitRig : public ::System::Object {
public:
// Declarations
using Orbit = ::GlobalNamespace::Cinemachine3OrbitRig_Orbit;

using OrbitSplineCache = ::GlobalNamespace::Cinemachine3OrbitRig_OrbitSplineCache;

using Settings = ::GlobalNamespace::Cinemachine3OrbitRig_Settings;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Cinemachine3OrbitRig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Cinemachine3OrbitRig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Cinemachine3OrbitRig(Cinemachine3OrbitRig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Cinemachine3OrbitRig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Cinemachine3OrbitRig(Cinemachine3OrbitRig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22234};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::Cinemachine3OrbitRig) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
