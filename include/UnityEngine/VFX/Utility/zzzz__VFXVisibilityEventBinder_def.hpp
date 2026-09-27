#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXVisibilityEventBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXEventBinderBase_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXVisibilityEventBinder_Activation_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(VFXVisibilityEventBinder)
namespace GlobalNamespace {
struct VFXVisibilityEventBinder_Activation;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXVisibilityEventBinder;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXVisibilityEventBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXVisibilityEventBinder*, "UnityEngine.VFX.Utility", "VFXVisibilityEventBinder");
// [RequireComponent(typeof(UnityEngine.Renderer))]
// Dependencies UnityEngine.VFX.Utility.VFXEventBinderBase, UnityEngine.VFX.Utility.VFXVisibilityEventBinder::Activation
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXVisibilityEventBinder
class CORDL_TYPE VFXVisibilityEventBinder : public ::UnityEngine::VFX::Utility::VFXEventBinderBase {
public:
// Declarations
using Activation = ::GlobalNamespace::VFXVisibilityEventBinder_Activation;

/// @brief Field activation, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_activation, put=__cordl_internal_set_activation)) ::GlobalNamespace::VFXVisibilityEventBinder_Activation  activation;

static inline ::UnityEngine::VFX::Utility::VFXVisibilityEventBinder* New_ctor() ;

/// @brief Method OnBecameInvisible, addr 0xb3e63f4, size 0xb4, virtual false, abstract: false, final false
inline void OnBecameInvisible() ;

/// @brief Method OnBecameVisible, addr 0xb3e6344, size 0xb0, virtual false, abstract: false, final false
inline void OnBecameVisible() ;

/// @brief Method SetEventAttribute, addr 0xb3e6340, size 0x4, virtual true, abstract: false, final false
inline void SetEventAttribute(::ArrayW<::System::Object*>  parameters) ;

constexpr ::GlobalNamespace::VFXVisibilityEventBinder_Activation const& __cordl_internal_get_activation() const;

constexpr ::GlobalNamespace::VFXVisibilityEventBinder_Activation& __cordl_internal_get_activation() ;

constexpr void __cordl_internal_set_activation(::GlobalNamespace::VFXVisibilityEventBinder_Activation  value) ;

/// @brief Method .ctor, addr 0xb3e64a8, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VFXVisibilityEventBinder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VFXVisibilityEventBinder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VFXVisibilityEventBinder(VFXVisibilityEventBinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VFXVisibilityEventBinder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VFXVisibilityEventBinder(VFXVisibilityEventBinder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30053};

/// @brief Field activation, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::VFXVisibilityEventBinder_Activation  ___activation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXVisibilityEventBinder, ___activation) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXVisibilityEventBinder) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::VFX::Utility
