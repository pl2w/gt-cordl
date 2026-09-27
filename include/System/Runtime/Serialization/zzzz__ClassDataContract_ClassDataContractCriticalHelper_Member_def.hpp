#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ClassDataContract_ClassDataContractCriticalHelper_Member.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClassDataContract_ClassDataContractCriticalHelper_Member)
namespace System::Runtime::Serialization {
class DataMember;
}
// Forward declare root types
namespace GlobalNamespace {
struct ClassDataContractCriticalHelper_ClassDataContract_Member;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ClassDataContractCriticalHelper_ClassDataContract_Member);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ClassDataContractCriticalHelper_ClassDataContract_Member, "System.Runtime.Serialization", "ClassDataContract/ClassDataContractCriticalHelper/Member");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Runtime.Serialization.ClassDataContract/ClassDataContractCriticalHelper/Member
struct CORDL_TYPE ClassDataContractCriticalHelper_ClassDataContract_Member {
public:
// Declarations
/// @brief Method .ctor, addr 0xaa3fd4c, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::DataMember*  member, ::StringW  ns, int32_t  baseTypeIndex) ;

// Ctor Parameters []
// @brief default ctor
constexpr ClassDataContractCriticalHelper_ClassDataContract_Member() ;

// Ctor Parameters [CppParam { name: "member", ty: "::System::Runtime::Serialization::DataMember*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ns", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "baseTypeIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ClassDataContractCriticalHelper_ClassDataContract_Member(::System::Runtime::Serialization::DataMember*  member, ::StringW  ns, int32_t  baseTypeIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24476};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field member, offset: 0x0, size: 0x8, def value: None
 ::System::Runtime::Serialization::DataMember*  member;

/// @brief Field ns, offset: 0x8, size: 0x8, def value: None
 ::StringW  ns;

/// @brief Field baseTypeIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  baseTypeIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ClassDataContractCriticalHelper_ClassDataContract_Member, member) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClassDataContractCriticalHelper_ClassDataContract_Member, ns) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ClassDataContractCriticalHelper_ClassDataContract_Member, baseTypeIndex) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ClassDataContractCriticalHelper_ClassDataContract_Member) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
