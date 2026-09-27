#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/PokeThresholdDatumProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_def.hpp"
CORDL_MODULE_EXPORT(PokeThresholdDatumProperty)
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class PokeThresholdData;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class PokeThresholdDatum;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class PokeThresholdDatumProperty;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "PokeThresholdDatumProperty");
// Dependencies Unity.XR.CoreUtils.Datums.DatumProperty`2<TValue, TDatum>
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.PokeThresholdDatumProperty
class CORDL_TYPE PokeThresholdDatumProperty : public ::Unity::XR::CoreUtils::Datums::DatumProperty_2<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*,::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatum>> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty* New_ctor(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatum*  datum) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty* New_ctor(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*  value) ;

/// @brief Method .ctor, addr 0xb4a5a18, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatum*  datum) ;

/// @brief Method .ctor, addr 0xb4a59c0, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PokeThresholdDatumProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PokeThresholdDatumProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PokeThresholdDatumProperty(PokeThresholdDatumProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PokeThresholdDatumProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PokeThresholdDatumProperty(PokeThresholdDatumProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11554};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatumProperty) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
