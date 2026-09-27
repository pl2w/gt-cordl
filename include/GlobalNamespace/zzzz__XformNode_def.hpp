#pragma once
// IWYU pragma private; include "GlobalNamespace/XformNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XformNode)
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class XformNode;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::XformNode*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XformNode*, "", "XformNode");
// Dependencies System.Object, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: false
// CS Name: XformNode
class CORDL_TYPE XformNode : public ::System::Object {
public:
// Declarations
/// @brief Field localPosition, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_localPosition, put=__cordl_internal_set_localPosition)) ::UnityEngine::Vector4  localPosition;

/// @brief Field parent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::UnityW<::UnityEngine::Transform>  parent;

 __declspec(property(get=get_radius, put=set_radius)) float_t  radius;

 __declspec(property(get=get_worldPosition)) ::UnityEngine::Vector4  worldPosition;

/// @brief Method LocalTRS, addr 0x5a238e8, size 0xf8, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 LocalTRS() ;

static inline ::GlobalNamespace::XformNode* New_ctor() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_localPosition() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_localPosition() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_parent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_parent() ;

constexpr void __cordl_internal_set_localPosition(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_parent(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5a239e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_radius, addr 0x5a238d8, size 0x8, virtual false, abstract: false, final false
inline float_t get_radius() ;

/// @brief Method get_worldPosition, addr 0x5a23808, size 0xd0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 get_worldPosition() ;

/// @brief Method set_radius, addr 0x5a238e0, size 0x8, virtual false, abstract: false, final false
inline void set_radius(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XformNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XformNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XformNode(XformNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XformNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XformNode(XformNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2851};

/// @brief Field localPosition, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___localPosition;

/// @brief Field parent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___parent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XformNode, ___localPosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XformNode, ___parent) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XformNode) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
