#pragma once
// IWYU pragma private; include "UnityEngine/XR/Management/XRManagementAnalytics_BuildEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(XRManagementAnalytics_BuildEvent)
namespace UnityEngine::Analytics {
class IAnalytic_IData;
}
// Forward declare root types
namespace GlobalNamespace {
struct XRManagementAnalytics_BuildEvent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRManagementAnalytics_BuildEvent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRManagementAnalytics_BuildEvent, "UnityEngine.XR.Management", "XRManagementAnalytics/BuildEvent");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Management.XRManagementAnalytics/BuildEvent
struct CORDL_TYPE XRManagementAnalytics_BuildEvent {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Analytics::IAnalytic_IData"
constexpr operator  ::UnityEngine::Analytics::IAnalytic_IData*() ;

/// @brief Convert to "::UnityEngine::Analytics::IAnalytic_IData"
constexpr ::UnityEngine::Analytics::IAnalytic_IData* i___UnityEngine__Analytics__IAnalytic_IData() ;

// Ctor Parameters []
// @brief default ctor
constexpr XRManagementAnalytics_BuildEvent() ;

// Ctor Parameters [CppParam { name: "buildGuid", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "buildTarget", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "buildTargetGroup", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "assigned_loaders", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }]
constexpr XRManagementAnalytics_BuildEvent(::StringW  buildGuid, ::StringW  buildTarget, ::StringW  buildTargetGroup, ::ArrayW<::StringW>  assigned_loaders) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32796};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field buildGuid, offset: 0x0, size: 0x8, def value: None
 ::StringW  buildGuid;

/// @brief Field buildTarget, offset: 0x8, size: 0x8, def value: None
 ::StringW  buildTarget;

/// @brief Field buildTargetGroup, offset: 0x10, size: 0x8, def value: None
 ::StringW  buildTargetGroup;

/// @brief Field assigned_loaders, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  assigned_loaders;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRManagementAnalytics_BuildEvent, buildGuid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRManagementAnalytics_BuildEvent, buildTarget) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRManagementAnalytics_BuildEvent, buildTargetGroup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRManagementAnalytics_BuildEvent, assigned_loaders) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRManagementAnalytics_BuildEvent) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
