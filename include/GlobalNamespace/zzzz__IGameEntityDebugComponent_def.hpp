#pragma once
// IWYU pragma private; include "GlobalNamespace/IGameEntityDebugComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IGameEntityDebugComponent)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IGameEntityDebugComponent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IGameEntityDebugComponent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IGameEntityDebugComponent*, "", "IGameEntityDebugComponent");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IGameEntityDebugComponent
class CORDL_TYPE IGameEntityDebugComponent {
public:
// Declarations
/// @brief Method GetDebugTextLines, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetDebugTextLines(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  strings) ;

// Ctor Parameters [CppParam { name: "", ty: "IGameEntityDebugComponent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGameEntityDebugComponent(IGameEntityDebugComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1970};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
