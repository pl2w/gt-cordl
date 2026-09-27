#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticRefTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticRefID_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CosmeticRefTarget)
// Forward declare root types
namespace GlobalNamespace {
class CosmeticRefTarget;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticRefTarget*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticRefTarget*, "", "CosmeticRefTarget");
// Dependencies CosmeticRefID, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticRefTarget
class CORDL_TYPE CosmeticRefTarget : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field id, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) ::GlobalNamespace::CosmeticRefID  id;

static inline ::GlobalNamespace::CosmeticRefTarget* New_ctor() ;

constexpr ::GlobalNamespace::CosmeticRefID const& __cordl_internal_get_id() const;

constexpr ::GlobalNamespace::CosmeticRefID& __cordl_internal_get_id() ;

constexpr void __cordl_internal_set_id(::GlobalNamespace::CosmeticRefID  value) ;

/// @brief Method .ctor, addr 0x5648988, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticRefTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticRefTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticRefTarget(CosmeticRefTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticRefTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticRefTarget(CosmeticRefTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{698};

/// @brief Field id, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticRefID  ___id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticRefTarget, ___id) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticRefTarget) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
