#pragma once
// IWYU pragma private; include "Liv/Lck/LCKPlugins.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/zzzz__ILCKPlugin_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LCKPlugins)
namespace Liv::Lck {
class ILCKPlugin;
}
namespace Liv::Lck {
class LckService;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Liv::Lck {
class LCKPlugins;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LCKPlugins*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LCKPlugins*, "Liv.Lck", "LCKPlugins");
// Dependencies Liv.Lck.ILCKPlugin, System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LCKPlugins
class CORDL_TYPE LCKPlugins : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsInitialized)) bool  IsInitialized;

 __declspec(property(get=get_PluginCount)) int32_t  PluginCount;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::Liv::Lck::LCKPlugins*  _instance;

/// @brief Field _isInitialized, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInitialized, put=__cordl_internal_set__isInitialized)) bool  _isInitialized;

/// @brief Field _lock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__lock, put=setStaticF__lock)) ::System::Object*  _lock;

/// @brief Field _pluginsByName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__pluginsByName, put=__cordl_internal_set__pluginsByName)) ::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::ILCKPlugin*>*  _pluginsByName;

/// @brief Field _pluginsByType, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__pluginsByType, put=__cordl_internal_set__pluginsByType)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::ILCKPlugin*>*  _pluginsByType;

/// @brief Method Clear, addr 0x9cf29ac, size 0xf4, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method GetAllPlugins, addr 0x9cf1cc8, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ILCKPlugin*>* GetAllPlugins() ;

/// @brief Method GetPlugin, addr 0x9cf1120, size 0x70, virtual false, abstract: false, final false
inline ::Liv::Lck::ILCKPlugin* GetPlugin(::StringW  pluginName) ;

/// @brief Method GetPlugin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Liv::Lck::ILCKPlugin*> && ::cordl_internals::reference_type_constraint<T>)
inline T GetPlugin() ;

/// @brief Method GetPluginsOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Liv::Lck::ILCKPlugin*> && ::cordl_internals::reference_type_constraint<T>)
inline ::System::Collections::Generic::IEnumerable_1<T>* GetPluginsOfType() ;

/// @brief Method HasPlugin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Liv::Lck::ILCKPlugin*> && ::cordl_internals::reference_type_constraint<T>)
inline bool HasPlugin() ;

/// @brief Method HasPlugin, addr 0x9cf10c8, size 0x58, virtual false, abstract: false, final false
inline bool HasPlugin(::StringW  pluginName) ;

/// @brief Method Initialize, addr 0x9cf1270, size 0x564, virtual false, abstract: false, final false
inline void Initialize(::Liv::Lck::LckService*  lckService) ;

static inline ::Liv::Lck::LCKPlugins* New_ctor() ;

/// @brief Method RegisterPlugin, addr 0x9cf06ec, size 0x46c, virtual false, abstract: false, final false
inline void RegisterPlugin(::Liv::Lck::ILCKPlugin*  plugin) ;

/// @brief Method UnregisterPlugin, addr 0x9cf2708, size 0x2a4, virtual false, abstract: false, final false
inline void UnregisterPlugin(::Liv::Lck::ILCKPlugin*  plugin) ;

constexpr bool const& __cordl_internal_get__isInitialized() const;

constexpr bool& __cordl_internal_get__isInitialized() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::ILCKPlugin*>* const& __cordl_internal_get__pluginsByName() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::ILCKPlugin*>*& __cordl_internal_get__pluginsByName() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::ILCKPlugin*>* const& __cordl_internal_get__pluginsByType() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::ILCKPlugin*>*& __cordl_internal_get__pluginsByType() ;

constexpr void __cordl_internal_set__isInitialized(bool  value) ;

constexpr void __cordl_internal_set__pluginsByName(::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::ILCKPlugin*>*  value) ;

constexpr void __cordl_internal_set__pluginsByType(::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::ILCKPlugin*>*  value) ;

/// @brief Method .ctor, addr 0x9cf2624, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Liv::Lck::LCKPlugins* getStaticF__instance() ;

static inline ::System::Object* getStaticF__lock() ;

/// @brief Method get_Instance, addr 0x9cf0560, size 0x18c, virtual false, abstract: false, final false
static inline ::Liv::Lck::LCKPlugins* get_Instance() ;

/// @brief Method get_IsInitialized, addr 0x9cf2af0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsInitialized() ;

/// @brief Method get_PluginCount, addr 0x9cf2aa0, size 0x50, virtual false, abstract: false, final false
inline int32_t get_PluginCount() ;

static inline void setStaticF__instance(::Liv::Lck::LCKPlugins*  value) ;

static inline void setStaticF__lock(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LCKPlugins() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LCKPlugins", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LCKPlugins(LCKPlugins && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LCKPlugins", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LCKPlugins(LCKPlugins const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24780};

/// @brief Field _pluginsByType, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::ILCKPlugin*>*  ____pluginsByType;

/// @brief Field _pluginsByName, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::ILCKPlugin*>*  ____pluginsByName;

/// @brief Field _isInitialized, offset: 0x20, size: 0x1, def value: None
 bool  ____isInitialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LCKPlugins, ____pluginsByType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LCKPlugins, ____pluginsByName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LCKPlugins, ____isInitialized) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LCKPlugins) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck
