#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/AtlasPadding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AtlasPadding)
// Forward declare root types
namespace DigitalOpus::MB::Core {
struct AtlasPadding;
}
// Write type traits
MARK_VAL_T(::DigitalOpus::MB::Core::AtlasPadding);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::AtlasPadding, "DigitalOpus.MB.Core", "AtlasPadding");
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.AtlasPadding
struct CORDL_TYPE AtlasPadding {
public:
// Declarations
/// @brief Method .ctor, addr 0x9dc0994, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  p) ;

/// @brief Method .ctor, addr 0x9dc099c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  px, int32_t  py) ;

// Ctor Parameters []
// @brief default ctor
constexpr AtlasPadding() ;

// Ctor Parameters [CppParam { name: "topBottom", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftRight", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AtlasPadding(int32_t  topBottom, int32_t  leftRight) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22751};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field topBottom, offset: 0x0, size: 0x4, def value: None
 int32_t  topBottom;

/// @brief Field leftRight, offset: 0x4, size: 0x4, def value: None
 int32_t  leftRight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::AtlasPadding, topBottom) == 0x0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::AtlasPadding, leftRight) == 0x4, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::AtlasPadding) == 0x8, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
