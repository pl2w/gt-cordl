#pragma once
// IWYU pragma private; include "CustomMapSupport/Bezier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Bezier)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace CustomMapSupport {
class Bezier;
}
// Write type traits
MARK_REF_T(::CustomMapSupport::Bezier*);
DEFINE_IL2CPP_CLASS(::CustomMapSupport::Bezier*, "CustomMapSupport", "Bezier");
// Dependencies System.Object
namespace CustomMapSupport {
// Is value type: false
// CS Name: CustomMapSupport.Bezier
class CORDL_TYPE Bezier : public ::System::Object {
public:
// Declarations
/// @brief Method GetFirstDerivative, addr 0x9caedfc, size 0xb4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetFirstDerivative(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::UnityEngine::Vector3  p3, float_t  t) ;

/// @brief Method GetPoint, addr 0x9caed4c, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetPoint(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::UnityEngine::Vector3  p3, float_t  t) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Bezier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Bezier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Bezier(Bezier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Bezier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Bezier(Bezier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30868};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::CustomMapSupport::Bezier) == 0x10, "Size mismatch!");

} // namespace end def CustomMapSupport
