#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRManager_ColorSpace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRManager_ColorSpace)
// Forward declare root types
namespace GlobalNamespace {
struct OVRManager_ColorSpace;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRManager_ColorSpace);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRManager_ColorSpace, "", "OVRManager/ColorSpace");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRManager/ColorSpace
struct CORDL_TYPE OVRManager_ColorSpace {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRManager_ColorSpace_Unwrapped
enum struct __OVRManager_ColorSpace_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Unmanaged = static_cast<int32_t>(0x1),
__E_Rec_2020 = static_cast<int32_t>(0x2),
__E_Rec_709 = static_cast<int32_t>(0x3),
__E_Rift_CV1 = static_cast<int32_t>(0x4),
__E_Rift_S = static_cast<int32_t>(0x5),
__E_Quest = static_cast<int32_t>(0x6),
__E_P3 = static_cast<int32_t>(0x7),
__E_Adobe_RGB = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRManager_ColorSpace_Unwrapped () const noexcept {
return static_cast<__OVRManager_ColorSpace_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRManager_ColorSpace() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRManager_ColorSpace(int32_t  value__) noexcept;

/// @brief Field Adobe_RGB value: I32(8)
static ::GlobalNamespace::OVRManager_ColorSpace const Adobe_RGB;

/// @brief Field P3 value: I32(7)
static ::GlobalNamespace::OVRManager_ColorSpace const P3;

/// @brief Field Quest value: I32(6)
static ::GlobalNamespace::OVRManager_ColorSpace const Quest;

/// @brief Field Rec_2020 value: I32(2)
static ::GlobalNamespace::OVRManager_ColorSpace const Rec_2020;

/// @brief Field Rec_709 value: I32(3)
static ::GlobalNamespace::OVRManager_ColorSpace const Rec_709;

/// @brief Field Rift_CV1 value: I32(4)
static ::GlobalNamespace::OVRManager_ColorSpace const Rift_CV1;

/// @brief Field Rift_S value: I32(5)
static ::GlobalNamespace::OVRManager_ColorSpace const Rift_S;

/// @brief Field Unknown value: I32(0)
static ::GlobalNamespace::OVRManager_ColorSpace const Unknown;

/// @brief Field Unmanaged value: I32(1)
static ::GlobalNamespace::OVRManager_ColorSpace const Unmanaged;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11980};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRManager_ColorSpace, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRManager_ColorSpace) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
