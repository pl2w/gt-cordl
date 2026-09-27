#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Datums/FloatDatumProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatDatumProperty)
namespace Unity::XR::CoreUtils::Datums {
class FloatDatum;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::Datums {
class FloatDatumProperty;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::Datums::FloatDatumProperty*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::Datums::FloatDatumProperty*, "Unity.XR.CoreUtils.Datums", "FloatDatumProperty");
// Dependencies Unity.XR.CoreUtils.Datums.DatumProperty`2<TValue, TDatum>
namespace Unity::XR::CoreUtils::Datums {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.Datums.FloatDatumProperty
class CORDL_TYPE FloatDatumProperty : public ::Unity::XR::CoreUtils::Datums::DatumProperty_2<float_t,::UnityW<::Unity::XR::CoreUtils::Datums::FloatDatum>> {
public:
// Declarations
static inline ::Unity::XR::CoreUtils::Datums::FloatDatumProperty* New_ctor(::Unity::XR::CoreUtils::Datums::FloatDatum*  datum) ;

static inline ::Unity::XR::CoreUtils::Datums::FloatDatumProperty* New_ctor(float_t  value) ;

/// @brief Method .ctor, addr 0xb3fd18c, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::Unity::XR::CoreUtils::Datums::FloatDatum*  datum) ;

/// @brief Method .ctor, addr 0xb3fd134, size 0x58, virtual false, abstract: false, final false
inline void _ctor(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatDatumProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatDatumProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatDatumProperty(FloatDatumProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatDatumProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatDatumProperty(FloatDatumProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30443};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::Datums::FloatDatumProperty) == 0x20, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils::Datums
