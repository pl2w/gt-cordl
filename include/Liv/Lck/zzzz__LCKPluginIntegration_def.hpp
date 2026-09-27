#pragma once
// IWYU pragma private; include "Liv/Lck/LCKPluginIntegration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/zzzz__ILCKPlugin_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LCKPluginIntegration)
namespace Liv::Lck {
class LckService;
}
// Forward declare root types
namespace Liv::Lck {
class LCKPluginIntegration;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LCKPluginIntegration*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LCKPluginIntegration*, "Liv.Lck", "LCKPluginIntegration");
// Dependencies Liv.Lck.ILCKPlugin, System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LCKPluginIntegration
class CORDL_TYPE LCKPluginIntegration : public ::System::Object {
public:
// Declarations
/// @brief Method GetPlugin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Liv::Lck::ILCKPlugin*> && ::cordl_internals::reference_type_constraint<T>)
static inline T GetPlugin() ;

/// @brief Method HasPlugin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Liv::Lck::ILCKPlugin*> && ::cordl_internals::reference_type_constraint<T>)
static inline bool HasPlugin() ;

/// @brief Method InitializePlugins, addr 0x9cf1190, size 0xe0, virtual false, abstract: false, final false
static inline void InitializePlugins(::Liv::Lck::LckService*  lckService) ;

/// @brief Method LogPluginInfo, addr 0x9cf1d18, size 0x670, virtual false, abstract: false, final false
static inline void LogPluginInfo() ;

/// @brief Method ShutdownPlugins, addr 0x9cf17d4, size 0x4f4, virtual false, abstract: false, final false
static inline void ShutdownPlugins() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LCKPluginIntegration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LCKPluginIntegration", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LCKPluginIntegration(LCKPluginIntegration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LCKPluginIntegration", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LCKPluginIntegration(LCKPluginIntegration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24778};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::LCKPluginIntegration) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck
