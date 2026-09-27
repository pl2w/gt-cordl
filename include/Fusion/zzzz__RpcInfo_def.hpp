#pragma once
// IWYU pragma private; include "Fusion/RpcInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__RpcChannel_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RpcInfo)
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
struct RpcChannel;
}
namespace Fusion {
struct RpcHostMode;
}
namespace Fusion {
struct SimulationMessage;
}
// Forward declare root types
namespace Fusion {
struct RpcInfo;
}
// Write type traits
MARK_VAL_T(::Fusion::RpcInfo);
DEFINE_IL2CPP_CLASS(::Fusion::RpcInfo, "Fusion", "RpcInfo");
// Dependencies Fusion.PlayerRef, Fusion.RpcChannel, Fusion.Tick
namespace Fusion {
// Is value type: true
// CS Name: Fusion.RpcInfo
struct CORDL_TYPE RpcInfo {
public:
// Declarations
/// @brief Method FromLocal, addr 0x5fd0c5c, size 0x8c, virtual false, abstract: false, final false
static inline ::Fusion::RpcInfo FromLocal(::Fusion::NetworkRunner*  runner, ::Fusion::RpcChannel  channel, ::Fusion::RpcHostMode  hostMode) ;

/// @brief Method FromMessage, addr 0x5fd0ce8, size 0xc0, virtual false, abstract: false, final false
static inline ::Fusion::RpcInfo FromMessage(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessage*  message, ::Fusion::RpcHostMode  hostMode) ;

/// @brief Method ToString, addr 0x5fd0da8, size 0x32c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

// Ctor Parameters []
// @brief default ctor
constexpr RpcInfo() ;

// Ctor Parameters [CppParam { name: "Tick", ty: "::Fusion::Tick", modifiers: "", def_value: None, comment: None }, CppParam { name: "Source", ty: "::Fusion::PlayerRef", modifiers: "", def_value: None, comment: None }, CppParam { name: "Channel", ty: "::Fusion::RpcChannel", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsInvokeLocal", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr RpcInfo(::Fusion::Tick  Tick, ::Fusion::PlayerRef  Source, ::Fusion::RpcChannel  Channel, bool  IsInvokeLocal) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19186};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Tick, offset: 0x0, size: 0x4, def value: None
 ::Fusion::Tick  Tick;

/// @brief Field Source, offset: 0x4, size: 0x4, def value: None
 ::Fusion::PlayerRef  Source;

/// @brief Field Channel, offset: 0x8, size: 0x4, def value: None
 ::Fusion::RpcChannel  Channel;

/// @brief Field IsInvokeLocal, offset: 0xc, size: 0x1, def value: None
 bool  IsInvokeLocal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::RpcInfo, Tick) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::RpcInfo, Source) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Fusion::RpcInfo, Channel) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::RpcInfo, IsInvokeLocal) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Fusion::RpcInfo) == 0x10, "Size mismatch!");

} // namespace end def Fusion
