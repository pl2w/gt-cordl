#pragma once
// IWYU pragma private; include "GlobalNamespace/IFXContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFXContext)
namespace GlobalNamespace {
class FXSystemSettings;
}
// Forward declare root types
namespace GlobalNamespace {
class IFXContext;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IFXContext*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IFXContext*, "", "IFXContext");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IFXContext
class CORDL_TYPE IFXContext {
public:
// Declarations
 __declspec(property(get=get_settings)) ::UnityW<::GlobalNamespace::FXSystemSettings>  settings;

/// @brief Method OnPlayFX, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnPlayFX() ;

/// @brief Method get_settings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::GlobalNamespace::FXSystemSettings> get_settings() ;

// Ctor Parameters [CppParam { name: "", ty: "IFXContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFXContext(IFXContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3362};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
