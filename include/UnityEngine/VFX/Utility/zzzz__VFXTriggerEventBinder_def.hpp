#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXTriggerEventBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXEventBinderBase_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXTriggerEventBinder_Activation_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(VFXTriggerEventBinder)
namespace GlobalNamespace {
struct VFXTriggerEventBinder_Activation;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXTriggerEventBinder;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXTriggerEventBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXTriggerEventBinder*, "UnityEngine.VFX.Utility", "VFXTriggerEventBinder");
// [RequireComponent(typeof(UnityEngine.Collider))]
// Dependencies UnityEngine.VFX.Utility.VFXEventBinderBase, UnityEngine.VFX.Utility.VFXTriggerEventBinder::Activation
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXTriggerEventBinder
class CORDL_TYPE VFXTriggerEventBinder : public ::UnityEngine::VFX::Utility::VFXEventBinderBase {
public:
// Declarations
using Activation = ::GlobalNamespace::VFXTriggerEventBinder_Activation;

/// @brief Field activation, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_activation, put=__cordl_internal_set_activation)) ::GlobalNamespace::VFXTriggerEventBinder_Activation  activation;

/// @brief Field colliders, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders;

/// @brief Field positionParameter, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_positionParameter, put=__cordl_internal_set_positionParameter)) ::UnityEngine::VFX::Utility::ExposedProperty*  positionParameter;

static inline ::UnityEngine::VFX::Utility::VFXTriggerEventBinder* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0xb3e5fdc, size 0xe4, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0xb3e60c0, size 0xe8, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerStay, addr 0xb3e61a8, size 0xe8, virtual false, abstract: false, final false
inline void OnTriggerStay(::UnityEngine::Collider*  other) ;

/// @brief Method SetEventAttribute, addr 0xb3e5f04, size 0xd8, virtual true, abstract: false, final false
inline void SetEventAttribute(::ArrayW<::System::Object*>  parameters) ;

constexpr ::GlobalNamespace::VFXTriggerEventBinder_Activation const& __cordl_internal_get_activation() const;

constexpr ::GlobalNamespace::VFXTriggerEventBinder_Activation& __cordl_internal_get_activation() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_colliders() ;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_positionParameter() const;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_positionParameter() ;

constexpr void __cordl_internal_set_activation(::GlobalNamespace::VFXTriggerEventBinder_Activation  value) ;

constexpr void __cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_positionParameter(::UnityEngine::VFX::Utility::ExposedProperty*  value) ;

/// @brief Method .ctor, addr 0xb3e6290, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VFXTriggerEventBinder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VFXTriggerEventBinder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VFXTriggerEventBinder(VFXTriggerEventBinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VFXTriggerEventBinder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VFXTriggerEventBinder(VFXTriggerEventBinder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30051};

/// @brief Field colliders, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___colliders;

/// @brief Field activation, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::VFXTriggerEventBinder_Activation  ___activation;

/// @brief Field positionParameter, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::VFX::Utility::ExposedProperty*  ___positionParameter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXTriggerEventBinder, ___colliders) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXTriggerEventBinder, ___activation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXTriggerEventBinder, ___positionParameter) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXTriggerEventBinder) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::VFX::Utility
