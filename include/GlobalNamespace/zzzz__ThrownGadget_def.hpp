#pragma once
// IWYU pragma private; include "GlobalNamespace/ThrownGadget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ThrownGadget)
namespace GlobalNamespace {
class GameEntity;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Collision;
}
// Forward declare root types
namespace GlobalNamespace {
class ThrownGadget;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ThrownGadget*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ThrownGadget*, "", "ThrownGadget");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ThrownGadget
class CORDL_TYPE ThrownGadget : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnActivated, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnActivated, put=__cordl_internal_set_OnActivated)) ::System::Action*  OnActivated;

/// @brief Field OnHitSurface, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHitSurface, put=__cordl_internal_set_OnHitSurface)) ::System::Action*  OnHitSurface;

/// @brief Field OnThrown, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnThrown, put=__cordl_internal_set_OnThrown)) ::System::Action*  OnThrown;

/// @brief Field activationButtonLastInput, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get_activationButtonLastInput, put=__cordl_internal_set_activationButtonLastInput)) bool  activationButtonLastInput;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field isHeldLocal, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHeldLocal, put=__cordl_internal_set_isHeldLocal)) bool  isHeldLocal;

/// @brief Field lastThrowerLocal, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_lastThrowerLocal, put=__cordl_internal_set_lastThrowerLocal)) bool  lastThrowerLocal;

/// @brief Method IsButtonHeld, addr 0x59d774c, size 0x110, virtual false, abstract: false, final false
inline bool IsButtonHeld() ;

/// @brief Method IsHeld, addr 0x59d767c, size 0x20, virtual false, abstract: false, final false
inline bool IsHeld() ;

/// @brief Method IsHeldByAnother, addr 0x59d7714, size 0x38, virtual false, abstract: false, final false
inline bool IsHeldByAnother() ;

/// @brief Method IsHeldLocal, addr 0x59d769c, size 0x78, virtual false, abstract: false, final false
inline bool IsHeldLocal() ;

static inline ::GlobalNamespace::ThrownGadget* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x59d791c, size 0x24, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method OnEnable, addr 0x59d7674, size 0x8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x59d785c, size 0x74, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateActivation, addr 0x59d78d0, size 0x4c, virtual false, abstract: false, final false
inline void UpdateActivation() ;

constexpr ::System::Action* const& __cordl_internal_get_OnActivated() const;

constexpr ::System::Action*& __cordl_internal_get_OnActivated() ;

constexpr ::System::Action* const& __cordl_internal_get_OnHitSurface() const;

constexpr ::System::Action*& __cordl_internal_get_OnHitSurface() ;

constexpr ::System::Action* const& __cordl_internal_get_OnThrown() const;

constexpr ::System::Action*& __cordl_internal_get_OnThrown() ;

constexpr bool const& __cordl_internal_get_activationButtonLastInput() const;

constexpr bool& __cordl_internal_get_activationButtonLastInput() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr bool const& __cordl_internal_get_isHeldLocal() const;

constexpr bool& __cordl_internal_get_isHeldLocal() ;

constexpr bool const& __cordl_internal_get_lastThrowerLocal() const;

constexpr bool& __cordl_internal_get_lastThrowerLocal() ;

constexpr void __cordl_internal_set_OnActivated(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnHitSurface(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnThrown(::System::Action*  value) ;

constexpr void __cordl_internal_set_activationButtonLastInput(bool  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_isHeldLocal(bool  value) ;

constexpr void __cordl_internal_set_lastThrowerLocal(bool  value) ;

/// @brief Method .ctor, addr 0x59d7940, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnActivated, addr 0x59d72cc, size 0x9c, virtual false, abstract: false, final false
inline void add_OnActivated(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnHitSurface, addr 0x59d753c, size 0x9c, virtual false, abstract: false, final false
inline void add_OnHitSurface(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnThrown, addr 0x59d7404, size 0x9c, virtual false, abstract: false, final false
inline void add_OnThrown(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnActivated, addr 0x59d7368, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnActivated(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnHitSurface, addr 0x59d75d8, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnHitSurface(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnThrown, addr 0x59d74a0, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnThrown(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThrownGadget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThrownGadget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThrownGadget(ThrownGadget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThrownGadget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThrownGadget(ThrownGadget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{294};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// [CompilerGenerated]
/// @brief Field OnActivated, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ___OnActivated;

/// [CompilerGenerated]
/// @brief Field OnThrown, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___OnThrown;

/// [CompilerGenerated]
/// @brief Field OnHitSurface, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___OnHitSurface;

/// @brief Field isHeldLocal, offset: 0x40, size: 0x1, def value: None
 bool  ___isHeldLocal;

/// @brief Field lastThrowerLocal, offset: 0x41, size: 0x1, def value: None
 bool  ___lastThrowerLocal;

/// @brief Field activationButtonLastInput, offset: 0x42, size: 0x1, def value: None
 bool  ___activationButtonLastInput;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ThrownGadget, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrownGadget, ___OnActivated) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrownGadget, ___OnThrown) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrownGadget, ___OnHitSurface) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrownGadget, ___isHeldLocal) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrownGadget, ___lastThrowerLocal) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrownGadget, ___activationButtonLastInput) == 0x42, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ThrownGadget) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
