#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckStreamingBaseState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LckStreamingBaseState)
namespace Liv::Lck::Streaming {
class LckStreamingController;
}
// Forward declare root types
namespace Liv::Lck::Streaming {
class LckStreamingBaseState;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Streaming::LckStreamingBaseState*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Streaming::LckStreamingBaseState*, "Liv.Lck.Streaming", "LckStreamingBaseState");
// Dependencies System.Object
namespace Liv::Lck::Streaming {
// Is value type: false
// CS Name: Liv.Lck.Streaming.LckStreamingBaseState
class CORDL_TYPE LckStreamingBaseState : public ::System::Object {
public:
// Declarations
/// @brief Method EnterState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void EnterState(::Liv::Lck::Streaming::LckStreamingController*  controller) ;

static inline ::Liv::Lck::Streaming::LckStreamingBaseState* New_ctor() ;

/// @brief Method .ctor, addr 0x9d36d60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckStreamingBaseState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckStreamingBaseState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckStreamingBaseState(LckStreamingBaseState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckStreamingBaseState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckStreamingBaseState(LckStreamingBaseState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24831};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Streaming::LckStreamingBaseState) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Streaming
