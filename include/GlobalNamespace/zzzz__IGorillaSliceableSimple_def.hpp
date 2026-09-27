#pragma once
// IWYU pragma private; include "GlobalNamespace/IGorillaSliceableSimple.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGorillaSliceableSimple)
// Forward declare root types
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IGorillaSliceableSimple*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IGorillaSliceableSimple*, "", "IGorillaSliceableSimple");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IGorillaSliceableSimple
class CORDL_TYPE IGorillaSliceableSimple {
public:
// Declarations
/// @brief Method SliceUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SliceUpdate() ;

// Ctor Parameters [CppParam { name: "", ty: "IGorillaSliceableSimple", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGorillaSliceableSimple(IGorillaSliceableSimple const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2318};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
