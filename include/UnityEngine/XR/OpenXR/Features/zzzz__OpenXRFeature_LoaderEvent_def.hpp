#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/OpenXRFeature_LoaderEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRFeature_LoaderEvent)
// Forward declare root types
namespace GlobalNamespace {
struct OpenXRFeature_LoaderEvent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OpenXRFeature_LoaderEvent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OpenXRFeature_LoaderEvent, "UnityEngine.XR.OpenXR.Features", "OpenXRFeature/LoaderEvent");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Features.OpenXRFeature/LoaderEvent
struct CORDL_TYPE OpenXRFeature_LoaderEvent {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OpenXRFeature_LoaderEvent_Unwrapped
enum struct __OpenXRFeature_LoaderEvent_Unwrapped : int32_t {
__E_SubsystemCreate = static_cast<int32_t>(0x0),
__E_SubsystemDestroy = static_cast<int32_t>(0x1),
__E_SubsystemStart = static_cast<int32_t>(0x2),
__E_SubsystemStop = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OpenXRFeature_LoaderEvent_Unwrapped () const noexcept {
return static_cast<__OpenXRFeature_LoaderEvent_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OpenXRFeature_LoaderEvent() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OpenXRFeature_LoaderEvent(int32_t  value__) noexcept;

/// @brief Field SubsystemCreate value: I32(0)
static ::GlobalNamespace::OpenXRFeature_LoaderEvent const SubsystemCreate;

/// @brief Field SubsystemDestroy value: I32(1)
static ::GlobalNamespace::OpenXRFeature_LoaderEvent const SubsystemDestroy;

/// @brief Field SubsystemStart value: I32(2)
static ::GlobalNamespace::OpenXRFeature_LoaderEvent const SubsystemStart;

/// @brief Field SubsystemStop value: I32(3)
static ::GlobalNamespace::OpenXRFeature_LoaderEvent const SubsystemStop;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27326};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OpenXRFeature_LoaderEvent, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OpenXRFeature_LoaderEvent) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
