#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/AlignedCapsuleFitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AlignedCapsuleFitter)
namespace Technie::PhysicsCreator::Rigid {
class Hull;
}
namespace Technie::PhysicsCreator {
struct CapsuleDef;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class AlignedCapsuleFitter;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::AlignedCapsuleFitter*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::AlignedCapsuleFitter*, "Technie.PhysicsCreator", "AlignedCapsuleFitter");
// Dependencies System.Object
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.AlignedCapsuleFitter
class CORDL_TYPE AlignedCapsuleFitter : public ::System::Object {
public:
// Declarations
/// @brief Method Fit, addr 0xadc34ec, size 0x90, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::CapsuleDef Fit(::Technie::PhysicsCreator::Rigid::Hull*  hull, ::ArrayW<::UnityEngine::Vector3>  meshVertices, ::ArrayW<int32_t>  meshIndices) ;

/// @brief Method Fit, addr 0xadc3610, size 0x388, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::CapsuleDef Fit(::ArrayW<::UnityEngine::Vector3>  hullVertices, ::ArrayW<int32_t>  hullIndices) ;

static inline ::Technie::PhysicsCreator::AlignedCapsuleFitter* New_ctor() ;

/// @brief Method .ctor, addr 0xadc407c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AlignedCapsuleFitter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AlignedCapsuleFitter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AlignedCapsuleFitter(AlignedCapsuleFitter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AlignedCapsuleFitter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AlignedCapsuleFitter(AlignedCapsuleFitter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30480};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Technie::PhysicsCreator::AlignedCapsuleFitter) == 0x10, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
