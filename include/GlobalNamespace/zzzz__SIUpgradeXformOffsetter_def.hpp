#pragma once
// IWYU pragma private; include "GlobalNamespace/SIUpgradeXformOffsetter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SIUpgradeXformOffsetter)
namespace GlobalNamespace {
class SIGadget;
}
namespace GlobalNamespace {
struct SIUpgradeSet;
}
namespace GlobalNamespace {
struct SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp;
}
// Forward declare root types
namespace GlobalNamespace {
class SIUpgradeXformOffsetter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIUpgradeXformOffsetter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIUpgradeXformOffsetter*, "", "SIUpgradeXformOffsetter");
// Dependencies SIUpgradeXformOffsetter::SIUpgradeXformOffsetOp, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIUpgradeXformOffsetter
class CORDL_TYPE SIUpgradeXformOffsetter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SIUpgradeXformOffsetOp = ::GlobalNamespace::SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp;

/// @brief Field m_superInfectionGadget, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_superInfectionGadget, put=__cordl_internal_set_m_superInfectionGadget)) ::UnityW<::GlobalNamespace::SIGadget>  m_superInfectionGadget;

/// @brief Field m_upgradeXformOffsetOps, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_upgradeXformOffsetOps, put=__cordl_internal_set_m_upgradeXformOffsetOps)) ::ArrayW<::GlobalNamespace::SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp>  m_upgradeXformOffsetOps;

/// @brief Method Awake, addr 0x59d6da8, size 0x220, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SIUpgradeXformOffsetter* New_ctor() ;

/// @brief Method OnDisable, addr 0x59d70ac, size 0xe4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x59d6fc8, size 0xe4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method _HandleGadgetOnPostRefreshVisuals, addr 0x59d7190, size 0x134, virtual false, abstract: false, final false
inline void _HandleGadgetOnPostRefreshVisuals(::GlobalNamespace::SIUpgradeSet  upgradeSet) ;

constexpr ::UnityW<::GlobalNamespace::SIGadget> const& __cordl_internal_get_m_superInfectionGadget() const;

constexpr ::UnityW<::GlobalNamespace::SIGadget>& __cordl_internal_get_m_superInfectionGadget() ;

constexpr ::ArrayW<::GlobalNamespace::SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp> const& __cordl_internal_get_m_upgradeXformOffsetOps() const;

constexpr ::ArrayW<::GlobalNamespace::SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp>& __cordl_internal_get_m_upgradeXformOffsetOps() ;

constexpr void __cordl_internal_set_m_superInfectionGadget(::UnityW<::GlobalNamespace::SIGadget>  value) ;

constexpr void __cordl_internal_set_m_upgradeXformOffsetOps(::ArrayW<::GlobalNamespace::SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp>  value) ;

/// @brief Method .ctor, addr 0x59d72c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIUpgradeXformOffsetter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIUpgradeXformOffsetter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIUpgradeXformOffsetter(SIUpgradeXformOffsetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIUpgradeXformOffsetter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIUpgradeXformOffsetter(SIUpgradeXformOffsetter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{293};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"[SIUpgradeXformOffsetter]  ERROR!!!  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[SIUpgradeXformOffsetter]  "};

/// [SerializeField]
/// @brief Field m_superInfectionGadget, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGadget>  ___m_superInfectionGadget;

/// [SerializeField]
/// @brief Field m_upgradeXformOffsetOps, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SIUpgradeXformOffsetter_SIUpgradeXformOffsetOp>  ___m_upgradeXformOffsetOps;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIUpgradeXformOffsetter, ___m_superInfectionGadget) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUpgradeXformOffsetter, ___m_upgradeXformOffsetOps) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIUpgradeXformOffsetter) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
