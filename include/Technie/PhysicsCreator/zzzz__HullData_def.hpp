#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/HullData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(HullData)
// Forward declare root types
namespace Technie::PhysicsCreator {
class HullData;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::HullData*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::HullData*, "Technie.PhysicsCreator", "HullData");
// Dependencies UnityEngine.ScriptableObject
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.HullData
class CORDL_TYPE HullData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
static inline ::Technie::PhysicsCreator::HullData* New_ctor() ;

/// @brief Method .ctor, addr 0xadcd41c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HullData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HullData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HullData(HullData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HullData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HullData(HullData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30509};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Technie::PhysicsCreator::HullData) == 0x18, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
