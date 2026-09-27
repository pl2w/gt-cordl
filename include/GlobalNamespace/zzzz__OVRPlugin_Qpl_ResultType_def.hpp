#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Qpl_ResultType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_Qpl_ResultType)
// Forward declare root types
namespace GlobalNamespace {
struct Qpl_OVRPlugin_ResultType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Qpl_OVRPlugin_ResultType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Qpl_OVRPlugin_ResultType, "", "OVRPlugin/Qpl/ResultType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Qpl/ResultType
struct CORDL_TYPE Qpl_OVRPlugin_ResultType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int16_t;

/// @brief Nested struct __Qpl_OVRPlugin_ResultType_Unwrapped
enum struct __Qpl_OVRPlugin_ResultType_Unwrapped : int16_t {
__E_Success = static_cast<int16_t>(0x2),
__E_Fail = static_cast<int16_t>(0x3),
__E_Cancel = static_cast<int16_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Qpl_OVRPlugin_ResultType_Unwrapped () const noexcept {
return static_cast<__Qpl_OVRPlugin_ResultType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int16_t () const noexcept {
return static_cast<int16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Qpl_OVRPlugin_ResultType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None, comment: None }]
constexpr Qpl_OVRPlugin_ResultType(int16_t  value__) noexcept;

/// @brief Field Cancel value: I16(4)
static ::GlobalNamespace::Qpl_OVRPlugin_ResultType const Cancel;

/// @brief Field Fail value: I16(3)
static ::GlobalNamespace::Qpl_OVRPlugin_ResultType const Fail;

/// @brief Field Success value: I16(2)
static ::GlobalNamespace::Qpl_OVRPlugin_ResultType const Success;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12264};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x0, size: 0x2, def value: None
 int16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Qpl_OVRPlugin_ResultType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Qpl_OVRPlugin_ResultType) == 0x2, "Size mismatch!");

} // namespace end def GlobalNamespace
