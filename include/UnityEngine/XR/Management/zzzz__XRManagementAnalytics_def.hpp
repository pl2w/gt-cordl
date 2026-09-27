#pragma once
// IWYU pragma private; include "UnityEngine/XR/Management/XRManagementAnalytics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Management/zzzz__XRManagementAnalytics_BuildEvent_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRManagementAnalytics)
namespace GlobalNamespace {
struct XRManagementAnalytics_BuildEvent;
}
namespace System {
class Exception;
}
namespace UnityEngine::Analytics {
class IAnalytic_IData;
}
namespace UnityEngine::Analytics {
class IAnalytic;
}
namespace UnityEngine::XR::Management {
class XRManagementAnalytics_XrInitializeAnalytic;
}
// Forward declare root types
namespace UnityEngine::XR::Management {
class XRManagementAnalytics;
}
namespace UnityEngine::XR::Management {
class XRManagementAnalytics_XrInitializeAnalytic;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Management::XRManagementAnalytics*);
MARK_REF_T(::UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Management::XRManagementAnalytics*, "UnityEngine.XR.Management", "XRManagementAnalytics");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic*, "UnityEngine.XR.Management", "XRManagementAnalytics/XrInitializeAnalytic");
// Dependencies System.Object
namespace UnityEngine::XR::Management {
// Is value type: false
// CS Name: UnityEngine.XR.Management.XRManagementAnalytics
class CORDL_TYPE XRManagementAnalytics : public ::System::Object {
public:
// Declarations
using BuildEvent = ::GlobalNamespace::XRManagementAnalytics_BuildEvent;

using XrInitializeAnalytic = ::UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic;

/// @brief Field s_Initialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_Initialized, put=setStaticF_s_Initialized)) bool  s_Initialized;

/// @brief Method Initialize, addr 0xb4df444, size 0x48, virtual false, abstract: false, final false
static inline bool Initialize() ;

static inline bool getStaticF_s_Initialized() ;

static inline void setStaticF_s_Initialized(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRManagementAnalytics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRManagementAnalytics", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRManagementAnalytics(XRManagementAnalytics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRManagementAnalytics", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRManagementAnalytics(XRManagementAnalytics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32798};

/// @brief Field kEventBuild offset 0xffffffff size 0x8
static constexpr ::ConstString  kEventBuild{u"xrmanagment_build"};

/// @brief Field kMaxEventsPerHour offset 0xffffffff size 0x4
static constexpr int32_t  kMaxEventsPerHour{static_cast<int32_t>(0x3e8)};

/// @brief Field kMaxNumberOfElements offset 0xffffffff size 0x4
static constexpr int32_t  kMaxNumberOfElements{static_cast<int32_t>(0x3e8)};

/// @brief Field kVendorKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kVendorKey{u"unity.xrmanagement"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Management::XRManagementAnalytics) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Management
// [AnalyticInfo("xrmanagment_build", "unity.xrmanagement", 1, 1000, 1000)]
// Dependencies System.Nullable`1<T>, System.Object, UnityEngine.XR.Management.XRManagementAnalytics::BuildEvent
namespace UnityEngine::XR::Management {
// Is value type: false
// CS Name: UnityEngine.XR.Management.XRManagementAnalytics/XrInitializeAnalytic
class CORDL_TYPE XRManagementAnalytics_XrInitializeAnalytic : public ::System::Object {
public:
// Declarations
/// @brief Field data, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::System::Nullable_1<::GlobalNamespace::XRManagementAnalytics_BuildEvent>  data;

/// @brief Convert operator to "::UnityEngine::Analytics::IAnalytic"
constexpr operator  ::UnityEngine::Analytics::IAnalytic*() noexcept;

static inline ::UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic* New_ctor(::GlobalNamespace::XRManagementAnalytics_BuildEvent  data) ;

/// @brief Method TryGatherData, addr 0xb4df52c, size 0xa0, virtual true, abstract: false, final true
inline bool TryGatherData(::by_ref<::UnityEngine::Analytics::IAnalytic_IData*>  data, /* [NotNullWhen(false)] */ ::by_ref<::System::Exception*>  error) ;

constexpr ::System::Nullable_1<::GlobalNamespace::XRManagementAnalytics_BuildEvent> const& __cordl_internal_get_data() const;

constexpr ::System::Nullable_1<::GlobalNamespace::XRManagementAnalytics_BuildEvent>& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_data(::System::Nullable_1<::GlobalNamespace::XRManagementAnalytics_BuildEvent>  value) ;

/// @brief Method .ctor, addr 0xb4df48c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::XRManagementAnalytics_BuildEvent  data) ;

/// @brief Convert to "::UnityEngine::Analytics::IAnalytic"
constexpr ::UnityEngine::Analytics::IAnalytic* i___UnityEngine__Analytics__IAnalytic() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRManagementAnalytics_XrInitializeAnalytic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRManagementAnalytics_XrInitializeAnalytic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRManagementAnalytics_XrInitializeAnalytic(XRManagementAnalytics_XrInitializeAnalytic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRManagementAnalytics_XrInitializeAnalytic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRManagementAnalytics_XrInitializeAnalytic(XRManagementAnalytics_XrInitializeAnalytic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32797};

/// @brief Field data, offset: 0x10, size: 0x10, def value: None
 ::System::Nullable_1<::GlobalNamespace::XRManagementAnalytics_BuildEvent>  ___data;

/// @brief Size padding 0x38 - 0x20 = 0x18, packed as 0x18
 uint8_t  _cordl_size_padding[0x18];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic, ___data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Management::XRManagementAnalytics_XrInitializeAnalytic) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::XR::Management
