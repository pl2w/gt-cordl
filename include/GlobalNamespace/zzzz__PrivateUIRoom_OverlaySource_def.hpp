#pragma once
// IWYU pragma private; include "GlobalNamespace/PrivateUIRoom_OverlaySource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PrivateUIRoom_OverlaySource)
// Forward declare root types
namespace GlobalNamespace {
struct PrivateUIRoom_OverlaySource;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PrivateUIRoom_OverlaySource);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PrivateUIRoom_OverlaySource, "", "PrivateUIRoom/OverlaySource");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PrivateUIRoom/OverlaySource
struct CORDL_TYPE PrivateUIRoom_OverlaySource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PrivateUIRoom_OverlaySource_Unwrapped
enum struct __PrivateUIRoom_OverlaySource_Unwrapped : int32_t {
__E_KID = static_cast<int32_t>(0x1),
__E_ModIO = static_cast<int32_t>(0x2),
__E_CustomMap = static_cast<int32_t>(0x4),
__E_AlarmClock = static_cast<int32_t>(0x8),
__E_VStumpConsent = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PrivateUIRoom_OverlaySource_Unwrapped () const noexcept {
return static_cast<__PrivateUIRoom_OverlaySource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PrivateUIRoom_OverlaySource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PrivateUIRoom_OverlaySource(int32_t  value__) noexcept;

/// @brief Field AlarmClock value: I32(8)
static ::GlobalNamespace::PrivateUIRoom_OverlaySource const AlarmClock;

/// @brief Field CustomMap value: I32(4)
static ::GlobalNamespace::PrivateUIRoom_OverlaySource const CustomMap;

/// @brief Field KID value: I32(1)
static ::GlobalNamespace::PrivateUIRoom_OverlaySource const KID;

/// @brief Field ModIO value: I32(2)
static ::GlobalNamespace::PrivateUIRoom_OverlaySource const ModIO;

/// @brief Field VStumpConsent value: I32(16)
static ::GlobalNamespace::PrivateUIRoom_OverlaySource const VStumpConsent;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1190};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PrivateUIRoom_OverlaySource, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PrivateUIRoom_OverlaySource) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
