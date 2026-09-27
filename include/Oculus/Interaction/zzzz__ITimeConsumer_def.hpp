#pragma once
// IWYU pragma private; include "Oculus/Interaction/ITimeConsumer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ITimeConsumer)
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace Oculus::Interaction {
class ITimeConsumer;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ITimeConsumer*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ITimeConsumer*, "Oculus.Interaction", "ITimeConsumer");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ITimeConsumer
class CORDL_TYPE ITimeConsumer {
public:
// Declarations
/// @brief Method SetTimeProvider, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

// Ctor Parameters [CppParam { name: "", ty: "ITimeConsumer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITimeConsumer(ITimeConsumer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16027};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
