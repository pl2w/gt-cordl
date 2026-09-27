#pragma once
// IWYU pragma private; include "GlobalNamespace/ITimeOfDaySystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ITimeOfDaySystem)
// Forward declare root types
namespace GlobalNamespace {
class ITimeOfDaySystem;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ITimeOfDaySystem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ITimeOfDaySystem*, "", "ITimeOfDaySystem");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: ITimeOfDaySystem
class CORDL_TYPE ITimeOfDaySystem {
public:
// Declarations
 __declspec(property(get=get_currentTimeInSeconds)) double_t  currentTimeInSeconds;

 __declspec(property(get=get_totalTimeInSeconds)) double_t  totalTimeInSeconds;

/// @brief Method get_currentTimeInSeconds, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline double_t get_currentTimeInSeconds() ;

/// @brief Method get_totalTimeInSeconds, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline double_t get_totalTimeInSeconds() ;

// Ctor Parameters [CppParam { name: "", ty: "ITimeOfDaySystem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITimeOfDaySystem(ITimeOfDaySystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2588};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
