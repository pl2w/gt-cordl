#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshModifierVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshModifierVolume)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AI {
class NavMeshModifierVolume;
}
// Write type traits
MARK_REF_T(::UnityEngine::AI::NavMeshModifierVolume*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMeshModifierVolume*, "UnityEngine.AI", "NavMeshModifierVolume");
// [ExecuteInEditMode]
// [AddComponentMenu("Navigation/NavMeshModifierVolume", 31)]
// [HelpURL("https://github.com/Unity-Technologies/NavMeshComponents#documentation-draft")]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace UnityEngine::AI {
// Is value type: false
// CS Name: UnityEngine.AI.NavMeshModifierVolume
class CORDL_TYPE NavMeshModifierVolume : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_area, put=set_area)) int32_t  area;

 __declspec(property(get=get_center, put=set_center)) ::UnityEngine::Vector3  center;

/// @brief Field m_AffectedAgents, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AffectedAgents, put=__cordl_internal_set_m_AffectedAgents)) ::System::Collections::Generic::List_1<int32_t>*  m_AffectedAgents;

/// @brief Field m_Area, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Area, put=__cordl_internal_set_m_Area)) int32_t  m_Area;

/// @brief Field m_Center, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_Center, put=__cordl_internal_set_m_Center)) ::UnityEngine::Vector3  m_Center;

/// @brief Field m_Size, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_Size, put=__cordl_internal_set_m_Size)) ::UnityEngine::Vector3  m_Size;

/// @brief Field s_NavMeshModifiers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_NavMeshModifiers, put=setStaticF_s_NavMeshModifiers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshModifierVolume>>*  s_NavMeshModifiers;

 __declspec(property(get=get_size, put=set_size)) ::UnityEngine::Vector3  size;

/// @brief Method AffectsAgentType, addr 0xa36b504, size 0xb8, virtual false, abstract: false, final false
inline bool AffectsAgentType(int32_t  agentTypeID) ;

static inline ::UnityEngine::AI::NavMeshModifierVolume* New_ctor() ;

/// @brief Method OnDisable, addr 0xa36b484, size 0x80, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa36b360, size 0x124, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_AffectedAgents() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_AffectedAgents() ;

constexpr int32_t const& __cordl_internal_get_m_Area() const;

constexpr int32_t& __cordl_internal_get_m_Area() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Center() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Center() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Size() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Size() ;

constexpr void __cordl_internal_set_m_AffectedAgents(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_Area(int32_t  value) ;

constexpr void __cordl_internal_set_m_Center(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_Size(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xa36b5bc, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshModifierVolume>>* getStaticF_s_NavMeshModifiers() ;

/// @brief Method get_activeModifiers, addr 0xa36b308, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshModifierVolume>>* get_activeModifiers() ;

/// @brief Method get_area, addr 0xa36b2f8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_area() ;

/// @brief Method get_center, addr 0xa36b2e0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_center() ;

/// @brief Method get_size, addr 0xa36b2c8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_size() ;

static inline void setStaticF_s_NavMeshModifiers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshModifierVolume>>*  value) ;

/// @brief Method set_area, addr 0xa36b300, size 0x8, virtual false, abstract: false, final false
inline void set_area(int32_t  value) ;

/// @brief Method set_center, addr 0xa36b2ec, size 0xc, virtual false, abstract: false, final false
inline void set_center(::UnityEngine::Vector3  value) ;

/// @brief Method set_size, addr 0xa36b2d4, size 0xc, virtual false, abstract: false, final false
inline void set_size(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavMeshModifierVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavMeshModifierVolume", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavMeshModifierVolume(NavMeshModifierVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavMeshModifierVolume", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavMeshModifierVolume(NavMeshModifierVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32782};

/// [SerializeField]
/// @brief Field m_Size, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_Size;

/// [SerializeField]
/// @brief Field m_Center, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_Center;

/// [SerializeField]
/// @brief Field m_Area, offset: 0x38, size: 0x4, def value: None
 int32_t  ___m_Area;

/// [SerializeField]
/// @brief Field m_AffectedAgents, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___m_AffectedAgents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AI::NavMeshModifierVolume, ___m_Size) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshModifierVolume, ___m_Center) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshModifierVolume, ___m_Area) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshModifierVolume, ___m_AffectedAgents) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AI::NavMeshModifierVolume) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::AI
