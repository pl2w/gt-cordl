#pragma once
// IWYU pragma private; include "Fusion/Allocator_Config.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__PageSizes_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Allocator_Config)
namespace Fusion {
struct PageSizes;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct Allocator_Config;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Allocator_Config);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Allocator_Config, "Fusion", "Allocator/Config");
// Dependencies Fusion.PageSizes
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Allocator/Config
struct CORDL_TYPE Allocator_Config {
public:
// Declarations
 __declspec(property(get=get_BlockByteSize)) int32_t  BlockByteSize;

/// @brief Field BlockCount, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_BlockCount, put=__cordl_internal_set_BlockCount)) int32_t  BlockCount;

/// @brief Field BlockShift, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_BlockShift, put=__cordl_internal_set_BlockShift)) int32_t  BlockShift;

 __declspec(property(get=get_BlockWordCount)) int32_t  BlockWordCount;

/// @brief Field GlobalsSize, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_GlobalsSize, put=__cordl_internal_set_GlobalsSize)) int32_t  GlobalsSize;

 __declspec(property(get=get_HeapSizeAllocated)) int32_t  HeapSizeAllocated;

 __declspec(property(get=get_HeapSizeUsable)) int32_t  HeapSizeUsable;

/// @brief Method Equals, addr 0x5f6fa38, size 0x88, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5f6fa10, size 0x28, virtual false, abstract: false, final false
inline bool Equals(::GlobalNamespace::Allocator_Config  other) ;

/// @brief Method GetHashCode, addr 0x5f6fac0, size 0x14, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x5f6fad4, size 0x338, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_BlockCount() const;

constexpr int32_t& __cordl_internal_get_BlockCount() ;

constexpr int32_t const& __cordl_internal_get_BlockShift() const;

constexpr int32_t& __cordl_internal_get_BlockShift() ;

constexpr int32_t const& __cordl_internal_get_GlobalsSize() const;

constexpr int32_t& __cordl_internal_get_GlobalsSize() ;

constexpr void __cordl_internal_set_BlockCount(int32_t  value) ;

constexpr void __cordl_internal_set_BlockShift(int32_t  value) ;

constexpr void __cordl_internal_set_GlobalsSize(int32_t  value) ;

/// @brief Method .ctor, addr 0x5f6f98c, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::Fusion::PageSizes  shift, int32_t  count, int32_t  globalsSize) ;

/// @brief Method get_BlockByteSize, addr 0x5f6c218, size 0x10, virtual false, abstract: false, final false
inline int32_t get_BlockByteSize() ;

/// @brief Method get_BlockWordCount, addr 0x5f6ed94, size 0x34, virtual false, abstract: false, final false
inline int32_t get_BlockWordCount() ;

/// @brief Method get_HeapSizeAllocated, addr 0x5f6edd4, size 0x10, virtual false, abstract: false, final false
inline int32_t get_HeapSizeAllocated() ;

/// @brief Method get_HeapSizeUsable, addr 0x5f6bce0, size 0xc, virtual false, abstract: false, final false
inline int32_t get_HeapSizeUsable() ;

// Ctor Parameters []
// @brief default ctor
constexpr Allocator_Config() ;

// Ctor Parameters [CppParam { name: "BlockShift", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "BlockCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "GlobalsSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Allocator_Config(int32_t  BlockShift, int32_t  BlockCount, int32_t  GlobalsSize) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___BlockShift_padding[0x0];
/// @brief Field BlockShift, offset: 0x0, size: 0x4, def value: None
 int32_t  ___BlockShift;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___BlockShift_padding_forAlignment[0x0];
/// @brief Field BlockShift, offset: 0x0, size: 0x4, def value: None
 int32_t  ___BlockShift_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___BlockCount_padding[0x4];
/// @brief Field BlockCount, offset: 0x4, size: 0x4, def value: None
 int32_t  ___BlockCount;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___BlockCount_padding_forAlignment[0x4];
/// @brief Field BlockCount, offset: 0x4, size: 0x4, def value: None
 int32_t  ___BlockCount_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___GlobalsSize_padding[0x8];
/// @brief Field GlobalsSize, offset: 0x8, size: 0x4, def value: None
 int32_t  ___GlobalsSize;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___GlobalsSize_padding_forAlignment[0x8];
/// @brief Field GlobalsSize, offset: 0x8, size: 0x4, def value: None
 int32_t  ___GlobalsSize_forAlignment;
};
};
public:

/// @brief Field DEFAULT_BLOCK_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  DEFAULT_BLOCK_COUNT{static_cast<int32_t>(0x100)};

/// @brief Field DEFAULT_BLOCK_SHIFT value: I32(15)
static ::Fusion::PageSizes const DEFAULT_BLOCK_SHIFT;

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0xc)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18791};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Allocator_Config) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
