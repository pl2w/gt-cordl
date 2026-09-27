#pragma once
// IWYU pragma private; include "Liv/Lck/ILCKPlugin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ILCKPlugin)
namespace Liv::Lck {
class LckService;
}
// Forward declare root types
namespace Liv::Lck {
class ILCKPlugin;
}
// Write type traits
MARK_REF_T(::Liv::Lck::ILCKPlugin*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ILCKPlugin*, "Liv.Lck", "ILCKPlugin");
// Dependencies 
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.ILCKPlugin
class CORDL_TYPE ILCKPlugin {
public:
// Declarations
 __declspec(property(get=get_PluginName)) ::StringW  PluginName;

 __declspec(property(get=get_PluginVersion)) ::StringW  PluginVersion;

/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Initialize(::Liv::Lck::LckService*  lckService) ;

/// @brief Method Shutdown, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Shutdown() ;

/// @brief Method get_PluginName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_PluginName() ;

/// @brief Method get_PluginVersion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_PluginVersion() ;

// Ctor Parameters [CppParam { name: "", ty: "ILCKPlugin", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILCKPlugin(ILCKPlugin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24759};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck
