#pragma once
// IWYU pragma private; include "Oculus/Interaction/IUpdateDriver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUpdateDriver)
// Forward declare root types
namespace Oculus::Interaction {
class IUpdateDriver;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::IUpdateDriver*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IUpdateDriver*, "Oculus.Interaction", "IUpdateDriver");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IUpdateDriver
class CORDL_TYPE IUpdateDriver {
public:
// Declarations
 __declspec(property(get=get_IsRootDriver, put=set_IsRootDriver)) bool  IsRootDriver;

/// @brief Method Drive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Drive() ;

/// @brief Method get_IsRootDriver, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsRootDriver() ;

/// @brief Method set_IsRootDriver, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_IsRootDriver(bool  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IUpdateDriver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUpdateDriver(IUpdateDriver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15770};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
