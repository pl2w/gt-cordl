#pragma once
// IWYU pragma private; include "GlobalNamespace/IFXEffectContext_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFXEffectContext_1)
namespace GlobalNamespace {
class FXSystemSettings;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class IFXEffectContext_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::IFXEffectContext_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::IFXEffectContext_1, "", "IFXEffectContext`1");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: IFXEffectContext`1<T>
class CORDL_TYPE IFXEffectContext_1 {
public:
// Declarations
 __declspec(property(get=get_effectContext)) T  effectContext;

 __declspec(property(get=get_settings)) ::UnityW<::GlobalNamespace::FXSystemSettings>  settings;

/// @brief Method get_effectContext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T get_effectContext() ;

/// @brief Method get_settings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::GlobalNamespace::FXSystemSettings> get_settings() ;

// Ctor Parameters [CppParam { name: "", ty: "IFXEffectContext_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFXEffectContext_1(IFXEffectContext_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3366};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
