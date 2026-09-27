#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Datums/IntDatum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__Datum_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IntDatum)
// Forward declare root types
namespace Unity::XR::CoreUtils::Datums {
class IntDatum;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::Datums::IntDatum*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::Datums::IntDatum*, "Unity.XR.CoreUtils.Datums", "IntDatum");
// [CreateAssetMenu(fileName = "IntDatum", menuName = "XR/Value Datums/Int Datum", order = 0)]
// Dependencies Unity.XR.CoreUtils.Datums.Datum`1<T>
namespace Unity::XR::CoreUtils::Datums {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.Datums.IntDatum
class CORDL_TYPE IntDatum : public ::Unity::XR::CoreUtils::Datums::Datum_1<int32_t> {
public:
// Declarations
static inline ::Unity::XR::CoreUtils::Datums::IntDatum* New_ctor() ;

/// @brief Method SetValueRounded, addr 0xb3fd1e4, size 0x110, virtual false, abstract: false, final false
inline void SetValueRounded(float_t  value) ;

/// @brief Method .ctor, addr 0xb3fd2f4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IntDatum() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IntDatum", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IntDatum(IntDatum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntDatum", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntDatum(IntDatum const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30444};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::Datums::IntDatum) == 0x30, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils::Datums
