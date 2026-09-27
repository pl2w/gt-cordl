#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConfigNotify.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetConfigNotify)
// Forward declare root types
namespace Fusion::Sockets {
struct NetConfigNotify;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetConfigNotify);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetConfigNotify, "Fusion.Sockets", "NetConfigNotify");
// Dependencies 
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetConfigNotify
struct CORDL_TYPE NetConfigNotify {
public:
// Declarations
 __declspec(property(get=get_AckMaskBits)) int32_t  AckMaskBits;

 __declspec(property(get=get_SequenceBounds)) int32_t  SequenceBounds;

/// @brief Method get_AckMaskBits, addr 0x6029f7c, size 0xc, virtual false, abstract: false, final false
inline int32_t get_AckMaskBits() ;

/// @brief Method get_Defaults, addr 0x6029ec8, size 0x28, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetConfigNotify get_Defaults() ;

/// @brief Method get_SequenceBounds, addr 0x6029f70, size 0xc, virtual false, abstract: false, final false
inline int32_t get_SequenceBounds() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetConfigNotify() ;

// Ctor Parameters [CppParam { name: "AckMaskBytes", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AckForceCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AckForceTimeout", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "WindowSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SequenceBytes", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetConfigNotify(int32_t  AckMaskBytes, int32_t  AckForceCount, double_t  AckForceTimeout, int32_t  WindowSize, int32_t  SequenceBytes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29354};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field AckMaskBytes, offset: 0x0, size: 0x4, def value: None
 int32_t  AckMaskBytes;

/// @brief Field AckForceCount, offset: 0x4, size: 0x4, def value: None
 int32_t  AckForceCount;

/// @brief Field AckForceTimeout, offset: 0x8, size: 0x8, def value: None
 double_t  AckForceTimeout;

/// @brief Field WindowSize, offset: 0x10, size: 0x4, def value: None
 int32_t  WindowSize;

/// @brief Field SequenceBytes, offset: 0x14, size: 0x4, def value: None
 int32_t  SequenceBytes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetConfigNotify, AckMaskBytes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfigNotify, AckForceCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfigNotify, AckForceTimeout) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfigNotify, WindowSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfigNotify, SequenceBytes) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetConfigNotify) == 0x18, "Size mismatch!");

} // namespace end def Fusion::Sockets
