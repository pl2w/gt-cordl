#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetBitBuffer_Offset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetBitBuffer_Offset)
namespace Fusion::Sockets {
struct NetBitBuffer;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetBitBuffer_Offset;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetBitBuffer_Offset);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetBitBuffer_Offset, "Fusion.Sockets", "NetBitBuffer/Offset");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Sockets.NetBitBuffer/Offset
struct CORDL_TYPE NetBitBuffer_Offset {
public:
// Declarations
/// @brief Method GetLength, addr 0x6028f20, size 0x10, virtual false, abstract: false, final false
inline int32_t GetLength(::Fusion::Sockets::NetBitBuffer*  buffer) ;

/// @brief Method .ctor, addr 0x60273f0, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Sockets::NetBitBuffer*  buffer) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetBitBuffer_Offset() ;

// Ctor Parameters [CppParam { name: "_offset", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetBitBuffer_Offset(int32_t  _offset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29338};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field _offset, offset: 0x0, size: 0x4, def value: None
 int32_t  _offset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetBitBuffer_Offset, _offset) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetBitBuffer_Offset) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
