#pragma once
// IWYU pragma private; include "Meta/XR/EnvironmentRaycastManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnvironmentRaycastManager)
namespace Meta::XR::EnvironmentDepth {
class EnvironmentDepthManager;
}
namespace Meta::XR {
struct DepthRaycastHit;
}
namespace Meta::XR {
struct DepthRaycastResult;
}
namespace Meta::XR {
struct EnvironmentRaycastHitStatus;
}
namespace Meta::XR {
struct EnvironmentRaycastHit;
}
namespace Meta::XR {
class EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager;
}
namespace Meta::XR {
class IEnvironmentRaycastProvider;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR {
class EnvironmentRaycastManager;
}
namespace Meta::XR {
class EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager;
}
// Write type traits
MARK_REF_T(::Meta::XR::EnvironmentRaycastManager*);
MARK_REF_T(::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager*);
DEFINE_IL2CPP_CLASS(::Meta::XR::EnvironmentRaycastManager*, "Meta.XR", "EnvironmentRaycastManager");
DEFINE_IL2CPP_CLASS(::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager*, "Meta.XR", "EnvironmentRaycastManager/EnvironmentRaycastProviderDepthManager");
// Dependencies System.Nullable`1<T>, UnityEngine.MonoBehaviour
namespace Meta::XR {
// Is value type: false
// CS Name: Meta.XR.EnvironmentRaycastManager
class CORDL_TYPE EnvironmentRaycastManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EnvironmentRaycastProviderDepthManager = ::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager;

 __declspec(property(get=get_IsReady)) bool  IsReady;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::Meta::XR::EnvironmentRaycastManager>  _instance;

/// @brief Field _isSupported, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__isSupported, put=setStaticF__isSupported)) ::System::Nullable_1<bool>  _isSupported;

/// @brief Field _provider, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__provider, put=setStaticF__provider)) ::Meta::XR::IEnvironmentRaycastProvider*  _provider;

/// @brief Method Awake, addr 0x9f02884, size 0xc4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckBox, addr 0x9f0328c, size 0xfc, virtual false, abstract: false, final false
inline bool CheckBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation) ;

/// @brief Method CreateProvider, addr 0x9f02828, size 0x54, virtual false, abstract: false, final false
static inline ::Meta::XR::IEnvironmentRaycastProvider* CreateProvider() ;

static inline ::Meta::XR::EnvironmentRaycastManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9f02abc, size 0x64, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9f02d00, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9f02bb8, size 0x50, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlaceBox, addr 0x9f03158, size 0x134, virtual false, abstract: false, final false
inline bool PlaceBox(::UnityEngine::Ray  ray, ::UnityEngine::Vector3  boxSize, ::UnityEngine::Vector3  upwards, ::by_ref<::Meta::XR::EnvironmentRaycastHit>  hit) ;

/// @brief Method Raycast, addr 0x9f02d50, size 0x184, virtual false, abstract: false, final false
inline bool Raycast(::UnityEngine::Ray  ray, ::by_ref<::Meta::XR::EnvironmentRaycastHit>  hit, float_t  maxDistance) ;

/// @brief Method SetProviderEnabled, addr 0x9f02c08, size 0xf8, virtual false, abstract: false, final false
static inline void SetProviderEnabled(bool  isEnabled) ;

/// @brief Method Start, addr 0x9f02b20, size 0x98, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method ToEnvRaycastHit, addr 0x9f03028, size 0xac, virtual false, abstract: false, final false
static inline ::Meta::XR::EnvironmentRaycastHit ToEnvRaycastHit(::Meta::XR::DepthRaycastHit  depthHit) ;

/// [CompilerGenerated]
/// @brief Method <ToEnvRaycastHit>g__ToStatus|14_0, addr 0x9f030d4, size 0x84, virtual false, abstract: false, final false
static inline ::Meta::XR::EnvironmentRaycastHitStatus _ToEnvRaycastHit_g__ToStatus_14_0(::Meta::XR::DepthRaycastResult  depthHitResult) ;

/// @brief Method .ctor, addr 0x9f03388, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Meta::XR::EnvironmentRaycastManager> getStaticF__instance() ;

static inline ::System::Nullable_1<bool> getStaticF__isSupported() ;

static inline ::Meta::XR::IEnvironmentRaycastProvider* getStaticF__provider() ;

/// @brief Method get_IsReady, addr 0x9f02ed4, size 0x154, virtual false, abstract: false, final false
inline bool get_IsReady() ;

/// @brief Method get_IsSupported, addr 0x9f02948, size 0x174, virtual false, abstract: false, final false
static inline bool get_IsSupported() ;

static inline void setStaticF__instance(::UnityW<::Meta::XR::EnvironmentRaycastManager>  value) ;

static inline void setStaticF__isSupported(::System::Nullable_1<bool>  value) ;

static inline void setStaticF__provider(::Meta::XR::IEnvironmentRaycastProvider*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentRaycastManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentRaycastManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentRaycastManager(EnvironmentRaycastManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentRaycastManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentRaycastManager(EnvironmentRaycastManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25757};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::EnvironmentRaycastManager) == 0x20, "Size mismatch!");

} // namespace end def Meta::XR
// Dependencies System.Object
namespace Meta::XR {
// Is value type: false
// CS Name: Meta.XR.EnvironmentRaycastManager/EnvironmentRaycastProviderDepthManager
class CORDL_TYPE EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager : public ::System::Object {
public:
// Declarations
 __declspec(property(get=Meta_XR_IEnvironmentRaycastProvider_get_IsReady)) bool  Meta_XR_IEnvironmentRaycastProvider_IsReady;

 __declspec(property(get=Meta_XR_IEnvironmentRaycastProvider_get_IsSupported)) bool  Meta_XR_IEnvironmentRaycastProvider_IsSupported;

/// @brief Field _depthManager, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__depthManager, put=__cordl_internal_set__depthManager)) ::UnityW<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager>  _depthManager;

/// @brief Convert operator to "::Meta::XR::IEnvironmentRaycastProvider"
constexpr operator  ::Meta::XR::IEnvironmentRaycastProvider*() noexcept;

/// @brief Method EnsureDepthManagerIsPresent, addr 0x9f034a8, size 0x180, virtual false, abstract: false, final false
inline void EnsureDepthManagerIsPresent() ;

/// @brief Method Meta.XR.IEnvironmentRaycastProvider.Raycast, addr 0x9f03804, size 0xdc, virtual true, abstract: false, final true
inline bool Meta_XR_IEnvironmentRaycastProvider_Raycast(::UnityEngine::Ray  ray, ::by_ref<::Meta::XR::EnvironmentRaycastHit>  hit, float_t  maxDistance, bool  reconstructNormal, bool  allowOccludedRayOrigin) ;

/// @brief Method Meta.XR.IEnvironmentRaycastProvider.SetEnabled, addr 0x9f03628, size 0x18c, virtual true, abstract: false, final true
inline void Meta_XR_IEnvironmentRaycastProvider_SetEnabled(bool  isEnabled) ;

/// @brief Method Meta.XR.IEnvironmentRaycastProvider.get_IsReady, addr 0x9f033e4, size 0xc4, virtual true, abstract: false, final true
inline bool Meta_XR_IEnvironmentRaycastProvider_get_IsReady() ;

/// @brief Method Meta.XR.IEnvironmentRaycastProvider.get_IsSupported, addr 0x9f037b4, size 0x50, virtual true, abstract: false, final true
inline bool Meta_XR_IEnvironmentRaycastProvider_get_IsSupported() ;

static inline ::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager* New_ctor() ;

constexpr ::UnityW<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager> const& __cordl_internal_get__depthManager() const;

constexpr ::UnityW<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager>& __cordl_internal_get__depthManager() ;

constexpr void __cordl_internal_set__depthManager(::UnityW<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager>  value) ;

/// @brief Method .ctor, addr 0x9f0287c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Meta::XR::IEnvironmentRaycastProvider"
constexpr ::Meta::XR::IEnvironmentRaycastProvider* i___Meta__XR__IEnvironmentRaycastProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager(EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager(EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25756};

/// @brief Field _depthManager, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Meta::XR::EnvironmentDepth::EnvironmentDepthManager>  ____depthManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager, ____depthManager) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager) == 0x18, "Size mismatch!");

} // namespace end def Meta::XR
