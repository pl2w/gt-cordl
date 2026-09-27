#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRFaceExpressions_FaceViseme.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRFaceExpressions_FaceViseme)
// Forward declare root types
namespace GlobalNamespace {
struct OVRFaceExpressions_FaceViseme;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRFaceExpressions_FaceViseme);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRFaceExpressions_FaceViseme, "", "OVRFaceExpressions/FaceViseme");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRFaceExpressions/FaceViseme
struct CORDL_TYPE OVRFaceExpressions_FaceViseme {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRFaceExpressions_FaceViseme_Unwrapped
enum struct __OVRFaceExpressions_FaceViseme_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0xffffffff),
__E_SIL = static_cast<int32_t>(0x0),
__E_PP = static_cast<int32_t>(0x1),
__E_FF = static_cast<int32_t>(0x2),
__E_TH = static_cast<int32_t>(0x3),
__E_DD = static_cast<int32_t>(0x4),
__E_KK = static_cast<int32_t>(0x5),
__E_CH = static_cast<int32_t>(0x6),
__E_SS = static_cast<int32_t>(0x7),
__E_NN = static_cast<int32_t>(0x8),
__E_RR = static_cast<int32_t>(0x9),
__E_AA = static_cast<int32_t>(0xa),
__E_E = static_cast<int32_t>(0xb),
__E_IH = static_cast<int32_t>(0xc),
__E_OH = static_cast<int32_t>(0xd),
__E_OU = static_cast<int32_t>(0xe),
__E_Count = static_cast<int32_t>(0xf),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRFaceExpressions_FaceViseme_Unwrapped () const noexcept {
return static_cast<__OVRFaceExpressions_FaceViseme_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRFaceExpressions_FaceViseme() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRFaceExpressions_FaceViseme(int32_t  value__) noexcept;

/// @brief Field AA value: I32(10)
static ::GlobalNamespace::OVRFaceExpressions_FaceViseme const AA;

/// @brief Field CH value: I32(6)
static ::GlobalNamespace::OVRFaceExpressions_FaceViseme const CH;

/// @brief Field Count value: I32(15)
static ::GlobalNamespace::OVRFaceExpressions_FaceViseme const Count;

/// @brief Field DD value: I32(4)
static ::GlobalNamespace::OVRFaceExpressions_FaceViseme const DD;

/// @brief Field E value: I32(11)
static ::GlobalNamespace::OVRFaceExpressions_FaceViseme const E;

/// @brief Field FF value: I32(2)
static ::GlobalNamespace::OVRFaceExpressions_FaceViseme const FF;

/// @brief Field IH value: I32(12)
static ::GlobalNamespace::OVRFaceExpressions_FaceViseme const IH;

/// @brief Field Invalid value: I32(-1)
static ::GlobalNamespace::OVRFaceExpressions_FaceViseme const Invalid;

/// @brief Field KK value: I32(5)
static ::GlobalNamespace::OVRFaceExpressions_FaceViseme const KK;

/// @brief Field NN value: I32(8)
static ::GlobalNamespace::OVRFaceExpressions_FaceViseme const NN;

/// @brief Field OH value: I32(13)
static ::GlobalNamespace::OVRFaceExpressions_FaceViseme const OH;

/// @brief Field OU value: I32(14)
static ::GlobalNamespace::OVRFaceExpressions_FaceViseme const OU;

/// @brief Field PP value: I32(1)
static ::GlobalNamespace::OVRFaceExpressions_FaceViseme const PP;

/// @brief Field RR value: I32(9)
static ::GlobalNamespace::OVRFaceExpressions_FaceViseme const RR;

/// @brief Field SIL value: I32(0)
static ::GlobalNamespace::OVRFaceExpressions_FaceViseme const SIL;

/// @brief Field SS value: I32(7)
static ::GlobalNamespace::OVRFaceExpressions_FaceViseme const SS;

/// @brief Field TH value: I32(3)
static ::GlobalNamespace::OVRFaceExpressions_FaceViseme const TH;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11891};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRFaceExpressions_FaceViseme, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRFaceExpressions_FaceViseme) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
