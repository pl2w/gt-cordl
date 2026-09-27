#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/AxisAlignedBoxFitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AxisAlignedBoxFitter)
namespace Technie::PhysicsCreator::Rigid {
class Hull;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class AxisAlignedBoxFitter;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::AxisAlignedBoxFitter*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::AxisAlignedBoxFitter*, "Technie.PhysicsCreator", "AxisAlignedBoxFitter");
// Dependencies System.Object
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.AxisAlignedBoxFitter
class CORDL_TYPE AxisAlignedBoxFitter : public ::System::Object {
public:
// Declarations
/// @brief Method Fit, addr 0xadc4084, size 0x158, virtual false, abstract: false, final false
inline void Fit(::Technie::PhysicsCreator::Rigid::Hull*  hull, ::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices) ;

static inline ::Technie::PhysicsCreator::AxisAlignedBoxFitter* New_ctor() ;

/// @brief Method .ctor, addr 0xadc4678, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AxisAlignedBoxFitter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AxisAlignedBoxFitter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AxisAlignedBoxFitter(AxisAlignedBoxFitter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AxisAlignedBoxFitter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AxisAlignedBoxFitter(AxisAlignedBoxFitter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30481};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Technie::PhysicsCreator::AxisAlignedBoxFitter) == 0x10, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
