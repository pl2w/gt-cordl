#pragma once
// IWYU pragma private; include "GlobalNamespace/DevInspectorManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DevInspectorManager)
// Forward declare root types
namespace GlobalNamespace {
class DevInspectorManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DevInspectorManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevInspectorManager*, "", "DevInspectorManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevInspectorManager
class CORDL_TYPE DevInspectorManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::DevInspectorManager>  _instance;

static inline ::GlobalNamespace::DevInspectorManager* New_ctor() ;

/// @brief Method .ctor, addr 0x566fa44, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::DevInspectorManager> getStaticF__instance() ;

/// @brief Method get_instance, addr 0x566f970, size 0xd4, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::DevInspectorManager> get_instance() ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::DevInspectorManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevInspectorManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevInspectorManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DevInspectorManager(DevInspectorManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevInspectorManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevInspectorManager(DevInspectorManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{812};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DevInspectorManager) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
