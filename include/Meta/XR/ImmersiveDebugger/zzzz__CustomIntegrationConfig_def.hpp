#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/CustomIntegrationConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CustomIntegrationConfig)
namespace Meta::XR::ImmersiveDebugger {
class CustomIntegrationConfig_GetCameraDelegate;
}
namespace Meta::XR::ImmersiveDebugger {
class ICustomIntegrationConfig;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger {
class CustomIntegrationConfig;
}
namespace Meta::XR::ImmersiveDebugger {
class CustomIntegrationConfig_GetCameraDelegate;
}
// Write type traits
MARK_REF_T(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*);
MARK_REF_T(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*);
DEFINE_IL2CPP_CLASS(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig*, "Meta.XR.ImmersiveDebugger", "CustomIntegrationConfig");
DEFINE_IL2CPP_CLASS(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*, "Meta.XR.ImmersiveDebugger", "CustomIntegrationConfig/GetCameraDelegate");
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig
class CORDL_TYPE CustomIntegrationConfig : public ::System::Object {
public:
// Declarations
using GetCameraDelegate = ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate;

/// @brief Field GetCameraHandler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GetCameraHandler, put=setStaticF_GetCameraHandler)) ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*  GetCameraHandler;

/// @brief Method ClearAllConfig, addr 0x9ee6ce8, size 0xc8, virtual false, abstract: false, final false
static inline void ClearAllConfig(::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*  customConfig) ;

/// @brief Method GetCamera, addr 0x9ee6db0, size 0x68, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Camera> GetCamera() ;

/// @brief Method SetupAllConfig, addr 0x9ee6b84, size 0xc8, virtual false, abstract: false, final false
static inline void SetupAllConfig(::Meta::XR::ImmersiveDebugger::ICustomIntegrationConfig*  customConfig) ;

/// [CompilerGenerated]
/// @brief Method add_GetCameraHandler, addr 0x9ee6a14, size 0xb8, virtual false, abstract: false, final false
static inline void add_GetCameraHandler(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*  value) ;

static inline ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate* getStaticF_GetCameraHandler() ;

/// [CompilerGenerated]
/// @brief Method remove_GetCameraHandler, addr 0x9ee6acc, size 0xb8, virtual false, abstract: false, final false
static inline void remove_GetCameraHandler(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*  value) ;

static inline void setStaticF_GetCameraHandler(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomIntegrationConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomIntegrationConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomIntegrationConfig(CustomIntegrationConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomIntegrationConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomIntegrationConfig(CustomIntegrationConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33096};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig) == 0x10, "Size mismatch!");

} // namespace end def Meta::XR::ImmersiveDebugger
// Dependencies System.MulticastDelegate
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig/GetCameraDelegate
class CORDL_TYPE CustomIntegrationConfig_GetCameraDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x9ee6e18, size 0x14, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> Invoke() ;

static inline ::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9ee6c4c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomIntegrationConfig_GetCameraDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomIntegrationConfig_GetCameraDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomIntegrationConfig_GetCameraDelegate(CustomIntegrationConfig_GetCameraDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomIntegrationConfig_GetCameraDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomIntegrationConfig_GetCameraDelegate(CustomIntegrationConfig_GetCameraDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33095};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::ImmersiveDebugger::CustomIntegrationConfig_GetCameraDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::ImmersiveDebugger
