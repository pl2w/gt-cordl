#pragma once
// IWYU pragma private; include "GlobalNamespace/IEnergyGadget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IEnergyGadget)
// Forward declare root types
namespace GlobalNamespace {
class IEnergyGadget;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IEnergyGadget*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IEnergyGadget*, "", "IEnergyGadget");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IEnergyGadget
class CORDL_TYPE IEnergyGadget {
public:
// Declarations
 __declspec(property(get=get_IsFull)) bool  IsFull;

 __declspec(property(get=get_UsesEnergy)) bool  UsesEnergy;

/// @brief Method UpdateRecharge, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateRecharge(float_t  dt) ;

/// @brief Method get_IsFull, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsFull() ;

/// @brief Method get_UsesEnergy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_UsesEnergy() ;

// Ctor Parameters [CppParam { name: "", ty: "IEnergyGadget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEnergyGadget(IEnergyGadget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{255};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
