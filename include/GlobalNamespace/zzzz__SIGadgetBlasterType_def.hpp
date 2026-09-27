#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetBlasterType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SIGadgetBlasterType)
namespace GlobalNamespace {
struct SIUpgradeSet;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetBlasterType;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetBlasterType*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetBlasterType*, "", "SIGadgetBlasterType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetBlasterType
class CORDL_TYPE SIGadgetBlasterType {
public:
// Declarations
/// @brief Method ApplyUpgradeNodes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades) ;

/// @brief Method NetworkFireProjectile, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void NetworkFireProjectile(::ArrayW<::System::Object*>  data) ;

/// @brief Method OnUpdateAuthority, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method SetStateShared, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetStateShared() ;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetBlasterType", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetBlasterType(SIGadgetBlasterType const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{224};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
