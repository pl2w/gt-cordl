#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/EnableTargetOnStart.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(EnableTargetOnStart)
// Forward declare root types
namespace Oculus::Interaction::Samples {
class EnableTargetOnStart;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::EnableTargetOnStart*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::EnableTargetOnStart*, "Oculus.Interaction.Samples", "EnableTargetOnStart");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.EnableTargetOnStart
class CORDL_TYPE EnableTargetOnStart : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _components, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__components, put=__cordl_internal_set__components)) ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>  _components;

/// @brief Field _gameObjects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__gameObjects, put=__cordl_internal_set__gameObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _gameObjects;

static inline ::Oculus::Interaction::Samples::EnableTargetOnStart* New_ctor() ;

/// @brief Method Start, addr 0xa43744c, size 0xb8, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>> const& __cordl_internal_get__components() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>& __cordl_internal_get__components() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__gameObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__gameObjects() ;

constexpr void __cordl_internal_set__components(::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>  value) ;

constexpr void __cordl_internal_set__gameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

/// @brief Method .ctor, addr 0xa437504, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnableTargetOnStart() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnableTargetOnStart", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnableTargetOnStart(EnableTargetOnStart && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnableTargetOnStart", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnableTargetOnStart(EnableTargetOnStart const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28300};

/// @brief Field _components, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>  ____components;

/// @brief Field _gameObjects, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ____gameObjects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::EnableTargetOnStart, ____components) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::EnableTargetOnStart, ____gameObjects) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::EnableTargetOnStart) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
