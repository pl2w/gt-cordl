#pragma once
// IWYU pragma private; include "GlobalNamespace/GRDamageFlash.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRDamageFlash)
namespace GlobalNamespace {
struct GRDamageFlash_State;
}
namespace GlobalNamespace {
template<typename State>
class SimpleStateMachine_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class GRDamageFlash;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRDamageFlash*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRDamageFlash*, "", "GRDamageFlash");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRDamageFlash
class CORDL_TYPE GRDamageFlash : public ::System::Object {
public:
// Declarations
using State = ::GlobalNamespace::GRDamageFlash_State;

/// @brief Field flashCooldown, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_flashCooldown, put=__cordl_internal_set_flashCooldown)) float_t  flashCooldown;

/// @brief Field flashDuration, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_flashDuration, put=__cordl_internal_set_flashDuration)) float_t  flashDuration;

/// @brief Field flashMaterial, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_flashMaterial, put=__cordl_internal_set_flashMaterial)) ::UnityW<::UnityEngine::Material>  flashMaterial;

/// @brief Field flashRendererDefaultMaterial, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_flashRendererDefaultMaterial, put=__cordl_internal_set_flashRendererDefaultMaterial)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  flashRendererDefaultMaterial;

/// @brief Field flashRenderers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_flashRenderers, put=__cordl_internal_set_flashRenderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  flashRenderers;

/// @brief Field stateMachine, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateMachine, put=__cordl_internal_set_stateMachine)) ::GlobalNamespace::SimpleStateMachine_1<::GlobalNamespace::GRDamageFlash_State>*  stateMachine;

static inline ::GlobalNamespace::GRDamageFlash* New_ctor() ;

/// @brief Method OnStateEnd, addr 0x587ee30, size 0xd8, virtual false, abstract: false, final false
inline void OnStateEnd(::GlobalNamespace::GRDamageFlash_State  state) ;

/// @brief Method OnStateStart, addr 0x587ed94, size 0x9c, virtual false, abstract: false, final false
inline void OnStateStart(::GlobalNamespace::GRDamageFlash_State  state) ;

/// @brief Method OnStateUpdate, addr 0x587ef08, size 0x104, virtual false, abstract: false, final false
inline void OnStateUpdate(::GlobalNamespace::GRDamageFlash_State  state) ;

/// @brief Method Play, addr 0x587ed1c, size 0x78, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method Setup, addr 0x587ea74, size 0x2a8, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method Stop, addr 0x587f00c, size 0x58, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Update, addr 0x587f064, size 0x50, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_flashCooldown() const;

constexpr float_t& __cordl_internal_get_flashCooldown() ;

constexpr float_t const& __cordl_internal_get_flashDuration() const;

constexpr float_t& __cordl_internal_get_flashDuration() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_flashMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_flashMaterial() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& __cordl_internal_get_flashRendererDefaultMaterial() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& __cordl_internal_get_flashRendererDefaultMaterial() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_flashRenderers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_flashRenderers() ;

constexpr ::GlobalNamespace::SimpleStateMachine_1<::GlobalNamespace::GRDamageFlash_State>* const& __cordl_internal_get_stateMachine() const;

constexpr ::GlobalNamespace::SimpleStateMachine_1<::GlobalNamespace::GRDamageFlash_State>*& __cordl_internal_get_stateMachine() ;

constexpr void __cordl_internal_set_flashCooldown(float_t  value) ;

constexpr void __cordl_internal_set_flashDuration(float_t  value) ;

constexpr void __cordl_internal_set_flashMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_flashRendererDefaultMaterial(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value) ;

constexpr void __cordl_internal_set_flashRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_stateMachine(::GlobalNamespace::SimpleStateMachine_1<::GlobalNamespace::GRDamageFlash_State>*  value) ;

/// @brief Method .ctor, addr 0x587f0b4, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRDamageFlash() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRDamageFlash", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRDamageFlash(GRDamageFlash && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRDamageFlash", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRDamageFlash(GRDamageFlash const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1931};

/// @brief Field flashMaterial, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___flashMaterial;

/// @brief Field flashDuration, offset: 0x18, size: 0x4, def value: None
 float_t  ___flashDuration;

/// @brief Field flashCooldown, offset: 0x1c, size: 0x4, def value: None
 float_t  ___flashCooldown;

/// @brief Field flashRenderers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___flashRenderers;

/// @brief Field stateMachine, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::SimpleStateMachine_1<::GlobalNamespace::GRDamageFlash_State>*  ___stateMachine;

/// @brief Field flashRendererDefaultMaterial, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  ___flashRendererDefaultMaterial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRDamageFlash, ___flashMaterial) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDamageFlash, ___flashDuration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDamageFlash, ___flashCooldown) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDamageFlash, ___flashRenderers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDamageFlash, ___stateMachine) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDamageFlash, ___flashRendererDefaultMaterial) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRDamageFlash) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
