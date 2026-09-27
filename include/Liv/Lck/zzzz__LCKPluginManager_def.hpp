#pragma once
// IWYU pragma private; include "Liv/Lck/LCKPluginManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LCKPluginManager)
namespace Liv::Lck {
class ILckService;
}
// Forward declare root types
namespace Liv::Lck {
class LCKPluginManager;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LCKPluginManager*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LCKPluginManager*, "Liv.Lck", "LCKPluginManager");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LCKPluginManager
class CORDL_TYPE LCKPluginManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _lckService, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckService, put=__cordl_internal_set__lckService)) ::Liv::Lck::ILckService*  _lckService;

/// @brief Field autoInitializePlugins, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoInitializePlugins, put=__cordl_internal_set_autoInitializePlugins)) bool  autoInitializePlugins;

/// @brief Field logPluginInfo, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_logPluginInfo, put=__cordl_internal_set_logPluginInfo)) bool  logPluginInfo;

static inline ::Liv::Lck::LCKPluginManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9cf249c, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x9cf2388, size 0x114, virtual false, abstract: false, final false
inline void Start() ;

/// [ContextMenu("Test Plugin Access")]
/// @brief Method TestPluginAccess, addr 0x9cf24a0, size 0x174, virtual false, abstract: false, final false
inline void TestPluginAccess() ;

constexpr ::Liv::Lck::ILckService* const& __cordl_internal_get__lckService() const;

constexpr ::Liv::Lck::ILckService*& __cordl_internal_get__lckService() ;

constexpr bool const& __cordl_internal_get_autoInitializePlugins() const;

constexpr bool& __cordl_internal_get_autoInitializePlugins() ;

constexpr bool const& __cordl_internal_get_logPluginInfo() const;

constexpr bool& __cordl_internal_get_logPluginInfo() ;

constexpr void __cordl_internal_set__lckService(::Liv::Lck::ILckService*  value) ;

constexpr void __cordl_internal_set_autoInitializePlugins(bool  value) ;

constexpr void __cordl_internal_set_logPluginInfo(bool  value) ;

/// @brief Method .ctor, addr 0x9cf2614, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LCKPluginManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LCKPluginManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LCKPluginManager(LCKPluginManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LCKPluginManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LCKPluginManager(LCKPluginManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24779};

/// [InjectLck]
/// @brief Field _lckService, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ILckService*  ____lckService;

/// [Header("Plugin Management")]
/// [SerializeField]
/// @brief Field autoInitializePlugins, offset: 0x28, size: 0x1, def value: None
 bool  ___autoInitializePlugins;

/// [SerializeField]
/// @brief Field logPluginInfo, offset: 0x29, size: 0x1, def value: None
 bool  ___logPluginInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LCKPluginManager, ____lckService) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LCKPluginManager, ___autoInitializePlugins) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LCKPluginManager, ___logPluginInfo) == 0x29, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LCKPluginManager) == 0x30, "Size mismatch!");

} // namespace end def Liv::Lck
