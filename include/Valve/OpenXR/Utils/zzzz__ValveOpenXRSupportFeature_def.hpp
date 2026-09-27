#pragma once
// IWYU pragma private; include "Valve/OpenXR/Utils/ValveOpenXRSupportFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValveOpenXRSupportFeature)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrResult;
}
namespace Valve::OpenXR::Utils {
class InstanceCreated;
}
namespace Valve::OpenXR::Utils {
class InstanceDestroyed;
}
namespace Valve::OpenXR::Utils {
class SessionCreated;
}
namespace Valve::OpenXR::Utils {
class SessionDestroyed;
}
namespace Valve::OpenXR::Utils {
class ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate;
}
// Forward declare root types
namespace Valve::OpenXR::Utils {
class ValveOpenXRSupportFeature;
}
namespace Valve::OpenXR::Utils {
class ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate;
}
// Write type traits
MARK_REF_T(::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*);
MARK_REF_T(::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate*);
DEFINE_IL2CPP_CLASS(::Valve::OpenXR::Utils::ValveOpenXRSupportFeature*, "Valve.OpenXR.Utils", "ValveOpenXRSupportFeature");
DEFINE_IL2CPP_CLASS(::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate*, "Valve.OpenXR.Utils", "ValveOpenXRSupportFeature/GetInstanceProcAddrDelegate");
// Dependencies System.Type, UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace Valve::OpenXR::Utils {
// Is value type: false
// CS Name: Valve.OpenXR.Utils.ValveOpenXRSupportFeature
class CORDL_TYPE ValveOpenXRSupportFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
// Declarations
using GetInstanceProcAddrDelegate = ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate;

/// @brief Field OnInstanceCreated, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnInstanceCreated, put=setStaticF_OnInstanceCreated)) ::Valve::OpenXR::Utils::InstanceCreated*  OnInstanceCreated;

/// @brief Field OnInstanceDestroyed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnInstanceDestroyed, put=setStaticF_OnInstanceDestroyed)) ::Valve::OpenXR::Utils::InstanceDestroyed*  OnInstanceDestroyed;

/// @brief Field OnSessionCreated, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSessionCreated, put=setStaticF_OnSessionCreated)) ::Valve::OpenXR::Utils::SessionCreated*  OnSessionCreated;

/// @brief Field OnSessionDestroyed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSessionDestroyed, put=setStaticF_OnSessionDestroyed)) ::Valve::OpenXR::Utils::SessionDestroyed*  OnSessionDestroyed;

 __declspec(property(get=get_XrInstance)) uint64_t  XrInstance;

 __declspec(property(get=get_XrSession)) uint64_t  XrSession;

/// @brief Field _getInstanceProcAddr, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__getInstanceProcAddr, put=__cordl_internal_set__getInstanceProcAddr)) ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate*  _getInstanceProcAddr;

/// @brief Field _xrInstance, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__xrInstance, put=__cordl_internal_set__xrInstance)) uint64_t  _xrInstance;

/// @brief Field _xrSession, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__xrSession, put=__cordl_internal_set__xrSession)) uint64_t  _xrSession;

/// @brief Field incompatibleFeatureTypes, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_incompatibleFeatureTypes, put=__cordl_internal_set_incompatibleFeatureTypes)) ::ArrayW<::System::Type*>  incompatibleFeatureTypes;

/// @brief Field lateLatchingDebug, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_lateLatchingDebug, put=__cordl_internal_set_lateLatchingDebug)) bool  lateLatchingDebug;

/// @brief Field lateLatchingMode, offset 0x4f, size 0x1 
 __declspec(property(get=__cordl_internal_get_lateLatchingMode, put=__cordl_internal_set_lateLatchingMode)) bool  lateLatchingMode;

/// @brief Field optimizeBufferDiscards, offset 0x4e, size 0x1 
 __declspec(property(get=__cordl_internal_get_optimizeBufferDiscards, put=__cordl_internal_set_optimizeBufferDiscards)) bool  optimizeBufferDiscards;

/// @brief Method GetOpenXRInstance, addr 0xb9418b4, size 0x1c, virtual false, abstract: false, final false
static inline uint64_t GetOpenXRInstance() ;

/// @brief Method GetOpenXrInstanceProc, addr 0xb941ee8, size 0x20, virtual false, abstract: false, final false
static inline ::System::IntPtr GetOpenXrInstanceProc(::StringW  procName) ;

/// @brief Method GetOpenXrInstanceProc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetOpenXrInstanceProc(::StringW  procName) ;

/// @brief Method GetOpenXrInstanceProcInternal, addr 0xb941f08, size 0x1a0, virtual false, abstract: false, final false
inline ::System::IntPtr GetOpenXrInstanceProcInternal(::StringW  procName) ;

/// @brief Method GetSession, addr 0xb941bdc, size 0x1c, virtual false, abstract: false, final false
static inline uint64_t GetSession() ;

/// @brief Method HasOpenXRInstance, addr 0xb941890, size 0x24, virtual false, abstract: false, final false
static inline bool HasOpenXRInstance() ;

/// @brief Method HasSession, addr 0xb941bb8, size 0x24, virtual false, abstract: false, final false
static inline bool HasSession() ;

static inline ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature* New_ctor() ;

/// @brief Method OnInstanceCreate, addr 0xb9420a8, size 0x78, virtual true, abstract: false, final false
inline bool OnInstanceCreate(uint64_t  xrInstance) ;

/// @brief Method OnInstanceDestroy, addr 0xb942120, size 0x74, virtual true, abstract: false, final false
inline void OnInstanceDestroy(uint64_t  xrInstance) ;

/// @brief Method OnSessionCreate, addr 0xb942194, size 0x80, virtual true, abstract: false, final false
inline void OnSessionCreate(uint64_t  xrSession) ;

/// @brief Method OnSessionDestroy, addr 0xb942214, size 0x68, virtual true, abstract: false, final false
inline void OnSessionDestroy(uint64_t  xrSession) ;

constexpr ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate* const& __cordl_internal_get__getInstanceProcAddr() const;

constexpr ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate*& __cordl_internal_get__getInstanceProcAddr() ;

constexpr uint64_t const& __cordl_internal_get__xrInstance() const;

constexpr uint64_t& __cordl_internal_get__xrInstance() ;

constexpr uint64_t const& __cordl_internal_get__xrSession() const;

constexpr uint64_t& __cordl_internal_get__xrSession() ;

constexpr ::ArrayW<::System::Type*> const& __cordl_internal_get_incompatibleFeatureTypes() const;

constexpr ::ArrayW<::System::Type*>& __cordl_internal_get_incompatibleFeatureTypes() ;

constexpr bool const& __cordl_internal_get_lateLatchingDebug() const;

constexpr bool& __cordl_internal_get_lateLatchingDebug() ;

constexpr bool const& __cordl_internal_get_lateLatchingMode() const;

constexpr bool& __cordl_internal_get_lateLatchingMode() ;

constexpr bool const& __cordl_internal_get_optimizeBufferDiscards() const;

constexpr bool& __cordl_internal_get_optimizeBufferDiscards() ;

constexpr void __cordl_internal_set__getInstanceProcAddr(::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate*  value) ;

constexpr void __cordl_internal_set__xrInstance(uint64_t  value) ;

constexpr void __cordl_internal_set__xrSession(uint64_t  value) ;

constexpr void __cordl_internal_set_incompatibleFeatureTypes(::ArrayW<::System::Type*>  value) ;

constexpr void __cordl_internal_set_lateLatchingDebug(bool  value) ;

constexpr void __cordl_internal_set_lateLatchingMode(bool  value) ;

constexpr void __cordl_internal_set_optimizeBufferDiscards(bool  value) ;

/// @brief Method .ctor, addr 0xb94227c, size 0xfc, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnInstanceCreated, addr 0xb9418d0, size 0xb8, virtual false, abstract: false, final false
static inline void add_OnInstanceCreated(::Valve::OpenXR::Utils::InstanceCreated*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnInstanceDestroyed, addr 0xb941a40, size 0xbc, virtual false, abstract: false, final false
static inline void add_OnInstanceDestroyed(::Valve::OpenXR::Utils::InstanceDestroyed*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnSessionCreated, addr 0xb941bf8, size 0xbc, virtual false, abstract: false, final false
static inline void add_OnSessionCreated(::Valve::OpenXR::Utils::SessionCreated*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnSessionDestroyed, addr 0xb941d70, size 0xbc, virtual false, abstract: false, final false
static inline void add_OnSessionDestroyed(::Valve::OpenXR::Utils::SessionDestroyed*  value) ;

static inline ::Valve::OpenXR::Utils::InstanceCreated* getStaticF_OnInstanceCreated() ;

static inline ::Valve::OpenXR::Utils::InstanceDestroyed* getStaticF_OnInstanceDestroyed() ;

static inline ::Valve::OpenXR::Utils::SessionCreated* getStaticF_OnSessionCreated() ;

static inline ::Valve::OpenXR::Utils::SessionDestroyed* getStaticF_OnSessionDestroyed() ;

/// @brief Method get_Instance, addr 0xb9417bc, size 0xd4, virtual false, abstract: false, final false
static inline ::UnityW<::Valve::OpenXR::Utils::ValveOpenXRSupportFeature> get_Instance() ;

/// @brief Method get_XrInstance, addr 0xb9417ac, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_XrInstance() ;

/// @brief Method get_XrSession, addr 0xb9417b4, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_XrSession() ;

/// [CompilerGenerated]
/// @brief Method remove_OnInstanceCreated, addr 0xb941988, size 0xb8, virtual false, abstract: false, final false
static inline void remove_OnInstanceCreated(::Valve::OpenXR::Utils::InstanceCreated*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnInstanceDestroyed, addr 0xb941afc, size 0xbc, virtual false, abstract: false, final false
static inline void remove_OnInstanceDestroyed(::Valve::OpenXR::Utils::InstanceDestroyed*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnSessionCreated, addr 0xb941cb4, size 0xbc, virtual false, abstract: false, final false
static inline void remove_OnSessionCreated(::Valve::OpenXR::Utils::SessionCreated*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnSessionDestroyed, addr 0xb941e2c, size 0xbc, virtual false, abstract: false, final false
static inline void remove_OnSessionDestroyed(::Valve::OpenXR::Utils::SessionDestroyed*  value) ;

static inline void setStaticF_OnInstanceCreated(::Valve::OpenXR::Utils::InstanceCreated*  value) ;

static inline void setStaticF_OnInstanceDestroyed(::Valve::OpenXR::Utils::InstanceDestroyed*  value) ;

static inline void setStaticF_OnSessionCreated(::Valve::OpenXR::Utils::SessionCreated*  value) ;

static inline void setStaticF_OnSessionDestroyed(::Valve::OpenXR::Utils::SessionDestroyed*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValveOpenXRSupportFeature() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValveOpenXRSupportFeature", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValveOpenXRSupportFeature(ValveOpenXRSupportFeature && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValveOpenXRSupportFeature", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValveOpenXRSupportFeature(ValveOpenXRSupportFeature const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31841};

/// @brief Field featureId offset 0xffffffff size 0x8
static constexpr ::ConstString  featureId{u"com.valvesoftware.openxr.utils.support"};

/// [SerializeField]
/// [Tooltip("Optimization that allows 4x MSAA textures to be memoryless on Vulkan")]
/// @brief Field optimizeBufferDiscards, offset: 0x4e, size: 0x1, def value: None
 bool  ___optimizeBufferDiscards;

/// [SerializeField]
/// [Tooltip("Vulkan only")]
/// @brief Field lateLatchingMode, offset: 0x4f, size: 0x1, def value: None
 bool  ___lateLatchingMode;

/// [SerializeField]
/// [Tooltip("Vulkan only")]
/// @brief Field lateLatchingDebug, offset: 0x50, size: 0x1, def value: None
 bool  ___lateLatchingDebug;

/// @brief Field _xrInstance, offset: 0x58, size: 0x8, def value: None
 uint64_t  ____xrInstance;

/// @brief Field _xrSession, offset: 0x60, size: 0x8, def value: None
 uint64_t  ____xrSession;

/// @brief Field _getInstanceProcAddr, offset: 0x68, size: 0x8, def value: None
 ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate*  ____getInstanceProcAddr;

/// @brief Field incompatibleFeatureTypes, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::System::Type*>  ___incompatibleFeatureTypes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Valve::OpenXR::Utils::ValveOpenXRSupportFeature, ___optimizeBufferDiscards) == 0x4e, "Offset mismatch!");

static_assert(offsetof(::Valve::OpenXR::Utils::ValveOpenXRSupportFeature, ___lateLatchingMode) == 0x4f, "Offset mismatch!");

static_assert(offsetof(::Valve::OpenXR::Utils::ValveOpenXRSupportFeature, ___lateLatchingDebug) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Valve::OpenXR::Utils::ValveOpenXRSupportFeature, ____xrInstance) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Valve::OpenXR::Utils::ValveOpenXRSupportFeature, ____xrSession) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Valve::OpenXR::Utils::ValveOpenXRSupportFeature, ____getInstanceProcAddr) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Valve::OpenXR::Utils::ValveOpenXRSupportFeature, ___incompatibleFeatureTypes) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Valve::OpenXR::Utils::ValveOpenXRSupportFeature) == 0x78, "Size mismatch!");

} // namespace end def Valve::OpenXR::Utils
// Dependencies System.MulticastDelegate
namespace Valve::OpenXR::Utils {
// Is value type: false
// CS Name: Valve.OpenXR.Utils.ValveOpenXRSupportFeature/GetInstanceProcAddrDelegate
class CORDL_TYPE ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb94242c, size 0x8c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  instance, ::StringW  name, ::by_ref<::System::IntPtr>  procAddr, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xb9424b8, size 0x28, virtual true, abstract: false, final false
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult EndInvoke(::by_ref<::System::IntPtr>  procAddr, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xb942418, size 0x14, virtual true, abstract: false, final false
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrResult Invoke(uint64_t  instance, ::StringW  name, ::by_ref<::System::IntPtr>  procAddr) ;

static inline ::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb942378, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate(ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate(ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31840};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Valve::OpenXR::Utils::ValveOpenXRSupportFeature_GetInstanceProcAddrDelegate) == 0x80, "Size mismatch!");

} // namespace end def Valve::OpenXR::Utils
