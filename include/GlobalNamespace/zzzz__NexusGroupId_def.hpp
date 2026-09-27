#pragma once
// IWYU pragma private; include "GlobalNamespace/NexusGroupId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NexusGroupId)
// Forward declare root types
namespace GlobalNamespace {
class NexusGroupId;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NexusGroupId*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NexusGroupId*, "", "NexusGroupId");
// [CreateAssetMenu(fileName = "NexusGroupId", menuName = "Nexus/NexusGroupId")]
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: NexusGroupId
class CORDL_TYPE NexusGroupId : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_Code)) ::StringW  Code;

/// @brief Field code, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_code, put=__cordl_internal_set_code)) ::StringW  code;

/// @brief Field sandboxCode, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sandboxCode, put=__cordl_internal_set_sandboxCode)) ::StringW  sandboxCode;

static inline ::GlobalNamespace::NexusGroupId* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_code() const;

constexpr ::StringW& __cordl_internal_get_code() ;

constexpr ::StringW const& __cordl_internal_get_sandboxCode() const;

constexpr ::StringW& __cordl_internal_get_sandboxCode() ;

constexpr void __cordl_internal_set_code(::StringW  value) ;

constexpr void __cordl_internal_set_sandboxCode(::StringW  value) ;

/// @brief Method .ctor, addr 0x570dd88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Code, addr 0x570dd80, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Code() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NexusGroupId() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NexusGroupId", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NexusGroupId(NexusGroupId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NexusGroupId", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NexusGroupId(NexusGroupId const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1164};

/// [SerializeField]
/// @brief Field code, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___code;

/// [SerializeField]
/// @brief Field sandboxCode, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___sandboxCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NexusGroupId, ___code) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NexusGroupId, ___sandboxCode) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NexusGroupId) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
