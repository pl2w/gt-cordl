#pragma once
// IWYU pragma private; include "Oculus/Interaction/MonoBehaviourStartExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MonoBehaviourStartExtensions)
namespace System {
class Action;
}
namespace UnityEngine {
class MonoBehaviour;
}
// Forward declare root types
namespace Oculus::Interaction {
class MonoBehaviourStartExtensions;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::MonoBehaviourStartExtensions*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::MonoBehaviourStartExtensions*, "Oculus.Interaction", "MonoBehaviourStartExtensions");
// [Extension]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.MonoBehaviourStartExtensions
class CORDL_TYPE MonoBehaviourStartExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method BeginStart, addr 0xa400e70, size 0x74, virtual false, abstract: false, final false
static inline void BeginStart(::UnityEngine::MonoBehaviour*  monoBehaviour, ::by_ref<bool>  started, ::System::Action*  baseStart) ;

/// [Extension]
/// @brief Method EndStart, addr 0xa400f14, size 0x2c, virtual false, abstract: false, final false
static inline void EndStart(::UnityEngine::MonoBehaviour*  monoBehaviour, ::by_ref<bool>  started) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBehaviourStartExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourStartExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBehaviourStartExtensions(MonoBehaviourStartExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourStartExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBehaviourStartExtensions(MonoBehaviourStartExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15705};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::MonoBehaviourStartExtensions) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
