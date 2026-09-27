#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetSequencer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetSequencer)
// Forward declare root types
namespace Fusion::Sockets {
struct NetSequencer;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetSequencer);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetSequencer, "Fusion.Sockets", "NetSequencer");
// Dependencies 
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetSequencer
struct CORDL_TYPE NetSequencer {
public:
// Declarations
 __declspec(property(get=get_Sequence)) uint64_t  Sequence;

/// @brief Method Distance, addr 0x6033614, size 0x30, virtual false, abstract: false, final false
inline int32_t Distance(uint64_t  from, uint64_t  to) ;

/// @brief Method Next, addr 0x60335ec, size 0x18, virtual false, abstract: false, final false
inline uint64_t Next() ;

/// @brief Method NextAfter, addr 0x6033604, size 0x10, virtual false, abstract: false, final false
inline uint64_t NextAfter(uint64_t  sequence) ;

/// @brief Method Reset, addr 0x60335bc, size 0x8, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method .ctor, addr 0x60335c4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  bytes) ;

/// @brief Method get_Sequence, addr 0x60335b4, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_Sequence() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetSequencer() ;

// Ctor Parameters [CppParam { name: "_shift", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_bytes", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_mask", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_sequence", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr NetSequencer(int32_t  _shift, int32_t  _bytes, uint64_t  _mask, uint64_t  _sequence) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29383};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _shift, offset: 0x0, size: 0x4, def value: None
 int32_t  _shift;

/// @brief Field _bytes, offset: 0x4, size: 0x4, def value: None
 int32_t  _bytes;

/// @brief Field _mask, offset: 0x8, size: 0x8, def value: None
 uint64_t  _mask;

/// @brief Field _sequence, offset: 0x10, size: 0x8, def value: None
 uint64_t  _sequence;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetSequencer, _shift) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetSequencer, _bytes) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetSequencer, _mask) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetSequencer, _sequence) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetSequencer) == 0x18, "Size mismatch!");

} // namespace end def Fusion::Sockets
