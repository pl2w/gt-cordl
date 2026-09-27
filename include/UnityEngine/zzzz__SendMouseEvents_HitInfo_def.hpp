#pragma once
// IWYU pragma private; include "UnityEngine/SendMouseEvents_HitInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SendMouseEvents_HitInfo)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct SendMouseEvents_HitInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SendMouseEvents_HitInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SendMouseEvents_HitInfo, "UnityEngine", "SendMouseEvents/HitInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.SendMouseEvents/HitInfo
struct CORDL_TYPE SendMouseEvents_HitInfo {
public:
// Declarations
/// @brief Method Compare, addr 0xb6680b0, size 0xb4, virtual false, abstract: false, final false
static inline bool Compare(::GlobalNamespace::SendMouseEvents_HitInfo  lhs, ::GlobalNamespace::SendMouseEvents_HitInfo  rhs) ;

/// @brief Method SendMessage, addr 0xb668090, size 0x20, virtual false, abstract: false, final false
inline void SendMessage(::StringW  name) ;

/// @brief Method op_Implicit, addr 0xb667ff0, size 0xa0, virtual false, abstract: false, final false
static inline bool op_Implicit_bool(::GlobalNamespace::SendMouseEvents_HitInfo  exists) ;

// Ctor Parameters []
// @brief default ctor
constexpr SendMouseEvents_HitInfo() ;

// Ctor Parameters [CppParam { name: "target", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "camera", ty: "::UnityW<::UnityEngine::Camera>", modifiers: "", def_value: None, comment: None }]
constexpr SendMouseEvents_HitInfo(::UnityW<::UnityEngine::GameObject>  target, ::UnityW<::UnityEngine::Camera>  camera) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32552};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field target, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  target;

/// @brief Field camera, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  camera;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SendMouseEvents_HitInfo, target) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SendMouseEvents_HitInfo, camera) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SendMouseEvents_HitInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
