#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeBlendShape.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BakeBlendShape)
// Forward declare root types
namespace GlobalNamespace {
class BakeBlendShape;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BakeBlendShape*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BakeBlendShape*, "", "BakeBlendShape");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BakeBlendShape
class CORDL_TYPE BakeBlendShape : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::BakeBlendShape* New_ctor() ;

/// @brief Method Update, addr 0x5d14e40, size 0xd4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x5d14f14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BakeBlendShape() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BakeBlendShape", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BakeBlendShape(BakeBlendShape && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BakeBlendShape", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BakeBlendShape(BakeBlendShape const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{477};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BakeBlendShape) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
