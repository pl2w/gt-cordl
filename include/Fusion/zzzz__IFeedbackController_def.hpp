#pragma once
// IWYU pragma private; include "Fusion/IFeedbackController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IFeedbackController)
// Forward declare root types
namespace Fusion {
class IFeedbackController;
}
// Write type traits
MARK_REF_T(::Fusion::IFeedbackController*);
DEFINE_IL2CPP_CLASS(::Fusion::IFeedbackController*, "Fusion", "IFeedbackController");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.IFeedbackController
class CORDL_TYPE IFeedbackController {
public:
// Declarations
/// @brief Method Output, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline double_t Output() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Reset() ;

/// @brief Method ResetOutput, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ResetOutput() ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Update(double_t  sample, double_t  target, double_t  dt) ;

// Ctor Parameters [CppParam { name: "", ty: "IFeedbackController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFeedbackController(IFeedbackController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19365};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
