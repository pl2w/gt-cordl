#pragma once
// IWYU pragma private; include "GlobalNamespace/CubemapRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CubemapRenderer)
// Forward declare root types
namespace GlobalNamespace {
class CubemapRenderer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CubemapRenderer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CubemapRenderer*, "", "CubemapRenderer");
// [DisallowMultipleComponent]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CubemapRenderer
class CORDL_TYPE CubemapRenderer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::CubemapRenderer* New_ctor() ;

/// @brief Method .ctor, addr 0x5a1aa74, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CubemapRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CubemapRenderer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CubemapRenderer(CubemapRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CubemapRenderer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CubemapRenderer(CubemapRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2796};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CubemapRenderer) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
