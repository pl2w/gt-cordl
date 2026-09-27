#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Datums/FloatDatum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__Datum_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatDatum)
// Forward declare root types
namespace Unity::XR::CoreUtils::Datums {
class FloatDatum;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::Datums::FloatDatum*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::Datums::FloatDatum*, "Unity.XR.CoreUtils.Datums", "FloatDatum");
// [CreateAssetMenu(fileName = "FloatDatum", menuName = "XR/Value Datums/Float Datum", order = 0)]
// Dependencies Unity.XR.CoreUtils.Datums.Datum`1<T>
namespace Unity::XR::CoreUtils::Datums {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.Datums.FloatDatum
class CORDL_TYPE FloatDatum : public ::Unity::XR::CoreUtils::Datums::Datum_1<float_t> {
public:
// Declarations
static inline ::Unity::XR::CoreUtils::Datums::FloatDatum* New_ctor() ;

/// @brief Method .ctor, addr 0xb3fd0ec, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatDatum() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatDatum", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatDatum(FloatDatum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatDatum", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatDatum(FloatDatum const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30442};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::Datums::FloatDatum) == 0x30, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils::Datums
