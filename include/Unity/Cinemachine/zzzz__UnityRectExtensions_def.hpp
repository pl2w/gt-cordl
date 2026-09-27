#pragma once
// IWYU pragma private; include "Unity/Cinemachine/UnityRectExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityRectExtensions)
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Unity::Cinemachine {
class UnityRectExtensions;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::UnityRectExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::UnityRectExtensions*, "Unity.Cinemachine", "UnityRectExtensions");
// [Extension]
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.UnityRectExtensions
class CORDL_TYPE UnityRectExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method Inflated, addr 0xaec1a64, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect Inflated(::UnityEngine::Rect  r, ::UnityEngine::Vector2  delta) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityRectExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityRectExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityRectExtensions(UnityRectExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityRectExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityRectExtensions(UnityRectExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22378};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::UnityRectExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
