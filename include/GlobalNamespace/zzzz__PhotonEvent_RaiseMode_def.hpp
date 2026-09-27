#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonEvent_RaiseMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonEvent_RaiseMode)
// Forward declare root types
namespace GlobalNamespace {
struct PhotonEvent_RaiseMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PhotonEvent_RaiseMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonEvent_RaiseMode, "", "PhotonEvent/RaiseMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PhotonEvent/RaiseMode
struct CORDL_TYPE PhotonEvent_RaiseMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PhotonEvent_RaiseMode_Unwrapped
enum struct __PhotonEvent_RaiseMode_Unwrapped : int32_t {
__E_Local = static_cast<int32_t>(0x0),
__E_RemoteOthers = static_cast<int32_t>(0x1),
__E_RemoteAll = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PhotonEvent_RaiseMode_Unwrapped () const noexcept {
return static_cast<__PhotonEvent_RaiseMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PhotonEvent_RaiseMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PhotonEvent_RaiseMode(int32_t  value__) noexcept;

/// @brief Field Local value: I32(0)
static ::GlobalNamespace::PhotonEvent_RaiseMode const Local;

/// @brief Field RemoteAll value: I32(2)
static ::GlobalNamespace::PhotonEvent_RaiseMode const RemoteAll;

/// @brief Field RemoteOthers value: I32(1)
static ::GlobalNamespace::PhotonEvent_RaiseMode const RemoteOthers;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3315};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotonEvent_RaiseMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotonEvent_RaiseMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
