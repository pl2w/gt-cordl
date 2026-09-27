#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRAnalytics_InitializeEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OpenXRAnalytics_InitializeEvent)
namespace UnityEngine::Analytics {
class IAnalytic_IData;
}
// Forward declare root types
namespace GlobalNamespace {
struct OpenXRAnalytics_InitializeEvent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OpenXRAnalytics_InitializeEvent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OpenXRAnalytics_InitializeEvent, "UnityEngine.XR.OpenXR", "OpenXRAnalytics/InitializeEvent");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.OpenXRAnalytics/InitializeEvent
struct CORDL_TYPE OpenXRAnalytics_InitializeEvent {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Analytics::IAnalytic_IData"
constexpr operator  ::UnityEngine::Analytics::IAnalytic_IData*() ;

/// @brief Convert to "::UnityEngine::Analytics::IAnalytic_IData"
constexpr ::UnityEngine::Analytics::IAnalytic_IData* i___UnityEngine__Analytics__IAnalytic_IData() ;

// Ctor Parameters []
// @brief default ctor
constexpr OpenXRAnalytics_InitializeEvent() ;

// Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "runtime", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "runtime_version", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "plugin_version", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "api_version", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "available_extensions", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "enabled_extensions", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "enabled_features", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "failed_features", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }]
constexpr OpenXRAnalytics_InitializeEvent(bool  success, ::StringW  runtime, ::StringW  runtime_version, ::StringW  plugin_version, ::StringW  api_version, ::ArrayW<::StringW>  available_extensions, ::ArrayW<::StringW>  enabled_extensions, ::ArrayW<::StringW>  enabled_features, ::ArrayW<::StringW>  failed_features) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27270};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field success, offset: 0x0, size: 0x1, def value: None
 bool  success;

/// @brief Field runtime, offset: 0x8, size: 0x8, def value: None
 ::StringW  runtime;

/// @brief Field runtime_version, offset: 0x10, size: 0x8, def value: None
 ::StringW  runtime_version;

/// @brief Field plugin_version, offset: 0x18, size: 0x8, def value: None
 ::StringW  plugin_version;

/// @brief Field api_version, offset: 0x20, size: 0x8, def value: None
 ::StringW  api_version;

/// @brief Field available_extensions, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::StringW>  available_extensions;

/// @brief Field enabled_extensions, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::StringW>  enabled_extensions;

/// @brief Field enabled_features, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::StringW>  enabled_features;

/// @brief Field failed_features, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::StringW>  failed_features;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OpenXRAnalytics_InitializeEvent, success) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OpenXRAnalytics_InitializeEvent, runtime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OpenXRAnalytics_InitializeEvent, runtime_version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OpenXRAnalytics_InitializeEvent, plugin_version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OpenXRAnalytics_InitializeEvent, api_version) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OpenXRAnalytics_InitializeEvent, available_extensions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OpenXRAnalytics_InitializeEvent, enabled_extensions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OpenXRAnalytics_InitializeEvent, enabled_features) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OpenXRAnalytics_InitializeEvent, failed_features) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OpenXRAnalytics_InitializeEvent) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
