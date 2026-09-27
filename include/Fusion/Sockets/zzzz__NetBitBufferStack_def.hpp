#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetBitBufferStack.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetBitBufferStack)
namespace Fusion::Sockets {
struct NetBitBuffer;
}
// Forward declare root types
namespace Fusion::Sockets {
struct NetBitBufferStack;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetBitBufferStack);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetBitBufferStack, "Fusion.Sockets", "NetBitBufferStack");
// Dependencies 
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetBitBufferStack
struct CORDL_TYPE NetBitBufferStack {
public:
// Declarations
/// @brief Method Create, addr 0x602958c, size 0x60, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetBitBufferStack Create(int32_t  capacity) ;

/// @brief Method Dispose, addr 0x60295ec, size 0x54, virtual false, abstract: false, final false
static inline void Dispose(::by_ref<::Fusion::Sockets::NetBitBufferStack>  stack) ;

/// @brief Method PushFromHead, addr 0x6029640, size 0x1c0, virtual false, abstract: false, final false
inline void PushFromHead(::Fusion::Sockets::NetBitBuffer*  head) ;

/// @brief Method TryPop, addr 0x6029538, size 0x54, virtual false, abstract: false, final false
inline bool TryPop(::Fusion::Sockets::NetBitBuffer*  result) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetBitBufferStack() ;

// Ctor Parameters [CppParam { name: "_capacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Stack", ty: "::Fusion::Sockets::NetBitBuffer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetBitBufferStack(int32_t  _capacity, ::Fusion::Sockets::NetBitBuffer*  Stack, int32_t  Count) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29343};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _capacity, offset: 0x0, size: 0x4, def value: None
 int32_t  _capacity;

/// @brief Field Stack, offset: 0x8, size: 0x8, def value: None
 ::Fusion::Sockets::NetBitBuffer*  Stack;

/// @brief Field Count, offset: 0x10, size: 0x4, def value: None
 int32_t  Count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetBitBufferStack, _capacity) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetBitBufferStack, Stack) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetBitBufferStack, Count) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetBitBufferStack) == 0x18, "Size mismatch!");

} // namespace end def Fusion::Sockets
