#pragma once
// IWYU pragma private; include "System/Net/FtpWebRequest_RequestStage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FtpWebRequest_RequestStage)
// Forward declare root types
namespace GlobalNamespace {
struct FtpWebRequest_RequestStage;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FtpWebRequest_RequestStage);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FtpWebRequest_RequestStage, "System.Net", "FtpWebRequest/RequestStage");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.FtpWebRequest/RequestStage
struct CORDL_TYPE FtpWebRequest_RequestStage {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FtpWebRequest_RequestStage_Unwrapped
enum struct __FtpWebRequest_RequestStage_Unwrapped : int32_t {
__E_CheckForError = static_cast<int32_t>(0x0),
__E_RequestStarted = static_cast<int32_t>(0x1),
__E_WriteReady = static_cast<int32_t>(0x2),
__E_ReadReady = static_cast<int32_t>(0x3),
__E_ReleaseConnection = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FtpWebRequest_RequestStage_Unwrapped () const noexcept {
return static_cast<__FtpWebRequest_RequestStage_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FtpWebRequest_RequestStage() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FtpWebRequest_RequestStage(int32_t  value__) noexcept;

/// @brief Field CheckForError value: I32(0)
static ::GlobalNamespace::FtpWebRequest_RequestStage const CheckForError;

/// @brief Field ReadReady value: I32(3)
static ::GlobalNamespace::FtpWebRequest_RequestStage const ReadReady;

/// @brief Field ReleaseConnection value: I32(4)
static ::GlobalNamespace::FtpWebRequest_RequestStage const ReleaseConnection;

/// @brief Field RequestStarted value: I32(1)
static ::GlobalNamespace::FtpWebRequest_RequestStage const RequestStarted;

/// @brief Field WriteReady value: I32(2)
static ::GlobalNamespace::FtpWebRequest_RequestStage const WriteReady;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10431};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FtpWebRequest_RequestStage, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FtpWebRequest_RequestStage) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
