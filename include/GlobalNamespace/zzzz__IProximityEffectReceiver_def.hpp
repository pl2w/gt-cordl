#pragma once
// IWYU pragma private; include "GlobalNamespace/IProximityEffectReceiver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IProximityEffectReceiver)
// Forward declare root types
namespace GlobalNamespace {
class IProximityEffectReceiver;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IProximityEffectReceiver*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IProximityEffectReceiver*, "", "IProximityEffectReceiver");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IProximityEffectReceiver
class CORDL_TYPE IProximityEffectReceiver {
public:
// Declarations
/// @brief Method OnProximityCalculated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnProximityCalculated(float_t  distance, float_t  alignment, float_t  parallel) ;

// Ctor Parameters [CppParam { name: "", ty: "IProximityEffectReceiver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IProximityEffectReceiver(IProximityEffectReceiver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{757};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
