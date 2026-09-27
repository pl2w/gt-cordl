#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderRoomBoundary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
CORDL_MODULE_EXPORT(BuilderRoomBoundary)
namespace GlobalNamespace {
class SizeChangerTrigger;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderRoomBoundary;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderRoomBoundary*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderRoomBoundary*, "", "BuilderRoomBoundary");
// Dependencies GorillaTriggerBox
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderRoomBoundary
class CORDL_TYPE BuilderRoomBoundary : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
/// @brief Field disableOnExitTrigger, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_disableOnExitTrigger, put=__cordl_internal_set_disableOnExitTrigger)) ::UnityW<::GlobalNamespace::SizeChangerTrigger>  disableOnExitTrigger;

/// @brief Field enableOnEnterTrigger, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_enableOnEnterTrigger, put=__cordl_internal_set_enableOnEnterTrigger)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SizeChangerTrigger>>*  enableOnEnterTrigger;

/// @brief Field rigRef, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigRef, put=__cordl_internal_set_rigRef)) ::UnityW<::GlobalNamespace::VRRig>  rigRef;

/// @brief Method Awake, addr 0x57d78c0, size 0x1d4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::BuilderRoomBoundary* New_ctor() ;

/// @brief Method OnDestroy, addr 0x57d7a94, size 0x1d4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnteredBoundary, addr 0x57d7c68, size 0x1a8, virtual false, abstract: false, final false
inline void OnEnteredBoundary(::UnityEngine::Collider*  other) ;

/// @brief Method OnExitedBoundary, addr 0x57d7e10, size 0x124, virtual false, abstract: false, final false
inline void OnExitedBoundary(::UnityEngine::Collider*  other) ;

constexpr ::UnityW<::GlobalNamespace::SizeChangerTrigger> const& __cordl_internal_get_disableOnExitTrigger() const;

constexpr ::UnityW<::GlobalNamespace::SizeChangerTrigger>& __cordl_internal_get_disableOnExitTrigger() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SizeChangerTrigger>>* const& __cordl_internal_get_enableOnEnterTrigger() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SizeChangerTrigger>>*& __cordl_internal_get_enableOnEnterTrigger() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rigRef() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rigRef() ;

constexpr void __cordl_internal_set_disableOnExitTrigger(::UnityW<::GlobalNamespace::SizeChangerTrigger>  value) ;

constexpr void __cordl_internal_set_enableOnEnterTrigger(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SizeChangerTrigger>>*  value) ;

constexpr void __cordl_internal_set_rigRef(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x57d7f34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderRoomBoundary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderRoomBoundary", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderRoomBoundary(BuilderRoomBoundary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderRoomBoundary", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderRoomBoundary(BuilderRoomBoundary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1631};

/// [SerializeField]
/// @brief Field enableOnEnterTrigger, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SizeChangerTrigger>>*  ___enableOnEnterTrigger;

/// [SerializeField]
/// @brief Field disableOnExitTrigger, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SizeChangerTrigger>  ___disableOnExitTrigger;

/// @brief Field rigRef, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rigRef;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderRoomBoundary, ___enableOnEnterTrigger) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRoomBoundary, ___disableOnExitTrigger) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRoomBoundary, ___rigRef) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderRoomBoundary) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
