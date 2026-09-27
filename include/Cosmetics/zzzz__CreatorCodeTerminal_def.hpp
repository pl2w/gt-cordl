#pragma once
// IWYU pragma private; include "Cosmetics/CreatorCodeTerminal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NexusGroupId_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CreatorCodeTerminal)
namespace Cosmetics {
class ICreatorCodeProvider;
}
namespace GlobalNamespace {
struct CreatorCodeTerminal__OnTerminalMessage_d__13;
}
namespace GlobalNamespace {
class IBuildValidation;
}
namespace GlobalNamespace {
class NexusGroupId;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Cosmetics {
class CreatorCodeTerminal;
}
// Write type traits
MARK_REF_T(::Cosmetics::CreatorCodeTerminal*);
DEFINE_IL2CPP_CLASS(::Cosmetics::CreatorCodeTerminal*, "Cosmetics", "CreatorCodeTerminal");
// Dependencies NexusGroupId, UnityEngine.MonoBehaviour
namespace Cosmetics {
// Is value type: false
// CS Name: Cosmetics.CreatorCodeTerminal
class CORDL_TYPE CreatorCodeTerminal : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _OnTerminalMessage_d__13 = ::GlobalNamespace::CreatorCodeTerminal__OnTerminalMessage_d__13;

 __declspec(property(get=Cosmetics_ICreatorCodeProvider_get_GameObject)) ::UnityW<::UnityEngine::GameObject>  Cosmetics_ICreatorCodeProvider_GameObject;

 __declspec(property(get=get_NexusGroups)) ::ArrayW<::UnityW<::GlobalNamespace::NexusGroupId>>  NexusGroups;

 __declspec(property(get=get_TerminalId)) ::StringW  TerminalId;

/// @brief Field creatorCodeField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_creatorCodeField, put=__cordl_internal_set_creatorCodeField)) ::UnityW<::TMPro::TMP_Text>  creatorCodeField;

/// @brief Field creatorCodeTitle, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_creatorCodeTitle, put=__cordl_internal_set_creatorCodeTitle)) ::UnityW<::TMPro::TMP_Text>  creatorCodeTitle;

/// @brief Field nexusGroups, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_nexusGroups, put=__cordl_internal_set_nexusGroups)) ::ArrayW<::UnityW<::GlobalNamespace::NexusGroupId>>  nexusGroups;

/// @brief Field termId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_termId, put=__cordl_internal_set_termId)) ::StringW  termId;

/// @brief Convert operator to "::Cosmetics::ICreatorCodeProvider"
constexpr operator  ::Cosmetics::ICreatorCodeProvider*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Method Awake, addr 0x5d1ce90, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Cosmetics.ICreatorCodeProvider.get_GameObject, addr 0x5d1ce88, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::GameObject> Cosmetics_ICreatorCodeProvider_get_GameObject() ;

/// @brief Method CreatorCodeDelete, addr 0x5d1d62c, size 0x5c, virtual false, abstract: false, final false
inline void CreatorCodeDelete() ;

/// @brief Method CreatorCodeInput, addr 0x5d1d5c0, size 0x6c, virtual false, abstract: false, final false
inline void CreatorCodeInput(::StringW  character) ;

/// @brief Method CreatorCodeInvalid, addr 0x5d1d788, size 0x80, virtual false, abstract: false, final false
inline void CreatorCodeInvalid(::StringW  id) ;

/// @brief Method GetCreatorCode, addr 0x5d1d954, size 0x8c, virtual true, abstract: false, final true
inline void GetCreatorCode(::by_ref<::StringW>  code, ::by_ref<::ArrayW<::GlobalNamespace::NexusGroupId*>>  groups) ;

/// @brief Method HookupToCreatorCodes, addr 0x5d1cf30, size 0x248, virtual false, abstract: false, final false
inline void HookupToCreatorCodes() ;

/// @brief Method IBuildValidation.BuildValidationCheck, addr 0x5d1d888, size 0xcc, virtual true, abstract: false, final true
inline bool IBuildValidation_BuildValidationCheck() ;

static inline ::Cosmetics::CreatorCodeTerminal* New_ctor() ;

/// @brief Method OnCreatorCodeChanged, addr 0x5d1d490, size 0x130, virtual false, abstract: false, final false
inline void OnCreatorCodeChanged(::StringW  id) ;

/// @brief Method OnCreatorCodeFailure, addr 0x5d1d808, size 0x80, virtual false, abstract: false, final false
inline void OnCreatorCodeFailure(::StringW  id) ;

/// @brief Method OnCreatorCodeValid, addr 0x5d1d688, size 0x80, virtual false, abstract: false, final false
inline void OnCreatorCodeValid(::StringW  id, ::StringW  s, ::GlobalNamespace::NexusGroupId*  ngid) ;

/// @brief Method OnCreatorCodeValidating, addr 0x5d1d708, size 0x80, virtual false, abstract: false, final false
inline void OnCreatorCodeValidating(::StringW  id) ;

/// @brief Method OnCreatorCodesInitialized, addr 0x5d1d3b0, size 0x8, virtual false, abstract: false, final false
inline void OnCreatorCodesInitialized() ;

/// @brief Method OnDestroy, addr 0x5d1d178, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// [AsyncStateMachine(typeof(Cosmetics.CreatorCodeTerminal::<OnTerminalMessage>d__13))]
/// @brief Method OnTerminalMessage, addr 0x5d1d3b8, size 0xd8, virtual false, abstract: false, final false
inline void OnTerminalMessage(::StringW  termId, ::StringW  msg) ;

/// @brief Method UnhookFromCreatorCodes, addr 0x5d1d17c, size 0x234, virtual false, abstract: false, final false
inline void UnhookFromCreatorCodes() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_creatorCodeField() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_creatorCodeField() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_creatorCodeTitle() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_creatorCodeTitle() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::NexusGroupId>> const& __cordl_internal_get_nexusGroups() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::NexusGroupId>>& __cordl_internal_get_nexusGroups() ;

constexpr ::StringW const& __cordl_internal_get_termId() const;

constexpr ::StringW& __cordl_internal_get_termId() ;

constexpr void __cordl_internal_set_creatorCodeField(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_creatorCodeTitle(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_nexusGroups(::ArrayW<::UnityW<::GlobalNamespace::NexusGroupId>>  value) ;

constexpr void __cordl_internal_set_termId(::StringW  value) ;

/// @brief Method .ctor, addr 0x5d1d9e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NexusGroups, addr 0x5d1ce78, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::GlobalNamespace::NexusGroupId>> get_NexusGroups() ;

/// @brief Method get_TerminalId, addr 0x5d1ce80, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_TerminalId() ;

/// @brief Convert to "::Cosmetics::ICreatorCodeProvider"
constexpr ::Cosmetics::ICreatorCodeProvider* i___Cosmetics__ICreatorCodeProvider() noexcept;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreatorCodeTerminal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreatorCodeTerminal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreatorCodeTerminal(CreatorCodeTerminal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreatorCodeTerminal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreatorCodeTerminal(CreatorCodeTerminal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4583};

/// @brief Field termId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___termId;

/// [SerializeField]
/// @brief Field creatorCodeField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___creatorCodeField;

/// [SerializeField]
/// @brief Field creatorCodeTitle, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___creatorCodeTitle;

/// [SerializeField]
/// @brief Field nexusGroups, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::NexusGroupId>>  ___nexusGroups;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cosmetics::CreatorCodeTerminal, ___termId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CreatorCodeTerminal, ___creatorCodeField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CreatorCodeTerminal, ___creatorCodeTitle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CreatorCodeTerminal, ___nexusGroups) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Cosmetics::CreatorCodeTerminal) == 0x40, "Size mismatch!");

} // namespace end def Cosmetics
