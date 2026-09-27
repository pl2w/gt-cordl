#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsBehaviourBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CustomMapsBehaviourBase)
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapsBehaviourBase;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapsBehaviourBase*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsBehaviourBase*, "", "CustomMapsBehaviourBase");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsBehaviourBase
class CORDL_TYPE CustomMapsBehaviourBase : public ::System::Object {
public:
// Declarations
/// @brief Method CanContinueExecuting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool CanContinueExecuting() ;

/// @brief Method CanExecute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool CanExecute() ;

/// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Execute() ;

/// @brief Method NetExecute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void NetExecute() ;

static inline ::GlobalNamespace::CustomMapsBehaviourBase* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  otherCollider) ;

/// @brief Method ResetBehavior, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ResetBehavior() ;

/// @brief Method .ctor, addr 0x59c1510, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsBehaviourBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsBehaviourBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsBehaviourBase(CustomMapsBehaviourBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsBehaviourBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsBehaviourBase(CustomMapsBehaviourBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2677};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CustomMapsBehaviourBase) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
