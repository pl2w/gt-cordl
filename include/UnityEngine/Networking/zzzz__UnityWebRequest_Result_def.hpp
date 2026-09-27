#pragma once
// IWYU pragma private; include "UnityEngine/Networking/UnityWebRequest_Result.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityWebRequest_Result)
// Forward declare root types
namespace GlobalNamespace {
struct UnityWebRequest_Result;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnityWebRequest_Result);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityWebRequest_Result, "UnityEngine.Networking", "UnityWebRequest/Result");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Networking.UnityWebRequest/Result
struct CORDL_TYPE UnityWebRequest_Result {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UnityWebRequest_Result_Unwrapped
enum struct __UnityWebRequest_Result_Unwrapped : int32_t {
__E_InProgress = static_cast<int32_t>(0x0),
__E_Success = static_cast<int32_t>(0x1),
__E_ConnectionError = static_cast<int32_t>(0x2),
__E_ProtocolError = static_cast<int32_t>(0x3),
__E_DataProcessingError = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityWebRequest_Result_Unwrapped () const noexcept {
return static_cast<__UnityWebRequest_Result_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UnityWebRequest_Result() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UnityWebRequest_Result(int32_t  value__) noexcept;

/// @brief Field ConnectionError value: I32(2)
static ::GlobalNamespace::UnityWebRequest_Result const ConnectionError;

/// @brief Field DataProcessingError value: I32(4)
static ::GlobalNamespace::UnityWebRequest_Result const DataProcessingError;

/// @brief Field InProgress value: I32(0)
static ::GlobalNamespace::UnityWebRequest_Result const InProgress;

/// @brief Field ProtocolError value: I32(3)
static ::GlobalNamespace::UnityWebRequest_Result const ProtocolError;

/// @brief Field Success value: I32(1)
static ::GlobalNamespace::UnityWebRequest_Result const Success;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31723};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityWebRequest_Result, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityWebRequest_Result) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
