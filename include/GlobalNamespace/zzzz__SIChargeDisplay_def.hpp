#pragma once
// IWYU pragma private; include "GlobalNamespace/SIChargeDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SIChargeDisplay)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class SIChargeDisplay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIChargeDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIChargeDisplay*, "", "SIChargeDisplay");
// Dependencies UnityEngine.MeshRenderer, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIChargeDisplay
class CORDL_TYPE SIChargeDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field chargeDisplay, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_chargeDisplay, put=__cordl_internal_set_chargeDisplay)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  chargeDisplay;

/// @brief Field chargedMat, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_chargedMat, put=__cordl_internal_set_chargedMat)) ::UnityW<::UnityEngine::Material>  chargedMat;

/// @brief Field unchargedMat, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_unchargedMat, put=__cordl_internal_set_unchargedMat)) ::UnityW<::UnityEngine::Material>  unchargedMat;

static inline ::GlobalNamespace::SIChargeDisplay* New_ctor() ;

/// @brief Method UpdateDisplay, addr 0x58dc1d8, size 0x80, virtual false, abstract: false, final false
inline void UpdateDisplay(int32_t  chargeCount) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& __cordl_internal_get_chargeDisplay() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& __cordl_internal_get_chargeDisplay() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_chargedMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_chargedMat() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_unchargedMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_unchargedMat() ;

constexpr void __cordl_internal_set_chargeDisplay(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value) ;

constexpr void __cordl_internal_set_chargedMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_unchargedMat(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x58dc258, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIChargeDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIChargeDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIChargeDisplay(SIChargeDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIChargeDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIChargeDisplay(SIChargeDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{252};

/// [SerializeField]
/// @brief Field chargeDisplay, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  ___chargeDisplay;

/// [SerializeField]
/// @brief Field chargedMat, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___chargedMat;

/// [SerializeField]
/// @brief Field unchargedMat, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___unchargedMat;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIChargeDisplay, ___chargeDisplay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIChargeDisplay, ___chargedMat) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIChargeDisplay, ___unchargedMat) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIChargeDisplay) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
