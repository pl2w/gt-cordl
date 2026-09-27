#pragma once
// IWYU pragma private; include "Fusion/NetworkSceneObjectId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkSceneLoadId_def.hpp"
#include "Fusion/zzzz__SceneRef_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSceneObjectId)
namespace Fusion {
struct NetworkSceneLoadId;
}
namespace Fusion {
struct SceneRef;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion {
struct NetworkSceneObjectId;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkSceneObjectId);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkSceneObjectId, "Fusion", "NetworkSceneObjectId");
// Dependencies Fusion.NetworkSceneLoadId, Fusion.SceneRef
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkSceneObjectId
struct CORDL_TYPE NetworkSceneObjectId {
public:
// Declarations
 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief [Obsolete("Use LoadId instead.")]
 __declspec(property(get=get_SceneLoadId)) int32_t  SceneLoadId;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkSceneObjectId>"
constexpr operator  ::System::IEquatable_1<::Fusion::NetworkSceneObjectId>*() ;

/// @brief Method Equals, addr 0x5fdf378, size 0xa0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5fdf324, size 0x54, virtual true, abstract: false, final true
inline bool Equals(::Fusion::NetworkSceneObjectId  other) ;

/// @brief Method GetHashCode, addr 0x5fdf418, size 0x34, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x5fdf26c, size 0xb8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5fdf258, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Fusion::SceneRef  scene, int32_t  objectId, ::Fusion::NetworkSceneLoadId  loadId) ;

/// @brief Method get_IsValid, addr 0x5fdf264, size 0x8, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_SceneLoadId, addr 0x5fdf250, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SceneLoadId() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkSceneObjectId>"
constexpr ::System::IEquatable_1<::Fusion::NetworkSceneObjectId>* i___System__IEquatable_1___Fusion__NetworkSceneObjectId_() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkSceneObjectId() ;

// Ctor Parameters [CppParam { name: "Scene", ty: "::Fusion::SceneRef", modifiers: "", def_value: None, comment: None }, CppParam { name: "ObjectId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LoadId", ty: "::Fusion::NetworkSceneLoadId", modifiers: "", def_value: None, comment: None }]
constexpr NetworkSceneObjectId(::Fusion::SceneRef  Scene, int32_t  ObjectId, ::Fusion::NetworkSceneLoadId  LoadId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19291};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field Scene, offset: 0x0, size: 0x4, def value: None
 ::Fusion::SceneRef  Scene;

/// @brief Field ObjectId, offset: 0x4, size: 0x4, def value: None
 int32_t  ObjectId;

/// @brief Field LoadId, offset: 0x8, size: 0x1, def value: None
 ::Fusion::NetworkSceneLoadId  LoadId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkSceneObjectId, Scene) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneObjectId, ObjectId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkSceneObjectId, LoadId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkSceneObjectId) == 0xc, "Size mismatch!");

} // namespace end def Fusion
