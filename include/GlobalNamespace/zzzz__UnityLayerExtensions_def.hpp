#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityLayerExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnityLayerExtensions)
namespace GlobalNamespace {
struct UnityLayer;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityLayerExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UnityLayerExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityLayerExtensions*, "", "UnityLayerExtensions");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityLayerExtensions
class CORDL_TYPE UnityLayerExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method IsOnLayer, addr 0x56b1e4c, size 0x28, virtual false, abstract: false, final false
static inline bool IsOnLayer(::UnityEngine::GameObject*  obj, ::GlobalNamespace::UnityLayer  layer) ;

/// [Extension]
/// @brief Method SetLayer, addr 0x56b1e74, size 0x14, virtual false, abstract: false, final false
static inline void SetLayer(::UnityEngine::GameObject*  obj, ::GlobalNamespace::UnityLayer  layer) ;

/// [Extension]
/// @brief Method SetLayerRecursively, addr 0x56b1e88, size 0x2c0, virtual false, abstract: false, final false
static inline void SetLayerRecursively(::UnityEngine::GameObject*  obj, ::GlobalNamespace::UnityLayer  layer) ;

/// [Extension]
/// @brief Method ToLayerIndex, addr 0x56b1e48, size 0x4, virtual false, abstract: false, final false
static inline int32_t ToLayerIndex(::GlobalNamespace::UnityLayer  self) ;

/// [Extension]
/// @brief Method ToLayerMask, addr 0x56b1e3c, size 0xc, virtual false, abstract: false, final false
static inline int32_t ToLayerMask(::GlobalNamespace::UnityLayer  self) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityLayerExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityLayerExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityLayerExtensions(UnityLayerExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityLayerExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityLayerExtensions(UnityLayerExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{942};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::UnityLayerExtensions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
