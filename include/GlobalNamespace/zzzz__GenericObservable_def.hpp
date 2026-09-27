#pragma once
// IWYU pragma private; include "GlobalNamespace/GenericObservable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObservableBehavior_def.hpp"
CORDL_MODULE_EXPORT(GenericObservable)
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class GenericObservable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GenericObservable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GenericObservable*, "", "GenericObservable");
// Dependencies ObservableBehavior
namespace GlobalNamespace {
// Is value type: false
// CS Name: GenericObservable
class CORDL_TYPE GenericObservable : public ::GlobalNamespace::ObservableBehavior {
public:
// Declarations
/// @brief Field OnObservable, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnObservable, put=__cordl_internal_set_OnObservable)) ::UnityEngine::Events::UnityEvent*  OnObservable;

/// @brief Field OnUnobservable, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnUnobservable, put=__cordl_internal_set_OnUnobservable)) ::UnityEngine::Events::UnityEvent*  OnUnobservable;

static inline ::GlobalNamespace::GenericObservable* New_ctor() ;

/// @brief Method ObservableSliceUpdate, addr 0x57ec894, size 0x4, virtual true, abstract: false, final false
inline void ObservableSliceUpdate() ;

/// @brief Method OnBecameObservable, addr 0x57ec898, size 0x14, virtual true, abstract: false, final false
inline void OnBecameObservable() ;

/// @brief Method OnLostObservable, addr 0x57ec8ac, size 0x14, virtual true, abstract: false, final false
inline void OnLostObservable() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnObservable() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnObservable() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnUnobservable() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnUnobservable() ;

constexpr void __cordl_internal_set_OnObservable(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnUnobservable(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x57ec8c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GenericObservable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GenericObservable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericObservable(GenericObservable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericObservable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericObservable(GenericObservable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{175};

/// @brief Field OnObservable, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnObservable;

/// @brief Field OnUnobservable, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnUnobservable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GenericObservable, ___OnObservable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GenericObservable, ___OnUnobservable) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GenericObservable) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
