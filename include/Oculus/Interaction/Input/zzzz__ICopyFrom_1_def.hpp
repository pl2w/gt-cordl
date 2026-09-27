#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ICopyFrom_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICopyFrom_1)
// Forward declare root types
namespace Oculus::Interaction::Input {
template<typename TSelfType>
class ICopyFrom_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::Input::ICopyFrom_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::Input::ICopyFrom_1, "Oculus.Interaction.Input", "ICopyFrom`1");
// Dependencies 
namespace Oculus::Interaction::Input {
// cpp template
template<typename TSelfType>
// Is value type: false
// CS Name: Oculus.Interaction.Input.ICopyFrom`1<TSelfType>
class CORDL_TYPE ICopyFrom_1 {
public:
// Declarations
/// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CopyFrom(TSelfType  source) ;

// Ctor Parameters [CppParam { name: "", ty: "ICopyFrom_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICopyFrom_1(ICopyFrom_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16445};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Input
