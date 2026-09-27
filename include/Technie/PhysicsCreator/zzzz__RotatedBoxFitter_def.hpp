#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/RotatedBoxFitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RotatedBoxFitter)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Technie::PhysicsCreator::Rigid {
class Hull;
}
namespace Technie::PhysicsCreator {
struct BoxDef;
}
namespace Technie::PhysicsCreator {
class ConstructionPlane;
}
namespace Technie::PhysicsCreator {
class RotatedBox;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class RotatedBoxFitter;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::RotatedBoxFitter*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::RotatedBoxFitter*, "Technie.PhysicsCreator", "RotatedBoxFitter");
// Dependencies System.Object
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.RotatedBoxFitter
class CORDL_TYPE RotatedBoxFitter : public ::System::Object {
public:
// Declarations
/// @brief Method ApplyToHull, addr 0xadc4634, size 0x44, virtual false, abstract: false, final false
static inline void ApplyToHull(::Technie::PhysicsCreator::RotatedBox*  computedBox, ::Technie::PhysicsCreator::Rigid::Hull*  targetHull) ;

/// @brief Method FindTightestBox, addr 0xadc3a54, size 0x1d4, virtual false, abstract: false, final false
static inline ::Technie::PhysicsCreator::RotatedBox* FindTightestBox(::Technie::PhysicsCreator::ConstructionPlane*  plane, ::ArrayW<::UnityEngine::Vector3>  inputVertices) ;

/// @brief Method FindTightestBoxes, addr 0xadc72ec, size 0x21c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::RotatedBox*>* FindTightestBoxes(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::ConstructionPlane*>*  planes, ::ArrayW<::UnityEngine::Vector3>  inputVertices) ;

/// @brief Method Fit, addr 0xadc65a8, size 0xb0, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::BoxDef Fit(::Technie::PhysicsCreator::Rigid::Hull*  hull, ::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices) ;

/// @brief Method Fit, addr 0xadc6ad0, size 0x81c, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::BoxDef Fit(::ArrayW<::UnityEngine::Vector3>  hullVertices, ::ArrayW<int32_t>  hullIndices) ;

/// @brief Method GeneratePlaneVariants, addr 0xadc7508, size 0x1a8, virtual false, abstract: false, final false
static inline void GeneratePlaneVariants(::Technie::PhysicsCreator::ConstructionPlane*  basePlane, int32_t  numVariants, float_t  angleRange, ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::ConstructionPlane*>*  variantPlanes) ;

static inline ::Technie::PhysicsCreator::RotatedBoxFitter* New_ctor() ;

/// @brief Method ToBoxDef, addr 0xadc7754, size 0x64, virtual false, abstract: false, final false
static inline ::Technie::PhysicsCreator::BoxDef ToBoxDef(::Technie::PhysicsCreator::RotatedBox*  computedBox) ;

/// @brief Method UnifyOffsets, addr 0xadc76b0, size 0xa4, virtual false, abstract: false, final false
static inline void UnifyOffsets(::Technie::PhysicsCreator::RotatedBox*  inputBox) ;

/// @brief Method .ctor, addr 0xadc65a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RotatedBoxFitter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotatedBoxFitter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RotatedBoxFitter(RotatedBoxFitter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotatedBoxFitter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotatedBoxFitter(RotatedBoxFitter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30492};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Technie::PhysicsCreator::RotatedBoxFitter) == 0x10, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
