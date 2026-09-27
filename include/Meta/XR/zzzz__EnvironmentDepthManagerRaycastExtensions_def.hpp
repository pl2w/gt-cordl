#pragma once
// IWYU pragma private; include "Meta/XR/EnvironmentDepthManagerRaycastExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/zzzz__Eye_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnvironmentDepthManagerRaycastExtensions)
namespace Meta::XR::EnvironmentDepth {
class EnvironmentDepthManager;
}
namespace Meta::XR {
struct DepthRaycastHit;
}
namespace Meta::XR {
class EnvironmentDepthRaycaster;
}
namespace Meta::XR {
struct EnvironmentRaycastHit;
}
namespace Meta::XR {
struct Eye;
}
namespace Meta::XR {
class IEnvironmentRaycastProvider;
}
namespace UnityEngine {
struct Color;
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
class EnvironmentDepthManagerRaycastExtensions;
}
// Write type traits
MARK_REF_T(::Meta::XR::EnvironmentDepthManagerRaycastExtensions*);
DEFINE_IL2CPP_CLASS(::Meta::XR::EnvironmentDepthManagerRaycastExtensions*, "Meta.XR", "EnvironmentDepthManagerRaycastExtensions");
// [Extension]
// Dependencies Meta.XR.Eye, System.Object
namespace Meta::XR {
// Is value type: false
// CS Name: Meta.XR.EnvironmentDepthManagerRaycastExtensions
class CORDL_TYPE EnvironmentDepthManagerRaycastExtensions : public ::System::Object {
public:
// Declarations
/// @brief Field _depthRaycast, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__depthRaycast, put=setStaticF__depthRaycast)) ::UnityW<::Meta::XR::EnvironmentDepthRaycaster>  _depthRaycast;

/// [Extension]
/// @brief Method CheckBox, addr 0x9efffa8, size 0x694, virtual false, abstract: false, final false
static inline bool CheckBox(::Meta::XR::IEnvironmentRaycastProvider*  provider, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation) ;

/// [Conditional("DEBUG_DEPTH_RAYCAST")]
/// @brief Method DrawLine, addr 0x9f006f8, size 0xf0, virtual false, abstract: false, final false
static inline void DrawLine(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Color  color) ;

/// @brief Method EnsureDepthRaycastComponentIsPresent, addr 0x9efedac, size 0x164, virtual false, abstract: false, final false
static inline void EnsureDepthRaycastComponentIsPresent(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*  depthManager) ;

/// [Conditional("DEBUG_DEPTH_RAYCAST")]
/// @brief Method Log, addr 0x9f0063c, size 0xbc, virtual false, abstract: false, final false
static inline void Log(::StringW  msg) ;

/// [Extension]
/// @brief Method PlaceBox, addr 0x9eff2f0, size 0xcb8, virtual false, abstract: false, final false
static inline bool PlaceBox(::Meta::XR::IEnvironmentRaycastProvider*  provider, ::UnityEngine::Ray  ray, ::UnityEngine::Vector3  boxSize, ::UnityEngine::Vector3  upwards, ::by_ref<::Meta::XR::EnvironmentRaycastHit>  hit, float_t  maxDistance) ;

/// [Extension]
/// @brief Method Raycast, addr 0x9efec3c, size 0x170, virtual false, abstract: false, final false
static inline bool Raycast(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*  depthManager, ::UnityEngine::Ray  ray, ::by_ref<::Meta::XR::DepthRaycastHit>  hitInfo, float_t  maxDistance, ::Meta::XR::Eye  eye, bool  reconstructNormal, bool  allowOccludedRayOrigin) ;

/// [Extension]
/// @brief Method SetRaycastWarmUpEnabled, addr 0x9eff280, size 0x70, virtual false, abstract: false, final false
static inline void SetRaycastWarmUpEnabled(::Meta::XR::EnvironmentDepth::EnvironmentDepthManager*  depthManager, bool  value) ;

static inline ::UnityW<::Meta::XR::EnvironmentDepthRaycaster> getStaticF__depthRaycast() ;

static inline void setStaticF__depthRaycast(::UnityW<::Meta::XR::EnvironmentDepthRaycaster>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentDepthManagerRaycastExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentDepthManagerRaycastExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentDepthManagerRaycastExtensions(EnvironmentDepthManagerRaycastExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentDepthManagerRaycastExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentDepthManagerRaycastExtensions(EnvironmentDepthManagerRaycastExtensions const& ) = delete;

/// @brief Field DefaultEye value: I32(2)
static ::Meta::XR::Eye const DefaultEye;

/// @brief Field MinXYSize offset 0xffffffff size 0x4
static constexpr float_t  MinXYSize{static_cast<float_t>(0.05f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25749};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::EnvironmentDepthManagerRaycastExtensions) == 0x10, "Size mismatch!");

} // namespace end def Meta::XR
