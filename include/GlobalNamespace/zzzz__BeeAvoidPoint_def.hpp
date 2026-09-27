#pragma once
// IWYU pragma private; include "GlobalNamespace/BeeAvoidPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BeeAvoidPoint)
// Forward declare root types
namespace GlobalNamespace {
class BeeAvoidPoint;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeeAvoidPoint*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeeAvoidPoint*, "", "BeeAvoidPoint");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeeAvoidPoint
class CORDL_TYPE BeeAvoidPoint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::BeeAvoidPoint* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5613be0, size 0xac, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x5613a60, size 0xac, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method .ctor, addr 0x5613d0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BeeAvoidPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BeeAvoidPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BeeAvoidPoint(BeeAvoidPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeeAvoidPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeeAvoidPoint(BeeAvoidPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{549};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BeeAvoidPoint) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
