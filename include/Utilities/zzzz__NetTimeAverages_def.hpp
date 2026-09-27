#pragma once
// IWYU pragma private; include "Utilities/NetTimeAverages.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Utilities/zzzz__DoubleAverages_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetTimeAverages)
// Forward declare root types
namespace Utilities {
class NetTimeAverages;
}
// Write type traits
MARK_REF_T(::Utilities::NetTimeAverages*);
DEFINE_IL2CPP_CLASS(::Utilities::NetTimeAverages*, "Utilities", "NetTimeAverages");
// Dependencies Utilities.DoubleAverages
namespace Utilities {
// Is value type: false
// CS Name: Utilities.NetTimeAverages
class CORDL_TYPE NetTimeAverages : public ::Utilities::DoubleAverages {
public:
// Declarations
/// @brief Method DefaultTypeValue, addr 0x5b71030, size 0x8, virtual true, abstract: false, final false
inline double_t DefaultTypeValue() ;

static inline ::Utilities::NetTimeAverages* New_ctor(int32_t  sampleCount) ;

/// @brief Method .ctor, addr 0x5b7102c, size 0x4, virtual false, abstract: false, final false
inline void _ctor(int32_t  sampleCount) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetTimeAverages() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetTimeAverages", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetTimeAverages(NetTimeAverages && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetTimeAverages", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetTimeAverages(NetTimeAverages const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3873};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Utilities::NetTimeAverages) == 0x30, "Size mismatch!");

} // namespace end def Utilities
