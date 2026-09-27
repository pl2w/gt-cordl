#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshDataInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshDataInstance)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::AI {
struct NavMeshDataInstance;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AI::NavMeshDataInstance);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMeshDataInstance, "UnityEngine.AI", "NavMeshDataInstance");
// Dependencies 
namespace UnityEngine::AI {
// Is value type: true
// CS Name: UnityEngine.AI.NavMeshDataInstance
struct CORDL_TYPE NavMeshDataInstance {
public:
// Declarations
 __declspec(property(get=get_id, put=set_id)) int32_t  id;

 __declspec(property(put=set_owner)) ::UnityW<::UnityEngine::Object>  owner;

 __declspec(property(get=get_valid)) bool  valid;

/// @brief Method Remove, addr 0xb520150, size 0x3c, virtual false, abstract: false, final false
inline void Remove() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_id, addr 0xb520140, size 0x8, virtual false, abstract: false, final false
inline int32_t get_id() ;

/// @brief Method get_valid, addr 0xb5200b4, size 0x50, virtual false, abstract: false, final false
inline bool get_valid() ;

/// [CompilerGenerated]
/// @brief Method set_id, addr 0xb520148, size 0x8, virtual false, abstract: false, final false
inline void set_id(int32_t  value) ;

/// @brief Method set_owner, addr 0xb5201c8, size 0x114, virtual false, abstract: false, final false
inline void set_owner(::UnityEngine::Object*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NavMeshDataInstance() ;

// Ctor Parameters [CppParam { name: "_id_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NavMeshDataInstance(int32_t  _id_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32103};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <id>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _id_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AI::NavMeshDataInstance, _id_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AI::NavMeshDataInstance) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::AI
