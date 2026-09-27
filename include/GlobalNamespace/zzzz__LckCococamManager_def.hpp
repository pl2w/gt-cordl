#pragma once
// IWYU pragma private; include "GlobalNamespace/LckCococamManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LckCococamManager)
namespace GlobalNamespace {
class LckSocialCamera;
}
// Forward declare root types
namespace GlobalNamespace {
class LckCococamManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LckCococamManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckCococamManager*, "", "LckCococamManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LckCococamManager
class CORDL_TYPE LckCococamManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Instance, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Instance, put=__cordl_internal_set_Instance)) ::UnityW<::GlobalNamespace::LckSocialCamera>  Instance;

static inline ::GlobalNamespace::LckCococamManager* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::LckSocialCamera> const& __cordl_internal_get_Instance() const;

constexpr ::UnityW<::GlobalNamespace::LckSocialCamera>& __cordl_internal_get_Instance() ;

constexpr void __cordl_internal_set_Instance(::UnityW<::GlobalNamespace::LckSocialCamera>  value) ;

/// @brief Method .ctor, addr 0x56c58a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCococamManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCococamManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCococamManager(LckCococamManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCococamManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCococamManager(LckCococamManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1016};

/// @brief Field Instance, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LckSocialCamera>  ___Instance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckCococamManager, ___Instance) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckCococamManager) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
