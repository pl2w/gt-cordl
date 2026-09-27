#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshBuildMarkup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshBuildMarkup)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::AI {
struct NavMeshBuildMarkup;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AI::NavMeshBuildMarkup);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMeshBuildMarkup, "UnityEngine.AI", "NavMeshBuildMarkup");
// [NativeHeader("Modules/AI/Public/NavMeshBindingTypes.h")]
// Dependencies 
namespace UnityEngine::AI {
// Is value type: true
// CS Name: UnityEngine.AI.NavMeshBuildMarkup
struct CORDL_TYPE NavMeshBuildMarkup {
public:
// Declarations
 __declspec(property(put=set_applyToChildren)) bool  applyToChildren;

 __declspec(property(put=set_area)) int32_t  area;

 __declspec(property(put=set_generateLinks)) bool  generateLinks;

 __declspec(property(put=set_ignoreFromBuild)) bool  ignoreFromBuild;

 __declspec(property(put=set_overrideArea)) bool  overrideArea;

 __declspec(property(put=set_overrideGenerateLinks)) bool  overrideGenerateLinks;

 __declspec(property(put=set_root)) ::UnityW<::UnityEngine::Transform>  root;

/// @brief Method set_applyToChildren, addr 0xb522000, size 0x10, virtual false, abstract: false, final false
inline void set_applyToChildren(bool  value) ;

/// @brief Method set_area, addr 0xb521fd4, size 0x8, virtual false, abstract: false, final false
inline void set_area(int32_t  value) ;

/// @brief Method set_generateLinks, addr 0xb521ff4, size 0xc, virtual false, abstract: false, final false
inline void set_generateLinks(bool  value) ;

/// @brief Method set_ignoreFromBuild, addr 0xb521fdc, size 0xc, virtual false, abstract: false, final false
inline void set_ignoreFromBuild(bool  value) ;

/// @brief Method set_overrideArea, addr 0xb521fc8, size 0xc, virtual false, abstract: false, final false
inline void set_overrideArea(bool  value) ;

/// @brief Method set_overrideGenerateLinks, addr 0xb521fe8, size 0xc, virtual false, abstract: false, final false
inline void set_overrideGenerateLinks(bool  value) ;

/// @brief Method set_root, addr 0xb522010, size 0x90, virtual false, abstract: false, final false
inline void set_root(::UnityEngine::Transform*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NavMeshBuildMarkup() ;

// Ctor Parameters [CppParam { name: "m_OverrideArea", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Area", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InheritIgnoreFromBuild", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_IgnoreFromBuild", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_OverrideGenerateLinks", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_GenerateLinks", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InstanceID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_IgnoreChildren", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NavMeshBuildMarkup(int32_t  m_OverrideArea, int32_t  m_Area, int32_t  m_InheritIgnoreFromBuild, int32_t  m_IgnoreFromBuild, int32_t  m_OverrideGenerateLinks, int32_t  m_GenerateLinks, int32_t  m_InstanceID, int32_t  m_IgnoreChildren) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32115};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_OverrideArea, offset: 0x0, size: 0x4, def value: None
 int32_t  m_OverrideArea;

/// @brief Field m_Area, offset: 0x4, size: 0x4, def value: None
 int32_t  m_Area;

/// @brief Field m_InheritIgnoreFromBuild, offset: 0x8, size: 0x4, def value: None
 int32_t  m_InheritIgnoreFromBuild;

/// @brief Field m_IgnoreFromBuild, offset: 0xc, size: 0x4, def value: None
 int32_t  m_IgnoreFromBuild;

/// @brief Field m_OverrideGenerateLinks, offset: 0x10, size: 0x4, def value: None
 int32_t  m_OverrideGenerateLinks;

/// @brief Field m_GenerateLinks, offset: 0x14, size: 0x4, def value: None
 int32_t  m_GenerateLinks;

/// @brief Field m_InstanceID, offset: 0x18, size: 0x4, def value: None
 int32_t  m_InstanceID;

/// @brief Field m_IgnoreChildren, offset: 0x1c, size: 0x4, def value: None
 int32_t  m_IgnoreChildren;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AI::NavMeshBuildMarkup, m_OverrideArea) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildMarkup, m_Area) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildMarkup, m_InheritIgnoreFromBuild) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildMarkup, m_IgnoreFromBuild) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildMarkup, m_OverrideGenerateLinks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildMarkup, m_GenerateLinks) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildMarkup, m_InstanceID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildMarkup, m_IgnoreChildren) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AI::NavMeshBuildMarkup) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::AI
