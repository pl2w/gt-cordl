#pragma once
// IWYU pragma private; include "Fusion/ICallbacksExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ICallbacksExtensions)
namespace Fusion {
class SimulationInput;
}
namespace Fusion {
class Simulation_ICallbacks;
}
// Forward declare root types
namespace Fusion {
class ICallbacksExtensions;
}
// Write type traits
MARK_REF_T(::Fusion::ICallbacksExtensions*);
DEFINE_IL2CPP_CLASS(::Fusion::ICallbacksExtensions*, "Fusion", "ICallbacksExtensions");
// [Extension]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ICallbacksExtensions
class CORDL_TYPE ICallbacksExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// [Conditional("FUSION_UNITY")]
/// @brief Method InvokeOnInput, addr 0x60018f0, size 0xa8, virtual false, abstract: false, final false
static inline void InvokeOnInput(::Fusion::Simulation_ICallbacks*  callbacks, ::Fusion::SimulationInput*  input) ;

/// [Extension]
/// [Conditional("FUSION_UNITY")]
/// @brief Method InvokeOnInputMissing, addr 0x6001998, size 0xa8, virtual false, abstract: false, final false
static inline void InvokeOnInputMissing(::Fusion::Simulation_ICallbacks*  callbacks, ::Fusion::SimulationInput*  input) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ICallbacksExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ICallbacksExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ICallbacksExtensions(ICallbacksExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ICallbacksExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICallbacksExtensions(ICallbacksExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19326};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::ICallbacksExtensions) == 0x10, "Size mismatch!");

} // namespace end def Fusion
