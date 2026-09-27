#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkComponentGliderHoldable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkComponentCallbacks_def.hpp"
CORDL_MODULE_EXPORT(NetworkComponentGliderHoldable)
// Forward declare root types
namespace GlobalNamespace {
class NetworkComponentGliderHoldable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NetworkComponentGliderHoldable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkComponentGliderHoldable*, "", "NetworkComponentGliderHoldable");
// [NetworkBehaviourWeaved(0)]
// Dependencies NetworkComponentCallbacks
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkComponentGliderHoldable
class CORDL_TYPE NetworkComponentGliderHoldable : public ::GlobalNamespace::NetworkComponentCallbacks {
public:
// Declarations
/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x56e8988, size 0x4, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x56e898c, size 0x4, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

static inline ::GlobalNamespace::NetworkComponentGliderHoldable* New_ctor() ;

/// @brief Method .ctor, addr 0x56e8980, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkComponentGliderHoldable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkComponentGliderHoldable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkComponentGliderHoldable(NetworkComponentGliderHoldable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkComponentGliderHoldable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkComponentGliderHoldable(NetworkComponentGliderHoldable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1117};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NetworkComponentGliderHoldable) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
