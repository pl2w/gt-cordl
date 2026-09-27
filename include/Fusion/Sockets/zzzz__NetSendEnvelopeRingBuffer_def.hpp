#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetSendEnvelopeRingBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetSendEnvelopeRingBuffer)
namespace Fusion::Sockets {
struct NetSendEnvelope;
}
// Forward declare root types
namespace Fusion::Sockets {
struct NetSendEnvelopeRingBuffer;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetSendEnvelopeRingBuffer);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetSendEnvelopeRingBuffer, "Fusion.Sockets", "NetSendEnvelopeRingBuffer");
// Dependencies 
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetSendEnvelopeRingBuffer
struct CORDL_TYPE NetSendEnvelopeRingBuffer {
public:
// Declarations
 __declspec(property(get=get_IsFull)) bool  IsFull;

/// @brief Method Create, addr 0x6033550, size 0x64, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetSendEnvelopeRingBuffer Create(int32_t  capacity) ;

/// @brief Method Dispose, addr 0x6033508, size 0x48, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method Peek, addr 0x6033468, size 0x54, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetSendEnvelope Peek() ;

/// @brief Method Pop, addr 0x60334bc, size 0x40, virtual false, abstract: false, final false
inline void Pop() ;

/// @brief Method Push, addr 0x60333d8, size 0x90, virtual false, abstract: false, final false
inline void Push(::Fusion::Sockets::NetSendEnvelope  envelope) ;

/// @brief Method Reset, addr 0x60334fc, size 0xc, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method get_IsFull, addr 0x60333c4, size 0x14, virtual false, abstract: false, final false
inline bool get_IsFull() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetSendEnvelopeRingBuffer() ;

// Ctor Parameters [CppParam { name: "_items", ty: "::Fusion::Sockets::NetSendEnvelope*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_itemsCapacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Head", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tail", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetSendEnvelopeRingBuffer(::Fusion::Sockets::NetSendEnvelope*  _items, int32_t  _itemsCapacity, int32_t  Head, int32_t  Tail, int32_t  Count) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29382};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _items, offset: 0x0, size: 0x8, def value: None
 ::Fusion::Sockets::NetSendEnvelope*  _items;

/// @brief Field _itemsCapacity, offset: 0x8, size: 0x4, def value: None
 int32_t  _itemsCapacity;

/// @brief Field Head, offset: 0xc, size: 0x4, def value: None
 int32_t  Head;

/// @brief Field Tail, offset: 0x10, size: 0x4, def value: None
 int32_t  Tail;

/// @brief Field Count, offset: 0x14, size: 0x4, def value: None
 int32_t  Count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetSendEnvelopeRingBuffer, _items) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetSendEnvelopeRingBuffer, _itemsCapacity) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetSendEnvelopeRingBuffer, Head) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetSendEnvelopeRingBuffer, Tail) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetSendEnvelopeRingBuffer, Count) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetSendEnvelopeRingBuffer) == 0x18, "Size mismatch!");

} // namespace end def Fusion::Sockets
