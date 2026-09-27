#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRColocationSession_Result.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRColocationSession_Result)
// Forward declare root types
namespace GlobalNamespace {
struct OVRColocationSession_Result;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRColocationSession_Result);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRColocationSession_Result, "", "OVRColocationSession/Result");
// [OVRResultStatus]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRColocationSession/Result
struct CORDL_TYPE OVRColocationSession_Result {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRColocationSession_Result_Unwrapped
enum struct __OVRColocationSession_Result_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_AlreadyAdvertising = static_cast<int32_t>(0xbb9),
__E_AlreadyDiscovering = static_cast<int32_t>(0xbba),
__E_Failure = static_cast<int32_t>(0xfffffc18),
__E_Unsupported = static_cast<int32_t>(0xfffffc14),
__E_OperationFailed = static_cast<int32_t>(0xfffffc12),
__E_InvalidData = static_cast<int32_t>(0xfffffc10),
__E_NetworkFailed = static_cast<int32_t>(0xfffff446),
__E_NoDiscoveryMethodAvailable = static_cast<int32_t>(0xfffff445),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRColocationSession_Result_Unwrapped () const noexcept {
return static_cast<__OVRColocationSession_Result_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRColocationSession_Result() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRColocationSession_Result(int32_t  value__) noexcept;

/// @brief Field AlreadyAdvertising value: I32(3001)
static ::GlobalNamespace::OVRColocationSession_Result const AlreadyAdvertising;

/// @brief Field AlreadyDiscovering value: I32(3002)
static ::GlobalNamespace::OVRColocationSession_Result const AlreadyDiscovering;

/// @brief Field Failure value: I32(-1000)
static ::GlobalNamespace::OVRColocationSession_Result const Failure;

/// @brief Field InvalidData value: I32(-1008)
static ::GlobalNamespace::OVRColocationSession_Result const InvalidData;

/// @brief Field NetworkFailed value: I32(-3002)
static ::GlobalNamespace::OVRColocationSession_Result const NetworkFailed;

/// @brief Field NoDiscoveryMethodAvailable value: I32(-3003)
static ::GlobalNamespace::OVRColocationSession_Result const NoDiscoveryMethodAvailable;

/// @brief Field OperationFailed value: I32(-1006)
static ::GlobalNamespace::OVRColocationSession_Result const OperationFailed;

/// @brief Field Success value: I32(0)
static ::GlobalNamespace::OVRColocationSession_Result const Success;

/// @brief Field Unsupported value: I32(-1004)
static ::GlobalNamespace::OVRColocationSession_Result const Unsupported;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11874};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRColocationSession_Result, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRColocationSession_Result) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
