#pragma once
// IWYU pragma private; include "PlayFab/PluginManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/zzzz__IPlayFabPlugin_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PluginManager)
namespace PlayFab {
class IPlayFabPlugin;
}
namespace PlayFab {
class ITransportPlugin;
}
namespace PlayFab {
struct PluginContractKey;
}
namespace PlayFab {
struct PluginContract;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace PlayFab {
class PluginManager;
}
// Write type traits
MARK_REF_T(::PlayFab::PluginManager*);
DEFINE_IL2CPP_CLASS(::PlayFab::PluginManager*, "PlayFab", "PluginManager");
// Dependencies PlayFab.IPlayFabPlugin, System.Object
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PluginManager
class CORDL_TYPE PluginManager : public ::System::Object {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::PlayFab::PluginManager*  Instance;

/// @brief Field plugins, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_plugins, put=__cordl_internal_set_plugins)) ::System::Collections::Generic::Dictionary_2<::PlayFab::PluginContractKey,::PlayFab::IPlayFabPlugin*>*  plugins;

/// @brief Method CreatePlayFabTransportPlugin, addr 0xa7ded30, size 0xb0, virtual false, abstract: false, final false
inline ::PlayFab::ITransportPlugin* CreatePlayFabTransportPlugin() ;

/// @brief Method CreatePlugin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::PlayFab::IPlayFabPlugin*> && ::cordl_internals::default_constructor_constraint<T>)
inline ::PlayFab::IPlayFabPlugin* CreatePlugin() ;

/// @brief Method GetPlugin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::PlayFab::IPlayFabPlugin*>)
static inline T GetPlugin(::PlayFab::PluginContract  contract, ::StringW  instanceName) ;

/// @brief Method GetPluginInternal, addr 0xa7debd0, size 0x160, virtual false, abstract: false, final false
inline ::PlayFab::IPlayFabPlugin* GetPluginInternal(::PlayFab::PluginContract  contract, ::StringW  instanceName) ;

static inline ::PlayFab::PluginManager* New_ctor() ;

/// @brief Method SetPlugin, addr 0xa7dea5c, size 0x80, virtual false, abstract: false, final false
static inline void SetPlugin(::PlayFab::IPlayFabPlugin*  plugin, ::PlayFab::PluginContract  contract, ::StringW  instanceName) ;

/// @brief Method SetPluginInternal, addr 0xa7deadc, size 0xf4, virtual false, abstract: false, final false
inline void SetPluginInternal(::PlayFab::IPlayFabPlugin*  plugin, ::PlayFab::PluginContract  contract, ::StringW  instanceName) ;

constexpr ::System::Collections::Generic::Dictionary_2<::PlayFab::PluginContractKey,::PlayFab::IPlayFabPlugin*>* const& __cordl_internal_get_plugins() const;

constexpr ::System::Collections::Generic::Dictionary_2<::PlayFab::PluginContractKey,::PlayFab::IPlayFabPlugin*>*& __cordl_internal_get_plugins() ;

constexpr void __cordl_internal_set_plugins(::System::Collections::Generic::Dictionary_2<::PlayFab::PluginContractKey,::PlayFab::IPlayFabPlugin*>*  value) ;

/// @brief Method .ctor, addr 0xa7de9ac, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::PlayFab::PluginManager* getStaticF_Instance() ;

static inline void setStaticF_Instance(::PlayFab::PluginManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PluginManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PluginManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PluginManager(PluginManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PluginManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PluginManager(PluginManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19528};

/// @brief Field plugins, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::PlayFab::PluginContractKey,::PlayFab::IPlayFabPlugin*>*  ___plugins;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::PluginManager, ___plugins) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::PluginManager) == 0x18, "Size mismatch!");

} // namespace end def PlayFab
