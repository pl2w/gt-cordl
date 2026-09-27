#pragma once
// IWYU pragma private; include "GlobalNamespace/IDebugObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDebugObject)
// Forward declare root types
namespace GlobalNamespace {
class IDebugObject;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IDebugObject*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IDebugObject*, "", "IDebugObject");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IDebugObject
class CORDL_TYPE IDebugObject {
public:
// Declarations
/// @brief Method OnDestroyDebugObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnDestroyDebugObject() ;

// Ctor Parameters [CppParam { name: "", ty: "IDebugObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDebugObject(IDebugObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{792};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
