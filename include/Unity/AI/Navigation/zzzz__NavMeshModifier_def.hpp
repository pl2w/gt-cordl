#pragma once
// IWYU pragma private; include "Unity/AI/Navigation/NavMeshModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshModifier)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Unity::AI::Navigation {
class NavMeshModifier;
}
// Write type traits
MARK_REF_T(::Unity::AI::Navigation::NavMeshModifier*);
DEFINE_IL2CPP_CLASS(::Unity::AI::Navigation::NavMeshModifier*, "Unity.AI.Navigation", "NavMeshModifier");
// [ExecuteAlways]
// [DefaultExecutionOrder(-103)]
// [AddComponentMenu("Navigation/NavMesh Modifier", 32)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.ai.navigation@2.0/manual/NavMeshModifier.html")]
// Dependencies UnityEngine.MonoBehaviour
namespace Unity::AI::Navigation {
// Is value type: false
// CS Name: Unity.AI.Navigation.NavMeshModifier
class CORDL_TYPE NavMeshModifier : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_applyToChildren, put=set_applyToChildren)) bool  applyToChildren;

 __declspec(property(get=get_area, put=set_area)) int32_t  area;

 __declspec(property(get=get_generateLinks, put=set_generateLinks)) bool  generateLinks;

 __declspec(property(get=get_ignoreFromBuild, put=set_ignoreFromBuild)) bool  ignoreFromBuild;

/// @brief Field m_AffectedAgents, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AffectedAgents, put=__cordl_internal_set_m_AffectedAgents)) ::System::Collections::Generic::List_1<int32_t>*  m_AffectedAgents;

/// @brief Field m_ApplyToChildren, offset 0x2b, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ApplyToChildren, put=__cordl_internal_set_m_ApplyToChildren)) bool  m_ApplyToChildren;

/// @brief Field m_Area, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Area, put=__cordl_internal_set_m_Area)) int32_t  m_Area;

/// @brief Field m_GenerateLinks, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_GenerateLinks, put=__cordl_internal_set_m_GenerateLinks)) bool  m_GenerateLinks;

/// @brief Field m_IgnoreFromBuild, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IgnoreFromBuild, put=__cordl_internal_set_m_IgnoreFromBuild)) bool  m_IgnoreFromBuild;

/// @brief Field m_OverrideArea, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_OverrideArea, put=__cordl_internal_set_m_OverrideArea)) bool  m_OverrideArea;

/// @brief Field m_OverrideGenerateLinks, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_OverrideGenerateLinks, put=__cordl_internal_set_m_OverrideGenerateLinks)) bool  m_OverrideGenerateLinks;

/// @brief Field m_SerializedVersion, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SerializedVersion, put=__cordl_internal_set_m_SerializedVersion)) uint8_t  m_SerializedVersion;

 __declspec(property(get=get_overrideArea, put=set_overrideArea)) bool  overrideArea;

 __declspec(property(get=get_overrideGenerateLinks, put=set_overrideGenerateLinks)) bool  overrideGenerateLinks;

/// @brief Field s_NavMeshModifiers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_NavMeshModifiers, put=setStaticF_s_NavMeshModifiers)) ::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshModifier>>*  s_NavMeshModifiers;

/// @brief Field s_NavMeshModifiersSet, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_NavMeshModifiersSet, put=setStaticF_s_NavMeshModifiersSet)) ::System::Collections::Generic::HashSet_1<::UnityW<::Unity::AI::Navigation::NavMeshModifier>>*  s_NavMeshModifiersSet;

/// @brief Field s_RebuildNavMeshModifiers, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_RebuildNavMeshModifiers, put=setStaticF_s_RebuildNavMeshModifiers)) bool  s_RebuildNavMeshModifiers;

/// @brief Method AffectsAgentType, addr 0xae73e68, size 0xb8, virtual false, abstract: false, final false
inline bool AffectsAgentType(int32_t  agentTypeID) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// @brief Method ClearNavMeshModifiers, addr 0xae73c58, size 0xb8, virtual false, abstract: false, final false
static inline void ClearNavMeshModifiers() ;

static inline ::Unity::AI::Navigation::NavMeshModifier* New_ctor() ;

/// @brief Method OnDisable, addr 0xae73dbc, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xae73d10, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RegisterModifier, addr 0xae73d14, size 0xa8, virtual false, abstract: false, final false
inline void RegisterModifier() ;

/// @brief Method UnregisterModifier, addr 0xae73dc0, size 0xa8, virtual false, abstract: false, final false
inline void UnregisterModifier() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_AffectedAgents() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_AffectedAgents() ;

constexpr bool const& __cordl_internal_get_m_ApplyToChildren() const;

constexpr bool& __cordl_internal_get_m_ApplyToChildren() ;

constexpr int32_t const& __cordl_internal_get_m_Area() const;

constexpr int32_t& __cordl_internal_get_m_Area() ;

constexpr bool const& __cordl_internal_get_m_GenerateLinks() const;

constexpr bool& __cordl_internal_get_m_GenerateLinks() ;

constexpr bool const& __cordl_internal_get_m_IgnoreFromBuild() const;

constexpr bool& __cordl_internal_get_m_IgnoreFromBuild() ;

constexpr bool const& __cordl_internal_get_m_OverrideArea() const;

constexpr bool& __cordl_internal_get_m_OverrideArea() ;

constexpr bool const& __cordl_internal_get_m_OverrideGenerateLinks() const;

constexpr bool& __cordl_internal_get_m_OverrideGenerateLinks() ;

constexpr uint8_t const& __cordl_internal_get_m_SerializedVersion() const;

constexpr uint8_t& __cordl_internal_get_m_SerializedVersion() ;

constexpr void __cordl_internal_set_m_AffectedAgents(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_ApplyToChildren(bool  value) ;

constexpr void __cordl_internal_set_m_Area(int32_t  value) ;

constexpr void __cordl_internal_set_m_GenerateLinks(bool  value) ;

constexpr void __cordl_internal_set_m_IgnoreFromBuild(bool  value) ;

constexpr void __cordl_internal_set_m_OverrideArea(bool  value) ;

constexpr void __cordl_internal_set_m_OverrideGenerateLinks(bool  value) ;

constexpr void __cordl_internal_set_m_SerializedVersion(uint8_t  value) ;

/// @brief Method .ctor, addr 0xae73f20, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshModifier>>* getStaticF_s_NavMeshModifiers() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::Unity::AI::Navigation::NavMeshModifier>>* getStaticF_s_NavMeshModifiersSet() ;

static inline bool getStaticF_s_RebuildNavMeshModifiers() ;

/// @brief Method get_activeModifiers, addr 0xae73b8c, size 0xcc, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshModifier>>* get_activeModifiers() ;

/// @brief Method get_applyToChildren, addr 0xae73b7c, size 0x8, virtual false, abstract: false, final false
inline bool get_applyToChildren() ;

/// @brief Method get_area, addr 0xae73b3c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_area() ;

/// @brief Method get_generateLinks, addr 0xae73b5c, size 0x8, virtual false, abstract: false, final false
inline bool get_generateLinks() ;

/// @brief Method get_ignoreFromBuild, addr 0xae73b6c, size 0x8, virtual false, abstract: false, final false
inline bool get_ignoreFromBuild() ;

/// @brief Method get_overrideArea, addr 0xae73b2c, size 0x8, virtual false, abstract: false, final false
inline bool get_overrideArea() ;

/// @brief Method get_overrideGenerateLinks, addr 0xae73b4c, size 0x8, virtual false, abstract: false, final false
inline bool get_overrideGenerateLinks() ;

static inline void setStaticF_s_NavMeshModifiers(::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshModifier>>*  value) ;

static inline void setStaticF_s_NavMeshModifiersSet(::System::Collections::Generic::HashSet_1<::UnityW<::Unity::AI::Navigation::NavMeshModifier>>*  value) ;

static inline void setStaticF_s_RebuildNavMeshModifiers(bool  value) ;

/// @brief Method set_applyToChildren, addr 0xae73b84, size 0x8, virtual false, abstract: false, final false
inline void set_applyToChildren(bool  value) ;

/// @brief Method set_area, addr 0xae73b44, size 0x8, virtual false, abstract: false, final false
inline void set_area(int32_t  value) ;

/// @brief Method set_generateLinks, addr 0xae73b64, size 0x8, virtual false, abstract: false, final false
inline void set_generateLinks(bool  value) ;

/// @brief Method set_ignoreFromBuild, addr 0xae73b74, size 0x8, virtual false, abstract: false, final false
inline void set_ignoreFromBuild(bool  value) ;

/// @brief Method set_overrideArea, addr 0xae73b34, size 0x8, virtual false, abstract: false, final false
inline void set_overrideArea(bool  value) ;

/// @brief Method set_overrideGenerateLinks, addr 0xae73b54, size 0x8, virtual false, abstract: false, final false
inline void set_overrideGenerateLinks(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavMeshModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavMeshModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavMeshModifier(NavMeshModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavMeshModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavMeshModifier(NavMeshModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32513};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_SerializedVersion, offset: 0x20, size: 0x1, def value: None
 uint8_t  ___m_SerializedVersion;

/// [SerializeField]
/// @brief Field m_OverrideArea, offset: 0x21, size: 0x1, def value: None
 bool  ___m_OverrideArea;

/// [SerializeField]
/// @brief Field m_Area, offset: 0x24, size: 0x4, def value: None
 int32_t  ___m_Area;

/// [SerializeField]
/// @brief Field m_OverrideGenerateLinks, offset: 0x28, size: 0x1, def value: None
 bool  ___m_OverrideGenerateLinks;

/// [SerializeField]
/// @brief Field m_GenerateLinks, offset: 0x29, size: 0x1, def value: None
 bool  ___m_GenerateLinks;

/// [SerializeField]
/// @brief Field m_IgnoreFromBuild, offset: 0x2a, size: 0x1, def value: None
 bool  ___m_IgnoreFromBuild;

/// [SerializeField]
/// @brief Field m_ApplyToChildren, offset: 0x2b, size: 0x1, def value: None
 bool  ___m_ApplyToChildren;

/// [SerializeField]
/// @brief Field m_AffectedAgents, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___m_AffectedAgents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::AI::Navigation::NavMeshModifier, ___m_SerializedVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshModifier, ___m_OverrideArea) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshModifier, ___m_Area) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshModifier, ___m_OverrideGenerateLinks) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshModifier, ___m_GenerateLinks) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshModifier, ___m_IgnoreFromBuild) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshModifier, ___m_ApplyToChildren) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::Unity::AI::Navigation::NavMeshModifier, ___m_AffectedAgents) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Unity::AI::Navigation::NavMeshModifier) == 0x38, "Size mismatch!");

} // namespace end def Unity::AI::Navigation
