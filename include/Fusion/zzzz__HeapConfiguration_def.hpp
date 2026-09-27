#pragma once
// IWYU pragma private; include "Fusion/HeapConfiguration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__PageSizes_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HeapConfiguration)
namespace GlobalNamespace {
struct Allocator_Config;
}
// Forward declare root types
namespace Fusion {
class HeapConfiguration;
}
// Write type traits
MARK_REF_T(::Fusion::HeapConfiguration*);
DEFINE_IL2CPP_CLASS(::Fusion::HeapConfiguration*, "Fusion", "HeapConfiguration");
// Dependencies Fusion.PageSizes, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.HeapConfiguration
class CORDL_TYPE HeapConfiguration : public ::System::Object {
public:
// Declarations
/// @brief Field GlobalsSize, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_GlobalsSize, put=__cordl_internal_set_GlobalsSize)) int32_t  GlobalsSize;

/// @brief Field PageCount, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_PageCount, put=__cordl_internal_set_PageCount)) int32_t  PageCount;

/// @brief Field PageShift, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_PageShift, put=__cordl_internal_set_PageShift)) ::Fusion::PageSizes  PageShift;

/// @brief Method Init, addr 0x6001c90, size 0x8c, virtual false, abstract: false, final false
inline ::Fusion::HeapConfiguration* Init(int32_t  globalsSize) ;

static inline ::Fusion::HeapConfiguration* New_ctor() ;

/// @brief Method ToAllocatorConfig, addr 0x6001c38, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::Allocator_Config ToAllocatorConfig() ;

/// @brief Method ToString, addr 0x6001d1c, size 0xcc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_GlobalsSize() const;

constexpr int32_t& __cordl_internal_get_GlobalsSize() ;

constexpr int32_t const& __cordl_internal_get_PageCount() const;

constexpr int32_t& __cordl_internal_get_PageCount() ;

constexpr ::Fusion::PageSizes const& __cordl_internal_get_PageShift() const;

constexpr ::Fusion::PageSizes& __cordl_internal_get_PageShift() ;

constexpr void __cordl_internal_set_GlobalsSize(int32_t  value) ;

constexpr void __cordl_internal_set_PageCount(int32_t  value) ;

constexpr void __cordl_internal_set_PageShift(::Fusion::PageSizes  value) ;

/// @brief Method .ctor, addr 0x6001de8, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HeapConfiguration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HeapConfiguration", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HeapConfiguration(HeapConfiguration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HeapConfiguration", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HeapConfiguration(HeapConfiguration const& ) = delete;

/// @brief Field PageCountMax offset 0xffffffff size 0x4
static constexpr int32_t  PageCountMax{static_cast<int32_t>(0x1000)};

/// @brief Field PageCountMin offset 0xffffffff size 0x4
static constexpr int32_t  PageCountMin{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19334};

/// [InlineHelp]
/// @brief Field PageShift, offset: 0x10, size: 0x4, def value: None
 ::Fusion::PageSizes  ___PageShift;

/// [InlineHelp]
/// [Range(16, 4096)]
/// @brief Field PageCount, offset: 0x14, size: 0x4, def value: None
 int32_t  ___PageCount;

/// [InlineHelp]
/// [HideInInspector]
/// @brief Field GlobalsSize, offset: 0x18, size: 0x4, def value: None
 int32_t  ___GlobalsSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::HeapConfiguration, ___PageShift) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::HeapConfiguration, ___PageCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::HeapConfiguration, ___GlobalsSize) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::HeapConfiguration) == 0x20, "Size mismatch!");

} // namespace end def Fusion
