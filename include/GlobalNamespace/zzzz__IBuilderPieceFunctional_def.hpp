#pragma once
// IWYU pragma private; include "GlobalNamespace/IBuilderPieceFunctional.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IBuilderPieceFunctional)
namespace GlobalNamespace {
class NetPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class IBuilderPieceFunctional;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IBuilderPieceFunctional*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IBuilderPieceFunctional*, "", "IBuilderPieceFunctional");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IBuilderPieceFunctional
class CORDL_TYPE IBuilderPieceFunctional {
public:
// Declarations
/// @brief Method FunctionalPieceFixedUpdate, addr 0x57bed00, size 0x38, virtual true, abstract: false, final false
inline void FunctionalPieceFixedUpdate() ;

/// @brief Method FunctionalPieceUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void FunctionalPieceUpdate() ;

/// @brief Method GetInteractionDistace, addr 0x57bed38, size 0x8, virtual true, abstract: false, final false
inline float_t GetInteractionDistace() ;

/// @brief Method IsStateValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsStateValid(uint8_t  state) ;

/// @brief Method OnStateChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnStateChanged(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp) ;

/// @brief Method OnStateRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnStateRequest(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp) ;

// Ctor Parameters [CppParam { name: "", ty: "IBuilderPieceFunctional", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBuilderPieceFunctional(IBuilderPieceFunctional const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1598};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
