#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRAnalytics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRAnalytics_InitializeEvent_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRAnalytics)
namespace GlobalNamespace {
struct OpenXRAnalytics_InitializeEvent;
}
namespace System {
class Exception;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::Analytics {
class IAnalytic_IData;
}
namespace UnityEngine::Analytics {
class IAnalytic;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRFeature;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRAnalytics_XrInitializeAnalytic;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRAnalytics___c;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class OpenXRAnalytics;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRAnalytics_XrInitializeAnalytic;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRAnalytics___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::OpenXR::OpenXRAnalytics*);
MARK_REF_T(::UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic*);
MARK_REF_T(::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::OpenXRAnalytics*, "UnityEngine.XR.OpenXR", "OpenXRAnalytics");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic*, "UnityEngine.XR.OpenXR", "OpenXRAnalytics/XrInitializeAnalytic");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*, "UnityEngine.XR.OpenXR", "OpenXRAnalytics/<>c");
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRAnalytics
class CORDL_TYPE OpenXRAnalytics : public ::System::Object {
public:
// Declarations
using InitializeEvent = ::GlobalNamespace::OpenXRAnalytics_InitializeEvent;

using XrInitializeAnalytic = ::UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic;

using __c = ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c;

/// @brief Field s_Initialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_Initialized, put=setStaticF_s_Initialized)) bool  s_Initialized;

/// @brief Method CreateInitializeEvent, addr 0xb4e3018, size 0x59c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OpenXRAnalytics_InitializeEvent CreateInitializeEvent(bool  success) ;

/// @brief Method Initialize, addr 0xb4e2edc, size 0xc8, virtual false, abstract: false, final false
static inline bool Initialize() ;

/// @brief Method SendInitializeEvent, addr 0xb4e2fa4, size 0x74, virtual false, abstract: false, final false
static inline void SendInitializeEvent(bool  success) ;

/// @brief Method SendPlayerAnalytics, addr 0xb4e35b4, size 0xb0, virtual false, abstract: false, final false
static inline void SendPlayerAnalytics(::GlobalNamespace::OpenXRAnalytics_InitializeEvent  data) ;

static inline bool getStaticF_s_Initialized() ;

static inline void setStaticF_s_Initialized(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenXRAnalytics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenXRAnalytics", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenXRAnalytics(OpenXRAnalytics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRAnalytics", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenXRAnalytics(OpenXRAnalytics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27273};

/// @brief Field kEventInitialize offset 0xffffffff size 0x8
static constexpr ::ConstString  kEventInitialize{u"openxr_initialize"};

/// @brief Field kMaxEventsPerHour offset 0xffffffff size 0x4
static constexpr int32_t  kMaxEventsPerHour{static_cast<int32_t>(0x3e8)};

/// @brief Field kMaxNumberOfElements offset 0xffffffff size 0x4
static constexpr int32_t  kMaxNumberOfElements{static_cast<int32_t>(0x3e8)};

/// @brief Field kVendorKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kVendorKey{u"unity.openxr"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::OpenXRAnalytics) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::OpenXR
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRAnalytics/<>c
class CORDL_TYPE OpenXRAnalytics___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*  __9;

/// @brief Field <>9__9_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_0, put=setStaticF___9__9_0)) ::System::Func_2<::StringW,::StringW>*  __9__9_0;

/// @brief Field <>9__9_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_1, put=setStaticF___9__9_1)) ::System::Func_2<::StringW,::StringW>*  __9__9_1;

/// @brief Field <>9__9_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_2, put=setStaticF___9__9_2)) ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,bool>*  __9__9_2;

/// @brief Field <>9__9_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_3, put=setStaticF___9__9_3)) ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,::StringW>*  __9__9_3;

/// @brief Field <>9__9_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_4, put=setStaticF___9__9_4)) ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,bool>*  __9__9_4;

/// @brief Field <>9__9_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_5, put=setStaticF___9__9_5)) ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,::StringW>*  __9__9_5;

static inline ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c* New_ctor() ;

/// @brief Method <CreateInitializeEvent>b__9_0, addr 0xb4e3ce8, size 0x84, virtual false, abstract: false, final false
inline ::StringW _CreateInitializeEvent_b__9_0(::StringW  ext) ;

/// @brief Method <CreateInitializeEvent>b__9_1, addr 0xb4e3d70, size 0x84, virtual false, abstract: false, final false
inline ::StringW _CreateInitializeEvent_b__9_1(::StringW  ext) ;

/// @brief Method <CreateInitializeEvent>b__9_2, addr 0xb4e3df4, size 0x80, virtual false, abstract: false, final false
inline bool _CreateInitializeEvent_b__9_2(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*  f) ;

/// @brief Method <CreateInitializeEvent>b__9_3, addr 0xb4e3e74, size 0x74, virtual false, abstract: false, final false
inline ::StringW _CreateInitializeEvent_b__9_3(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*  f) ;

/// @brief Method <CreateInitializeEvent>b__9_4, addr 0xb4e3ee8, size 0x80, virtual false, abstract: false, final false
inline bool _CreateInitializeEvent_b__9_4(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*  f) ;

/// @brief Method <CreateInitializeEvent>b__9_5, addr 0xb4e3f68, size 0x74, virtual false, abstract: false, final false
inline ::StringW _CreateInitializeEvent_b__9_5(::UnityEngine::XR::OpenXR::Features::OpenXRFeature*  f) ;

/// @brief Method .ctor, addr 0xb4e3ce0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::XR::OpenXR::OpenXRAnalytics___c* getStaticF___9() ;

static inline ::System::Func_2<::StringW,::StringW>* getStaticF___9__9_0() ;

static inline ::System::Func_2<::StringW,::StringW>* getStaticF___9__9_1() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,bool>* getStaticF___9__9_2() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,::StringW>* getStaticF___9__9_3() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,bool>* getStaticF___9__9_4() ;

static inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,::StringW>* getStaticF___9__9_5() ;

static inline void setStaticF___9(::UnityEngine::XR::OpenXR::OpenXRAnalytics___c*  value) ;

static inline void setStaticF___9__9_0(::System::Func_2<::StringW,::StringW>*  value) ;

static inline void setStaticF___9__9_1(::System::Func_2<::StringW,::StringW>*  value) ;

static inline void setStaticF___9__9_2(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,bool>*  value) ;

static inline void setStaticF___9__9_3(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,::StringW>*  value) ;

static inline void setStaticF___9__9_4(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,bool>*  value) ;

static inline void setStaticF___9__9_5(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenXRAnalytics___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenXRAnalytics___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenXRAnalytics___c(OpenXRAnalytics___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRAnalytics___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenXRAnalytics___c(OpenXRAnalytics___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27272};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::OpenXRAnalytics___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::OpenXR
// [AnalyticInfo("openxr_initialize", "unity.openxr", 1, 1000, 1000)]
// Dependencies System.Nullable`1<T>, System.Object, UnityEngine.XR.OpenXR.OpenXRAnalytics::InitializeEvent
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRAnalytics/XrInitializeAnalytic
class CORDL_TYPE OpenXRAnalytics_XrInitializeAnalytic : public ::System::Object {
public:
// Declarations
/// @brief Field data, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::System::Nullable_1<::GlobalNamespace::OpenXRAnalytics_InitializeEvent>  data;

/// @brief Convert operator to "::UnityEngine::Analytics::IAnalytic"
constexpr operator  ::UnityEngine::Analytics::IAnalytic*() noexcept;

static inline ::UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic* New_ctor(::GlobalNamespace::OpenXRAnalytics_InitializeEvent  data) ;

/// @brief Method TryGatherData, addr 0xb4e3bd8, size 0xa0, virtual true, abstract: false, final true
inline bool TryGatherData(::by_ref<::UnityEngine::Analytics::IAnalytic_IData*>  data, /* [NotNullWhen(false)] */ ::by_ref<::System::Exception*>  error) ;

constexpr ::System::Nullable_1<::GlobalNamespace::OpenXRAnalytics_InitializeEvent> const& __cordl_internal_get_data() const;

constexpr ::System::Nullable_1<::GlobalNamespace::OpenXRAnalytics_InitializeEvent>& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_data(::System::Nullable_1<::GlobalNamespace::OpenXRAnalytics_InitializeEvent>  value) ;

/// @brief Method .ctor, addr 0xb4e3b2c, size 0xac, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OpenXRAnalytics_InitializeEvent  data) ;

/// @brief Convert to "::UnityEngine::Analytics::IAnalytic"
constexpr ::UnityEngine::Analytics::IAnalytic* i___UnityEngine__Analytics__IAnalytic() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenXRAnalytics_XrInitializeAnalytic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenXRAnalytics_XrInitializeAnalytic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenXRAnalytics_XrInitializeAnalytic(OpenXRAnalytics_XrInitializeAnalytic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRAnalytics_XrInitializeAnalytic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenXRAnalytics_XrInitializeAnalytic(OpenXRAnalytics_XrInitializeAnalytic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27271};

/// @brief Field data, offset: 0x10, size: 0x10, def value: None
 ::System::Nullable_1<::GlobalNamespace::OpenXRAnalytics_InitializeEvent>  ___data;

/// @brief Size padding 0x60 - 0x20 = 0x40, packed as 0x40
 uint8_t  _cordl_size_padding[0x40];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic, ___data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::OpenXRAnalytics_XrInitializeAnalytic) == 0x60, "Size mismatch!");

} // namespace end def UnityEngine::XR::OpenXR
