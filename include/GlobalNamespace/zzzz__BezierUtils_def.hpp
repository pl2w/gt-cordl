#pragma once
// IWYU pragma private; include "GlobalNamespace/BezierUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BezierUtils)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BezierUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BezierUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BezierUtils*, "", "BezierUtils");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BezierUtils
class CORDL_TYPE BezierUtils : public ::System::Object {
public:
// Declarations
/// @brief Method BezierSolve, addr 0x5ae1e84, size 0x98, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 BezierSolve(float_t  t, ::UnityEngine::Vector3  startPos, ::UnityEngine::Vector3  ctrl1, ::UnityEngine::Vector3  ctrl2, ::UnityEngine::Vector3  endPos) ;

static inline ::GlobalNamespace::BezierUtils* New_ctor() ;

/// @brief Method .ctor, addr 0x5ae1f1c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BezierUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BezierUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BezierUtils(BezierUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BezierUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BezierUtils(BezierUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3471};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BezierUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
