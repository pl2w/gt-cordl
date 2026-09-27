#pragma once
// IWYU pragma private; include "Ionic/Zlib/BlockState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BlockState)
// Forward declare root types
namespace Ionic::Zlib {
struct BlockState;
}
// Write type traits
MARK_VAL_T(::Ionic::Zlib::BlockState);
DEFINE_IL2CPP_CLASS(::Ionic::Zlib::BlockState, "Ionic.Zlib", "BlockState");
// Dependencies 
namespace Ionic::Zlib {
// Is value type: true
// CS Name: Ionic.Zlib.BlockState
struct CORDL_TYPE BlockState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BlockState_Unwrapped
enum struct __BlockState_Unwrapped : int32_t {
__E_NeedMore = static_cast<int32_t>(0x0),
__E_BlockDone = static_cast<int32_t>(0x1),
__E_FinishStarted = static_cast<int32_t>(0x2),
__E_FinishDone = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BlockState_Unwrapped () const noexcept {
return static_cast<__BlockState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BlockState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BlockState(int32_t  value__) noexcept;

/// @brief Field BlockDone value: I32(1)
static ::Ionic::Zlib::BlockState const BlockDone;

/// @brief Field FinishDone value: I32(3)
static ::Ionic::Zlib::BlockState const FinishDone;

/// @brief Field FinishStarted value: I32(2)
static ::Ionic::Zlib::BlockState const FinishStarted;

/// @brief Field NeedMore value: I32(0)
static ::Ionic::Zlib::BlockState const NeedMore;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19449};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Ionic::Zlib::BlockState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Ionic::Zlib::BlockState) == 0x4, "Size mismatch!");

} // namespace end def Ionic::Zlib
