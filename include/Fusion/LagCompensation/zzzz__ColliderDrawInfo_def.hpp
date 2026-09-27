#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/ColliderDrawInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ColliderDrawInfo)
namespace Fusion::LagCompensation {
class IHitboxColliderContainer;
}
namespace Fusion {
struct HitboxTypes;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Fusion::LagCompensation {
class ColliderDrawInfo;
}
// Write type traits
MARK_REF_T(::Fusion::LagCompensation::ColliderDrawInfo*);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::ColliderDrawInfo*, "Fusion.LagCompensation", "ColliderDrawInfo");
// Dependencies System.Object
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.ColliderDrawInfo
class CORDL_TYPE ColliderDrawInfo : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BoxExtents)) ::UnityEngine::Vector3  BoxExtents;

 __declspec(property(get=get_CapsuleBottomCenter)) ::UnityEngine::Vector3  CapsuleBottomCenter;

 __declspec(property(get=get_CapsuleExtents)) float_t  CapsuleExtents;

 __declspec(property(get=get_CapsuleTopCenter)) ::UnityEngine::Vector3  CapsuleTopCenter;

/// @brief Field Container, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Container, put=__cordl_internal_set_Container)) ::Fusion::LagCompensation::IHitboxColliderContainer*  Container;

/// @brief Field Index, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Index, put=__cordl_internal_set_Index)) int32_t  Index;

 __declspec(property(get=get_LocalToWorldMatrix)) ::UnityEngine::Matrix4x4  LocalToWorldMatrix;

 __declspec(property(get=get_Offset)) ::UnityEngine::Vector3  Offset;

 __declspec(property(get=get_Radius)) float_t  Radius;

 __declspec(property(get=get_Type)) ::Fusion::HitboxTypes  Type;

/// @brief Method FromHitboxCollider, addr 0x601807c, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::LagCompensation::ColliderDrawInfo* FromHitboxCollider(int32_t  colliderIndex) ;

static inline ::Fusion::LagCompensation::ColliderDrawInfo* New_ctor() ;

/// @brief Method SetContainer, addr 0x6018084, size 0x8, virtual false, abstract: false, final false
inline void SetContainer(::Fusion::LagCompensation::IHitboxColliderContainer*  container) ;

constexpr ::Fusion::LagCompensation::IHitboxColliderContainer* const& __cordl_internal_get_Container() const;

constexpr ::Fusion::LagCompensation::IHitboxColliderContainer*& __cordl_internal_get_Container() ;

constexpr int32_t const& __cordl_internal_get_Index() const;

constexpr int32_t& __cordl_internal_get_Index() ;

constexpr void __cordl_internal_set_Container(::Fusion::LagCompensation::IHitboxColliderContainer*  value) ;

constexpr void __cordl_internal_set_Index(int32_t  value) ;

/// @brief Method .ctor, addr 0x601808c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BoxExtents, addr 0x6017960, size 0xb8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_BoxExtents() ;

/// @brief Method get_CapsuleBottomCenter, addr 0x6017d74, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_CapsuleBottomCenter() ;

/// @brief Method get_CapsuleExtents, addr 0x6017b84, size 0xb4, virtual false, abstract: false, final false
inline float_t get_CapsuleExtents() ;

/// @brief Method get_CapsuleTopCenter, addr 0x6017c38, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_CapsuleTopCenter() ;

/// @brief Method get_LocalToWorldMatrix, addr 0x6017eb0, size 0xd4, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_LocalToWorldMatrix() ;

/// @brief Method get_Offset, addr 0x6017a18, size 0xb8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Offset() ;

/// @brief Method get_Radius, addr 0x6017ad0, size 0xb4, virtual false, abstract: false, final false
inline float_t get_Radius() ;

/// @brief Method get_Type, addr 0x60178ac, size 0xb4, virtual false, abstract: false, final false
inline ::Fusion::HitboxTypes get_Type() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColliderDrawInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColliderDrawInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColliderDrawInfo(ColliderDrawInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColliderDrawInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColliderDrawInfo(ColliderDrawInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19401};

/// @brief Field Index, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Index;

/// @brief Field Container, offset: 0x18, size: 0x8, def value: None
 ::Fusion::LagCompensation::IHitboxColliderContainer*  ___Container;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::ColliderDrawInfo, ___Index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::ColliderDrawInfo, ___Container) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::ColliderDrawInfo) == 0x20, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
