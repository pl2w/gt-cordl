#pragma once
// IWYU pragma private; include "GlobalNamespace/GTBitOps.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GTBitOps)
namespace GlobalNamespace {
struct GTBitOps_BitWriteInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class GTBitOps;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTBitOps*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTBitOps*, "", "GTBitOps");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTBitOps
class CORDL_TYPE GTBitOps : public ::System::Object {
public:
// Declarations
using BitWriteInfo = ::GlobalNamespace::GTBitOps_BitWriteInfo;

/// @brief Method GetClearMask, addr 0x5675f44, size 0xc, virtual false, abstract: false, final false
static inline int32_t GetClearMask(int32_t  index, int32_t  valueMask) ;

/// @brief Method GetClearMaskByCount, addr 0x5675f50, size 0x18, virtual false, abstract: false, final false
static inline int32_t GetClearMaskByCount(int32_t  index, int32_t  count) ;

/// @brief Method GetValueMask, addr 0x5675f34, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetValueMask(int32_t  count) ;

/// @brief Method ReadBit, addr 0x5675f98, size 0xc, virtual false, abstract: false, final false
static inline bool ReadBit(int32_t  bits, int32_t  index) ;

/// @brief Method ReadBits, addr 0x5675f68, size 0xc, virtual false, abstract: false, final false
static inline int32_t ReadBits(int32_t  bits, int32_t  index, int32_t  valueMask) ;

/// @brief Method ReadBits, addr 0x5675f74, size 0x10, virtual false, abstract: false, final false
static inline int32_t ReadBits(int32_t  bits, ::GlobalNamespace::GTBitOps_BitWriteInfo  info) ;

/// @brief Method ReadBitsByCount, addr 0x5675f84, size 0x14, virtual false, abstract: false, final false
static inline int32_t ReadBitsByCount(int32_t  bits, int32_t  index, int32_t  count) ;

/// @brief Method ToBinaryString, addr 0x567609c, size 0x74, virtual false, abstract: false, final false
static inline ::StringW ToBinaryString(int32_t  number) ;

/// @brief Method WriteBit, addr 0x5676080, size 0x1c, virtual false, abstract: false, final false
static inline int32_t WriteBit(int32_t  bits, int32_t  index, bool  value) ;

/// @brief Method WriteBit, addr 0x567605c, size 0x24, virtual false, abstract: false, final false
static inline void WriteBit(::by_ref<int32_t>  bits, int32_t  index, bool  value) ;

/// @brief Method WriteBits, addr 0x5675ff8, size 0x14, virtual false, abstract: false, final false
static inline int32_t WriteBits(int32_t  bits, int32_t  index, int32_t  valueMask, int32_t  clearMask, int32_t  value) ;

/// @brief Method WriteBits, addr 0x5675fc4, size 0x18, virtual false, abstract: false, final false
static inline int32_t WriteBits(int32_t  bits, ::GlobalNamespace::GTBitOps_BitWriteInfo  info, int32_t  value) ;

/// @brief Method WriteBits, addr 0x5675fdc, size 0x1c, virtual false, abstract: false, final false
static inline void WriteBits(::by_ref<int32_t>  bits, int32_t  index, int32_t  valueMask, int32_t  clearMask, int32_t  value) ;

/// @brief Method WriteBits, addr 0x5675fa4, size 0x20, virtual false, abstract: false, final false
static inline void WriteBits(::by_ref<int32_t>  bits, ::GlobalNamespace::GTBitOps_BitWriteInfo  info, int32_t  value) ;

/// @brief Method WriteBitsByCount, addr 0x5676038, size 0x24, virtual false, abstract: false, final false
static inline int32_t WriteBitsByCount(int32_t  bits, int32_t  index, int32_t  count, int32_t  value) ;

/// @brief Method WriteBitsByCount, addr 0x567600c, size 0x2c, virtual false, abstract: false, final false
static inline void WriteBitsByCount(::by_ref<int32_t>  bits, int32_t  index, int32_t  count, int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTBitOps() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTBitOps", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTBitOps(GTBitOps && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTBitOps", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTBitOps(GTBitOps const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{840};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GTBitOps) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
