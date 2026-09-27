#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/InflateManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Ionic/Zlib/zzzz__InflateManager_InflateManagerMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InflateManager)
namespace GlobalNamespace {
struct InflateManager_InflateManagerMode;
}
namespace Pathfinding::Ionic::Zlib {
struct FlushType;
}
namespace Pathfinding::Ionic::Zlib {
class InflateBlocks;
}
namespace Pathfinding::Ionic::Zlib {
class ZlibCodec;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zlib {
class InflateManager;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zlib::InflateManager*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zlib::InflateManager*, "Pathfinding.Ionic.Zlib", "InflateManager");
// Dependencies Pathfinding.Ionic.Zlib.InflateManager::InflateManagerMode, System.Object
namespace Pathfinding::Ionic::Zlib {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zlib.InflateManager
class CORDL_TYPE InflateManager : public ::System::Object {
public:
// Declarations
using InflateManagerMode = ::GlobalNamespace::InflateManager_InflateManagerMode;

 __declspec(property(get=get_HandleRfc1950HeaderBytes)) bool  HandleRfc1950HeaderBytes;

/// @brief Field _codec, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__codec, put=__cordl_internal_set__codec)) ::Pathfinding::Ionic::Zlib::ZlibCodec*  _codec;

/// @brief Field _handleRfc1950HeaderBytes, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__handleRfc1950HeaderBytes, put=__cordl_internal_set__handleRfc1950HeaderBytes)) bool  _handleRfc1950HeaderBytes;

/// @brief Field blocks, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_blocks, put=__cordl_internal_set_blocks)) ::Pathfinding::Ionic::Zlib::InflateBlocks*  blocks;

/// @brief Field computedCheck, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_computedCheck, put=__cordl_internal_set_computedCheck)) uint32_t  computedCheck;

/// @brief Field expectedCheck, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_expectedCheck, put=__cordl_internal_set_expectedCheck)) uint32_t  expectedCheck;

/// @brief Field mark, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_mark, put=setStaticF_mark)) ::ArrayW<uint8_t>  mark;

/// @brief Field marker, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_marker, put=__cordl_internal_set_marker)) int32_t  marker;

/// @brief Field method, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_method, put=__cordl_internal_set_method)) int32_t  method;

/// @brief Field mode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::InflateManager_InflateManagerMode  mode;

/// @brief Field wbits, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_wbits, put=__cordl_internal_set_wbits)) int32_t  wbits;

/// @brief Method End, addr 0xa6aa024, size 0x34, virtual false, abstract: false, final false
inline int32_t End() ;

/// @brief Method Inflate, addr 0xa6aa1f8, size 0x70c, virtual false, abstract: false, final false
inline int32_t Inflate(::Pathfinding::Ionic::Zlib::FlushType  flush) ;

/// @brief Method Initialize, addr 0xa6aa058, size 0x138, virtual false, abstract: false, final false
inline int32_t Initialize(::Pathfinding::Ionic::Zlib::ZlibCodec*  codec, int32_t  w) ;

static inline ::Pathfinding::Ionic::Zlib::InflateManager* New_ctor(bool  expectRfc1950HeaderBytes) ;

/// @brief Method Reset, addr 0xa6a9fcc, size 0x58, virtual false, abstract: false, final false
inline int32_t Reset() ;

constexpr ::Pathfinding::Ionic::Zlib::ZlibCodec* const& __cordl_internal_get__codec() const;

constexpr ::Pathfinding::Ionic::Zlib::ZlibCodec*& __cordl_internal_get__codec() ;

constexpr bool const& __cordl_internal_get__handleRfc1950HeaderBytes() const;

constexpr bool& __cordl_internal_get__handleRfc1950HeaderBytes() ;

constexpr ::Pathfinding::Ionic::Zlib::InflateBlocks* const& __cordl_internal_get_blocks() const;

constexpr ::Pathfinding::Ionic::Zlib::InflateBlocks*& __cordl_internal_get_blocks() ;

constexpr uint32_t const& __cordl_internal_get_computedCheck() const;

constexpr uint32_t& __cordl_internal_get_computedCheck() ;

constexpr uint32_t const& __cordl_internal_get_expectedCheck() const;

constexpr uint32_t& __cordl_internal_get_expectedCheck() ;

constexpr int32_t const& __cordl_internal_get_marker() const;

constexpr int32_t& __cordl_internal_get_marker() ;

constexpr int32_t const& __cordl_internal_get_method() const;

constexpr int32_t& __cordl_internal_get_method() ;

constexpr ::GlobalNamespace::InflateManager_InflateManagerMode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::InflateManager_InflateManagerMode& __cordl_internal_get_mode() ;

constexpr int32_t const& __cordl_internal_get_wbits() const;

constexpr int32_t& __cordl_internal_get_wbits() ;

constexpr void __cordl_internal_set__codec(::Pathfinding::Ionic::Zlib::ZlibCodec*  value) ;

constexpr void __cordl_internal_set__handleRfc1950HeaderBytes(bool  value) ;

constexpr void __cordl_internal_set_blocks(::Pathfinding::Ionic::Zlib::InflateBlocks*  value) ;

constexpr void __cordl_internal_set_computedCheck(uint32_t  value) ;

constexpr void __cordl_internal_set_expectedCheck(uint32_t  value) ;

constexpr void __cordl_internal_set_marker(int32_t  value) ;

constexpr void __cordl_internal_set_method(int32_t  value) ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::InflateManager_InflateManagerMode  value) ;

constexpr void __cordl_internal_set_wbits(int32_t  value) ;

/// @brief Method .ctor, addr 0xa6a9ef4, size 0x30, virtual false, abstract: false, final false
inline void _ctor(bool  expectRfc1950HeaderBytes) ;

static inline ::ArrayW<uint8_t> getStaticF_mark() ;

/// @brief Method get_HandleRfc1950HeaderBytes, addr 0xa6a9fc4, size 0x8, virtual false, abstract: false, final false
inline bool get_HandleRfc1950HeaderBytes() ;

static inline void setStaticF_mark(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InflateManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InflateManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InflateManager(InflateManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InflateManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InflateManager(InflateManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28189};

/// @brief Field mode, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::InflateManager_InflateManagerMode  ___mode;

/// @brief Field _codec, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zlib::ZlibCodec*  ____codec;

/// @brief Field method, offset: 0x20, size: 0x4, def value: None
 int32_t  ___method;

/// @brief Field computedCheck, offset: 0x24, size: 0x4, def value: None
 uint32_t  ___computedCheck;

/// @brief Field expectedCheck, offset: 0x28, size: 0x4, def value: None
 uint32_t  ___expectedCheck;

/// @brief Field marker, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___marker;

/// @brief Field _handleRfc1950HeaderBytes, offset: 0x30, size: 0x1, def value: None
 bool  ____handleRfc1950HeaderBytes;

/// @brief Field wbits, offset: 0x34, size: 0x4, def value: None
 int32_t  ___wbits;

/// @brief Field blocks, offset: 0x38, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zlib::InflateBlocks*  ___blocks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateManager, ___mode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateManager, ____codec) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateManager, ___method) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateManager, ___computedCheck) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateManager, ___expectedCheck) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateManager, ___marker) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateManager, ____handleRfc1950HeaderBytes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateManager, ___wbits) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::InflateManager, ___blocks) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zlib::InflateManager) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zlib
