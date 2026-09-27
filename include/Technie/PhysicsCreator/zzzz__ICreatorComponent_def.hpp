#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/ICreatorComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICreatorComponent)
namespace Technie::PhysicsCreator {
class IEditorData;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Technie::PhysicsCreator {
class ICreatorComponent;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::ICreatorComponent*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::ICreatorComponent*, "Technie.PhysicsCreator", "ICreatorComponent");
// Dependencies 
namespace Technie::PhysicsCreator {
// Is value type: false
// CS Name: Technie.PhysicsCreator.ICreatorComponent
class CORDL_TYPE ICreatorComponent {
public:
// Declarations
/// @brief Method GetEditorData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Technie::PhysicsCreator::IEditorData* GetEditorData() ;

/// @brief Method GetGameObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::GameObject> GetGameObject() ;

/// @brief Method HasEditorData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool HasEditorData() ;

// Ctor Parameters [CppParam { name: "", ty: "ICreatorComponent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICreatorComponent(ICreatorComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30499};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Technie::PhysicsCreator
