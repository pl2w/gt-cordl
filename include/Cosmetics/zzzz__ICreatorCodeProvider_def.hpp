#pragma once
// IWYU pragma private; include "Cosmetics/ICreatorCodeProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ICreatorCodeProvider)
namespace GlobalNamespace {
class NexusGroupId;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Cosmetics {
class ICreatorCodeProvider;
}
// Write type traits
MARK_REF_T(::Cosmetics::ICreatorCodeProvider*);
DEFINE_IL2CPP_CLASS(::Cosmetics::ICreatorCodeProvider*, "Cosmetics", "ICreatorCodeProvider");
// Dependencies 
namespace Cosmetics {
// Is value type: false
// CS Name: Cosmetics.ICreatorCodeProvider
class CORDL_TYPE ICreatorCodeProvider {
public:
// Declarations
 __declspec(property(get=get_GameObject)) ::UnityW<::UnityEngine::GameObject>  GameObject;

 __declspec(property(get=get_TerminalId)) ::StringW  TerminalId;

/// @brief Method GetCreatorCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetCreatorCode(::by_ref<::StringW>  code, ::by_ref<::ArrayW<::GlobalNamespace::NexusGroupId*>>  groups) ;

/// @brief Method get_GameObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::GameObject> get_GameObject() ;

/// @brief Method get_TerminalId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_TerminalId() ;

// Ctor Parameters [CppParam { name: "", ty: "ICreatorCodeProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICreatorCodeProvider(ICreatorCodeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4586};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cosmetics
