#pragma once
// IWYU pragma private; include "Liv/Lck/ExamplePlugin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/zzzz__LCKPluginBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ExamplePlugin)
namespace Liv::Lck {
class LckResult;
}
// Forward declare root types
namespace Liv::Lck {
class ExamplePlugin;
}
// Write type traits
MARK_REF_T(::Liv::Lck::ExamplePlugin*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ExamplePlugin*, "Liv.Lck", "ExamplePlugin");
// Dependencies Liv.Lck.LCKPluginBase
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.ExamplePlugin
class CORDL_TYPE ExamplePlugin : public ::Liv::Lck::LCKPluginBase {
public:
// Declarations
 __declspec(property(get=get_PluginName)) ::StringW  PluginName;

 __declspec(property(get=get_PluginVersion)) ::StringW  PluginVersion;

/// @brief Method DoSomething, addr 0x9cec55c, size 0xdc, virtual false, abstract: false, final false
inline void DoSomething() ;

static inline ::Liv::Lck::ExamplePlugin* New_ctor() ;

/// @brief Method OnInitialize, addr 0x9cebb8c, size 0x2ec, virtual true, abstract: false, final false
inline void OnInitialize() ;

/// @brief Method OnRecordingStarted, addr 0x9cec33c, size 0x110, virtual false, abstract: false, final false
inline void OnRecordingStarted(::Liv::Lck::LckResult*  result) ;

/// @brief Method OnRecordingStopped, addr 0x9cec44c, size 0x110, virtual false, abstract: false, final false
inline void OnRecordingStopped(::Liv::Lck::LckResult*  result) ;

/// @brief Method OnShutdown, addr 0x9cec098, size 0x144, virtual true, abstract: false, final false
inline void OnShutdown() ;

/// @brief Method .ctor, addr 0x9cec638, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PluginName, addr 0x9cebb0c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_PluginName() ;

/// @brief Method get_PluginVersion, addr 0x9cebb4c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_PluginVersion() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExamplePlugin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExamplePlugin", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExamplePlugin(ExamplePlugin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExamplePlugin", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExamplePlugin(ExamplePlugin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24754};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::ExamplePlugin) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck
