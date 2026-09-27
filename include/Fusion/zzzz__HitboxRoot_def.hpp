#pragma once
// IWYU pragma private; include "Fusion/HitboxRoot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__HitboxRoot_ConfigFlags_def.hpp"
#include "Fusion/zzzz__Hitbox_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HitboxRoot)
namespace Fusion::LagCompensation {
class IHitboxColliderContainer;
}
namespace Fusion {
class HitboxManager;
}
namespace Fusion {
class HitboxRoot_HitboxComparerX;
}
namespace Fusion {
class HitboxRoot_HitboxComparerY;
}
namespace Fusion {
class HitboxRoot_HitboxComparerZ;
}
namespace Fusion {
class Hitbox;
}
namespace Fusion {
class NetworkRunner;
}
namespace GlobalNamespace {
struct HitboxRoot_ConfigFlags;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Fusion {
class HitboxRoot;
}
namespace Fusion {
class HitboxRoot_HitboxComparerX;
}
namespace Fusion {
class HitboxRoot_HitboxComparerY;
}
namespace Fusion {
class HitboxRoot_HitboxComparerZ;
}
// Write type traits
MARK_REF_T(::Fusion::HitboxRoot*);
MARK_REF_T(::Fusion::HitboxRoot_HitboxComparerX*);
MARK_REF_T(::Fusion::HitboxRoot_HitboxComparerY*);
MARK_REF_T(::Fusion::HitboxRoot_HitboxComparerZ*);
DEFINE_IL2CPP_CLASS(::Fusion::HitboxRoot*, "Fusion", "HitboxRoot");
DEFINE_IL2CPP_CLASS(::Fusion::HitboxRoot_HitboxComparerX*, "Fusion", "HitboxRoot/HitboxComparerX");
DEFINE_IL2CPP_CLASS(::Fusion::HitboxRoot_HitboxComparerY*, "Fusion", "HitboxRoot/HitboxComparerY");
DEFINE_IL2CPP_CLASS(::Fusion::HitboxRoot_HitboxComparerZ*, "Fusion", "HitboxRoot/HitboxComparerZ");
// [NetworkBehaviourWeaved(1)]
// [DisallowMultipleComponent]
// [AddComponentMenu("Fusion/Lag Compensation/Hitbox Root")]
// Dependencies Fusion.Hitbox, Fusion.HitboxRoot::ConfigFlags, Fusion.NetworkBehaviour, UnityEngine.Color, UnityEngine.Vector3
namespace Fusion {
// Is value type: false
// CS Name: Fusion.HitboxRoot
class CORDL_TYPE HitboxRoot : public ::Fusion::NetworkBehaviour {
public:
// Declarations
using HitboxComparerX = ::Fusion::HitboxRoot_HitboxComparerX;

using HitboxComparerY = ::Fusion::HitboxRoot_HitboxComparerY;

using HitboxComparerZ = ::Fusion::HitboxRoot_HitboxComparerZ;

using ConfigFlags = ::GlobalNamespace::HitboxRoot_ConfigFlags;

/// @brief Field BroadRadius, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_BroadRadius, put=__cordl_internal_set_BroadRadius)) float_t  BroadRadius;

/// @brief Field CachedTransform, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_CachedTransform, put=__cordl_internal_set_CachedTransform)) ::UnityW<::UnityEngine::Transform>  CachedTransform;

/// @brief Field Config, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_Config, put=__cordl_internal_set_Config)) ::GlobalNamespace::HitboxRoot_ConfigFlags  Config;

/// @brief Field GizmosColor, offset 0x94, size 0x10 
 __declspec(property(get=__cordl_internal_get_GizmosColor, put=__cordl_internal_set_GizmosColor)) ::UnityEngine::Color  GizmosColor;

 __declspec(property(get=get_HitboxRootActive, put=set_HitboxRootActive)) bool  HitboxRootActive;

/// @brief Field Hitboxes, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_Hitboxes, put=__cordl_internal_set_Hitboxes)) ::ArrayW<::UnityW<::Fusion::Hitbox>>  Hitboxes;

 __declspec(property(get=get_InInterest)) bool  InInterest;

 __declspec(property(get=get_Manager, put=set_Manager)) ::UnityW<::Fusion::HitboxManager>  Manager;

/// @brief Field Offset, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get_Offset, put=__cordl_internal_set_Offset)) ::UnityEngine::Vector3  Offset;

 __declspec(property(get=get_Registered)) bool  Registered;

/// @brief Field <Manager>k__BackingField, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Manager_k__BackingField, put=__cordl_internal_set__Manager_k__BackingField)) ::UnityW<::Fusion::HitboxManager>  _Manager_k__BackingField;

/// @brief Method Awake, addr 0x5f94fb0, size 0x24, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DeregisterColliders, addr 0x5f95934, size 0x108, virtual false, abstract: false, final false
inline void DeregisterColliders(::Fusion::LagCompensation::IHitboxColliderContainer*  container) ;

/// @brief Method Despawned, addr 0x5f95788, size 0x54, virtual true, abstract: false, final false
inline void Despawned(::Fusion::NetworkRunner*  runner, bool  hasState) ;

/// @brief Method DrawGizmos, addr 0x5f950f4, size 0xe0, virtual true, abstract: false, final false
inline void DrawGizmos(::UnityEngine::Color  color, ::by_ref<::UnityEngine::Matrix4x4>  localToWorldMatrix) ;

/// @brief Method GetBounds, addr 0x5f95a3c, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// [EditorButton("Find Hitboxes", (Fusion.EditorButtonVisibility)1, 0, false)]
/// @brief Method InitHitboxes, addr 0x5f951d4, size 0x1e4, virtual false, abstract: false, final false
inline void InitHitboxes() ;

/// @brief Method IsHitboxActive, addr 0x5f911b4, size 0x404, virtual false, abstract: false, final false
inline bool IsHitboxActive(::Fusion::Hitbox*  hitbox) ;

/// @brief Method IsHitboxActiveFastUnchecked, addr 0x5f956f8, size 0x90, virtual false, abstract: false, final false
inline bool IsHitboxActiveFastUnchecked(::Fusion::Hitbox*  hitbox) ;

static inline ::Fusion::HitboxRoot* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x5f94fd4, size 0x120, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method RegisterColliders, addr 0x5f957dc, size 0x158, virtual false, abstract: false, final false
inline void RegisterColliders(::Fusion::LagCompensation::IHitboxColliderContainer*  container, int32_t  tick) ;

/// @brief Method SetHitboxActive, addr 0x5f915dc, size 0x438, virtual false, abstract: false, final false
inline void SetHitboxActive(::Fusion::Hitbox*  hitbox, bool  setActive) ;

/// @brief Method SetHitboxActiveFastUnchecked, addr 0x5f95624, size 0xd4, virtual false, abstract: false, final false
inline void SetHitboxActiveFastUnchecked(::Fusion::Hitbox*  hitbox, bool  setActive) ;

/// [EditorButton("Quick Set BroadRadius", (Fusion.EditorButtonVisibility)2, 0, true)]
/// @brief Method SetMinBoundingRadius, addr 0x5f953b8, size 0x26c, virtual false, abstract: false, final false
inline void SetMinBoundingRadius() ;

constexpr float_t const& __cordl_internal_get_BroadRadius() const;

constexpr float_t& __cordl_internal_get_BroadRadius() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_CachedTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_CachedTransform() ;

constexpr ::GlobalNamespace::HitboxRoot_ConfigFlags const& __cordl_internal_get_Config() const;

constexpr ::GlobalNamespace::HitboxRoot_ConfigFlags& __cordl_internal_get_Config() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_GizmosColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_GizmosColor() ;

constexpr ::ArrayW<::UnityW<::Fusion::Hitbox>> const& __cordl_internal_get_Hitboxes() const;

constexpr ::ArrayW<::UnityW<::Fusion::Hitbox>>& __cordl_internal_get_Hitboxes() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Offset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Offset() ;

constexpr ::UnityW<::Fusion::HitboxManager> const& __cordl_internal_get__Manager_k__BackingField() const;

constexpr ::UnityW<::Fusion::HitboxManager>& __cordl_internal_get__Manager_k__BackingField() ;

constexpr void __cordl_internal_set_BroadRadius(float_t  value) ;

constexpr void __cordl_internal_set_CachedTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_Config(::GlobalNamespace::HitboxRoot_ConfigFlags  value) ;

constexpr void __cordl_internal_set_GizmosColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_Hitboxes(::ArrayW<::UnityW<::Fusion::Hitbox>>  value) ;

constexpr void __cordl_internal_set_Offset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__Manager_k__BackingField(::UnityW<::Fusion::HitboxManager>  value) ;

/// @brief Method .ctor, addr 0x5f95aec, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HitboxRootActive, addr 0x5f94ed8, size 0x5c, virtual false, abstract: false, final false
inline bool get_HitboxRootActive() ;

/// @brief Method get_InInterest, addr 0x5f94560, size 0xb4, virtual false, abstract: false, final false
inline bool get_InInterest() ;

/// [CompilerGenerated]
/// @brief Method get_Manager, addr 0x5f94fa0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::HitboxManager> get_Manager() ;

/// @brief Method get_Registered, addr 0x5f94540, size 0x20, virtual false, abstract: false, final false
inline bool get_Registered() ;

/// @brief Method set_HitboxRootActive, addr 0x5f94f34, size 0x6c, virtual false, abstract: false, final false
inline void set_HitboxRootActive(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Manager, addr 0x5f94fa8, size 0x8, virtual false, abstract: false, final false
inline void set_Manager(::Fusion::HitboxManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HitboxRoot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HitboxRoot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HitboxRoot(HitboxRoot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HitboxRoot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HitboxRoot(HitboxRoot const& ) = delete;

/// @brief Field MAX_HITBOXES offset 0xffffffff size 0x4
static constexpr int32_t  MAX_HITBOXES{static_cast<int32_t>(0x1f)};

/// @brief Field WORD_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  WORD_COUNT{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18967};

/// [InlineHelp]
/// @brief Field Config, offset: 0x80, size: 0x4, def value: None
 ::GlobalNamespace::HitboxRoot_ConfigFlags  ___Config;

/// [InlineHelp]
/// [Unit((Fusion.Units)16)]
/// @brief Field BroadRadius, offset: 0x84, size: 0x4, def value: None
 float_t  ___BroadRadius;

/// [InlineHelp]
/// @brief Field Offset, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Offset;

/// [InlineHelp]
/// @brief Field GizmosColor, offset: 0x94, size: 0x10, def value: None
 ::UnityEngine::Color  ___GizmosColor;

/// [InlineHelp]
/// [Space(4)]
/// @brief Field Hitboxes, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Fusion::Hitbox>>  ___Hitboxes;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <Manager>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::Fusion::HitboxManager>  ____Manager_k__BackingField;

/// @brief Field CachedTransform, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___CachedTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::HitboxRoot, ___Config) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Fusion::HitboxRoot, ___BroadRadius) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Fusion::HitboxRoot, ___Offset) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Fusion::HitboxRoot, ___GizmosColor) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Fusion::HitboxRoot, ___Hitboxes) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Fusion::HitboxRoot, ____Manager_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Fusion::HitboxRoot, ___CachedTransform) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::Fusion::HitboxRoot) == 0xc0, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.HitboxRoot/HitboxComparerZ
class CORDL_TYPE HitboxRoot_HitboxComparerZ : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>*() noexcept;

/// @brief Method Compare, addr 0x5f95c14, size 0x78, virtual true, abstract: false, final true
inline int32_t Compare(::Fusion::HitboxRoot*  a, ::Fusion::HitboxRoot*  b) ;

static inline ::Fusion::HitboxRoot_HitboxComparerZ* New_ctor() ;

/// @brief Method .ctor, addr 0x5f95c8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>* i___System__Collections__Generic__IComparer_1___UnityW___Fusion__HitboxRoot__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HitboxRoot_HitboxComparerZ() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HitboxRoot_HitboxComparerZ", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HitboxRoot_HitboxComparerZ(HitboxRoot_HitboxComparerZ && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HitboxRoot_HitboxComparerZ", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HitboxRoot_HitboxComparerZ(HitboxRoot_HitboxComparerZ const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18966};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::HitboxRoot_HitboxComparerZ) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.HitboxRoot/HitboxComparerY
class CORDL_TYPE HitboxRoot_HitboxComparerY : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>*() noexcept;

/// @brief Method Compare, addr 0x5f95b94, size 0x78, virtual true, abstract: false, final true
inline int32_t Compare(::Fusion::HitboxRoot*  a, ::Fusion::HitboxRoot*  b) ;

static inline ::Fusion::HitboxRoot_HitboxComparerY* New_ctor() ;

/// @brief Method .ctor, addr 0x5f95c0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>* i___System__Collections__Generic__IComparer_1___UnityW___Fusion__HitboxRoot__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HitboxRoot_HitboxComparerY() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HitboxRoot_HitboxComparerY", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HitboxRoot_HitboxComparerY(HitboxRoot_HitboxComparerY && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HitboxRoot_HitboxComparerY", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HitboxRoot_HitboxComparerY(HitboxRoot_HitboxComparerY const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18965};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::HitboxRoot_HitboxComparerY) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.HitboxRoot/HitboxComparerX
class CORDL_TYPE HitboxRoot_HitboxComparerX : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>*() noexcept;

/// @brief Method Compare, addr 0x5f95b1c, size 0x70, virtual true, abstract: false, final true
inline int32_t Compare(::Fusion::HitboxRoot*  a, ::Fusion::HitboxRoot*  b) ;

static inline ::Fusion::HitboxRoot_HitboxComparerX* New_ctor() ;

/// @brief Method .ctor, addr 0x5f95b8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>* i___System__Collections__Generic__IComparer_1___UnityW___Fusion__HitboxRoot__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HitboxRoot_HitboxComparerX() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HitboxRoot_HitboxComparerX", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HitboxRoot_HitboxComparerX(HitboxRoot_HitboxComparerX && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HitboxRoot_HitboxComparerX", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HitboxRoot_HitboxComparerX(HitboxRoot_HitboxComparerX const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18964};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::HitboxRoot_HitboxComparerX) == 0x10, "Size mismatch!");

} // namespace end def Fusion
