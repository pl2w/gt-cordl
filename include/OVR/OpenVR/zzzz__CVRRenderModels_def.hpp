#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRRenderModels.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRRenderModels_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CVRRenderModels)
namespace GlobalNamespace {
struct CVRRenderModels_GetComponentStateUnion;
}
namespace OVR::OpenVR {
class CVRRenderModels__GetComponentStatePacked;
}
namespace OVR::OpenVR {
struct EVRRenderModelError;
}
namespace OVR::OpenVR {
struct RenderModel_ComponentState_t;
}
namespace OVR::OpenVR {
struct RenderModel_ControllerMode_State_t;
}
namespace OVR::OpenVR {
struct VRControllerState_t_Packed;
}
namespace OVR::OpenVR {
struct VRControllerState_t;
}
namespace System::Text {
class StringBuilder;
}
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
// Forward declare root types
namespace OVR::OpenVR {
class CVRRenderModels;
}
namespace OVR::OpenVR {
class CVRRenderModels__GetComponentStatePacked;
}
// Write type traits
MARK_REF_T(::OVR::OpenVR::CVRRenderModels*);
MARK_REF_T(::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*);
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::CVRRenderModels*, "OVR.OpenVR", "CVRRenderModels");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*, "OVR.OpenVR", "CVRRenderModels/_GetComponentStatePacked");
// Dependencies OVR.OpenVR.IVRRenderModels, System.Object
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRRenderModels
class CORDL_TYPE CVRRenderModels : public ::System::Object {
public:
// Declarations
using GetComponentStateUnion = ::GlobalNamespace::CVRRenderModels_GetComponentStateUnion;

using _GetComponentStatePacked = ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked;

/// @brief Field FnTable, offset 0x10, size 0x98 
 __declspec(property(get=__cordl_internal_get_FnTable, put=__cordl_internal_set_FnTable)) ::OVR::OpenVR::IVRRenderModels  FnTable;

/// @brief Method FreeRenderModel, addr 0xa5ae1a4, size 0x20, virtual false, abstract: false, final false
inline void FreeRenderModel(::System::IntPtr  pRenderModel) ;

/// @brief Method FreeTexture, addr 0xa5ae1e4, size 0x20, virtual false, abstract: false, final false
inline void FreeTexture(::System::IntPtr  pTexture) ;

/// @brief Method FreeTextureD3D11, addr 0xa5ae244, size 0x20, virtual false, abstract: false, final false
inline void FreeTextureD3D11(::System::IntPtr  pD3D11Texture2D) ;

/// @brief Method GetComponentButtonMask, addr 0xa5ae2e4, size 0x20, virtual false, abstract: false, final false
inline uint64_t GetComponentButtonMask(::StringW  pchRenderModelName, ::StringW  pchComponentName) ;

/// @brief Method GetComponentCount, addr 0xa5ae2a4, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetComponentCount(::StringW  pchRenderModelName) ;

/// @brief Method GetComponentName, addr 0xa5ae2c4, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetComponentName(::StringW  pchRenderModelName, uint32_t  unComponentIndex, ::System::Text::StringBuilder*  pchComponentName, uint32_t  unComponentNameLen) ;

/// @brief Method GetComponentRenderModelName, addr 0xa5ae304, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetComponentRenderModelName(::StringW  pchRenderModelName, ::StringW  pchComponentName, ::System::Text::StringBuilder*  pchComponentRenderModelName, uint32_t  unComponentRenderModelNameLen) ;

/// @brief Method GetComponentState, addr 0xa5ae344, size 0x168, virtual false, abstract: false, final false
inline bool GetComponentState(::StringW  pchRenderModelName, ::StringW  pchComponentName, ::by_ref<::OVR::OpenVR::VRControllerState_t>  pControllerState, ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t>  pState, ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t>  pComponentState) ;

/// @brief Method GetComponentStateForDevicePath, addr 0xa5ae324, size 0x20, virtual false, abstract: false, final false
inline bool GetComponentStateForDevicePath(::StringW  pchRenderModelName, ::StringW  pchComponentName, uint64_t  devicePath, ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t>  pState, ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t>  pComponentState) ;

/// @brief Method GetRenderModelCount, addr 0xa5ae284, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetRenderModelCount() ;

/// @brief Method GetRenderModelErrorNameFromEnum, addr 0xa5ae50c, size 0x84, virtual false, abstract: false, final false
inline ::StringW GetRenderModelErrorNameFromEnum(::OVR::OpenVR::EVRRenderModelError  error) ;

/// @brief Method GetRenderModelName, addr 0xa5ae264, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetRenderModelName(uint32_t  unRenderModelIndex, ::System::Text::StringBuilder*  pchRenderModelName, uint32_t  unRenderModelNameLen) ;

/// @brief Method GetRenderModelOriginalPath, addr 0xa5ae4ec, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetRenderModelOriginalPath(::StringW  pchRenderModelName, ::System::Text::StringBuilder*  pchOriginalPath, uint32_t  unOriginalPathLen, ::by_ref<::OVR::OpenVR::EVRRenderModelError>  peError) ;

/// @brief Method GetRenderModelThumbnailURL, addr 0xa5ae4cc, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetRenderModelThumbnailURL(::StringW  pchRenderModelName, ::System::Text::StringBuilder*  pchThumbnailURL, uint32_t  unThumbnailURLLen, ::by_ref<::OVR::OpenVR::EVRRenderModelError>  peError) ;

/// @brief Method LoadIntoTextureD3D11_Async, addr 0xa5ae224, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRRenderModelError LoadIntoTextureD3D11_Async(int32_t  textureId, ::System::IntPtr  pDstTexture) ;

/// @brief Method LoadRenderModel_Async, addr 0xa5ae184, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRRenderModelError LoadRenderModel_Async(::StringW  pchRenderModelName, ::by_ref<::System::IntPtr>  ppRenderModel) ;

/// @brief Method LoadTextureD3D11_Async, addr 0xa5ae204, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRRenderModelError LoadTextureD3D11_Async(int32_t  textureId, ::System::IntPtr  pD3D11Device, ::by_ref<::System::IntPtr>  ppD3D11Texture2D) ;

/// @brief Method LoadTexture_Async, addr 0xa5ae1c4, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRRenderModelError LoadTexture_Async(int32_t  textureId, ::by_ref<::System::IntPtr>  ppTexture) ;

static inline ::OVR::OpenVR::CVRRenderModels* New_ctor(::System::IntPtr  pInterface) ;

/// @brief Method RenderModelHasComponent, addr 0xa5ae4ac, size 0x20, virtual false, abstract: false, final false
inline bool RenderModelHasComponent(::StringW  pchRenderModelName, ::StringW  pchComponentName) ;

constexpr ::OVR::OpenVR::IVRRenderModels const& __cordl_internal_get_FnTable() const;

constexpr ::OVR::OpenVR::IVRRenderModels& __cordl_internal_get_FnTable() ;

constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVRRenderModels  value) ;

/// @brief Method .ctor, addr 0xa5ae074, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  pInterface) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CVRRenderModels() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CVRRenderModels", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CVRRenderModels(CVRRenderModels && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CVRRenderModels", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CVRRenderModels(CVRRenderModels const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13114};

/// @brief Field FnTable, offset: 0x10, size: 0x98, def value: None
 ::OVR::OpenVR::IVRRenderModels  ___FnTable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::CVRRenderModels, ___FnTable) == 0x10, "Offset mismatch!");

static_assert(sizeof(::OVR::OpenVR::CVRRenderModels) == 0xa8, "Size mismatch!");

} // namespace end def OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRRenderModels/_GetComponentStatePacked
class CORDL_TYPE CVRRenderModels__GetComponentStatePacked : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa5ae658, size 0x108, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchRenderModelName, ::StringW  pchComponentName, ::by_ref<::OVR::OpenVR::VRControllerState_t_Packed>  pControllerState, ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t>  pState, ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t>  pComponentState, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa5ae760, size 0x34, virtual true, abstract: false, final false
inline bool EndInvoke(::by_ref<::OVR::OpenVR::VRControllerState_t_Packed>  pControllerState, ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t>  pState, ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t>  pComponentState, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa5ae644, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(::StringW  pchRenderModelName, ::StringW  pchComponentName, ::by_ref<::OVR::OpenVR::VRControllerState_t_Packed>  pControllerState, ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t>  pState, ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t>  pComponentState) ;

static inline ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa5ae590, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CVRRenderModels__GetComponentStatePacked() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CVRRenderModels__GetComponentStatePacked", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CVRRenderModels__GetComponentStatePacked(CVRRenderModels__GetComponentStatePacked && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CVRRenderModels__GetComponentStatePacked", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CVRRenderModels__GetComponentStatePacked(CVRRenderModels__GetComponentStatePacked const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13112};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked) == 0x80, "Size mismatch!");

} // namespace end def OVR::OpenVR
