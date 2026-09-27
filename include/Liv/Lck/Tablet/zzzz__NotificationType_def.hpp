#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/NotificationType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NotificationType)
// Forward declare root types
namespace Liv::Lck::Tablet {
struct NotificationType;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::Tablet::NotificationType);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Tablet::NotificationType, "Liv.Lck.Tablet", "NotificationType");
// Dependencies 
namespace Liv::Lck::Tablet {
// Is value type: true
// CS Name: Liv.Lck.Tablet.NotificationType
struct CORDL_TYPE NotificationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NotificationType_Unwrapped
enum struct __NotificationType_Unwrapped : int32_t {
__E_VideoSaved = static_cast<int32_t>(0x0),
__E_PhotoSaved = static_cast<int32_t>(0x1),
__E_EnterStreamCode = static_cast<int32_t>(0x2),
__E_ConfigureStream = static_cast<int32_t>(0x3),
__E_InternalError = static_cast<int32_t>(0x4),
__E_MissingTrackingId = static_cast<int32_t>(0x5),
__E_InvalidTrackingId = static_cast<int32_t>(0x6),
__E_InvalidArgument = static_cast<int32_t>(0x7),
__E_UnknownStreamingError = static_cast<int32_t>(0x8),
__E_ServiceUnavailable = static_cast<int32_t>(0x9),
__E_RateLimiterBackoff = static_cast<int32_t>(0xa),
__E_EchoInfo = static_cast<int32_t>(0xb),
__E_EchoLowStorage = static_cast<int32_t>(0xc),
__E_EchoError = static_cast<int32_t>(0xd),
__E_HeadsetView = static_cast<int32_t>(0xe),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NotificationType_Unwrapped () const noexcept {
return static_cast<__NotificationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NotificationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NotificationType(int32_t  value__) noexcept;

/// @brief Field ConfigureStream value: I32(3)
static ::Liv::Lck::Tablet::NotificationType const ConfigureStream;

/// @brief Field EchoError value: I32(13)
static ::Liv::Lck::Tablet::NotificationType const EchoError;

/// @brief Field EchoInfo value: I32(11)
static ::Liv::Lck::Tablet::NotificationType const EchoInfo;

/// @brief Field EchoLowStorage value: I32(12)
static ::Liv::Lck::Tablet::NotificationType const EchoLowStorage;

/// @brief Field EnterStreamCode value: I32(2)
static ::Liv::Lck::Tablet::NotificationType const EnterStreamCode;

/// @brief Field HeadsetView value: I32(14)
static ::Liv::Lck::Tablet::NotificationType const HeadsetView;

/// @brief Field InternalError value: I32(4)
static ::Liv::Lck::Tablet::NotificationType const InternalError;

/// @brief Field InvalidArgument value: I32(7)
static ::Liv::Lck::Tablet::NotificationType const InvalidArgument;

/// @brief Field InvalidTrackingId value: I32(6)
static ::Liv::Lck::Tablet::NotificationType const InvalidTrackingId;

/// @brief Field MissingTrackingId value: I32(5)
static ::Liv::Lck::Tablet::NotificationType const MissingTrackingId;

/// @brief Field PhotoSaved value: I32(1)
static ::Liv::Lck::Tablet::NotificationType const PhotoSaved;

/// @brief Field RateLimiterBackoff value: I32(10)
static ::Liv::Lck::Tablet::NotificationType const RateLimiterBackoff;

/// @brief Field ServiceUnavailable value: I32(9)
static ::Liv::Lck::Tablet::NotificationType const ServiceUnavailable;

/// @brief Field UnknownStreamingError value: I32(8)
static ::Liv::Lck::Tablet::NotificationType const UnknownStreamingError;

/// @brief Field VideoSaved value: I32(0)
static ::Liv::Lck::Tablet::NotificationType const VideoSaved;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24936};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Tablet::NotificationType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Tablet::NotificationType) == 0x4, "Size mismatch!");

} // namespace end def Liv::Lck::Tablet
