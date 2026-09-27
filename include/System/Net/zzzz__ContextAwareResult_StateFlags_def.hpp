#pragma once
// IWYU pragma private; include "System/Net/ContextAwareResult_StateFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContextAwareResult_StateFlags)
// Forward declare root types
namespace GlobalNamespace {
struct ContextAwareResult_StateFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ContextAwareResult_StateFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ContextAwareResult_StateFlags, "System.Net", "ContextAwareResult/StateFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.ContextAwareResult/StateFlags
struct CORDL_TYPE ContextAwareResult_StateFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __ContextAwareResult_StateFlags_Unwrapped
enum struct __ContextAwareResult_StateFlags_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_CaptureIdentity = static_cast<uint8_t>(0x1u),
__E_CaptureContext = static_cast<uint8_t>(0x2u),
__E_ThreadSafeContextCopy = static_cast<uint8_t>(0x4u),
__E_PostBlockStarted = static_cast<uint8_t>(0x8u),
__E_PostBlockFinished = static_cast<uint8_t>(0x10u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ContextAwareResult_StateFlags_Unwrapped () const noexcept {
return static_cast<__ContextAwareResult_StateFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ContextAwareResult_StateFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr ContextAwareResult_StateFlags(uint8_t  value__) noexcept;

/// @brief Field CaptureContext value: U8(2)
static ::GlobalNamespace::ContextAwareResult_StateFlags const CaptureContext;

/// @brief Field CaptureIdentity value: U8(1)
static ::GlobalNamespace::ContextAwareResult_StateFlags const CaptureIdentity;

/// @brief Field None value: U8(0)
static ::GlobalNamespace::ContextAwareResult_StateFlags const None;

/// @brief Field PostBlockFinished value: U8(16)
static ::GlobalNamespace::ContextAwareResult_StateFlags const PostBlockFinished;

/// @brief Field PostBlockStarted value: U8(8)
static ::GlobalNamespace::ContextAwareResult_StateFlags const PostBlockStarted;

/// @brief Field ThreadSafeContextCopy value: U8(4)
static ::GlobalNamespace::ContextAwareResult_StateFlags const ThreadSafeContextCopy;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10380};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ContextAwareResult_StateFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ContextAwareResult_StateFlags) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
