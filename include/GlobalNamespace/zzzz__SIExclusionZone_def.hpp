#pragma once
// IWYU pragma private; include "GlobalNamespace/SIExclusionZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIExclusionType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SIExclusionZone)
namespace GlobalNamespace {
class SIGadget;
}
namespace GlobalNamespace {
class SIPlayer;
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
class SIExclusionZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIExclusionZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIExclusionZone*, "", "SIExclusionZone");
// Dependencies SIExclusionType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIExclusionZone
class CORDL_TYPE SIExclusionZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field exclusionType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_exclusionType, put=__cordl_internal_set_exclusionType)) ::GlobalNamespace::SIExclusionType  exclusionType;

/// @brief Field gadgetsInZone, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gadgetsInZone, put=__cordl_internal_set_gadgetsInZone)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadget>>*  gadgetsInZone;

/// @brief Field playersInZone, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playersInZone, put=__cordl_internal_set_playersInZone)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIPlayer>>*  playersInZone;

/// @brief Method ClearGadget, addr 0x59dcecc, size 0x58, virtual false, abstract: false, final false
inline void ClearGadget(::GlobalNamespace::SIGadget*  gadget) ;

static inline ::GlobalNamespace::SIExclusionZone* New_ctor() ;

/// @brief Method OnDisable, addr 0x59dc784, size 0x328, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnTriggerEnter, addr 0x59dcaac, size 0x260, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x59dcd0c, size 0x1c0, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::GlobalNamespace::SIExclusionType const& __cordl_internal_get_exclusionType() const;

constexpr ::GlobalNamespace::SIExclusionType& __cordl_internal_get_exclusionType() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadget>>* const& __cordl_internal_get_gadgetsInZone() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadget>>*& __cordl_internal_get_gadgetsInZone() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIPlayer>>* const& __cordl_internal_get_playersInZone() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIPlayer>>*& __cordl_internal_get_playersInZone() ;

constexpr void __cordl_internal_set_exclusionType(::GlobalNamespace::SIExclusionType  value) ;

constexpr void __cordl_internal_set_gadgetsInZone(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadget>>*  value) ;

constexpr void __cordl_internal_set_playersInZone(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIPlayer>>*  value) ;

/// @brief Method .ctor, addr 0x59dcf24, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIExclusionZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIExclusionZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIExclusionZone(SIExclusionZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIExclusionZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIExclusionZone(SIExclusionZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{319};

/// @brief Field exclusionType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::SIExclusionType  ___exclusionType;

/// @brief Field gadgetsInZone, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIGadget>>*  ___gadgetsInZone;

/// @brief Field playersInZone, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIPlayer>>*  ___playersInZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIExclusionZone, ___exclusionType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIExclusionZone, ___gadgetsInZone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIExclusionZone, ___playersInZone) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIExclusionZone) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
