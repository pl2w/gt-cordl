#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Datums/IntDatumProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntDatumProperty)
namespace Unity::XR::CoreUtils::Datums {
class IntDatum;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::Datums {
class IntDatumProperty;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::Datums::IntDatumProperty*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::Datums::IntDatumProperty*, "Unity.XR.CoreUtils.Datums", "IntDatumProperty");
// Dependencies Unity.XR.CoreUtils.Datums.DatumProperty`2<TValue, TDatum>
namespace Unity::XR::CoreUtils::Datums {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.Datums.IntDatumProperty
class CORDL_TYPE IntDatumProperty : public ::Unity::XR::CoreUtils::Datums::DatumProperty_2<int32_t,::UnityW<::Unity::XR::CoreUtils::Datums::IntDatum>> {
public:
// Declarations
static inline ::Unity::XR::CoreUtils::Datums::IntDatumProperty* New_ctor(::Unity::XR::CoreUtils::Datums::IntDatum*  datum) ;

static inline ::Unity::XR::CoreUtils::Datums::IntDatumProperty* New_ctor(int32_t  value) ;

/// @brief Method .ctor, addr 0xb3fd394, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::Unity::XR::CoreUtils::Datums::IntDatum*  datum) ;

/// @brief Method .ctor, addr 0xb3fd33c, size 0x58, virtual false, abstract: false, final false
inline void _ctor(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IntDatumProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IntDatumProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IntDatumProperty(IntDatumProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntDatumProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntDatumProperty(IntDatumProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30445};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::Datums::IntDatumProperty) == 0x20, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils::Datums
