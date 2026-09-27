#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshBuildSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AI/zzzz__NavMeshBuildSourceShape_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshBuildSource)
namespace System {
struct IntPtr;
}
namespace UnityEngine::AI {
struct NavMeshBuildSourceShape;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AI {
struct NavMeshBuildSource;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AI::NavMeshBuildSource);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMeshBuildSource, "UnityEngine.AI", "NavMeshBuildSource");
// [UsedByNativeCode]
// [NativeHeader("Modules/AI/Public/NavMeshBindingTypes.h")]
// Dependencies UnityEngine.AI.NavMeshBuildSourceShape, UnityEngine.Matrix4x4, UnityEngine.Vector3
namespace UnityEngine::AI {
// Is value type: true
// CS Name: UnityEngine.AI.NavMeshBuildSource
struct CORDL_TYPE NavMeshBuildSource {
public:
// Declarations
 __declspec(property(put=set_area)) int32_t  area;

 __declspec(property(get=get_component)) ::UnityW<::UnityEngine::Component>  component;

 __declspec(property(get=get_shape, put=set_shape)) ::UnityEngine::AI::NavMeshBuildSourceShape  shape;

 __declspec(property(get=get_size, put=set_size)) ::UnityEngine::Vector3  size;

 __declspec(property(get=get_sourceObject, put=set_sourceObject)) ::UnityW<::UnityEngine::Object>  sourceObject;

 __declspec(property(get=get_transform, put=set_transform)) ::UnityEngine::Matrix4x4  transform;

/// [StaticAccessor("NavMeshBuildSource", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method InternalGetComponent, addr 0xb521ee4, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Component> InternalGetComponent(int32_t  instanceID) ;

/// @brief Method InternalGetComponent_Injected, addr 0xb521f50, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr InternalGetComponent_Injected(int32_t  instanceID) ;

/// [StaticAccessor("NavMeshBuildSource", (UnityEngine.Bindings.StaticAccessorType)2)]
/// @brief Method InternalGetObject, addr 0xb521de0, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> InternalGetObject(int32_t  instanceID) ;

/// @brief Method InternalGetObject_Injected, addr 0xb521f8c, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr InternalGetObject_Injected(int32_t  instanceID) ;

/// @brief Method get_component, addr 0xb521edc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Component> get_component() ;

/// @brief Method get_shape, addr 0xb521dc0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AI::NavMeshBuildSourceShape get_shape() ;

/// @brief Method get_size, addr 0xb521da8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_size() ;

/// @brief Method get_sourceObject, addr 0xb521dd8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> get_sourceObject() ;

/// @brief Method get_transform, addr 0xb521d80, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_transform() ;

/// @brief Method set_area, addr 0xb521dd0, size 0x8, virtual false, abstract: false, final false
inline void set_area(int32_t  value) ;

/// @brief Method set_shape, addr 0xb521dc8, size 0x8, virtual false, abstract: false, final false
inline void set_shape(::UnityEngine::AI::NavMeshBuildSourceShape  value) ;

/// @brief Method set_size, addr 0xb521db4, size 0xc, virtual false, abstract: false, final false
inline void set_size(::UnityEngine::Vector3  value) ;

/// @brief Method set_sourceObject, addr 0xb521e4c, size 0x90, virtual false, abstract: false, final false
inline void set_sourceObject(::UnityEngine::Object*  value) ;

/// @brief Method set_transform, addr 0xb521d94, size 0x14, virtual false, abstract: false, final false
inline void set_transform(::UnityEngine::Matrix4x4  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NavMeshBuildSource() ;

// Ctor Parameters [CppParam { name: "m_Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Size", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Shape", ty: "::UnityEngine::AI::NavMeshBuildSourceShape", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Area", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InstanceID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ComponentID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_GenerateLinks", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NavMeshBuildSource(::UnityEngine::Matrix4x4  m_Transform, ::UnityEngine::Vector3  m_Size, ::UnityEngine::AI::NavMeshBuildSourceShape  m_Shape, int32_t  m_Area, int32_t  m_InstanceID, int32_t  m_ComponentID, int32_t  m_GenerateLinks) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32114};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field m_Transform, offset: 0x0, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  m_Transform;

/// @brief Field m_Size, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_Size;

/// @brief Field m_Shape, offset: 0x4c, size: 0x4, def value: None
 ::UnityEngine::AI::NavMeshBuildSourceShape  m_Shape;

/// @brief Field m_Area, offset: 0x50, size: 0x4, def value: None
 int32_t  m_Area;

/// @brief Field m_InstanceID, offset: 0x54, size: 0x4, def value: None
 int32_t  m_InstanceID;

/// @brief Field m_ComponentID, offset: 0x58, size: 0x4, def value: None
 int32_t  m_ComponentID;

/// @brief Field m_GenerateLinks, offset: 0x5c, size: 0x4, def value: None
 int32_t  m_GenerateLinks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AI::NavMeshBuildSource, m_Transform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildSource, m_Size) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildSource, m_Shape) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildSource, m_Area) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildSource, m_InstanceID) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildSource, m_ComponentID) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildSource, m_GenerateLinks) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AI::NavMeshBuildSource) == 0x60, "Size mismatch!");

} // namespace end def UnityEngine::AI
