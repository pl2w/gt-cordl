#pragma once
// IWYU pragma private; include "GlobalNamespace/BetterBakerPositionOverrides.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BetterBakerPositionOverrides)
namespace GlobalNamespace {
struct BetterBakerPositionOverrides_OverridePosition;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BetterBakerPositionOverrides;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BetterBakerPositionOverrides*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BetterBakerPositionOverrides*, "", "BetterBakerPositionOverrides");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BetterBakerPositionOverrides
class CORDL_TYPE BetterBakerPositionOverrides : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using OverridePosition = ::GlobalNamespace::BetterBakerPositionOverrides_OverridePosition;

/// @brief Field overridePositions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_overridePositions, put=__cordl_internal_set_overridePositions)) ::System::Collections::Generic::List_1<::GlobalNamespace::BetterBakerPositionOverrides_OverridePosition>*  overridePositions;

static inline ::GlobalNamespace::BetterBakerPositionOverrides* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BetterBakerPositionOverrides_OverridePosition>* const& __cordl_internal_get_overridePositions() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BetterBakerPositionOverrides_OverridePosition>*& __cordl_internal_get_overridePositions() ;

constexpr void __cordl_internal_set_overridePositions(::System::Collections::Generic::List_1<::GlobalNamespace::BetterBakerPositionOverrides_OverridePosition>*  value) ;

/// @brief Method .ctor, addr 0x5ae1e18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BetterBakerPositionOverrides() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BetterBakerPositionOverrides", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BetterBakerPositionOverrides(BetterBakerPositionOverrides && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BetterBakerPositionOverrides", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BetterBakerPositionOverrides(BetterBakerPositionOverrides const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3468};

/// @brief Field overridePositions, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BetterBakerPositionOverrides_OverridePosition>*  ___overridePositions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BetterBakerPositionOverrides, ___overridePositions) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BetterBakerPositionOverrides) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
