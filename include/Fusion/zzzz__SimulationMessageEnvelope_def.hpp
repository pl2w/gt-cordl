#pragma once
// IWYU pragma private; include "Fusion/SimulationMessageEnvelope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__INetBitWriteStream_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationMessageEnvelope)
namespace Fusion::Sockets {
struct NetBitBuffer;
}
namespace Fusion {
class ILogDumpable;
}
namespace Fusion {
struct SimulationMessage;
}
namespace Fusion {
class Simulation;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace Fusion {
struct SimulationMessageEnvelope;
}
// Write type traits
MARK_VAL_T(::Fusion::SimulationMessageEnvelope);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationMessageEnvelope, "Fusion", "SimulationMessageEnvelope");
// Dependencies Fusion.Sockets.INetBitWriteStream
namespace Fusion {
// Is value type: true
// CS Name: Fusion.SimulationMessageEnvelope
struct CORDL_TYPE SimulationMessageEnvelope {
public:
// Declarations
/// @brief Convert operator to "::Fusion::ILogDumpable"
constexpr operator  ::Fusion::ILogDumpable*() ;

/// @brief Method Allocate, addr 0x6006024, size 0x7c, virtual false, abstract: false, final false
static inline ::Fusion::SimulationMessageEnvelope* Allocate(::Fusion::Simulation*  sim, ::Fusion::SimulationMessage*  message, uint64_t  sequence) ;

/// @brief Method Free, addr 0x60060a0, size 0xdc, virtual false, abstract: false, final false
static inline void Free(::Fusion::Simulation*  sim, ::by_ref<::Fusion::SimulationMessageEnvelope*>  envelope) ;

/// @brief Method Fusion.ILogDumpable.Dump, addr 0x600635c, size 0x9c, virtual true, abstract: false, final true
inline void Fusion_ILogDumpable_Dump(::System::Text::StringBuilder*  builder) ;

/// @brief Method GetBitCount, addr 0x6005af8, size 0x6c, virtual false, abstract: false, final false
static inline int32_t GetBitCount(::Fusion::SimulationMessageEnvelope*  envelope, ::Fusion::Sockets::NetBitBuffer*  buffer) ;

/// @brief Method Read, addr 0x6005b64, size 0x4c0, virtual false, abstract: false, final false
static inline ::Fusion::SimulationMessageEnvelope* Read(::Fusion::Simulation*  sim, ::Fusion::Sockets::NetBitBuffer*  buffer) ;

/// @brief Method ToString, addr 0x600617c, size 0x1e0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Write, addr 0x600597c, size 0x17c, virtual false, abstract: false, final false
static inline void Write(::Fusion::SimulationMessageEnvelope*  envelope, ::Fusion::Sockets::NetBitBuffer*  buffer) ;

/// @brief Method WriteInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::Sockets::INetBitWriteStream*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline int32_t WriteInternal(::Fusion::SimulationMessageEnvelope*  envelope, T*  buffer) ;

/// @brief Convert to "::Fusion::ILogDumpable"
constexpr ::Fusion::ILogDumpable* i___Fusion__ILogDumpable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SimulationMessageEnvelope() ;

// Ctor Parameters [CppParam { name: "Sequence", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Message", ty: "::Fusion::SimulationMessage*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Prev", ty: "::Fusion::SimulationMessageEnvelope*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Next", ty: "::Fusion::SimulationMessageEnvelope*", modifiers: "", def_value: None, comment: None }]
constexpr SimulationMessageEnvelope(uint64_t  Sequence, ::Fusion::SimulationMessage*  Message, ::Fusion::SimulationMessageEnvelope*  Prev, ::Fusion::SimulationMessageEnvelope*  Next) noexcept;

/// @brief Field OffsetBlockSize offset 0xffffffff size 0x4
static constexpr int32_t  OffsetBlockSize{static_cast<int32_t>(0xa)};

/// @brief Field SequenceBlockSize offset 0xffffffff size 0x4
static constexpr int32_t  SequenceBlockSize{static_cast<int32_t>(0x10)};

/// @brief Field TickBlockSize offset 0xffffffff size 0x4
static constexpr int32_t  TickBlockSize{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19347};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Sequence, offset: 0x0, size: 0x8, def value: None
 uint64_t  Sequence;

/// @brief Field Message, offset: 0x8, size: 0x8, def value: None
 ::Fusion::SimulationMessage*  Message;

/// @brief Field Prev, offset: 0x10, size: 0x8, def value: None
 ::Fusion::SimulationMessageEnvelope*  Prev;

/// @brief Field Next, offset: 0x18, size: 0x8, def value: None
 ::Fusion::SimulationMessageEnvelope*  Next;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationMessageEnvelope, Sequence) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationMessageEnvelope, Message) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationMessageEnvelope, Prev) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::SimulationMessageEnvelope, Next) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationMessageEnvelope) == 0x20, "Size mismatch!");

} // namespace end def Fusion
