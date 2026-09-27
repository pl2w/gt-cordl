#pragma once
// IWYU pragma private; include "Fusion/RenderTimeline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(RenderTimeline)
namespace Fusion {
struct NetworkBehaviourBuffer;
}
namespace Fusion {
class NetworkBehaviour;
}
// Forward declare root types
namespace Fusion {
struct RenderTimeline;
}
// Write type traits
MARK_VAL_T(::Fusion::RenderTimeline);
DEFINE_IL2CPP_CLASS(::Fusion::RenderTimeline, "Fusion", "RenderTimeline");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.RenderTimeline
#pragma pack(push, 0)
struct CORDL_TYPE RenderTimeline {
public:
// Declarations
/// @brief Method GetRenderBuffers, addr 0x5fe11c4, size 0x268, virtual false, abstract: false, final false
static inline void GetRenderBuffers(::Fusion::NetworkBehaviour*  behaviour, ::by_ref<::Fusion::NetworkBehaviourBuffer>  from, ::by_ref<::Fusion::NetworkBehaviourBuffer>  to, ::by_ref<float_t>  alpha) ;

// Ctor Parameters []
// @brief default ctor
constexpr RenderTimeline() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19298};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Fusion::RenderTimeline) == 0x1, "Size mismatch!");

} // namespace end def Fusion
