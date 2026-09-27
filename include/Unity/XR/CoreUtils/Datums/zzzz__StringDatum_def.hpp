#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Datums/StringDatum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__Datum_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StringDatum)
// Forward declare root types
namespace Unity::XR::CoreUtils::Datums {
class StringDatum;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::Datums::StringDatum*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::Datums::StringDatum*, "Unity.XR.CoreUtils.Datums", "StringDatum");
// [CreateAssetMenu(fileName = "StringDatum", menuName = "XR/Value Datums/String Datum", order = 0)]
// Dependencies Unity.XR.CoreUtils.Datums.Datum`1<T>
namespace Unity::XR::CoreUtils::Datums {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.Datums.StringDatum
class CORDL_TYPE StringDatum : public ::Unity::XR::CoreUtils::Datums::Datum_1<::StringW> {
public:
// Declarations
static inline ::Unity::XR::CoreUtils::Datums::StringDatum* New_ctor() ;

/// @brief Method .ctor, addr 0xb3fd3ec, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringDatum() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringDatum", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringDatum(StringDatum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringDatum", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringDatum(StringDatum const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30446};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::Datums::StringDatum) == 0x38, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils::Datums
