#pragma once
// IWYU pragma private; include "Liv/Lck/AnotherExamplePlugin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/zzzz__LCKPluginBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AnotherExamplePlugin)
// Forward declare root types
namespace Liv::Lck {
class AnotherExamplePlugin;
}
// Write type traits
MARK_REF_T(::Liv::Lck::AnotherExamplePlugin*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::AnotherExamplePlugin*, "Liv.Lck", "AnotherExamplePlugin");
// Dependencies Liv.Lck.LCKPluginBase
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.AnotherExamplePlugin
class CORDL_TYPE AnotherExamplePlugin : public ::Liv::Lck::LCKPluginBase {
public:
// Declarations
 __declspec(property(get=get_PluginName)) ::StringW  PluginName;

 __declspec(property(get=get_PluginVersion)) ::StringW  PluginVersion;

/// @brief Method DoSomethingElse, addr 0x9cec858, size 0x98, virtual false, abstract: false, final false
inline void DoSomethingElse() ;

static inline ::Liv::Lck::AnotherExamplePlugin* New_ctor() ;

/// @brief Method OnInitialize, addr 0x9cec728, size 0x98, virtual true, abstract: false, final false
inline void OnInitialize() ;

/// @brief Method OnShutdown, addr 0x9cec7c0, size 0x98, virtual true, abstract: false, final false
inline void OnShutdown() ;

/// @brief Method .ctor, addr 0x9cec8f0, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PluginName, addr 0x9cec6a8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_PluginName() ;

/// @brief Method get_PluginVersion, addr 0x9cec6e8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_PluginVersion() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnotherExamplePlugin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnotherExamplePlugin", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnotherExamplePlugin(AnotherExamplePlugin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnotherExamplePlugin", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnotherExamplePlugin(AnotherExamplePlugin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24755};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::AnotherExamplePlugin) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck
