#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderTriggerEnable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BuilderTriggerEnable)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderTriggerEnable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderTriggerEnable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderTriggerEnable*, "", "BuilderTriggerEnable");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderTriggerEnable
class CORDL_TYPE BuilderTriggerEnable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field activateOnEnter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_activateOnEnter, put=__cordl_internal_set_activateOnEnter)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  activateOnEnter;

/// @brief Field activateOnExit, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_activateOnExit, put=__cordl_internal_set_activateOnExit)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  activateOnExit;

/// @brief Field deactivateOnEnter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_deactivateOnEnter, put=__cordl_internal_set_deactivateOnEnter)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  deactivateOnEnter;

/// @brief Field deactivateOnExit, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_deactivateOnExit, put=__cordl_internal_set_deactivateOnExit)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  deactivateOnExit;

static inline ::GlobalNamespace::BuilderTriggerEnable* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x57e26e4, size 0x238, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x57e291c, size 0x238, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_activateOnEnter() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_activateOnEnter() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_activateOnExit() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_activateOnExit() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_deactivateOnEnter() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_deactivateOnEnter() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_deactivateOnExit() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_deactivateOnExit() ;

constexpr void __cordl_internal_set_activateOnEnter(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_activateOnExit(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_deactivateOnEnter(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_deactivateOnExit(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// @brief Method .ctor, addr 0x57e2b54, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderTriggerEnable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderTriggerEnable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderTriggerEnable(BuilderTriggerEnable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderTriggerEnable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderTriggerEnable(BuilderTriggerEnable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1648};

/// @brief Field activateOnEnter, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___activateOnEnter;

/// @brief Field deactivateOnEnter, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___deactivateOnEnter;

/// @brief Field activateOnExit, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___activateOnExit;

/// @brief Field deactivateOnExit, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___deactivateOnExit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderTriggerEnable, ___activateOnEnter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTriggerEnable, ___deactivateOnEnter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTriggerEnable, ___activateOnExit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTriggerEnable, ___deactivateOnExit) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderTriggerEnable) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
