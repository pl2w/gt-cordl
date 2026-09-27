#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/InflateBlocks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Ionic/Zlib/zzzz__InflateBlocks_InflateBlockMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InflateBlocks)
namespace GlobalNamespace {
struct InflateBlocks_InflateBlockMode;
}
namespace Pathfinding::Ionic::Zlib {
class InfTree;
}
namespace Pathfinding::Ionic::Zlib {
class InflateCodes;
}
namespace Pathfinding::Ionic::Zlib {
class ZlibCodec;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zlib {
class InflateBlocks;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zlib::InflateBlocks*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zlib::InflateBlocks*, "Pathfinding.Ionic.Zlib", "InflateBlocks");
// Dependencies Pathfinding.Ionic.Zlib.InflateBlocks::InflateBlockMode, System.Object
namespace Pathfinding::Ionic::Zlib {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zlib.InflateBlocks
class CORDL_TYPE InflateBlocks : public ::System::Object {
public:
// Declarations
using InflateBlockMode = ::GlobalNamespace::InflateBlocks_InflateBlockMode;

/// @brief Field _codec, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__codec, put=__cordl_internal_set__codec)) ::Pathfinding::Ionic::Zlib::ZlibCodec*  _codec;

/// @brief Field bb, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_bb, put=__cordl_internal_set_bb)) ::ArrayW<int32_t>  bb;

/// @brief Field bitb, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_bitb, put=__cordl_internal_set_bitb)) int32_t  bitb;

/// @brief Field bitk, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_bitk, put=__cordl_internal_set_bitk)) int32_t  bitk;

/// @brief Field blens, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_blens, put=__cordl_internal_set_blens)) ::ArrayW<int32_t>  blens;

/// @brief Field border, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_border, put=setStaticF_border)) ::ArrayW<int32_t>  border;

/// @brief Field check, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_check, put=__cordl_internal_set_check)) uint32_t  check;

/// @brief Field checkfn, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_checkfn, put=__cordl_internal_set_checkfn)) ::System::Object*  checkfn;

/// @brief Field codes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_codes, put=__cordl_internal_set_codes)) ::Pathfinding::Ionic::Zlib::InflateCodes*  codes;

/// @brief Field end, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_end, put=__cordl_internal_set_end)) int32_t  end;

/// @brief Field hufts, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_hufts, put=__cordl_internal_set_hufts)) ::ArrayW<int32_t>  hufts;

/// @brief Field index, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field inftree, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_inftree, put=__cordl_internal_set_inftree)) ::Pathfinding::Ionic::Zlib::InfTree*  inftree;

/// @brief Field last, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_last, put=__cordl_internal_set_last)) int32_t  last;

/// @brief Field left, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_left, put=__cordl_internal_set_left)) int32_t  left;

/// @brief Field mode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::InflateBlocks_InflateBlockMode  mode;

/// @brief Field readAt, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_readAt, put=__cordl_internal_set_readAt)) int32_t  readAt;

/// @brief Field table, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_table, put=__cordl_internal_set_table)) int32_t  table;

/// @brief Field tb, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_tb, put=__cordl_internal_set_tb)) ::ArrayW<int32_t>  tb;

/// @brief Field window, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_window, put=__cordl_internal_set_window)) ::ArrayW<uint8_t>  window;

/// @brief Field writeAt, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_writeAt, put=__cordl_internal_set_writeAt)) int32_t  writeAt;

/// @brief Method Flush, addr 0xa6a883c, size 0x1a0, virtual false, abstract: false, final false
inline int32_t Flush(int32_t  r) ;

/// @brief Method Free, addr 0xa6a94d0, size 0x30, virtual false, abstract: false, final false
inline void Free() ;

static inline ::Pathfinding::Ionic::Zlib::InflateBlocks* New_ctor(::Pathfinding::Ionic::Zlib::ZlibCodec*  codec, ::System::Object*  checkfn, int32_t  w) ;

/// @brief Method Process, addr 0xa6a78bc, size 0xf80, virtual false, abstract: false, final false
inline int32_t Process(int32_t  r) ;

/// @brief Method Reset, addr 0xa6a7780, size 0x9c, virtual false, abstract: false, final false
inline uint32_t Reset() ;

constexpr ::Pathfinding::Ionic::Zlib::ZlibCodec* const& __cordl_internal_get__codec() const;

constexpr ::Pathfinding::Ionic::Zlib::ZlibCodec*& __cordl_internal_get__codec() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_bb() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_bb() ;

constexpr int32_t const& __cordl_internal_get_bitb() const;

constexpr int32_t& __cordl_internal_get_bitb() ;

constexpr int32_t const& __cordl_internal_get_bitk() const;

constexpr int32_t& __cordl_internal_get_bitk() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_blens() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_blens() ;

constexpr uint32_t const& __cordl_internal_get_check() const;

constexpr uint32_t& __cordl_internal_get_check() ;

constexpr ::System::Object* const& __cordl_internal_get_checkfn() const;

constexpr ::System::Object*& __cordl_internal_get_checkfn() ;

constexpr ::Pathfinding::Ionic::Zlib::InflateCodes* const& __cordl_internal_get_codes() const;

constexpr ::Pathfinding::Ionic::Zlib::InflateCodes*& __cordl_internal_get_codes() ;

constexpr int32_t const& __cordl_internal_get_end() const;

constexpr int32_t& __cordl_internal_get_end() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_hufts() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_hufts() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr ::Pathfinding::Ionic::Zlib::InfTree* const& __cordl_internal_get_inftree() const;

constexpr ::Pathfinding::Ionic::Zlib::InfTree*& __cordl_internal_get_inftree() ;

constexpr int32_t const& __cordl_internal_get_last() const;

constexpr int32_t& __cordl_internal_get_last() ;

constexpr int32_t const& __cordl_internal_get_left() const;

constexpr int32_t& __cordl_internal_get_left() ;

constexpr ::GlobalNamespace::InflateBlocks_InflateBlockMode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::InflateBlocks_InflateBlockMode& __cordl_internal_get_mode() ;

constexpr int32_t const& __cordl_internal_get_readAt() const;

constexpr int32_t& __cordl_internal_get_readAt() ;

constexpr int32_t const& __cordl_internal_get_table() const;

constexpr int32_t& __cordl_internal_get_table() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_tb() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_tb() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_window() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_window() ;

constexpr int32_t const& __cordl_internal_get_writeAt() const;

constexpr int32_t& __cordl_internal_get_writeAt() ;

constexpr void __cordl_internal_set__codec(::Pathfinding::Ionic::Zlib::ZlibCodec*  value) ;

constexpr void __cordl_internal_set_bb(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_bitb(int32_t  value) ;

constexpr void __cordl_internal_set_bitk(int32_t  value) ;

constexpr void __cordl_internal_set_blens(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_check(uint32_t  value) ;

constexpr void __cordl_internal_set_checkfn(::System::Object*  value) ;

constexpr void __cordl_internal_set_codes(::Pathfinding::Ionic::Zlib::InflateCodes*  value) ;

constexpr void __cordl_internal_set_end(int32_t  value) ;

constexpr void __cordl_internal_set_hufts(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_inftree(::Pathfinding::Ionic::Zlib::InfTree*  value) ;

constexpr void __cordl_internal_set_last(int32_t  value) ;

constexpr void __cordl_internal_set_left(int32_t  value) ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::InflateBlocks_InflateBlockMode  value) ;

constexpr void __cordl_internal_set_readAt(int32_t  value) ;

constexpr void __cordl_internal_set_table(int32_t  value) ;

constexpr void __cordl_internal_set_tb(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_window(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_writeAt(int32_t  value) ;

/// @brief Method .ctor, addr 0xa6a75e8, size 0x190, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::Ionic::Zlib::ZlibCodec*  codec, ::System::Object*  checkfn, int32_t  w) ;

static inline ::ArrayW<int32_t> getStaticF_border() ;

static inline void setStaticF_border(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InflateBlocks() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InflateBlocks", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InflateBlocks(InflateBlocks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InflateBlocks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InflateBlocks(InflateBlocks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28185};

/// @brief Field mode, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::InflateBlocks_InflateBlockMode  ___mode;

/// @brief Field left, offset: 0x14, size: 0x4, def value: None
 int32_t  ___left;

/// @brief Field table, offset: 0x18, size: 0x4, def value: None
 int32_t  ___table;

/// @brief Field index, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field blens, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___blens;

/// @brief Field bb, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___bb;

/// @brief Field tb, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___tb;

/// @brief Field codes, offset: 0x38, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zlib::InflateCodes*  ___codes;

/// @brief Field last, offset: 0x40, size: 0x4, def value: None
 int32_t  ___last;

/// @brief Field _codec, offset: 0x48, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zlib::ZlibCodec*  ____codec;

/// @brief Field bitk, offset: 0x50, size: 0x4, def value: None
 int32_t  ___bitk;

/// @brief Field bitb, offset: 0x54, size: 0x4, def value: None
 int32_t  ___bitb;

/// @brief Field hufts, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___hufts;

/// @brief Field window, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___window;

/// @brief Field end, offset: 0x68, size: 0x4, def value: None
 int32_t  ___end;

/// @brief Field readAt, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___readAt;

/// @brief Field writeAt, offset: 0x70, size: 0x4, def value: None
 int32_t  ___writeAt;

/// @brief Field checkfn, offset: 0x78, size: 0x8, def value: None
 ::System::Object*  ___checkfn;

/// @brief Field check, offset: 0x80, size: 0x4, def value: None
 uint32_t  ___check;

/// @brief Field inftree, offset: 0x88, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zlib::InfTree*  ___inftree;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateBlocks, ___mode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateBlocks, ___left) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateBlocks, ___table) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateBlocks, ___index) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateBlocks, ___blens) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateBlocks, ___bb) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateBlocks, ___tb) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateBlocks, ___codes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateBlocks, ___last) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateBlocks, ____codec) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateBlocks, ___bitk) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateBlocks, ___bitb) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateBlocks, ___hufts) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateBlocks, ___window) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateBlocks, ___end) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateBlocks, ___readAt) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateBlocks, ___writeAt) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateBlocks, ___checkfn) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateBlocks, ___check) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateBlocks, ___inftree) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zlib::InflateBlocks) == 0x90, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zlib
