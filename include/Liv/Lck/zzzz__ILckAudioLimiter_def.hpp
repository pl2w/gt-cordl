#pragma once
// IWYU pragma private; include "Liv/Lck/ILckAudioLimiter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ILckAudioLimiter)
// Forward declare root types
namespace Liv::Lck {
class ILckAudioLimiter;
}
// Write type traits
MARK_REF_T(::Liv::Lck::ILckAudioLimiter*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ILckAudioLimiter*, "Liv.Lck", "ILckAudioLimiter");
// Dependencies 
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.ILckAudioLimiter
class CORDL_TYPE ILckAudioLimiter {
public:
// Declarations
/// @brief Method ApplyLimiter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t ApplyLimiter(float_t  audioIn, int32_t  sampleRate) ;

// Ctor Parameters [CppParam { name: "", ty: "ILckAudioLimiter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckAudioLimiter(ILckAudioLimiter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24676};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck
