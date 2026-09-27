#pragma once
// IWYU pragma private; include "BuildSafe/SceneViewUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SceneViewUtils)
namespace BuildSafe {
class SceneViewUtils_FuncPickClosestGameObject;
}
namespace BuildSafe {
class SceneViewUtils_FuncRaycastWorld;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
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
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace BuildSafe {
class SceneViewUtils;
}
namespace BuildSafe {
class SceneViewUtils_FuncPickClosestGameObject;
}
namespace BuildSafe {
class SceneViewUtils_FuncRaycastWorld;
}
// Write type traits
MARK_REF_T(::BuildSafe::SceneViewUtils*);
MARK_REF_T(::BuildSafe::SceneViewUtils_FuncPickClosestGameObject*);
MARK_REF_T(::BuildSafe::SceneViewUtils_FuncRaycastWorld*);
DEFINE_IL2CPP_CLASS(::BuildSafe::SceneViewUtils*, "BuildSafe", "SceneViewUtils");
DEFINE_IL2CPP_CLASS(::BuildSafe::SceneViewUtils_FuncPickClosestGameObject*, "BuildSafe", "SceneViewUtils/FuncPickClosestGameObject");
DEFINE_IL2CPP_CLASS(::BuildSafe::SceneViewUtils_FuncRaycastWorld*, "BuildSafe", "SceneViewUtils/FuncRaycastWorld");
// Dependencies System.Object
namespace BuildSafe {
// Is value type: false
// CS Name: BuildSafe.SceneViewUtils
class CORDL_TYPE SceneViewUtils : public ::System::Object {
public:
// Declarations
using FuncPickClosestGameObject = ::BuildSafe::SceneViewUtils_FuncPickClosestGameObject;

using FuncRaycastWorld = ::BuildSafe::SceneViewUtils_FuncRaycastWorld;

/// @brief Field RaycastWorld, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RaycastWorld, put=setStaticF_RaycastWorld)) ::BuildSafe::SceneViewUtils_FuncRaycastWorld*  RaycastWorld;

/// @brief Method RaycastWorldSafe, addr 0x5c4f43c, size 0x18, virtual false, abstract: false, final false
static inline bool RaycastWorldSafe(::UnityEngine::Vector2  screenPos, ::by_ref<::UnityEngine::RaycastHit>  hit) ;

static inline ::BuildSafe::SceneViewUtils_FuncRaycastWorld* getStaticF_RaycastWorld() ;

static inline void setStaticF_RaycastWorld(::BuildSafe::SceneViewUtils_FuncRaycastWorld*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneViewUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneViewUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneViewUtils(SceneViewUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneViewUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneViewUtils(SceneViewUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4263};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BuildSafe::SceneViewUtils) == 0x10, "Size mismatch!");

} // namespace end def BuildSafe
// Dependencies System.MulticastDelegate
namespace BuildSafe {
// Is value type: false
// CS Name: BuildSafe.SceneViewUtils/FuncPickClosestGameObject
class CORDL_TYPE SceneViewUtils_FuncPickClosestGameObject : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5c4f750, size 0xe8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Camera*  cam, int32_t  layers, ::UnityEngine::Vector2  position, ::ArrayW<::UnityEngine::GameObject*>  ignore, ::ArrayW<::UnityEngine::GameObject*>  filter, ::by_ref<int32_t>  materialIndex, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5c4f838, size 0x18, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> EndInvoke(::by_ref<int32_t>  materialIndex, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5c4f73c, size 0x14, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> Invoke(::UnityEngine::Camera*  cam, int32_t  layers, ::UnityEngine::Vector2  position, ::ArrayW<::UnityEngine::GameObject*>  ignore, ::ArrayW<::UnityEngine::GameObject*>  filter, ::by_ref<int32_t>  materialIndex) ;

static inline ::BuildSafe::SceneViewUtils_FuncPickClosestGameObject* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5c4f688, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneViewUtils_FuncPickClosestGameObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneViewUtils_FuncPickClosestGameObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneViewUtils_FuncPickClosestGameObject(SceneViewUtils_FuncPickClosestGameObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneViewUtils_FuncPickClosestGameObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneViewUtils_FuncPickClosestGameObject(SceneViewUtils_FuncPickClosestGameObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4262};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BuildSafe::SceneViewUtils_FuncPickClosestGameObject) == 0x80, "Size mismatch!");

} // namespace end def BuildSafe
// Dependencies System.MulticastDelegate
namespace BuildSafe {
// Is value type: false
// CS Name: BuildSafe.SceneViewUtils/FuncRaycastWorld
class CORDL_TYPE SceneViewUtils_FuncRaycastWorld : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5c4f5a4, size 0xbc, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2  screenPos, ::by_ref<::UnityEngine::RaycastHit>  hit, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5c4f660, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::by_ref<::UnityEngine::RaycastHit>  hit, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5c4f590, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(::UnityEngine::Vector2  screenPos, ::by_ref<::UnityEngine::RaycastHit>  hit) ;

static inline ::BuildSafe::SceneViewUtils_FuncRaycastWorld* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5c4f4f0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneViewUtils_FuncRaycastWorld() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneViewUtils_FuncRaycastWorld", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneViewUtils_FuncRaycastWorld(SceneViewUtils_FuncRaycastWorld && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneViewUtils_FuncRaycastWorld", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneViewUtils_FuncRaycastWorld(SceneViewUtils_FuncRaycastWorld const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4261};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BuildSafe::SceneViewUtils_FuncRaycastWorld) == 0x80, "Size mismatch!");

} // namespace end def BuildSafe
