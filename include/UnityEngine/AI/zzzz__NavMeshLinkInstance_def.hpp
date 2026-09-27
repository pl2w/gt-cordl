#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshLinkInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshLinkInstance)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::AI {
struct NavMeshLinkInstance;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AI::NavMeshLinkInstance);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMeshLinkInstance, "UnityEngine.AI", "NavMeshLinkInstance");
// Dependencies 
namespace UnityEngine::AI {
// Is value type: true
// CS Name: UnityEngine.AI.NavMeshLinkInstance
struct CORDL_TYPE NavMeshLinkInstance {
public:
// Declarations
 __declspec(property(get=get_id, put=set_id)) int32_t  id;

/// @brief [Obsolete("owner has been deprecated. Use NavMesh.GetLinkOwner() and NavMesh.SetLinkOwner() instead.")]
 __declspec(property(put=set_owner)) ::UnityW<::UnityEngine::Object>  owner;

/// @brief [Obsolete("valid has been deprecated. Use NavMesh.IsLinkValid() instead.")]
 __declspec(property(get=get_valid)) bool  valid;

/// [Obsolete("Remove() has been deprecated. Use NavMesh.RemoveLink() instead.")]
/// @brief Method Remove, addr 0xb5203ec, size 0x3c, virtual false, abstract: false, final false
inline void Remove() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_id, addr 0xb520364, size 0x8, virtual false, abstract: false, final false
inline int32_t get_id() ;

/// @brief Method get_valid, addr 0xb520374, size 0x3c, virtual false, abstract: false, final false
inline bool get_valid() ;

/// [CompilerGenerated]
/// @brief Method set_id, addr 0xb52036c, size 0x8, virtual false, abstract: false, final false
inline void set_id(int32_t  value) ;

/// @brief Method set_owner, addr 0xb520464, size 0x114, virtual false, abstract: false, final false
inline void set_owner(::UnityEngine::Object*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NavMeshLinkInstance() ;

// Ctor Parameters [CppParam { name: "_id_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NavMeshLinkInstance(int32_t  _id_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32105};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <id>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _id_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AI::NavMeshLinkInstance, _id_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AI::NavMeshLinkInstance) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::AI
