#pragma once
// IWYU pragma private; include "GlobalNamespace/GRPatrolPath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GRPatrolPath)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRPatrolPath;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRPatrolPath*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRPatrolPath*, "", "GRPatrolPath");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRPatrolPath
class CORDL_TYPE GRPatrolPath : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field index, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field patrolNodes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_patrolNodes, put=__cordl_internal_set_patrolNodes)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  patrolNodes;

/// @brief Method Awake, addr 0x589fd80, size 0x170, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GRPatrolPath* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x589fef0, size 0x35c, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_patrolNodes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_patrolNodes() ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_patrolNodes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

/// @brief Method .ctor, addr 0x58a024c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRPatrolPath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRPatrolPath", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRPatrolPath(GRPatrolPath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRPatrolPath", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRPatrolPath(GRPatrolPath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1997};

/// @brief Field patrolNodes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___patrolNodes;

/// @brief Field index, offset: 0x28, size: 0x4, def value: None
 int32_t  ___index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRPatrolPath, ___patrolNodes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPatrolPath, ___index) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRPatrolPath) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
