#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/GizmoUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GizmoUtils)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class GizmoUtils;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::GizmoUtils*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::GizmoUtils*, "Technie.PhysicsCreator", "GizmoUtils");
// Dependencies System.Object, UnityEngine.Color
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.GizmoUtils
class CORDL_TYPE GizmoUtils : public ::System::Object {
public:
// Declarations
/// @brief Field HULL_COLOURS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HULL_COLOURS, put=setStaticF_HULL_COLOURS)) ::ArrayW<::UnityEngine::Color>  HULL_COLOURS;

/// @brief Method GetHullColour, addr 0xadc8900, size 0x88, virtual false, abstract: false, final false
static inline ::UnityEngine::Color GetHullColour(int32_t  index) ;

static inline ::Technie::PhysicsCreator::GizmoUtils* New_ctor() ;

/// @brief Method ToggleGizmos, addr 0xadc8988, size 0x4, virtual false, abstract: false, final false
static inline void ToggleGizmos(bool  gizmosOn) ;

/// @brief Method .ctor, addr 0xadc898c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityEngine::Color> getStaticF_HULL_COLOURS() ;

static inline void setStaticF_HULL_COLOURS(::ArrayW<::UnityEngine::Color>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GizmoUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GizmoUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GizmoUtils(GizmoUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GizmoUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GizmoUtils(GizmoUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30496};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Technie::PhysicsCreator::GizmoUtils) == 0x10, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
