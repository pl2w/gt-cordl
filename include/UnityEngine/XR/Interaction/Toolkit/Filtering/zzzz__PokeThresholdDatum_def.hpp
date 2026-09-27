#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/PokeThresholdDatum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__Datum_1_def.hpp"
CORDL_MODULE_EXPORT(PokeThresholdDatum)
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class PokeThresholdData;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class PokeThresholdDatum;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatum*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatum*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "PokeThresholdDatum");
// [CreateAssetMenu(fileName = "PokeThresholdDatum", menuName = "XR/Value Datums/Poke Threshold Datum", order = 0)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Filtering.PokeThresholdDatum.html")]
// Dependencies Unity.XR.CoreUtils.Datums.Datum`1<T>
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.PokeThresholdDatum
class CORDL_TYPE PokeThresholdDatum : public ::Unity::XR::CoreUtils::Datums::Datum_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdData*> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatum* New_ctor() ;

/// @brief Method .ctor, addr 0xb4a5978, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PokeThresholdDatum() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PokeThresholdDatum", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PokeThresholdDatum(PokeThresholdDatum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PokeThresholdDatum", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PokeThresholdDatum(PokeThresholdDatum const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11553};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeThresholdDatum) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
