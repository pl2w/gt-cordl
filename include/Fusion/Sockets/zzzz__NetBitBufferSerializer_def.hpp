#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetBitBufferSerializer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(NetBitBufferSerializer)
namespace Fusion::Sockets {
struct NetBitBuffer;
}
// Forward declare root types
namespace Fusion::Sockets {
struct NetBitBufferSerializer;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetBitBufferSerializer);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetBitBufferSerializer, "Fusion.Sockets", "NetBitBufferSerializer");
// Dependencies 
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetBitBufferSerializer
struct CORDL_TYPE NetBitBufferSerializer {
public:
// Declarations
 __declspec(property(get=get_Buffer)) ::Fusion::Sockets::NetBitBuffer*  Buffer;

 __declspec(property(get=get_Writing)) bool  Writing;

/// @brief Method Reader, addr 0x602952c, size 0xc, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetBitBufferSerializer Reader(::Fusion::Sockets::NetBitBuffer*  buffer) ;

/// @brief Method Writer, addr 0x6029520, size 0xc, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetBitBufferSerializer Writer(::Fusion::Sockets::NetBitBuffer*  buffer) ;

/// @brief Method .ctor, addr 0x6029514, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Sockets::NetBitBuffer*  buffer, bool  write) ;

/// @brief Method get_Buffer, addr 0x602950c, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetBitBuffer* get_Buffer() ;

/// @brief Method get_Writing, addr 0x6029504, size 0x8, virtual false, abstract: false, final false
inline bool get_Writing() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetBitBufferSerializer() ;

// Ctor Parameters [CppParam { name: "_write", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_buffer", ty: "::Fusion::Sockets::NetBitBuffer*", modifiers: "", def_value: None, comment: None }]
constexpr NetBitBufferSerializer(bool  _write, ::Fusion::Sockets::NetBitBuffer*  _buffer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29342};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _write, offset: 0x0, size: 0x1, def value: None
 bool  _write;

/// @brief Field _buffer, offset: 0x8, size: 0x8, def value: None
 ::Fusion::Sockets::NetBitBuffer*  _buffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetBitBufferSerializer, _write) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetBitBufferSerializer, _buffer) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetBitBufferSerializer) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Sockets
