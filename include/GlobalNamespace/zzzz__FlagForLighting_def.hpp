#pragma once
// IWYU pragma private; include "GlobalNamespace/FlagForLighting.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FlagForLighting_TimeOfDay_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FlagForLighting)
namespace GlobalNamespace {
struct FlagForLighting_TimeOfDay;
}
// Forward declare root types
namespace GlobalNamespace {
class FlagForLighting;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FlagForLighting*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FlagForLighting*, "", "FlagForLighting");
// Dependencies FlagForLighting::TimeOfDay, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlagForLighting
class CORDL_TYPE FlagForLighting : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TimeOfDay = ::GlobalNamespace::FlagForLighting_TimeOfDay;

/// @brief Field myTimeOfDay, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_myTimeOfDay, put=__cordl_internal_set_myTimeOfDay)) ::GlobalNamespace::FlagForLighting_TimeOfDay  myTimeOfDay;

static inline ::GlobalNamespace::FlagForLighting* New_ctor() ;

constexpr ::GlobalNamespace::FlagForLighting_TimeOfDay const& __cordl_internal_get_myTimeOfDay() const;

constexpr ::GlobalNamespace::FlagForLighting_TimeOfDay& __cordl_internal_get_myTimeOfDay() ;

constexpr void __cordl_internal_set_myTimeOfDay(::GlobalNamespace::FlagForLighting_TimeOfDay  value) ;

/// @brief Method .ctor, addr 0x5b07c74, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlagForLighting() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlagForLighting", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FlagForLighting(FlagForLighting && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlagForLighting", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlagForLighting(FlagForLighting const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3500};

/// @brief Field myTimeOfDay, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::FlagForLighting_TimeOfDay  ___myTimeOfDay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlagForLighting, ___myTimeOfDay) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FlagForLighting) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
