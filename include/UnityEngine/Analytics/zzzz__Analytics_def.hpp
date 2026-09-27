#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/Analytics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Analytics)
namespace System {
class Object;
}
namespace UnityEngine::Analytics {
struct AnalyticsResult;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine::Analytics {
class Analytics;
}
// Write type traits
MARK_REF_T(::UnityEngine::Analytics::Analytics*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Analytics::Analytics*, "UnityEngine.Analytics", "Analytics");
// [NativeHeader("Modules/UnityAnalytics/Public/UnityAnalytics.h")]
// [NativeHeader("Modules/UnityAnalytics/Public/Events/UserCustomEvent.h")]
// [NativeHeader("Modules/UnityAnalyticsCommon/Public/UnityAnalyticsCommon.h")]
// [NativeHeader("Modules/UnityConnect/UnityConnectSettings.h")]
// Dependencies System.Object
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.Analytics
class CORDL_TYPE Analytics : public ::System::Object {
public:
// Declarations
/// [ThreadSafe]
/// @brief Method IsInitialized, addr 0xb9245ac, size 0x28, virtual false, abstract: false, final false
static inline bool IsInitialized() ;

/// @brief Method RegisterEvent, addr 0xb924d0c, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::Analytics::AnalyticsResult RegisterEvent(::StringW  eventName, int32_t  maxEventPerHour, int32_t  maxItems, ::StringW  vendorKey, ::StringW  prefix) ;

/// @brief Method RegisterEvent, addr 0xb924d74, size 0xf4, virtual false, abstract: false, final false
static inline ::UnityEngine::Analytics::AnalyticsResult RegisterEvent(::StringW  eventName, int32_t  maxEventPerHour, int32_t  maxItems, ::StringW  vendorKey, int32_t  ver, ::StringW  prefix, ::StringW  assemblyInfo) ;

/// [StaticAccessor("GetUnityAnalytics()", (UnityEngine.Bindings.StaticAccessorType)0)]
/// @brief Method RegisterEventWithLimit, addr 0xb9245d4, size 0x400, virtual false, abstract: false, final false
static inline ::UnityEngine::Analytics::AnalyticsResult RegisterEventWithLimit(::StringW  eventName, int32_t  maxEventPerHour, int32_t  maxItems, ::StringW  vendorKey, int32_t  ver, ::StringW  prefix, ::StringW  assemblyInfo, bool  notifyServer) ;

/// @brief Method RegisterEventWithLimit_Injected, addr 0xb9249d4, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::Analytics::AnalyticsResult RegisterEventWithLimit_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  eventName, int32_t  maxEventPerHour, int32_t  maxItems, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  vendorKey, int32_t  ver, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  prefix, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  assemblyInfo, bool  notifyServer) ;

/// @brief Method SendEvent, addr 0xb924e68, size 0xec, virtual false, abstract: false, final false
static inline ::UnityEngine::Analytics::AnalyticsResult SendEvent(::StringW  eventName, ::System::Object*  parameters, int32_t  ver, ::StringW  prefix) ;

/// [ThreadSafe]
/// [StaticAccessor("GetUnityAnalytics()", (UnityEngine.Bindings.StaticAccessorType)0)]
/// @brief Method SendEventWithLimit, addr 0xb924a60, size 0x250, virtual false, abstract: false, final false
static inline ::UnityEngine::Analytics::AnalyticsResult SendEventWithLimit(::StringW  eventName, ::System::Object*  parameters, int32_t  ver, ::StringW  prefix) ;

/// @brief Method SendEventWithLimit_Injected, addr 0xb924cb0, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::Analytics::AnalyticsResult SendEventWithLimit_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  eventName, ::System::Object*  parameters, int32_t  ver, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  prefix) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Analytics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Analytics", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Analytics(Analytics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Analytics", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Analytics(Analytics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32849};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Analytics::Analytics) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Analytics
