#pragma once
// IWYU pragma private; include "UnityEngine/Collider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Collider)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class PhysicsMaterial;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Collider;
}
// Write type traits
MARK_REF_T(::UnityEngine::Collider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Collider*, "UnityEngine", "Collider");
// [NativeHeader("Modules/Physics/Collider.h")]
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Collider
class CORDL_TYPE Collider : public ::UnityEngine::Component {
public:
// Declarations
 __declspec(property(get=get_attachedRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  attachedRigidbody;

 __declspec(property(get=get_bounds)) ::UnityEngine::Bounds  bounds;

 __declspec(property(get=get_contactOffset, put=set_contactOffset)) float_t  contactOffset;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_excludeLayers, put=set_excludeLayers)) ::UnityEngine::LayerMask  excludeLayers;

 __declspec(property(get=get_includeLayers, put=set_includeLayers)) ::UnityEngine::LayerMask  includeLayers;

 __declspec(property(get=get_isTrigger, put=set_isTrigger)) bool  isTrigger;

 __declspec(property(get=get_material, put=set_material)) ::UnityW<::UnityEngine::PhysicsMaterial>  material;

/// @brief [NativeMethod("Material")]
 __declspec(property(get=get_sharedMaterial, put=set_sharedMaterial)) ::UnityW<::UnityEngine::PhysicsMaterial>  sharedMaterial;

/// @brief Method ClosestPoint, addr 0xb680a0c, size 0xa4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3  position) ;

/// @brief Method ClosestPointOnBounds, addr 0xb681534, size 0xa4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ClosestPointOnBounds(::UnityEngine::Vector3  position) ;

/// @brief Method ClosestPoint_Injected, addr 0xb680ab0, size 0x54, virtual false, abstract: false, final false
static inline void ClosestPoint_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// [NativeName("ClosestPointOnBounds")]
/// @brief Method Internal_ClosestPointOnBounds, addr 0xb681430, size 0xa8, virtual false, abstract: false, final false
inline void Internal_ClosestPointOnBounds(::UnityEngine::Vector3  point, ::by_ref<::UnityEngine::Vector3>  outPos, ::by_ref<float_t>  distance) ;

/// @brief Method Internal_ClosestPointOnBounds_Injected, addr 0xb6814d8, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_ClosestPointOnBounds_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::UnityEngine::Vector3>  outPos, ::by_ref<float_t>  distance) ;

static inline ::UnityEngine::Collider* New_ctor() ;

/// @brief Method Raycast, addr 0xb6812a4, size 0xd0, virtual false, abstract: false, final false
inline ::UnityEngine::RaycastHit Raycast(::UnityEngine::Ray  ray, float_t  maxDistance, ::by_ref<bool>  hasHit) ;

/// @brief Method Raycast, addr 0xb6813e0, size 0x50, virtual false, abstract: false, final false
inline bool Raycast(::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance) ;

/// @brief Method Raycast_Injected, addr 0xb681374, size 0x6c, virtual false, abstract: false, final false
static inline void Raycast_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Ray>  ray, float_t  maxDistance, ::by_ref<bool>  hasHit, ::by_ref<::UnityEngine::RaycastHit>  ret) ;

/// @brief Method .ctor, addr 0xb67f60c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [NativeMethod("GetRigidbody")]
/// @brief Method get_attachedRigidbody, addr 0xb68063c, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rigidbody> get_attachedRigidbody() ;

/// @brief Method get_attachedRigidbody_Injected, addr 0xb6806d0, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_attachedRigidbody_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_bounds, addr 0xb680b04, size 0xa4, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_bounds() ;

/// @brief Method get_bounds_Injected, addr 0xb680ba8, size 0x44, virtual false, abstract: false, final false
static inline void get_bounds_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bounds>  ret) ;

/// @brief Method get_contactOffset, addr 0xb680884, size 0x78, virtual false, abstract: false, final false
inline float_t get_contactOffset() ;

/// @brief Method get_contactOffset_Injected, addr 0xb6808fc, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_contactOffset_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_enabled, addr 0xb6804c4, size 0x78, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_enabled_Injected, addr 0xb68053c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_enabled_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_excludeLayers, addr 0xb680bec, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_excludeLayers() ;

/// @brief Method get_excludeLayers_Injected, addr 0xb680c74, size 0x44, virtual false, abstract: false, final false
static inline void get_excludeLayers_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::LayerMask>  ret) ;

/// @brief Method get_includeLayers, addr 0xb680d80, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_includeLayers() ;

/// @brief Method get_includeLayers_Injected, addr 0xb680e08, size 0x44, virtual false, abstract: false, final false
static inline void get_includeLayers_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::LayerMask>  ret) ;

/// @brief Method get_isTrigger, addr 0xb68070c, size 0x78, virtual false, abstract: false, final false
inline bool get_isTrigger() ;

/// @brief Method get_isTrigger_Injected, addr 0xb680784, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isTrigger_Injected(::System::IntPtr  _unity_self) ;

/// [NativeMethod("GetClonedMaterial")]
/// @brief Method get_material, addr 0xb6810dc, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::PhysicsMaterial> get_material() ;

/// @brief Method get_material_Injected, addr 0xb681170, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_material_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_sharedMaterial, addr 0xb680f14, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::PhysicsMaterial> get_sharedMaterial() ;

/// @brief Method get_sharedMaterial_Injected, addr 0xb680fa8, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_sharedMaterial_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_contactOffset, addr 0xb680938, size 0x88, virtual false, abstract: false, final false
inline void set_contactOffset(float_t  value) ;

/// @brief Method set_contactOffset_Injected, addr 0xb6809c0, size 0x4c, virtual false, abstract: false, final false
static inline void set_contactOffset_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_enabled, addr 0xb680578, size 0x80, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_enabled_Injected, addr 0xb6805f8, size 0x44, virtual false, abstract: false, final false
static inline void set_enabled_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_excludeLayers, addr 0xb680cb8, size 0x84, virtual false, abstract: false, final false
inline void set_excludeLayers(::UnityEngine::LayerMask  value) ;

/// @brief Method set_excludeLayers_Injected, addr 0xb680d3c, size 0x44, virtual false, abstract: false, final false
static inline void set_excludeLayers_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::LayerMask>  value) ;

/// @brief Method set_includeLayers, addr 0xb680e4c, size 0x84, virtual false, abstract: false, final false
inline void set_includeLayers(::UnityEngine::LayerMask  value) ;

/// @brief Method set_includeLayers_Injected, addr 0xb680ed0, size 0x44, virtual false, abstract: false, final false
static inline void set_includeLayers_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::LayerMask>  value) ;

/// @brief Method set_isTrigger, addr 0xb6807c0, size 0x80, virtual false, abstract: false, final false
inline void set_isTrigger(bool  value) ;

/// @brief Method set_isTrigger_Injected, addr 0xb680840, size 0x44, virtual false, abstract: false, final false
static inline void set_isTrigger_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// [NativeMethod("SetMaterial")]
/// @brief Method set_material, addr 0xb6811ac, size 0xb4, virtual false, abstract: false, final false
inline void set_material(::UnityEngine::PhysicsMaterial*  value) ;

/// @brief Method set_material_Injected, addr 0xb681260, size 0x44, virtual false, abstract: false, final false
static inline void set_material_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_sharedMaterial, addr 0xb680fe4, size 0xb4, virtual false, abstract: false, final false
inline void set_sharedMaterial(::UnityEngine::PhysicsMaterial*  value) ;

/// @brief Method set_sharedMaterial_Injected, addr 0xb681098, size 0x44, virtual false, abstract: false, final false
static inline void set_sharedMaterial_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Collider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Collider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Collider(Collider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Collider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Collider(Collider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30564};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Collider) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
