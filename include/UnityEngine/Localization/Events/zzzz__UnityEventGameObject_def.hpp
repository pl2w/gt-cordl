#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Events/UnityEventGameObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(UnityEventGameObject)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::Localization::Events {
class UnityEventGameObject;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Events::UnityEventGameObject*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Events::UnityEventGameObject*, "UnityEngine.Localization.Events", "UnityEventGameObject");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace UnityEngine::Localization::Events {
// Is value type: false
// CS Name: UnityEngine.Localization.Events.UnityEventGameObject
class CORDL_TYPE UnityEventGameObject : public ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::GameObject>> {
public:
// Declarations
static inline ::UnityEngine::Localization::Events::UnityEventGameObject* New_ctor() ;

/// @brief Method .ctor, addr 0xb04ec40, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityEventGameObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityEventGameObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEventGameObject(UnityEventGameObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEventGameObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEventGameObject(UnityEventGameObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25314};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Events::UnityEventGameObject) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Events
