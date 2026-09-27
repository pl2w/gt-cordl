#pragma once
// IWYU pragma private; include "UnityEngine/ReflectionProbe.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionProbe)
namespace GlobalNamespace {
struct ReflectionProbe_ReflectionProbeEvent;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Rendering {
struct ReflectionProbeMode;
}
namespace UnityEngine::Rendering {
struct ReflectionProbeRefreshMode;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class ReflectionProbe;
}
// Write type traits
MARK_REF_T(::UnityEngine::ReflectionProbe*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ReflectionProbe*, "UnityEngine", "ReflectionProbe");
// [NativeHeader("Runtime/Camera/ReflectionProbes.h")]
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ReflectionProbe
class CORDL_TYPE ReflectionProbe : public ::UnityEngine::Behaviour {
public:
// Declarations
using ReflectionProbeEvent = ::GlobalNamespace::ReflectionProbe_ReflectionProbeEvent;

 __declspec(property(get=get_mode)) ::UnityEngine::Rendering::ReflectionProbeMode  mode;

/// @brief Field reflectionProbeChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_reflectionProbeChanged, put=setStaticF_reflectionProbeChanged)) ::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>,::GlobalNamespace::ReflectionProbe_ReflectionProbeEvent>*  reflectionProbeChanged;

 __declspec(property(get=get_refreshMode)) ::UnityEngine::Rendering::ReflectionProbeRefreshMode  refreshMode;

/// @brief Field registeredDefaultReflectionSetActions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_registeredDefaultReflectionSetActions, put=setStaticF_registeredDefaultReflectionSetActions)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*  registeredDefaultReflectionSetActions;

/// @brief Field registeredDefaultReflectionTextureActions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_registeredDefaultReflectionTextureActions, put=setStaticF_registeredDefaultReflectionTextureActions)) ::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*  registeredDefaultReflectionTextureActions;

/// [RequiredByNativeCode]
/// @brief Method CallReflectionProbeEvent, addr 0xb56f320, size 0x90, virtual false, abstract: false, final false
static inline void CallReflectionProbeEvent(::UnityEngine::ReflectionProbe*  probe, ::GlobalNamespace::ReflectionProbe_ReflectionProbeEvent  probeEvent) ;

/// [RequiredByNativeCode]
/// @brief Method CallSetDefaultReflection, addr 0xb56f3b0, size 0x170, virtual false, abstract: false, final false
static inline void CallSetDefaultReflection(::UnityEngine::Texture*  defaultReflectionCubemap) ;

static inline ::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>,::GlobalNamespace::ReflectionProbe_ReflectionProbeEvent>* getStaticF_reflectionProbeChanged() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* getStaticF_registeredDefaultReflectionSetActions() ;

static inline ::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* getStaticF_registeredDefaultReflectionTextureActions() ;

/// @brief Method get_defaultTexture, addr 0xb56f274, size 0x84, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture> get_defaultTexture() ;

/// @brief Method get_defaultTextureHDRDecodeValues, addr 0xb56f1b0, size 0x88, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 get_defaultTextureHDRDecodeValues() ;

/// @brief Method get_defaultTextureHDRDecodeValues_Injected, addr 0xb56f238, size 0x3c, virtual false, abstract: false, final false
static inline void get_defaultTextureHDRDecodeValues_Injected(::by_ref<::UnityEngine::Vector4>  ret) ;

/// @brief Method get_defaultTexture_Injected, addr 0xb56f2f8, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr get_defaultTexture_Injected() ;

/// @brief Method get_mode, addr 0xb56f000, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ReflectionProbeMode get_mode() ;

/// @brief Method get_mode_Injected, addr 0xb56f09c, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ReflectionProbeMode get_mode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_refreshMode, addr 0xb56f0d8, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::ReflectionProbeRefreshMode get_refreshMode() ;

/// @brief Method get_refreshMode_Injected, addr 0xb56f174, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ReflectionProbeRefreshMode get_refreshMode_Injected(::System::IntPtr  _unity_self) ;

static inline void setStaticF_reflectionProbeChanged(::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>,::GlobalNamespace::ReflectionProbe_ReflectionProbeEvent>*  value) ;

static inline void setStaticF_registeredDefaultReflectionSetActions(::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*  value) ;

static inline void setStaticF_registeredDefaultReflectionTextureActions(::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionProbe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionProbe(ReflectionProbe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionProbe(ReflectionProbe const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14823};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ReflectionProbe) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
