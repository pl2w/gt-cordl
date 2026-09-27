#pragma once
// IWYU pragma private; include "GlobalNamespace/NexusCreatorCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NexusCreatorCode)
namespace GlobalNamespace {
class NexusGroupId;
}
// Forward declare root types
namespace GlobalNamespace {
class NexusCreatorCode;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NexusCreatorCode*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NexusCreatorCode*, "", "NexusCreatorCode");
// [CreateAssetMenu(fileName = "NexusCreatorCode", menuName = "Nexus/NexusCreatorCode")]
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: NexusCreatorCode
class CORDL_TYPE NexusCreatorCode : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_Code)) ::StringW  Code;

 __declspec(property(get=get_GroupId)) ::UnityW<::GlobalNamespace::NexusGroupId>  GroupId;

/// @brief Field code, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_code, put=__cordl_internal_set_code)) ::StringW  code;

/// @brief Field groupId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_groupId, put=__cordl_internal_set_groupId)) ::UnityW<::GlobalNamespace::NexusGroupId>  groupId;

static inline ::GlobalNamespace::NexusCreatorCode* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_code() const;

constexpr ::StringW& __cordl_internal_get_code() ;

constexpr ::UnityW<::GlobalNamespace::NexusGroupId> const& __cordl_internal_get_groupId() const;

constexpr ::UnityW<::GlobalNamespace::NexusGroupId>& __cordl_internal_get_groupId() ;

constexpr void __cordl_internal_set_code(::StringW  value) ;

constexpr void __cordl_internal_set_groupId(::UnityW<::GlobalNamespace::NexusGroupId>  value) ;

/// @brief Method .ctor, addr 0x570dd78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Code, addr 0x570dd68, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Code() ;

/// @brief Method get_GroupId, addr 0x570dd70, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::NexusGroupId> get_GroupId() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NexusCreatorCode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NexusCreatorCode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NexusCreatorCode(NexusCreatorCode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NexusCreatorCode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NexusCreatorCode(NexusCreatorCode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1163};

/// [SerializeField]
/// @brief Field code, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___code;

/// [SerializeField]
/// @brief Field groupId, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NexusGroupId>  ___groupId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NexusCreatorCode, ___code) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NexusCreatorCode, ___groupId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NexusCreatorCode) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
