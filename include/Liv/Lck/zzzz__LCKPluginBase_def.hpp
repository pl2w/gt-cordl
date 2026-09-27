#pragma once
// IWYU pragma private; include "Liv/Lck/LCKPluginBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/zzzz__ILCKPlugin_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LCKPluginBase)
namespace Liv::Lck {
class ILCKPlugin;
}
namespace Liv::Lck {
class LckService;
}
// Forward declare root types
namespace Liv::Lck {
class LCKPluginBase;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LCKPluginBase*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LCKPluginBase*, "Liv.Lck", "LCKPluginBase");
// Dependencies Liv.Lck.ILCKPlugin, System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LCKPluginBase
class CORDL_TYPE LCKPluginBase : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsInitialized, put=set_IsInitialized)) bool  IsInitialized;

 __declspec(property(get=get_LckService, put=set_LckService)) ::Liv::Lck::LckService*  LckService;

 __declspec(property(get=get_PluginName)) ::StringW  PluginName;

 __declspec(property(get=get_PluginVersion)) ::StringW  PluginVersion;

/// @brief Field <IsInitialized>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsInitialized_k__BackingField, put=__cordl_internal_set__IsInitialized_k__BackingField)) bool  _IsInitialized_k__BackingField;

/// @brief Field <LckService>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__LckService_k__BackingField, put=__cordl_internal_set__LckService_k__BackingField)) ::Liv::Lck::LckService*  _LckService_k__BackingField;

/// @brief Convert operator to "::Liv::Lck::ILCKPlugin"
constexpr operator  ::Liv::Lck::ILCKPlugin*() noexcept;

/// @brief Method GetPlugin, addr 0x9cebed8, size 0x60, virtual false, abstract: false, final false
inline ::Liv::Lck::ILCKPlugin* GetPlugin(::StringW  pluginName) ;

/// @brief Method GetPlugin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Liv::Lck::ILCKPlugin*> && ::cordl_internals::reference_type_constraint<T>)
inline T GetPlugin() ;

/// @brief Method HasPlugin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Liv::Lck::ILCKPlugin*> && ::cordl_internals::reference_type_constraint<T>)
inline bool HasPlugin() ;

/// @brief Method HasPlugin, addr 0x9cebe78, size 0x60, virtual false, abstract: false, final false
inline bool HasPlugin(::StringW  pluginName) ;

/// @brief Method Initialize, addr 0x9cf0b58, size 0x2c0, virtual true, abstract: false, final true
inline void Initialize(::Liv::Lck::LckService*  lckService) ;

static inline ::Liv::Lck::LCKPluginBase* New_ctor() ;

/// @brief Method OnInitialize, addr 0x9cf10c0, size 0x4, virtual true, abstract: false, final false
inline void OnInitialize() ;

/// @brief Method OnShutdown, addr 0x9cf10c4, size 0x4, virtual true, abstract: false, final false
inline void OnShutdown() ;

/// @brief Method Shutdown, addr 0x9cf0e18, size 0x2a8, virtual true, abstract: false, final true
inline void Shutdown() ;

constexpr bool const& __cordl_internal_get__IsInitialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsInitialized_k__BackingField() ;

constexpr ::Liv::Lck::LckService* const& __cordl_internal_get__LckService_k__BackingField() const;

constexpr ::Liv::Lck::LckService*& __cordl_internal_get__LckService_k__BackingField() ;

constexpr void __cordl_internal_set__IsInitialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__LckService_k__BackingField(::Liv::Lck::LckService*  value) ;

/// @brief Method .ctor, addr 0x9cec63c, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IsInitialized, addr 0x9cf0550, size 0x8, virtual false, abstract: false, final false
inline bool get_IsInitialized() ;

/// [CompilerGenerated]
/// @brief Method get_LckService, addr 0x9cf0540, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::LckService* get_LckService() ;

/// @brief Method get_PluginName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_PluginName() ;

/// @brief Method get_PluginVersion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_PluginVersion() ;

/// @brief Convert to "::Liv::Lck::ILCKPlugin"
constexpr ::Liv::Lck::ILCKPlugin* i___Liv__Lck__ILCKPlugin() noexcept;

/// [CompilerGenerated]
/// @brief Method set_IsInitialized, addr 0x9cf0558, size 0x8, virtual false, abstract: false, final false
inline void set_IsInitialized(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_LckService, addr 0x9cf0548, size 0x8, virtual false, abstract: false, final false
inline void set_LckService(::Liv::Lck::LckService*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LCKPluginBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LCKPluginBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LCKPluginBase(LCKPluginBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LCKPluginBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LCKPluginBase(LCKPluginBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24777};

/// [CompilerGenerated]
/// @brief Field <LckService>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::LckService*  ____LckService_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsInitialized>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____IsInitialized_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LCKPluginBase, ____LckService_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LCKPluginBase, ____IsInitialized_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LCKPluginBase) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck
