#pragma once
// IWYU pragma private; include "Meta/WitAi/UnityObjectExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
CORDL_MODULE_EXPORT(UnityObjectExtensions)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Meta::WitAi {
class UnityObjectExtensions;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::UnityObjectExtensions*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::UnityObjectExtensions*, "Meta.WitAi", "UnityObjectExtensions");
// [Extension]
// Dependencies System.Object, UnityEngine.Component
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.UnityObjectExtensions
class CORDL_TYPE UnityObjectExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method DestroySafely, addr 0x9e3c5fc, size 0x84, virtual false, abstract: false, final false
static inline void DestroySafely(::UnityEngine::Object*  unityObject) ;

/// [Extension]
/// @brief Method GetOrAddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T GetOrAddComponent(::UnityEngine::GameObject*  unityObject) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityObjectExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityObjectExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityObjectExtensions(UnityObjectExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityObjectExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityObjectExtensions(UnityObjectExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31004};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::UnityObjectExtensions) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi
