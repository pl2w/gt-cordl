#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonAnimatorView_ParameterType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonAnimatorView_ParameterType)
// Forward declare root types
namespace GlobalNamespace {
struct PhotonAnimatorView_ParameterType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PhotonAnimatorView_ParameterType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonAnimatorView_ParameterType, "Photon.Pun", "PhotonAnimatorView/ParameterType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Photon.Pun.PhotonAnimatorView/ParameterType
struct CORDL_TYPE PhotonAnimatorView_ParameterType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PhotonAnimatorView_ParameterType_Unwrapped
enum struct __PhotonAnimatorView_ParameterType_Unwrapped : int32_t {
__E_Float = static_cast<int32_t>(0x1),
__E_Int = static_cast<int32_t>(0x3),
__E_Bool = static_cast<int32_t>(0x4),
__E_Trigger = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PhotonAnimatorView_ParameterType_Unwrapped () const noexcept {
return static_cast<__PhotonAnimatorView_ParameterType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PhotonAnimatorView_ParameterType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PhotonAnimatorView_ParameterType(int32_t  value__) noexcept;

/// @brief Field Bool value: I32(4)
static ::GlobalNamespace::PhotonAnimatorView_ParameterType const Bool;

/// @brief Field Float value: I32(1)
static ::GlobalNamespace::PhotonAnimatorView_ParameterType const Float;

/// @brief Field Int value: I32(3)
static ::GlobalNamespace::PhotonAnimatorView_ParameterType const Int;

/// @brief Field Trigger value: I32(9)
static ::GlobalNamespace::PhotonAnimatorView_ParameterType const Trigger;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29723};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PhotonAnimatorView_ParameterType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PhotonAnimatorView_ParameterType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
