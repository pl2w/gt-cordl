#pragma once
// IWYU pragma private; include "Oculus/Interaction/SecondaryInteractorConnection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SecondaryInteractorConnection)
namespace Oculus::Interaction {
class IInteractorView;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class SecondaryInteractorConnection;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::SecondaryInteractorConnection*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::SecondaryInteractorConnection*, "Oculus.Interaction", "SecondaryInteractorConnection");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.SecondaryInteractorConnection
class CORDL_TYPE SecondaryInteractorConnection : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_PrimaryInteractor, put=set_PrimaryInteractor)) ::Oculus::Interaction::IInteractorView*  PrimaryInteractor;

 __declspec(property(get=get_SecondaryInteractor, put=set_SecondaryInteractor)) ::Oculus::Interaction::IInteractorView*  SecondaryInteractor;

/// @brief Field <PrimaryInteractor>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__PrimaryInteractor_k__BackingField, put=__cordl_internal_set__PrimaryInteractor_k__BackingField)) ::Oculus::Interaction::IInteractorView*  _PrimaryInteractor_k__BackingField;

/// @brief Field <SecondaryInteractor>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__SecondaryInteractor_k__BackingField, put=__cordl_internal_set__SecondaryInteractor_k__BackingField)) ::Oculus::Interaction::IInteractorView*  _SecondaryInteractor_k__BackingField;

/// @brief Field _primaryInteractor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__primaryInteractor, put=__cordl_internal_set__primaryInteractor)) ::UnityW<::UnityEngine::Object>  _primaryInteractor;

/// @brief Field _secondaryInteractor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__secondaryInteractor, put=__cordl_internal_set__secondaryInteractor)) ::UnityW<::UnityEngine::Object>  _secondaryInteractor;

/// @brief Method Awake, addr 0xa419b4c, size 0x74, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllSecondaryInteractorConnection, addr 0xa419bc4, size 0x28, virtual false, abstract: false, final false
inline void InjectAllSecondaryInteractorConnection(::Oculus::Interaction::IInteractorView*  primaryInteractor, ::Oculus::Interaction::IInteractorView*  secondaryInteractor) ;

/// @brief Method InjectPrimaryInteractor, addr 0xa419bec, size 0xcc, virtual false, abstract: false, final false
inline void InjectPrimaryInteractor(::Oculus::Interaction::IInteractorView*  interactorView) ;

/// @brief Method InjectSecondaryInteractorConnection, addr 0xa419cb8, size 0xcc, virtual false, abstract: false, final false
inline void InjectSecondaryInteractorConnection(::Oculus::Interaction::IInteractorView*  interactorView) ;

static inline ::Oculus::Interaction::SecondaryInteractorConnection* New_ctor() ;

/// @brief Method Start, addr 0xa419bc0, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::IInteractorView* const& __cordl_internal_get__PrimaryInteractor_k__BackingField() const;

constexpr ::Oculus::Interaction::IInteractorView*& __cordl_internal_get__PrimaryInteractor_k__BackingField() ;

constexpr ::Oculus::Interaction::IInteractorView* const& __cordl_internal_get__SecondaryInteractor_k__BackingField() const;

constexpr ::Oculus::Interaction::IInteractorView*& __cordl_internal_get__SecondaryInteractor_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__primaryInteractor() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__primaryInteractor() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__secondaryInteractor() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__secondaryInteractor() ;

constexpr void __cordl_internal_set__PrimaryInteractor_k__BackingField(::Oculus::Interaction::IInteractorView*  value) ;

constexpr void __cordl_internal_set__SecondaryInteractor_k__BackingField(::Oculus::Interaction::IInteractorView*  value) ;

constexpr void __cordl_internal_set__primaryInteractor(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__secondaryInteractor(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa419d84, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_PrimaryInteractor, addr 0xa419b2c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IInteractorView* get_PrimaryInteractor() ;

/// [CompilerGenerated]
/// @brief Method get_SecondaryInteractor, addr 0xa419b3c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IInteractorView* get_SecondaryInteractor() ;

/// [CompilerGenerated]
/// @brief Method set_PrimaryInteractor, addr 0xa419b34, size 0x8, virtual false, abstract: false, final false
inline void set_PrimaryInteractor(::Oculus::Interaction::IInteractorView*  value) ;

/// [CompilerGenerated]
/// @brief Method set_SecondaryInteractor, addr 0xa419b44, size 0x8, virtual false, abstract: false, final false
inline void set_SecondaryInteractor(::Oculus::Interaction::IInteractorView*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SecondaryInteractorConnection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SecondaryInteractorConnection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SecondaryInteractorConnection(SecondaryInteractorConnection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecondaryInteractorConnection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecondaryInteractorConnection(SecondaryInteractorConnection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15798};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IInteractorView), new[] {  })]
/// @brief Field _primaryInteractor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____primaryInteractor;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IInteractorView), new[] {  })]
/// @brief Field _secondaryInteractor, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____secondaryInteractor;

/// [CompilerGenerated]
/// @brief Field <PrimaryInteractor>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractorView*  ____PrimaryInteractor_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SecondaryInteractor>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractorView*  ____SecondaryInteractor_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::SecondaryInteractorConnection, ____primaryInteractor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SecondaryInteractorConnection, ____secondaryInteractor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SecondaryInteractorConnection, ____PrimaryInteractor_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SecondaryInteractorConnection, ____SecondaryInteractor_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::SecondaryInteractorConnection) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction
