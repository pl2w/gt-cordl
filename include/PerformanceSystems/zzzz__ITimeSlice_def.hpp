#pragma once
// IWYU pragma private; include "PerformanceSystems/ITimeSlice.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ITimeSlice)
// Forward declare root types
namespace PerformanceSystems {
class ITimeSlice;
}
// Write type traits
MARK_REF_T(::PerformanceSystems::ITimeSlice*);
DEFINE_IL2CPP_CLASS(::PerformanceSystems::ITimeSlice*, "PerformanceSystems", "ITimeSlice");
// Dependencies 
namespace PerformanceSystems {
// Is value type: false
// CS Name: PerformanceSystems.ITimeSlice
class CORDL_TYPE ITimeSlice {
public:
// Declarations
/// @brief Method SliceUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SliceUpdate() ;

/// @brief Method SliceUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SliceUpdate(float_t  deltaTime) ;

/// @brief Method SliceUpdateAlways, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SliceUpdateAlways(float_t  deltaTime) ;

// Ctor Parameters [CppParam { name: "", ty: "ITimeSlice", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITimeSlice(ITimeSlice const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3881};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PerformanceSystems
