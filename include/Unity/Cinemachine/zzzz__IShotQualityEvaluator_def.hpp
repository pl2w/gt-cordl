#pragma once
// IWYU pragma private; include "Unity/Cinemachine/IShotQualityEvaluator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IShotQualityEvaluator)
// Forward declare root types
namespace Unity::Cinemachine {
class IShotQualityEvaluator;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::IShotQualityEvaluator*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::IShotQualityEvaluator*, "Unity.Cinemachine", "IShotQualityEvaluator");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.IShotQualityEvaluator
class CORDL_TYPE IShotQualityEvaluator {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IShotQualityEvaluator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IShotQualityEvaluator(IShotQualityEvaluator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22341};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
