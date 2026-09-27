#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshModifier)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::AI {
class NavMeshModifier;
}
// Write type traits
MARK_REF_T(::UnityEngine::AI::NavMeshModifier*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMeshModifier*, "UnityEngine.AI", "NavMeshModifier");
// [ExecuteInEditMode]
// [AddComponentMenu("Navigation/NavMeshModifier", 32)]
// [HelpURL("https://github.com/Unity-Technologies/NavMeshComponents#documentation-draft")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::AI {
// Is value type: false
// CS Name: UnityEngine.AI.NavMeshModifier
class CORDL_TYPE NavMeshModifier : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_area, put=set_area)) int32_t  area;

 __declspec(property(get=get_ignoreFromBuild, put=set_ignoreFromBuild)) bool  ignoreFromBuild;

/// @brief Field m_AffectedAgents, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AffectedAgents, put=__cordl_internal_set_m_AffectedAgents)) ::System::Collections::Generic::List_1<int32_t>*  m_AffectedAgents;

/// @brief Field m_Area, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Area, put=__cordl_internal_set_m_Area)) int32_t  m_Area;

/// @brief Field m_IgnoreFromBuild, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IgnoreFromBuild, put=__cordl_internal_set_m_IgnoreFromBuild)) bool  m_IgnoreFromBuild;

/// @brief Field m_OverrideArea, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_OverrideArea, put=__cordl_internal_set_m_OverrideArea)) bool  m_OverrideArea;

 __declspec(property(get=get_overrideArea, put=set_overrideArea)) bool  overrideArea;

/// @brief Field s_NavMeshModifiers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_NavMeshModifiers, put=setStaticF_s_NavMeshModifiers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshModifier>>*  s_NavMeshModifiers;

/// @brief Method AffectsAgentType, addr 0xa36b0b4, size 0xb8, virtual false, abstract: false, final false
inline bool AffectsAgentType(int32_t  agentTypeID) ;

static inline ::UnityEngine::AI::NavMeshModifier* New_ctor() ;

/// @brief Method OnDisable, addr 0xa36b034, size 0x80, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa36af10, size 0x124, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_AffectedAgents() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_AffectedAgents() ;

constexpr int32_t const& __cordl_internal_get_m_Area() const;

constexpr int32_t& __cordl_internal_get_m_Area() ;

constexpr bool const& __cordl_internal_get_m_IgnoreFromBuild() const;

constexpr bool& __cordl_internal_get_m_IgnoreFromBuild() ;

constexpr bool const& __cordl_internal_get_m_OverrideArea() const;

constexpr bool& __cordl_internal_get_m_OverrideArea() ;

constexpr void __cordl_internal_set_m_AffectedAgents(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_Area(int32_t  value) ;

constexpr void __cordl_internal_set_m_IgnoreFromBuild(bool  value) ;

constexpr void __cordl_internal_set_m_OverrideArea(bool  value) ;

/// @brief Method .ctor, addr 0xa36b16c, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshModifier>>* getStaticF_s_NavMeshModifiers() ;

/// @brief Method get_activeModifiers, addr 0xa36aeb8, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshModifier>>* get_activeModifiers() ;

/// @brief Method get_area, addr 0xa36ae98, size 0x8, virtual false, abstract: false, final false
inline int32_t get_area() ;

/// @brief Method get_ignoreFromBuild, addr 0xa36aea8, size 0x8, virtual false, abstract: false, final false
inline bool get_ignoreFromBuild() ;

/// @brief Method get_overrideArea, addr 0xa36ae88, size 0x8, virtual false, abstract: false, final false
inline bool get_overrideArea() ;

static inline void setStaticF_s_NavMeshModifiers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshModifier>>*  value) ;

/// @brief Method set_area, addr 0xa36aea0, size 0x8, virtual false, abstract: false, final false
inline void set_area(int32_t  value) ;

/// @brief Method set_ignoreFromBuild, addr 0xa36aeb0, size 0x8, virtual false, abstract: false, final false
inline void set_ignoreFromBuild(bool  value) ;

/// @brief Method set_overrideArea, addr 0xa36ae90, size 0x8, virtual false, abstract: false, final false
inline void set_overrideArea(bool  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32781};

/// [SerializeField]
/// @brief Field m_OverrideArea, offset: 0x20, size: 0x1, def value: None
 bool  ___m_OverrideArea;

/// [SerializeField]
/// @brief Field m_Area, offset: 0x24, size: 0x4, def value: None
 int32_t  ___m_Area;

/// [SerializeField]
/// @brief Field m_IgnoreFromBuild, offset: 0x28, size: 0x1, def value: None
 bool  ___m_IgnoreFromBuild;

/// [SerializeField]
/// @brief Field m_AffectedAgents, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___m_AffectedAgents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AI::NavMeshModifier, ___m_OverrideArea) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshModifier, ___m_Area) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshModifier, ___m_IgnoreFromBuild) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshModifier, ___m_AffectedAgents) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AI::NavMeshModifier) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::AI
