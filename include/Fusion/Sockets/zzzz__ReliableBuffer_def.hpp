#pragma once
// IWYU pragma private; include "Fusion/Sockets/ReliableBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetSequencer_def.hpp"
#include "Fusion/Sockets/zzzz__ReliableList_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReliableBuffer)
namespace Fusion::Sockets {
struct NetBitBuffer;
}
namespace Fusion::Sockets {
struct ReliableId;
}
// Forward declare root types
namespace Fusion::Sockets {
struct ReliableBuffer;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::ReliableBuffer);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::ReliableBuffer, "Fusion.Sockets", "ReliableBuffer");
// Dependencies Fusion.Sockets.NetSequencer, Fusion.Sockets.ReliableList
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.ReliableBuffer
struct CORDL_TYPE ReliableBuffer {
public:
// Declarations
/// @brief Method Create, addr 0x6033644, size 0x24, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::ReliableBuffer Create() ;

/// @brief Method Dispose, addr 0x6033680, size 0x8, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method LateFree, addr 0x6033880, size 0xc, virtual false, abstract: false, final false
inline void LateFree(::by_ref<void*>  root) ;

/// @brief Method LateReceive, addr 0x6033724, size 0xc0, virtual false, abstract: false, final false
inline bool LateReceive(::by_ref<void*>  root, ::by_ref<::Fusion::Sockets::ReliableId>  id, ::by_ref<uint8_t*>  data) ;

/// @brief Method NextSendSequence, addr 0x6033668, size 0x18, virtual false, abstract: false, final false
inline uint64_t NextSendSequence() ;

/// @brief Method Receive, addr 0x603388c, size 0x248, virtual false, abstract: false, final false
inline bool Receive(::Fusion::Sockets::NetBitBuffer*  buffer, ::by_ref<::Fusion::Sockets::ReliableId>  rid) ;

// Ctor Parameters []
// @brief default ctor
constexpr ReliableBuffer() ;

// Ctor Parameters [CppParam { name: "_sequencer", ty: "::Fusion::Sockets::NetSequencer", modifiers: "", def_value: None, comment: None }, CppParam { name: "_receiveList", ty: "::Fusion::Sockets::ReliableList", modifiers: "", def_value: None, comment: None }, CppParam { name: "_receiveSequence", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr ReliableBuffer(::Fusion::Sockets::NetSequencer  _sequencer, ::Fusion::Sockets::ReliableList  _receiveList, uint64_t  _receiveSequence) noexcept;

/// @brief Field SEQ_BYTES offset 0xffffffff size 0x4
static constexpr int32_t  SEQ_BYTES{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29384};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field _sequencer, offset: 0x0, size: 0x18, def value: None
 ::Fusion::Sockets::NetSequencer  _sequencer;

/// @brief Field _receiveList, offset: 0x18, size: 0x18, def value: None
 ::Fusion::Sockets::ReliableList  _receiveList;

/// @brief Field _receiveSequence, offset: 0x30, size: 0x8, def value: None
 uint64_t  _receiveSequence;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::ReliableBuffer, _sequencer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::ReliableBuffer, _receiveList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::ReliableBuffer, _receiveSequence) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::ReliableBuffer) == 0x38, "Size mismatch!");

} // namespace end def Fusion::Sockets
