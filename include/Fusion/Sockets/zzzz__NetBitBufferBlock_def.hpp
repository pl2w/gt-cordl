#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetBitBufferBlock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetBitBufferBlock)
namespace Fusion::Sockets {
struct NetBitBuffer;
}
// Forward declare root types
namespace Fusion::Sockets {
struct NetBitBufferBlock;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetBitBufferBlock);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetBitBufferBlock, "Fusion.Sockets", "NetBitBufferBlock");
// Dependencies System.IntPtr
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetBitBufferBlock
struct CORDL_TYPE NetBitBufferBlock {
public:
// Declarations
/// @brief Method Create, addr 0x6028ff0, size 0x58, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetBitBufferBlock* Create(int32_t  packetSize) ;

/// @brief Method Dispose, addr 0x6028f30, size 0xc0, virtual false, abstract: false, final false
static inline void Dispose(::by_ref<::Fusion::Sockets::NetBitBufferBlock*>  block) ;

/// @brief Method Release, addr 0x6027610, size 0x78, virtual false, abstract: false, final false
inline void Release(::Fusion::Sockets::NetBitBuffer*  ptr) ;

/// @brief Method TryAcquire, addr 0x6029048, size 0x18, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetBitBuffer* TryAcquire() ;

/// @brief Method TryAcquire, addr 0x6029060, size 0x130, virtual false, abstract: false, final false
inline bool TryAcquire(::by_ref<::Fusion::Sockets::NetBitBuffer*>  ptr) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetBitBufferBlock() ;

// Ctor Parameters [CppParam { name: "_packetSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_freeHead", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "_self", ty: "::Fusion::Sockets::NetBitBufferBlock*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_allocatedHead", ty: "::Fusion::Sockets::NetBitBuffer*", modifiers: "", def_value: None, comment: None }]
constexpr NetBitBufferBlock(int32_t  _packetSize, ::System::IntPtr  _freeHead, ::Fusion::Sockets::NetBitBufferBlock*  _self, ::Fusion::Sockets::NetBitBuffer*  _allocatedHead) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29340};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _packetSize, offset: 0x0, size: 0x4, def value: None
 int32_t  _packetSize;

/// @brief Field _freeHead, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  _freeHead;

/// @brief Field _self, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Sockets::NetBitBufferBlock*  _self;

/// @brief Field _allocatedHead, offset: 0x18, size: 0x8, def value: None
 ::Fusion::Sockets::NetBitBuffer*  _allocatedHead;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetBitBufferBlock, _packetSize) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetBitBufferBlock, _freeHead) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetBitBufferBlock, _self) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetBitBufferBlock, _allocatedHead) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetBitBufferBlock) == 0x20, "Size mismatch!");

} // namespace end def Fusion::Sockets
