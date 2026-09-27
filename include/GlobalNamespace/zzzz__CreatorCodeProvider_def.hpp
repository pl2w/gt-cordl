#pragma once
// IWYU pragma private; include "GlobalNamespace/CreatorCodeProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CreatorCodeProvider)
namespace Cosmetics {
class ICreatorCodeProvider;
}
namespace GlobalNamespace {
class IBuildValidation;
}
namespace GlobalNamespace {
class NexusCreatorCode;
}
namespace GlobalNamespace {
class NexusGroupId;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class CreatorCodeProvider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CreatorCodeProvider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CreatorCodeProvider*, "", "CreatorCodeProvider");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreatorCodeProvider
class CORDL_TYPE CreatorCodeProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=Cosmetics_ICreatorCodeProvider_get_GameObject)) ::UnityW<::UnityEngine::GameObject>  Cosmetics_ICreatorCodeProvider_GameObject;

 __declspec(property(get=Cosmetics_ICreatorCodeProvider_get_TerminalId)) ::StringW  Cosmetics_ICreatorCodeProvider_TerminalId;

/// @brief Field nexusCreatorCode, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_nexusCreatorCode, put=__cordl_internal_set_nexusCreatorCode)) ::UnityW<::GlobalNamespace::NexusCreatorCode>  nexusCreatorCode;

/// @brief Convert operator to "::Cosmetics::ICreatorCodeProvider"
constexpr operator  ::Cosmetics::ICreatorCodeProvider*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Method Cosmetics.ICreatorCodeProvider.GetCreatorCode, addr 0x55ef418, size 0xd8, virtual true, abstract: false, final true
inline void Cosmetics_ICreatorCodeProvider_GetCreatorCode(::by_ref<::StringW>  code, ::by_ref<::ArrayW<::GlobalNamespace::NexusGroupId*>>  groups) ;

/// @brief Method Cosmetics.ICreatorCodeProvider.get_GameObject, addr 0x55ef4f0, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::GameObject> Cosmetics_ICreatorCodeProvider_get_GameObject() ;

/// @brief Method Cosmetics.ICreatorCodeProvider.get_TerminalId, addr 0x55ef2ec, size 0x2c, virtual true, abstract: false, final true
inline ::StringW Cosmetics_ICreatorCodeProvider_get_TerminalId() ;

/// @brief Method IBuildValidation.BuildValidationCheck, addr 0x55ef318, size 0x100, virtual true, abstract: false, final true
inline bool IBuildValidation_BuildValidationCheck() ;

static inline ::GlobalNamespace::CreatorCodeProvider* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::NexusCreatorCode> const& __cordl_internal_get_nexusCreatorCode() const;

constexpr ::UnityW<::GlobalNamespace::NexusCreatorCode>& __cordl_internal_get_nexusCreatorCode() ;

constexpr void __cordl_internal_set_nexusCreatorCode(::UnityW<::GlobalNamespace::NexusCreatorCode>  value) ;

/// @brief Method .ctor, addr 0x55ef4f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Cosmetics::ICreatorCodeProvider"
constexpr ::Cosmetics::ICreatorCodeProvider* i___Cosmetics__ICreatorCodeProvider() noexcept;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreatorCodeProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreatorCodeProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreatorCodeProvider(CreatorCodeProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreatorCodeProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreatorCodeProvider(CreatorCodeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{66};

/// [SerializeField]
/// @brief Field nexusCreatorCode, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NexusCreatorCode>  ___nexusCreatorCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreatorCodeProvider, ___nexusCreatorCode) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CreatorCodeProvider) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
