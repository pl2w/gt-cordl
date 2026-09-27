#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPawn.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaPawn)
namespace GlobalNamespace {
class VRRig;
}
namespace GlobalNamespace {
class XformNode;
}
namespace GlobalNamespace {
class ZoneEntityBSP;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaPawn;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaPawn*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaPawn*, "", "GorillaPawn");
// [Obsolete]
// Dependencies UnityEngine.Matrix4x4, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaPawn
class CORDL_TYPE GorillaPawn : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _bodyXform, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyXform, put=__cordl_internal_set__bodyXform)) ::GlobalNamespace::XformNode*  _bodyXform;

/// @brief Field _gPawnActiveCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__gPawnActiveCount, put=setStaticF__gPawnActiveCount)) int32_t  _gPawnActiveCount;

/// @brief Field _gPawns, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__gPawns, put=setStaticF__gPawns)) ::ArrayW<::UnityW<::GlobalNamespace::GorillaPawn>>  _gPawns;

/// @brief Field _gShaderData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__gShaderData, put=setStaticF__gShaderData)) ::ArrayW<::UnityEngine::Matrix4x4>  _gShaderData;

/// @brief Field _handLeft, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__handLeft, put=__cordl_internal_set__handLeft)) ::UnityW<::UnityEngine::Transform>  _handLeft;

/// @brief Field _handLeftXform, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__handLeftXform, put=__cordl_internal_set__handLeftXform)) ::GlobalNamespace::XformNode*  _handLeftXform;

/// @brief Field _handRight, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__handRight, put=__cordl_internal_set__handRight)) ::UnityW<::UnityEngine::Transform>  _handRight;

/// @brief Field _handRightXform, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__handRightXform, put=__cordl_internal_set__handRightXform)) ::GlobalNamespace::XformNode*  _handRightXform;

/// @brief Field _head, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__head, put=__cordl_internal_set__head)) ::UnityW<::UnityEngine::Transform>  _head;

/// @brief Field _headXform, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__headXform, put=__cordl_internal_set__headXform)) ::GlobalNamespace::XformNode*  _headXform;

/// @brief Field _id, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__id, put=__cordl_internal_set__id)) int32_t  _id;

/// @brief Field _index, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__index, put=__cordl_internal_set__index)) int32_t  _index;

/// @brief Field _invalid, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__invalid, put=__cordl_internal_set__invalid)) bool  _invalid;

/// @brief Field _rig, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__rig, put=__cordl_internal_set__rig)) ::UnityW<::GlobalNamespace::VRRig>  _rig;

/// @brief Field _transform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__transform, put=__cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform>  _transform;

/// @brief Field _zoneEntity, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__zoneEntity, put=__cordl_internal_set__zoneEntity)) ::UnityW<::GlobalNamespace::ZoneEntityBSP>  _zoneEntity;

 __declspec(property(get=get_body)) ::GlobalNamespace::XformNode*  body;

 __declspec(property(get=get_handLeft)) ::GlobalNamespace::XformNode*  handLeft;

 __declspec(property(get=get_handRight)) ::GlobalNamespace::XformNode*  handRight;

 __declspec(property(get=get_head)) ::GlobalNamespace::XformNode*  head;

 __declspec(property(get=get_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

 __declspec(property(get=get_transform)) ::UnityW<::UnityEngine::Transform>  transform;

 __declspec(property(get=get_zoneEntity)) ::UnityW<::GlobalNamespace::ZoneEntityBSP>  zoneEntity;

/// @brief Method Awake, addr 0x5920300, size 0x8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CanRun, addr 0x5920814, size 0xec, virtual false, abstract: false, final false
inline bool CanRun() ;

/// @brief Method ComparePawns, addr 0x5920d48, size 0x174, virtual false, abstract: false, final false
static inline int32_t ComparePawns(::GlobalNamespace::GorillaPawn*  x, ::GlobalNamespace::GorillaPawn*  y) ;

static inline ::GlobalNamespace::GorillaPawn* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5920b44, size 0x204, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5920a24, size 0x120, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5920900, size 0x124, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Setup, addr 0x5920308, size 0x50c, virtual false, abstract: false, final false
inline void Setup(bool  force) ;

/// @brief Method SyncPawnData, addr 0x5920fc4, size 0x268, virtual false, abstract: false, final false
static inline void SyncPawnData() ;

constexpr ::GlobalNamespace::XformNode* const& __cordl_internal_get__bodyXform() const;

constexpr ::GlobalNamespace::XformNode*& __cordl_internal_get__bodyXform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__handLeft() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__handLeft() ;

constexpr ::GlobalNamespace::XformNode* const& __cordl_internal_get__handLeftXform() const;

constexpr ::GlobalNamespace::XformNode*& __cordl_internal_get__handLeftXform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__handRight() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__handRight() ;

constexpr ::GlobalNamespace::XformNode* const& __cordl_internal_get__handRightXform() const;

constexpr ::GlobalNamespace::XformNode*& __cordl_internal_get__handRightXform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__head() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__head() ;

constexpr ::GlobalNamespace::XformNode* const& __cordl_internal_get__headXform() const;

constexpr ::GlobalNamespace::XformNode*& __cordl_internal_get__headXform() ;

constexpr int32_t const& __cordl_internal_get__id() const;

constexpr int32_t& __cordl_internal_get__id() ;

constexpr int32_t const& __cordl_internal_get__index() const;

constexpr int32_t& __cordl_internal_get__index() ;

constexpr bool const& __cordl_internal_get__invalid() const;

constexpr bool& __cordl_internal_get__invalid() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__rig() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform() ;

constexpr ::UnityW<::GlobalNamespace::ZoneEntityBSP> const& __cordl_internal_get__zoneEntity() const;

constexpr ::UnityW<::GlobalNamespace::ZoneEntityBSP>& __cordl_internal_get__zoneEntity() ;

constexpr void __cordl_internal_set__bodyXform(::GlobalNamespace::XformNode*  value) ;

constexpr void __cordl_internal_set__handLeft(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__handLeftXform(::GlobalNamespace::XformNode*  value) ;

constexpr void __cordl_internal_set__handRight(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__handRightXform(::GlobalNamespace::XformNode*  value) ;

constexpr void __cordl_internal_set__head(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__headXform(::GlobalNamespace::XformNode*  value) ;

constexpr void __cordl_internal_set__id(int32_t  value) ;

constexpr void __cordl_internal_set__index(int32_t  value) ;

constexpr void __cordl_internal_set__invalid(bool  value) ;

constexpr void __cordl_internal_set__rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__zoneEntity(::UnityW<::GlobalNamespace::ZoneEntityBSP>  value) ;

/// @brief Method .ctor, addr 0x592122c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__gPawnActiveCount() ;

static inline ::ArrayW<::UnityW<::GlobalNamespace::GorillaPawn>> getStaticF__gPawns() ;

static inline ::ArrayW<::UnityEngine::Matrix4x4> getStaticF__gShaderData() ;

/// @brief Method get_ActiveCount, addr 0x5920f14, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_ActiveCount() ;

/// @brief Method get_AllPawns, addr 0x5920ebc, size 0x58, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::GlobalNamespace::GorillaPawn>> get_AllPawns() ;

/// @brief Method get_ShaderData, addr 0x5920f6c, size 0x58, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Matrix4x4> get_ShaderData() ;

/// @brief Method get_body, addr 0x59202f0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XformNode* get_body() ;

/// @brief Method get_handLeft, addr 0x59202e0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XformNode* get_handLeft() ;

/// @brief Method get_handRight, addr 0x59202e8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XformNode* get_handRight() ;

/// @brief Method get_head, addr 0x59202f8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XformNode* get_head() ;

/// @brief Method get_rig, addr 0x59202c8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> get_rig() ;

/// @brief Method get_transform, addr 0x59202d8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_transform() ;

/// @brief Method get_zoneEntity, addr 0x59202d0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::ZoneEntityBSP> get_zoneEntity() ;

static inline void setStaticF__gPawnActiveCount(int32_t  value) ;

static inline void setStaticF__gPawns(::ArrayW<::UnityW<::GlobalNamespace::GorillaPawn>>  value) ;

static inline void setStaticF__gShaderData(::ArrayW<::UnityEngine::Matrix4x4>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaPawn() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaPawn", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaPawn(GorillaPawn && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaPawn", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaPawn(GorillaPawn const& ) = delete;

/// @brief Field MAX_PAWNS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_PAWNS{static_cast<int32_t>(0xa)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2211};

/// [SerializeField]
/// @brief Field _transform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____transform;

/// [SerializeField]
/// @brief Field _handLeft, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____handLeft;

/// [SerializeField]
/// @brief Field _handRight, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____handRight;

/// [SerializeField]
/// @brief Field _head, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____head;

/// [Space]
/// [SerializeField]
/// @brief Field _rig, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____rig;

/// [SerializeField]
/// @brief Field _zoneEntity, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ZoneEntityBSP>  ____zoneEntity;

/// [Space]
/// [SerializeField]
/// @brief Field _handLeftXform, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::XformNode*  ____handLeftXform;

/// [SerializeField]
/// @brief Field _handRightXform, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::XformNode*  ____handRightXform;

/// [SerializeField]
/// @brief Field _bodyXform, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::XformNode*  ____bodyXform;

/// [SerializeField]
/// @brief Field _headXform, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::XformNode*  ____headXform;

/// [Space]
/// @brief Field _id, offset: 0x70, size: 0x4, def value: None
 int32_t  ____id;

/// @brief Field _index, offset: 0x74, size: 0x4, def value: None
 int32_t  ____index;

/// @brief Field _invalid, offset: 0x78, size: 0x1, def value: None
 bool  ____invalid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaPawn, ____transform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPawn, ____handLeft) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPawn, ____handRight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPawn, ____head) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPawn, ____rig) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPawn, ____zoneEntity) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPawn, ____handLeftXform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPawn, ____handRightXform) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPawn, ____bodyXform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPawn, ____headXform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPawn, ____id) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPawn, ____index) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPawn, ____invalid) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaPawn) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
