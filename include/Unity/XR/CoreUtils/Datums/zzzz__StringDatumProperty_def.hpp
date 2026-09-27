#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Datums/StringDatumProperty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StringDatumProperty)
namespace Unity::XR::CoreUtils::Datums {
class StringDatum;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::Datums {
class StringDatumProperty;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::Datums::StringDatumProperty*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::Datums::StringDatumProperty*, "Unity.XR.CoreUtils.Datums", "StringDatumProperty");
// Dependencies Unity.XR.CoreUtils.Datums.DatumProperty`2<TValue, TDatum>
namespace Unity::XR::CoreUtils::Datums {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.Datums.StringDatumProperty
class CORDL_TYPE StringDatumProperty : public ::Unity::XR::CoreUtils::Datums::DatumProperty_2<::StringW,::UnityW<::Unity::XR::CoreUtils::Datums::StringDatum>> {
public:
// Declarations
static inline ::Unity::XR::CoreUtils::Datums::StringDatumProperty* New_ctor(::Unity::XR::CoreUtils::Datums::StringDatum*  datum) ;

static inline ::Unity::XR::CoreUtils::Datums::StringDatumProperty* New_ctor(::StringW  value) ;

/// @brief Method .ctor, addr 0xb3fd48c, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::Unity::XR::CoreUtils::Datums::StringDatum*  datum) ;

/// @brief Method .ctor, addr 0xb3fd434, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringDatumProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringDatumProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringDatumProperty(StringDatumProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringDatumProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringDatumProperty(StringDatumProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30447};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::Datums::StringDatumProperty) == 0x28, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils::Datums
